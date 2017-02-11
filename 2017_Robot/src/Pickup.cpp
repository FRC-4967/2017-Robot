/*
 * Pickup.cpp
 *
 *  Created on: Jan 24, 2017
 *      Author: Joey
 */

#include <Pickup.h>

Pickup::Pickup(
	frc::Joystick &m_leftStick
	,frc::Talon &m_intakeMotor
	,frc::Talon &m_hopperMotor
	)
	:
	m_leftStick(m_leftStick)
	, m_intakeMotor(m_intakeMotor)
	, m_hopperMotor(m_hopperMotor)
{
	// TODO Auto-generated constructor stub
}

void Pickup::TeleopPeriodic() {
	if(m_leftStick.GetRawButton(PICKUP)) { // todo:mjj maybe should be passing in the button object instead of left stick?
		Intake(true);
	} else stop();
}

Pickup::~Pickup() {
	// TODO Auto-generated destructor stub
}

// TODO Implement Pickup class methods

void Pickup::Intake(bool Highspeed) {

	m_intakeMotor.Set(-1);
	m_hopperMotor.Set(1);
}

void Pickup::stop() {
	m_intakeMotor.Set(0);
	m_hopperMotor.Set(0);
}