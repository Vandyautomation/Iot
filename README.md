# Iot
project iot for intern test

Program Explanation :
ADC 10 bit have range 0 - 1023. The voltage reference for arduino is 5 volt. 
Formula is: (Sensor/1023) * 5. 

Because of range charge and discharge is 3.2 - 4.2. This formula same with mapping formula.    Voltage divide by 5.0 to get range 0 until 1. 4.2 from maximum value and 3.2 from minimum value. F
Formula is : (voltage / 5.0) * (4.2 - 3.2) + 3.2;

Percentage of battery get from converted value minus minimum voltage in battery(3.2 volt). And then, divided by maximum value minus minimum value. Thats just a normal formula for percentage. 
Formula is : ((convertedVoltage - 3.2) / (4.2 - 3.2)) * 100; 
