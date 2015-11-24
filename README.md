# TouchPin
Arduino Library for simple touch button functionality

## Status:

Still alpha. Usage can change anytime. But working pretty well, though ;)

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


```
