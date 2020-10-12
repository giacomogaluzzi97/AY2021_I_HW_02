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

#include "ISR_PushButton.h"

CY_ISR_PROTO(ISR_PUSH_BUTTON)
{
    state=state+1;
    if (state >= 7)
    {
        state=state-7; //torno allo stato iniziale
    }    
}

/* [] END OF FILE */
