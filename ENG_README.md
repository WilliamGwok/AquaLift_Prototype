# AquaLift_Prototype

## Introduction

<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Team_photo_with_prototype.jpg" width="710px">
</div>
<br>
<p align="center">This project was completed as a group during the InnoX Winter Camp hosted by the Hong Kong Science and Technology Innovation Education Centre, from January 4 to January 25, 2025. I was responsible for the technical implementation, which was carried out at the ISD Laboratory of the Hong Kong University of Science and Technology.</p>

## Project Overview

<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/AquaLift%20Poster/1.png" width="710px">
</div>
<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/AquaLift%20Poster/2.png" width="710px">
</div>

## Work Description

The goal of the prototype development is to demonstrate key technological features of the product. The highlights of the deep-sea farming cage include the lifting system, real-time monitoring system, and management system. Based on this, we presented the functions by controlling the airbag inflation and deflation, receiving data from temperature sensors, and building a simple IoT system.

### Materials List

| Item Description                   | Image                   | Price    | Quantity | Remarks |
| ----------------------------------- | ----------------------- | -------- | -------- | ------- |
| High-pressure PU Tube, Transparent 8*5 | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/tube_8.png) | ¥2.00   | 2        | Connect to custom airbags |
| High-pressure PU Tube, Transparent 10*6.5 | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/tube_10.png) | ¥0.87   | 2        | Connect to air pump, solenoid valve, and pressure regulator |
| 3M Waterproof PTFE Tape             | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/PTFE_Tape.png) | ¥27.00  | 1        | Prevents air leakage effectively |
| One-way Valve AKH10-00              | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/one_flow.png) | ¥3.00   | 1        | Installed on the air outlet line of the air pump |
| PC Tube Fitting PC10-01             | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/tube_head.png) | ¥2.65   | 10       | Connects tubing and devices |
| Tube Reducer 10 to 8                | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/transfer10_8.png) | ¥2.95   | 1        | Connects main air route to airbag route |
| Pressure Regulator IR2000-02        | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/pressure_control.jpg) | ¥68.00  | 1        | Adjusts air release speed |
| SMC Type 2-Way 3-Port Solenoid Valve VT307Y-6G1_01 | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/valve.jpg) | ¥81.20  | 1        | Controls airbag inflation and deflation |
| Small Air Compressor KMTP-C4A       | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/pump.png) | ¥160.00 | 1        | Inflation device |
| Custom Ring Airbag                 | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/air_bag.jpg) | ¥280.00 | 1        | Customized based on aquarium size |
| Relay Module                        | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/electric_relay.png) | ¥17.80  | 2        | Controls air pump and solenoid valve |
| DS18B20 Temperature Sensor         | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/temp_sensor.png) | ¥17.90  | 1        | Powered by development board |
| KCD3 Marine Power Switch           | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/switch.png) | ¥7.80   | 1        | Controls power |
| ESP8266 Wi-Fi Module NodeMCU       | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/micro_unit.png) | ¥26.40  | 1        | Sends and receives data, basic circuit control |
| 12V Battery                        | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/12V_battery.png) | ¥7.70   | 1        | -- |
| 3.7V Battery                       | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/3_7V_battery.png) | ¥28.00  | 1        | -- |
| Breadboard Kit                     | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/bread_board.png) | ¥36.36  | 1        | -- |
| Display Aquarium (Diameter 25mm, Height 50mm) | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/tank_25_50.png) | ¥164.31 | 1        | -- |
| Small Hatchery Cage                | ![Image](https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/Material/net_cage.png) | ¥12.95  | 1        | -- |

### Circuit Design

<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/tech_electric.jpg" width="710px">
</div>
<br>

<p align="center">The circuit design is relatively simple; the key is to sort out the relay-related topology. It is important to check if all devices share a common ground before powering up. Additionally, the circuit topology was arranged on a breadboard, and based on my colleague ZJH’s suggestion, we used silicone wires and header pins to connect the devices to the breadboard (to improve stability by avoiding fragile jumper wires).</p>

<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/relay_cir.jpg" width="710px">
</div>
<p align="center">Relay-related topology is shown in the above image.</p>

### Air Route Design

<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/air_route.png" width="710px">
</div>
The design is aimed at inflating and deflating a single chamber, so the air route is not overly complex. The diagram is missing a one-way valve, which should be connected in the air route between the air pump and solenoid valve. It's worth noting that all tube fittings should be wrapped with PTFE tape, as tests have shown this significantly reduces air leakage at the joints.

### IoT System Design

The design goal is to remotely monitor the water temperature and control the lift of the cage in the water.

Given the limited development time, we directly used the free IoT platform Blynk.

<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/blynk.png" width="710px">
</div>

The simplified implementation flow is shown below:

<div align=center>
<img src="https://github.com/WilliamGwok/AquaLift_Prototype/blob/main/Figures/flow_chart.png" width="710px">
</div>

### Test Results
[Link to Test Results](https://github.com/user-attachments/assets/17f17435-935e-403c-b7f5-fe6d85c77b0a)

## Conclusion

