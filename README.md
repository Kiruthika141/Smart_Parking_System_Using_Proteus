# Smart Parking System using Proteus

A **Smart Parking System** built with **Arduino UNO**, **ultrasonic sensors**, **LEDs**, and a **16x2 LCD**, simulated in **Proteus**.  
It detects parking slot occupancy and displays real-time status with LED and LCD indicators — a perfect mini embedded + IoT concept project!

## Features
- Detects vehicle presence using ultrasonic sensors  
- Red/Green LED indicators for each slot  
- LCD shows available/free slots  
- Works perfectly in Proteus simulation  
- Scalable to more parking slots  

## Components
- Arduino UNO ×1  
- Ultrasonic Sensor (HC-SR04) ×3  
- 16x2 LCD Display ×1  
- Red LEDs ×3  
- Green LEDs ×3  
- Pontentiometer ×4  
- Breadboard & Jumper Wires  

## Pin Connections
| Component | Arduino Pins |
|------------|--------------|
| HC-SR04 #1 | Trig→2, Echo→3 |
| HC-SR04 #2 | Trig→4, Echo→5 |
| HC-SR04 #3 | Trig→6, Echo→7 |
| LCD | RS→A0, E→A1, D4→A2, D5→A3, D6→A4, D7→A5 |
| LEDs | Slot1: Red→8, Green→9; Slot2: Red→10, Green→11; Slot3: Red→12, Green→13 |

## Working
- Each ultrasonic sensor measures distance to detect if a slot is **occupied (<100 cm)** or **free (>100 cm)**.  
- **Red LED** → Occupied | **Green LED** → Free  
- The **LCD** displays the parking status in real time.  
- **Serial Monitor** logs distances and occupancy details.

## How to Simulate
1. Open the project in Proteus.  
2. Connect components as per the table above.  
3. Upload the compiled `.hex` file from Arduino IDE.  
4. Run the simulation and watch the LEDs + LCD update live.

💬 *“Simple automation, smart learning.”*
