#include "InterruptGuard.h"

#include "Arduino.h"

InterruptGuard::InterruptGuard()
{
	noInterrupts();
}

InterruptGuard::~InterruptGuard()
{
	interrupts();
}
