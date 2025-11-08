#calculo del area y perimetro de un circulo conocido su diametro;
import math
print ("calculo de AREA Y PERIMETRO de un CIRCULO")
diametro = int (input("introduce el diametro del circulo: "))
radio = diametro/2
area= math.pi * pow (radio, 2)
perimetro= 2* math.pi* radio
print ("el area del circulo es: ", area)
print ("el perimetro del circulo es: ", perimetro)
#otra forma
print ("OTRA FORMA CON FUCNION")

def area():
    diametro= float(input("introduce el diamtro del circulo: "))
    radio = diametro / 2
    areaa = math.pi * pow(radio,2)
    return areaa

resultado1 = area()
print ("primer area es: ", resultado1)
resultado2= area()
print ("segundo area es: ", resultado2)