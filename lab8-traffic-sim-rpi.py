# lab8-traffic-sim-rpi.py
from gpiozero import LED
from time import sleep

red=LED(22)
blue=LED(27)
green=LED(17)

while True:
    print("Red on")
    red.on()
    sleep (1)
    print("Blue on")
    blue.on()
    sleep (1)
    print("Green on")
    green.on()
    sleep (1)
    print("Red off")
    red.off()
    sleep (1)
    print("Blue off")
    blue.off()
    sleep (1)
    print("Green off")
    green.off()
    sleep(1)