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

#include "RGBLedDriver.h"

/* INIT ARRAY OF STRUCT */
 
/* La scelta è quella di scomporre le due onde quadre
 * in due canali, in modo tale da rendere più gestibili
 * i periodi delle onde quadre diversi tra loro. 
 * La struttura si basa sulla definizione di 7 diversi
 * stati che si differenziano per le maschere utilizzate
 * (copiate dal datasheet), nonché per i colori che compaiono
 * Per definite le 7 casistiche definisco un array della
 * struttura
*/
#include "PWM_G.h"
#include "PWM_R.h"

/*
#define PWM_R__B_PWM__LESS_THAN 1
#define PWM_R__B_PWM__LESS_THAN_OR_EQUAL 2
#define PWM_R__B_PWM__GREATER_THAN 3
#define PWM_R__B_PWM__GREATER_THAN_OR_EQUAL_TO 4
#define PWM_R__B_PWM__EQUAL 0
#define PWM_R__B_PWM__FIRMWARE 5

#define PWM_G__B_PWM__LESS_THAN 1
#define PWM_G__B_PWM__LESS_THAN_OR_EQUAL 2
#define PWM_G__B_PWM__GREATER_THAN 3
#define PWM_G__B_PWM__GREATER_THAN_OR_EQUAL_TO 4
#define PWM_G__B_PWM__EQUAL 0
#define PWM_G__B_PWM__FIRMWARE 5 
*/


ChannelsSettings setting[] = {
    {0, 0, 1999, 1999, 1, 1},
    {0, 999, 1999, 1999, 1, 1},
    {999, 0, 1999, 1999, 3, 1},
    {499, 499, 999, 999, 2, 4},
    {249, 249, 499, 499, 3, 1},
    {499, 999, 1999, 1999, 2, 2},
    {999, 499, 1999, 999, 2, 2}
};



/* [] END OF FILE */
