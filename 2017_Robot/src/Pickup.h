/*
 * Pickup.h
 *
 *  Created on: Jan 24, 2017
 *      Author: Joey
 */

#ifndef SRC_PICKUP_H_
#define SRC_PICKUP_H_

#include <WPILib.h>
#include <CANTalon.h>
#include "RobotMap.h"
#include "OI.h"

class Pickup {
	frc::JoystickButton* joystickButton_pickup;
	frc::JoystickButton* joystickButton_reversePickup;
	// Intake Motor picks up balls
	frc::Talon* m_intakeMotor;
	// Hopper Motor pushs into Hopper
	frc::Talon* m_hopperMotor;

	OI *m_oi;
	PowerDistributionPanel m_pdp;
	float m_lastSetpoint = 0;
public:
	Pickup(
		frc::JoystickButton* joystickButton_pickup
		,frc::JoystickButton* joystickButton_reversePickup
		,OI *oi
		,frc::Talon* m_intakeMotor
		,frc::Talon* m_hopperMotor
		);
	void TeleopInit();
	void TeleopPeriodic();
	virtual ~Pickup();

	void Intake();
	void stop();
	void Reverse();
};

#endif /* SRC_PICKUP_H_ */

