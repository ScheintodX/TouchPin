#ifndef TouchPin_h
#define TouchPin_h

#include "Arduino.h"

class TouchPin
{
	public:

		/**
		 * Initializes pins
		 */
		TouchPin( int pin );

		/**
		 * Call to calibrate when you expect the button to be in a "stable" state
		 * and noone holding it.
		 */
		int calibrate();

		/**
		 * Reads capacitive value of button. Normally not needed
		 */
		int read();

		/**
		 * Returns true as long as the button is touched. This has no hysteresis.
		 * Normally you want to use 'isHold' instead.
		 */
		bool isTouch();

		/**
		 * Returns true as long as the button is held. This uses a hysteresis
		 */
		bool isHold();

		/**
		 * Returns true once after the button is pushed.
		 * True is only returned once until the button is released again.
		 */
		bool isPush();

		/**
		 * Returns true once after the button is clicked (pushed and released).
		 * True is only returned once after the button is released.
		 */
		bool isClick();

		/**
		 * Return strength of last touch.
		 *
		 * This is the value which would have been returned by last read scaled
		 * by a factor depending on calibration.
		 */
		int strength();

		/**
		 * Prints settings of this pin
		 */
		void printInfo();


	private:
	
		unsigned long _touchStart;

		int _pin;
		int _offset;
		int _hysteresis;
		int _scale;
		int _lastCount;
		bool _pushed;

		int _read();
		long _touchTime();
};

#endif
