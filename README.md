# _**PWM-Controlled LED & Servo Using Potentiometer 🎛️✨**_ 

### **Project Overview**  
This Arduino project demonstrates **Pulse Width Modulation (PWM)** by controlling the brightness of an **LED** and the position of a **servo motor** using a **potentiometer**. As you turn the potentiometer knob, the LED smoothly dims or brightens, while the servo motor rotates accordingly.  

### **How It Works**  
- The **potentiometer** reads an **analog input** (0–1023) from **pin A0**.  
- The **analog value** is mapped to two ranges:
  - **0–255** for LED brightness (PWM output to pin **10**).  
  - **0–180°** for servo motor rotation (signal to pin **9**).  
- The **analogWrite()** function adjusts LED brightness.  
- The **servo.write()** function moves the servo.  

### **Circuit Connections**  
- **Potentiometer:**  
  - Left pin → **GND**  
  - Middle pin → **A0** (Analog Input)  
  - Right pin → **5V**  
- **LED:**  
  - Anode (+) → **Pin 10** (via **resistor**)  
  - Cathode (–) → **GND**  
- **Servo Motor:**  
  - VCC (Red) → **5V**  
  - GND (Black/Brown) → **GND**  
  - Signal (Yellow/Orange) → **Pin 9**  

### **Demo (Tinkercad Simulation)**  
[🔗 View the Project Simulation](https://www.tinkercad.com/things/b9VSYczKi9e-potentiometer-controlled-servo-and-led?sharecode=OkY8jpuE1gOwOtlxa4Cks5bIVmKN4RTRY4rDctx_wZQ) 

### **Future Improvements**  
- Add an **OLED display** to show live PWM and servo angle values.  
- Use a **button** to toggle between different PWM modes.  

### **License**  
This project is open-source and available under the [**MIT License**](LICENSE).  