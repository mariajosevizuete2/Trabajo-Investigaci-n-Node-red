import RPi.GPIO as GPIO
import time

pin= 24

GPIO.setmode (GPIO.BCM)
GPIO.setup (pin,GPIO.OUT)
GPIO.output(pin,GPIO.HIGH)

print ("    ALARMA DE VEHICULO")
print("Ingrese 1=si, 0=no:")
puerta= int(input("¿La puerta esta abierta?: \n"))
motor= int(input("¿El motor esta encendido?: \n"))
luces= int(input("¿La luces estan encendidas?: \n"))

if (luces==1 and motor==1):
    print("Alarma encendida")
    for i in range (0,10):
      GPIO.output(pin, GPIO.LOW)
      time.sleep(0.3)
      GPIO.output(pin, GPIO.HIGH)
      time.sleep(0.3)
    GPIO.cleanup()
    
elif (puerta==1 and motor==1):
    print("Alarma encendida")
    for i in range (0,10):
      GPIO.output(pin, GPIO.LOW)
      time.sleep(0.3)
      GPIO.output(pin, GPIO.HIGH)
      time.sleep(0.3)
    GPIO.cleanup()
    
else: 
    print("Alarma apagada")
    for i in range (0,3):
      GPIO.output(pin, GPIO.LOW)
      time.sleep(0.1)
      GPIO.output(pin, GPIO.HIGH)
      time.sleep(0.1)
    GPIO.cleanup()