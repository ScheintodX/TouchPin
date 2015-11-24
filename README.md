# TouchPin
Arduino Library for simple touch button functionality

## Status:

Still alpha. Usage can change anytime. But working pretty well, though ;)
Tested only using TI TM4C123G Launchpad and Energia IDE (Andruino clone).

## Usage:

```
#include "TouchPin.h"

TouchPin button( 2 );

void setup() {

	button.calibrate();
}

void loop() {

	if( button.push() ) {

		// DO STUFF
	}

	if( button.hold() ) {

		// DO STUFF
	}

}

For more USAGE see TouchPin.h

```

## Schematics

```
-------+
       |
   pin +----+--------(PAD)
       |    |
       |   [ ] 1MΩ
       |    |
   gnd +----+
       |
-------+

```

## Working

The pin is switched to output and the PAD is loaded capacitive. Then
the pin is switched to open input and the PAD is discharged via the
resistor.

The discharging takes a small amount of time which is dependant on
the capacity of the PAD. This capacity is increased when you touch
the PAD. This time is measured and taken as input for come comfort
function.
