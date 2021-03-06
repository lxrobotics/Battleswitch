/** 
 * @author Alexander Entinger, MSc / LXRobotics
 * @brief allows for control of the mosfet switches of the battleswitch
 * @file switch_control.h
 * @license
 */

#ifndef SWITCH_CONTROL_H_
#define SWITCH_CONTROL_H_

/* TYPEDEFS */

typedef enum {OUT_1 = 0, OUT_2 = 1} E_SWITCH_SELECT;
typedef enum {SWITCH_OFF = 0, SWITCH_ON = 1} E_SWITCH_MODE;

/* PROTOTYPES */

/** 
 * @brief initializes the switch control
 */
void switch_control_init();

/** 
 * @brief sets the mosfet switches to the desired state
 */
void switch_control_set_switch(E_SWITCH_SELECT const sw, E_SWITCH_MODE const mode);

#endif /* SWITCH_CONTROL_H_ */
