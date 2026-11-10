 yo, welcome to version 1! i built a custom arduino nano backpack shield because i wanted something sleek and tiny that won't look like a giant brick sitting next to my small plants.

what this hardware actually does

basically, i always forget to water my plants. so this board has a soil moisture sensor probe that sits in the dirt and acts like its eyes. if the dirt gets super dry, the arduino detects it and flashes a signal over to a pn2222a transistor switch. the transistor acts like an inline electronic gate keeper, allowing current to flood down into a mini 5v submersible water pump to give the plant a quick 4-second drink. then it sleeps for a minute and loops forever.
it is completely autonomous so my plants can survive my terrible memory.

files in this repo

• Gerbers_v2.zip - the actual production blueprints for the factory machines to print out the copper lines and fiberglass.
• main.ino - the tiny script that tells the microcontroller when to flip the switch.
• BOM.md - the shopping list and links for parts (plus a soldering iron kit because i dont have any solder wire at home yet lol).
built for hack club forge! 
