/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#ifndef __RGB_LED_DRIVER_H__
    #define __RGB_LED_DRIVER_H__
    
    #include "cytypes.h"
    
    uint8_t state; //variabile dell stato
    
    typedef struct {
        uint16_t red;
        uint16_t green;
        uint16_t period_red;
        uint16_t period_green;
        uint8 wave_red;
        uint8 wave_green;
    } ChannelsSettings; //struct che definisce le caratteristiche delle onde r e g
    
    void RGBLed_Start();
    void RGBLed_Stop();
    
    void RGBLed_WriteChannelsSettings(ChannelsSettings c);
    
#endif    
    

/* [] END OF FILE */
