# Arduino-Joytsick-Tester
An arduino Nano tester for PS2 / X360 joysticks.

When buying these it's nice to know if it works before soldering these in.
The joystick output is displayed on screen and when pressing the joystick the led will illuminate.

![Image](https://i.imgur.com/np4Sk7K.jpg)

You can take the joystick off and test the next one:

![Image](https://i.imgur.com/TrcjtvE.jpg)

# Needed
- Female pinstrips
- pcb 5x7cm
- Arduino Nano (it's just what I had lying around, feel free to divert)
- SSD1306 OLED screen
- 1 Green Led
- 100 ohm resistor
- some wire, solderiron, ..
- A pcb holder

The 3 printed pcb holder which is screwless can be found here:

https://www.printables.com/model/120461-pcb-mount-5x7cm-no-screws

# Wiring diagram
![Wiring diagram](https://i.imgur.com/hyVlwZN.png)

# Assembly

The pins of the joystick don't align with the grid of the pcb so custom mounting is required. 
I bend the pins so they can be surface mounted.

The pinstrips have been cut on top so the pins are exposed. 
This is due to the pins of the button being very tiny.

Both modifications can be seen below:
![Wiring diagram](https://i.imgur.com/gIRWfpL.jpg)

It should look something like this with the joystick on:

![Wiring diagram](https://i.imgur.com/wJe8H9A.jpg)


# Info used to create this:
https://fabienroyer.wordpress.com/2011/01/09/connecting-an-analog-joystick-to-a-netduino/
