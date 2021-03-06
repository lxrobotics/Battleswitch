/**
* @author Alexander Entinger, MSc / LXRobotics
* @brief allows for control of the mosfet switches of the battleswitch
* @file switch_control.c
* @license
*/

/* INCLUDES */

#include "switch_control.h"

#include "hal.h"

/* FUNCTIONS */

/**
* @brief initializes the switch control
*/
void switch_control_init()
{
	OUT_1_DDR |= OUT_1_bm;
	OUT_2_DDR |= OUT_2_bm;

	switch_control_set_switch(OUT_1, SWITCH_OFF);
	switch_control_set_switch(OUT_2, SWITCH_OFF);
}

/**
* @brief sets the mosfet switches to the desired state
*/
void switch_control_set_switch(E_SWITCH_SELECT const sw, E_SWITCH_MODE const mode)
{
	switch(mode)
	{
		case SWITCH_OFF:
		{
			switch(sw)
			{
				case OUT_1: OUT_1_PORT &= ~OUT_1_bm; break;
				case OUT_2: OUT_2_PORT &= ~OUT_2_bm; break;
				default: break;
			}
		}
		break;
		case SWITCH_ON:
		{
			switch(sw)
			{
				case OUT_1: OUT_1_PORT |= OUT_1_bm; break;
				case OUT_2: OUT_2_PORT |= OUT_2_bm; break;
				default: break;
			}
		}
		break;
		
	}
}
