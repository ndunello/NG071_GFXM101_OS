# NG071_GFXM101_OS
**Nucleo-G071RB + X-NUCLEO-GFX01M1 TouchGFX Designer Application Template (AT) with FreeRTOS CMSIS-V2 support.**

## Note:
Currently after every STM32CubeMX code generation, the file *TouchGFX\target\generated\OSWrappers.cpp* must be [patched][df1] with:
```c
/*
* Signal that the rendering of the frame has completed. Used by
* some systems to avoid using any previous vsync.
*/
void OSWrappers::signalRenderingDone()
{
    osMessageQueueReset(vsync_queue);
}
```
and in file *Core\Src\main.c* we must add *__weak* to *void TouchGFX_Task(void *argument)**
```c
/* USER CODE END Header_TouchGFX_Task */
__weak void TouchGFX_Task(void *argument)
{
  /* USER CODE BEGIN 5 */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END 5 */
}
```
### Tools Revisions:
 - TouchGFX 4.15.0
 - STM32CubeIDE 6.1.0
 - STM32Cube FW G0 1.4.0


### Todos

 - Add MB1642B Button Controller
 - Add MB1642B Falsh Data Reader

**If I give you one euro and you give me one euro, we have 1 euro each, but if I give you an idea and you give me an idea, we have two each!**

[//]: # (These are reference links used in the body of this note and get stripped out when the markdown processor does its job. There is no need to format nicely because it shouldn't be seen. Thanks SO - http://stackoverflow.com/questions/4823468/store-comments-in-markdown-syntax)

   [df1]: https://community.st.com/s/question/0D53W00000Kq78fSAB/running-touchgfx-on-stm32f2-series-mcu?t=1606722984702
