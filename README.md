# Traffic Light with Arduino

A simple traffic light built with three LEDs and an Arduino Uno. The sequence imitates a real road traffic light: red, red + yellow, green, blinking green, yellow.

## Components

| Part | Quantity |
|------|----------|
| Arduino Uno | 1 |
| LED (red) | 1 |
| LED (yellow) | 1 |
| LED (green) | 1 |
| Resistor 220 Ω | 3 |
| Breadboard | 1 |
| Jumper wires | several |

## Wiring

| LED    | Arduino pin |
|--------|-------------|
| Red    | 11          |
| Yellow | 10          |
| Green  | 9           |

Each LED is connected in series with a 220 Ω resistor, and the other leg of the LED goes to GND.

![Circuit diagram](images/circuit.png)

## How it works

1. Red is on for 5 seconds.
2. Red and yellow are on together for 1 second.
3. Green is on for 5 seconds.
4. Green blinks 3 times.
5. Yellow is on for 2 seconds.
6. The cycle repeats.

## How to run

1. Open `traffic-light.ino` in the [Arduino IDE](https://www.arduino.cc/en/software).
2. Connect your Arduino Uno via USB.
3. Select the board and port in the **Tools** menu.
4. Click **Upload**.

You can also try it online without hardware in a simulator such as [Wokwi](https://wokwi.com) or [Tinkercad Circuits](https://www.tinkercad.com/circuits).

## Possible improvements

- Add a pedestrian button
- Add a second traffic light for a crossroad
- Replace `delay()` with `millis()` for non-blocking code
