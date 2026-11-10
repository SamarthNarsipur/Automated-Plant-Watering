 
Automated Plant Care v1 

yo, welcome to version 1! i built a custom arduino nano backpack shield because i wanted something sleek and tiny that won't look like a giant brick sitting next to my small plants.

what this hardware actually does

basically, i always forget to water my plants. so this board has a soil moisture sensor probe that sits in the dirt and acts like its eyes. if the dirt gets super dry, the arduino detects it and flashes a signal over to a pn2222a transistor switch. the transistor acts like an inline electronic gate keeper, allowing current to flood down into a mini 5v submersible water pump to give the plant a quick 4-second drink. then it sleeps for a minute and loops forever.
it is completely autonomous so my plants can survive my terrible memory.
i also left some digital and analog pins wide open on the nano footprint header layout. that way, if i want to upgrade it later down the line, i can easily breakout wires for an oled screen display to track live moisture metrics or plug in a second pump channel for another plant pot without rebuilding the entire power switching grid from scratch.

how to set it up

to build this thing yourself, you just need to get the custom fiberglass pcb manufactured using the production files included in this repository. once the board arrives in your mail, grab a basic soldering iron kit and solder the male pin headers for the nano, the small 1k ohm resistor, and the npn switching transistor right into their labeled places.
after the soldering is finished, just pop your arduino nano into the sockets, hook up your external 5v pump wires and moisture probe line to the terminal plugs, and use the arduino ide software on your laptop to upload the main code script down a standard usb cable.
<img width="1917" height="1078" alt="Screenshot 2026-11-10 182814" src="https://github.com/user-attachments/assets/fd625769-fea2-4003-9882-903574b544cc" />

files in this repo

• Gerbers_v2.zip - the actual production blueprints for the factory machines to print out the copper lines and fiberglass layers.
• main.ino - the tiny script that tells the microcontroller when to flip the switch.
• BOM.md - the shopping list and links for parts (plus a soldering iron kit because i dont have any solder wire at home yet lol).
built for hack club forge! 
