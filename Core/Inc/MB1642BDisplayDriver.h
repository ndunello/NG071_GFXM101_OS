#ifndef INC_MB1642BDISPLAYDRIVER_H_
#define INC_MB1642BDISPLAYDRIVER_H_

#ifdef __cplusplus
extern "C" {
#endif

int touchgfxDisplayDriverTransmitActive();
int touchgfxDisplayDriverShouldTransferBlock(uint16_t bottom);
void touchgfxDisplayDriverTransmitBlock(const uint8_t* pixels, uint16_t x, uint16_t y, uint16_t w, uint16_t h);

void MB1642BDisplayDriver_DisplayReset(void);


void DisplayDriver_TransferCompleteCallback(void);
void MB1642BDisplayDriver_DisplayInit(void);
void MB1642BDisplayDriver_DisplayOn(void);

#ifdef __cplusplus
}
#endif

#endif /* INC_MB1642BDISPLAYDRIVER_H_ */
