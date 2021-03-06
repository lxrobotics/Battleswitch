/**
* @author Alexander Entinger, MSc / LXRobotics
* @brief reads the input from the remote control receiver
* @file rc_input.h
* @license
*/

#ifndef RC_INPUT_H_
#define RC_INPUT_H_

/* INCLUDES */

#include <stdint.h>
#include <stdbool.h>

/* PROTOTYPES */

/** 
 * @brief initialize the rc input functionality
 */
void rc_input_init();

/** 
 * @brief returns the last good measured pulse widh in us
 */
uint16_t rc_input_get_pulse_width_us();

/** 
 * @brief returns true if the channel is good, false otherwise
 */
bool rc_input_is_channel_good();

#endif /* RC_INPUT_H_ */
