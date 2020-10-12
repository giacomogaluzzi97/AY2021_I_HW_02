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

void RGBLed_WriteChannelsSettings(ChannelsSettings c)
{
    PWM_R_WriteCompare(c.red);
    PWM_G_WriteCompare(c.green);
    PWM_R_WritePeriod(c.period_red);
    PWM_G_WritePeriod(c.period_green);    
    PWM_R_SetCompareMode(c.wave_red);
    PWM_G_SetCompareMode(c.wave_green);
}

/* [] END OF FILE */
