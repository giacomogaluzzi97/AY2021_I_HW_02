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

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    state=0; //stato iniziale
    RGBLed_Start();
    isr_ChangeStatus_StartEx(ISR_PUSH_BUTTON);
    
    
    for(;;)
    {
        /* Place your application code here. */
        
        RGBLed_WriteChannelsSettings(setting[state]); //seleziono il caso 
        CyDelay(100); //un piccolo delay
        
    }
}

/* [] END OF FILE */
