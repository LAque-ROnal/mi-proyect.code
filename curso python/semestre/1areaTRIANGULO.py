print ("calulo de AREA DE UN TRIANGULO")
base = int (input ("introduce la base del triangulo: "))
altura = int  (input ("introduce la altura del triangulo: "))

area= base * altura

print ("el area del triangulo es: " + str (area))

# SEGUNDA FORMA CON FUNCION
print ("PROGRAMA AREA DE UN TRIAGULO")
bas= int (input("introduce la base del triangulo:  "))
ar= int(input("introduce el altura del triangulo:  "))
def area (base, altura):
    resultado=base * altura
    return resultado
print ("el area del triangulo es: " + str (area (bas,ar)))
