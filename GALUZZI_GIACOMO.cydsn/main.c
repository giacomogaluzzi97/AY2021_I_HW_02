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
#include "ISR_PushButton.h"
#include "RGBLedSettings.h"

/* hey this is the feature test :) */

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    state=0;
    
    RGBLed_Start();
    isr_ChangeStatus_StartEx(ISR_PUSH_BUTTON);
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    
    for(;;)
    {
        /* Place your application code here. */
        
        RGBLed_WriteChannelsSettings(setting[state]);
        CyDelay(100);
        
    }
}

/* [] END OF FILE */
