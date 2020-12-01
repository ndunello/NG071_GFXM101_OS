#include <MB1642BButtonController.hpp>
#include <main.h>
#include <touchgfx/hal/HAL.hpp>

void MB1642AButtonController::init()
{
    previousState = 0;
}

bool MB1642AButtonController::sample(uint8_t& key)
{
    uint8_t state = MB1642KeyState();
    if (state == previousState)
    {
        return false;
    }
    previousState = state;
    if (state != 0)
    {
        key = state;
        return true;
    }
    return false;
}

uint8_t MB1642AButtonController::MB1642KeyState(void)
{
    uint8_t keyPressed = 0;

    if (touchgfx::HAL::getInstance()->getDisplayOrientation() == touchgfx::ORIENTATION_PORTRAIT)
    {
        if (HAL_GPIO_ReadPin(BUTTON_CENTER_GPIO_Port, BUTTON_CENTER_Pin) == GPIO_PIN_RESET)
        {
            keyPressed = '5'; // Corresponds to keyboard keypad enter
        }
        else if (HAL_GPIO_ReadPin(BUTTON_CENTER_GPIO_Port, BUTTON_LEFT_Pin) == GPIO_PIN_RESET)
        {
            keyPressed = '4'; // Corresponds to keyboard keypad left
        }
        else if (HAL_GPIO_ReadPin(BUTTON_CENTER_GPIO_Port, BUTTON_RIGHT_Pin) == GPIO_PIN_RESET)
        {
            keyPressed = '6'; // Corresponds to keyboard keypad right
        }
        else if (HAL_GPIO_ReadPin(BUTTON_CENTER_GPIO_Port, BUTTON_UP_Pin) == GPIO_PIN_RESET)
        {
            keyPressed = '8'; // Corresponds to keyboard keypad up
        }
        else if (HAL_GPIO_ReadPin(BUTTON_CENTER_GPIO_Port, BUTTON_DOWN_Pin) == GPIO_PIN_RESET)
        {
            keyPressed = '2'; // Corresponds to keyboard keypad down
        }
        //Blue user button on Nucleo boad
        else if (HAL_GPIO_ReadPin(BUTTON_USER_GPIO_Port, BUTTON_USER_Pin) == GPIO_PIN_RESET)
        {
            keyPressed = '0';
        }
    }
    else
    {
        if (HAL_GPIO_ReadPin(BUTTON_CENTER_GPIO_Port, BUTTON_CENTER_Pin) == GPIO_PIN_RESET)
        {
            keyPressed = '5'; // Corresponds to keyboard keypad enter
        }
        else if (HAL_GPIO_ReadPin(BUTTON_CENTER_GPIO_Port, BUTTON_LEFT_Pin) == GPIO_PIN_RESET)
        {
            keyPressed = '8'; // Corresponds to keyboard keypad up
        }
        else if (HAL_GPIO_ReadPin(BUTTON_CENTER_GPIO_Port, BUTTON_RIGHT_Pin) == GPIO_PIN_RESET)
        {
            keyPressed = '2'; // Corresponds to keyboard keypad down
        }
        else if (HAL_GPIO_ReadPin(BUTTON_CENTER_GPIO_Port, BUTTON_UP_Pin) == GPIO_PIN_RESET)
        {
            keyPressed = '6'; // Corresponds to keyboard keypad right
        }
        else if (HAL_GPIO_ReadPin(BUTTON_CENTER_GPIO_Port, BUTTON_DOWN_Pin) == GPIO_PIN_RESET)
        {
            keyPressed = '4'; // Corresponds to keyboard keypad left
        }
        //Blue user button on Nucleo boad
        else if (HAL_GPIO_ReadPin(BUTTON_USER_GPIO_Port, BUTTON_USER_Pin) == GPIO_PIN_RESET)
        {
            keyPressed = '0';
        }
    }

    return keyPressed;
}
