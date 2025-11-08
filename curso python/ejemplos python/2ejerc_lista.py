""" 
Pedido de un restaurante:
tienes una lista de comidaS:

menu= ["tortilla","pizza","hamburguesa", "tacos","pollo","sushi"]

has un programa que:
-pida al usuario elegir tres platos
-verificar si estan en el menu
-cree un nueva lista con su pedido
-inprima un mensaje tipo = "tu combo de pedido incluye: pizza, tacos, buen provecho!!"

"""

menu= ["tortilla","pizza","hamburguesa", "tacos","pollo","sushi"]

print ("menu disponible")
for comida in menu:
    print (" - ",comida)

pedidos=[]

for i in range (3):
    eleccion=input (f"elige un plato {i+1}: ")
    if eleccion in menu:
        pedidos.append(eleccion)
    else:
        print (f"el pedido {eleccion} no se encuentra :( ")

print ("tu combo incluye" )
for cocina in pedidos:
    print("-", cocina)