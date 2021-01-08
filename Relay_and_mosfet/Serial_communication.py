import serial

arduino = serial.Serial('/dev/ttyACM0',9600)
y = arduino.readline()