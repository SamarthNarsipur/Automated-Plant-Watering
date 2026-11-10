 
Automated Plant Care v1 

yo, welcome to version 1! i built a custom arduino nano backpack shield because i wanted something sleek and tiny that won't look like a giant brick sitting next to my small plants.
<img width="1788" height="757" alt="Screenshot 2026-11-10 161217" src="https://github.com/user-attachments/assets/7f3fa8ee-4601-46cc-bcf5-0814dcb2d02d" />

what this hardware actually does

basically, i always forget to water my plants. so this board has a soil moisture sensor probe that sits in the dirt and acts like its eyes. if the dirt gets super dry, the arduino detects it and flashes a signal over to a pn2222a transistor switch. the transistor acts like an inline electronic gate keeper, allowing current to flood down into a mini 5v submersible water pump to give the plant a quick 4-second drink. then it sleeps for a minute and loops forever.
it is completely autonomous so my plants can survive my terrible memory.
i also left some digital and analog pins wide open on the nano footprint header layout. that way, if i want to upgrade it later down the line, i can easily breakout wires for an oled screen display to track live moisture metrics or plug in a second pump channel for another plant pot without rebuilding the entire power switching grid from scratch.
<img width="933" height="586" alt="Screenshot 2026-11-10 161739" src="https://github.com/user-attachments/assets/629d8b40-13f2-4214-a011-21b4116568f1" />

how to set it up

to build this thing yourself, you just need to get the custom fiberglass pcb manufactured using the production files included in this repository. once the board arrives in your mail, grab a basic soldering iron kit and solder the male pin headers for the nano, the small 1k ohm resistor, and the npn switching transistor right into their labeled places.
after the soldering is finished, just pop your arduino nano into the sockets, hook up your external 5v pump wires and moisture probe line to the terminal plugs, and use the arduino ide software on your laptop to upload the main code script down a standard usb cable.
<img width="1917" height="1078" alt="Screenshot 2026-11-10 182814" src="https://github.com/user-attachments/assets/fd625769-fea2-4003-9882-903574b544cc" />

files in this repo

• Gerbers_v2.zip - the actual production blueprints for the factory machines to print out the copper lines and fiberglass layers.
• main.ino - the tiny script that tells the microcontroller when to flip the switch.
• BOM.md - the shopping list and links for parts (plus a soldering iron kit because i dont have any solder wire at home yet lol).
built for hack club forge! 
<img width="1587" height="866" alt="Screenshot 2026-11-10 172939" src="https://github.com/user-attachments/assets/d9a1b3a0-99ec-4fc7-8524-ae55b255e299" />

<img width="755" height="606" alt="Screenshot 2026-11-10 173622" src="https://github.com/user-attachments/assets/68c96649-7dae-426c-94c3-09928dc70348" />


# Bill of Materials (BOM) & Budget - Automated Plant Care v1

| Designator | Component Name | Description / Package | Qty | Cost (INR) | Cost (USD Approx.) | Direct Purchase Link |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **A1** | Arduino Nano R3 | ATmega328P MCU (Unsoldered headers) | 1 | ₹229.00 | $2.75 | [Robu Arduino Nano Page](https://robu.in/product/arduino-nano-board-r3-ch340-chip-with-usb-cable-solderedarduino-nano-r3-usb-cable/) |
| **Q1** | PN2222A / 2N2222 | NPN Bipolar Switching Transistor (TO-92) | 1 | ₹2.25 | $0.03 | [Robu 2N2222 Transistor Page](https://robu.in/product/2n2222a-slkorslkormicro-elec-40v-600ma-npn-to-92-bipolar-bjt-rohs/) |
| **R1** | Through-Hole Resistor | 1k Ohm Metal Film Axial Resistor (1/4W Kit) | 1 | ₹299.00 | $3.60 | [Robu Resistor Kit Page](https://robu.in/product/100pcs-1-4w-metal-film-resistors-assortment-for-diy-electronic-projects-and-experiments-2/) |
| **J3 / J4** | 2.54mm Breakaway Headers | Single Row Straight Male Pin Header Strip | 1 | ₹15.00 | $0.18 | [Robu Pin Header Page](https://robu.in/product/2-54mm-1x40-pin-male-single-row-straight-long-header-strip-pack-of-3/) |
| **External** | Soil Moisture Sensor | Soil Humidity Meter / Probe Module Kit | 1 | ₹125.00 | $1.50 | [Robu Moisture Sensor Page](https://robu.in/product/soil-moisture-module-soil-moisture-detection/) |
| **External** | Mini Water Pump | 3V-5V Micro Submersible DC Motor Water Pump | 1 | ₹145.00 | $1.75 | [Robu Mini Pump Page](https://robu.in/product/wps27-12v-dc-1l-min-mini-water-pump/) |
| **Tools** | Soldering Iron Kit | 25W Soldering Iron Combo Kit with Accessories | 1 | ₹739.00 | $8.90 | [Robu Soldering Kit Page](https://robu.in/product/soldering-iron-kit-3-in-1/) |
| **Prototyping**| Breadboard | Solderless Breadboard (830 Points / Full Size) | 1 | ₹99.00 | $1.20 | [Direct Product Link](https://robu.in/product/mb102-830-points-solderless-prototype-pcb-breadboard-high-quality/) |
| **Wires - MM**| Jumper Wires M-M | Male-to-Male DuPont Ribbon Cable (40-Pin 30cm) | 1 | ₹79.00 | $0.95 | [Direct Product Link](https://robu.in/product/male-to-male-jumper-wires-40-pin-30cm/) |
| **Wires - MF**| Jumper Wires M-F | Male-to-Female DuPont Ribbon Cable (40-Pin 20cm) | 1 | ₹49.00 | $0.60 | [Direct Product Link](https://robu.in/product/male-to-female-jumper-wires-40pcs-20cm/) |
| **Wires - FF**| Jumper Wires F-F | Female-to-Female DuPont Ribbon Cable (40-Pin 20cm)| 1 | ₹49.00 | $0.60 | [Direct Product Link](https://robu.in/product/20cm-dupont-wire-color-jumper-cable-2-54mm-1p-1p-female-female-40pcs/) |
