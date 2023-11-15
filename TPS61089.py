import math

Vin = 4.5 #Volts
Vout = 9 #Volts
Vref = 1.212 #Volts
f_sw = 2000 * math.pow(10,3) #Hertz
C_freq = 24 * math.pow(10, -12) #Farads
t_delay = 86 * math.pow(10, -9) #Seconds
I_lim = 2 #Amps
R_2 = 110 #Ohms

#Calculations
R_freq = 4 * ((1/f_sw) - (t_delay * Vout/Vin)) / C_freq
R_lim = 1030000 / I_lim
R_1 = (Vout - Vref) * R_2 / Vref