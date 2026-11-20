# MyArduino

A minimal AVR-focused Arduino-compatible library that provides `pinMode`,
`digitalWrite`, `digitalread`, and `delay`.

## Installation

Install this repository as an Arduino or PlatformIO library. Include the
library in a sketch with:

```cpp
#include <myArduino.h>
```

The current implementation targets AVR microcontrollers and uses the
microcontroller's `PORTB` and `DDRB` registers directly.
