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
#include "project.h"
#include "RGBLedDriver.h"

void RGBLed_Start()
{
    PWM_R_Start();
    PWM_G_Start();
}
void RGBLed_Stop()
{
    PWM_R_Stop();
    PWM_G_Stop();
}

static void RGBLed_WriteRed(uint16_t red);
static void RGBLed_WriteGreen(uint16_t green);
static void RGBLed_WritePeriodRed(uint16_t period_red);
static void RGBLed_WritePeriodGreen(uint16_t period_green);    
static void RGBLed_SetCompareModeRed(uint8 wave_red);
static void RGBLed_SetCompareModeGreen(uint8 wave_green);   

void RGBLed_WriteChannelsSettings(ChannelsSettings c)
{
    RGBLed_WriteRed(c.red);
    RGBLed_WriteGreen(c.green);
    RGBLed_WritePeriodRed(c.period_red);
    RGBLed_WritePeriodGreen(c.period_green);    
    RGBLed_SetCompareModeRed(c.wave_red);
    RGBLed_SetCompareModeGreen(c.wave_green);
}

void RGBLed_WriteRed(uint16_t red)
{
    PWM_R_WriteCompare(red);
}
void RGBLed_WriteGreen(uint16_t green)
{
    PWM_G_WriteCompare(green);
}
void RGBLed_WritePeriodRed(uint16_t period_red)
{
    PWM_R_WritePeriod(period_red);
}
void RGBLed_WritePeriodGreen(uint16_t period_green)
{
    PWM_G_WritePeriod(period_green);
}
void RGBLed_SetCompareModeRed(uint8 wave_red)
{
    PWM_R_SetCompareMode(wave_red);
}
void RGBLed_SetCompareModeGreen(uint8 wave_green)
{
    PWM_G_SetCompareMode(wave_green);
}


/* [] END OF FILE */
