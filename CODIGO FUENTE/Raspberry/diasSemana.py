import RPi.GPIO as GPIO
import time

pin= 19


GPIO.setmode (GPIO.BOARD)
GPIO.setup (pin,GPIO.OUT)
GPIO.output(pin,GPIO.HIGH)

print("      DIAS DE LA SEMANA")
dia= input("Ingrese el nombre del dia de la semana que desee: \n")
dia= dia.upper()

if dia == "LUNES":
    for i in range (0,1):
      GPIO.output(pin, GPIO.LOW)
      time.sleep(0.5)
      GPIO.output(pin, GPIO.HIGH)
      time.sleep(0.5)
    print("Es el primer dia")
    GPIO.cleanup()
    
elif dia == "MARTES":
    for i in range (0,2):
      GPIO.output(pin, GPIO.LOW)
      time.sleep(0.5)
      GPIO.output(pin, GPIO.HIGH)
      time.sleep(0.5)
    print("Es el segundo dia")
    GPIO.cleanup()
    
elif dia == "MIERCOLES":
    for i in range (0,3):
      GPIO.output(pin, GPIO.LOW)
      time.sleep(0.5)
      GPIO.output(pin, GPIO.HIGH)
      time.sleep(0.5)
    print("Es el tercer dia")
    GPIO.cleanup()
    
elif dia == "JUEVES":
    for i in range (0,4):
      GPIO.output(pin, GPIO.LOW)
      time.sleep(0.5)
      GPIO.output(pin, GPIO.HIGH)
      time.sleep(0.5)
    print("Es el cuarto dia")
    GPIO.cleanup()
    
elif dia == "VIERNES":
    for i in range (0,5):
      GPIO.output(pin, GPIO.LOW)
      time.sleep(0.5)
      GPIO.output(pin, GPIO.HIGH)
      time.sleep(0.5)
    print("Es el quinto dia")
    GPIO.cleanup()
    
elif dia == "SABADO":
    for i in range (0,6):
      GPIO.output(pin, GPIO.LOW)
      time.sleep(0.5)
      GPIO.output(pin, GPIO.HIGH)
      time.sleep(0.5)
    print("Es el sexto dia")
    GPIO.cleanup()
    
elif dia == "DOMINGO":
    for i in range (0,7):
      GPIO.output(pin, GPIO.LOW)
      time.sleep(0.5)
      GPIO.output(pin, GPIO.HIGH)
      time.sleep(0.5)
    print("Es el septimo dia")
    GPIO.cleanup()
    
else:
    print(" Solo puede escribir los dias de la semana")
  