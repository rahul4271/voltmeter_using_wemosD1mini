# voltmeter_using_wemosD1mini

This sketch is used to measure voltage using wemos D1 mini board by default i used to measure voltage of 18560 battery so the highest voltage is 4.2v but in wemos D1 mini the peak voltage is 3.3v so to calculate voltage we can use voltage divider circuit connected to analog pin.
To measure voltage on wemos D1 mini first check the limits of the input voltage required to measure in my case my limits for input voltage 0v -- 4.2v and output voltage 0v -- 3.3v so i create voltage divider circuit  


To calculate resistance of R1 and R2  we use this formula

 Vout=Vin*(R1/R1+R2)

We can also use online calculators for this. link=https://ohmslawcalculator.com/voltage-divider-calculator
After getting values save those on sketch

