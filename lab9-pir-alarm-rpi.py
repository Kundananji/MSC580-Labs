# lab9-pir-alarm-rpi.py
Import RPi.GPIO as GPIO
import time

GPIO.setmode (GPIO. BOARD)
GPIO.setup(11, GPIO. IN)
GPIO.setup(3, GPIO.OUT) #Read output from while True: #LED output pin

i=GPIO.input(11)
if i==0:
    print ("No intruders", i) #When output from motion sensor
    GPIO.output(3, 0)
    time.sleep(0.1) #Turn OFF LED
elif i==1:
    print ("Intruder detected", i) #When output from motion sensor.
    GPIO.output (3, 1) #Turn ON LED
    time.sleep (0.1)