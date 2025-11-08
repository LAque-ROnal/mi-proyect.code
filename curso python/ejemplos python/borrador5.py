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
print ("MENU: ")
for comida in menu:
    print ("- ",comida)
pedido = []
print ("elige tres platos del menu: ")
for i in range(3):
    eleccion= input (f"{i+1}. ")
    if eleccion in menu:
        pedido.append(eleccion)
    else:
        print(f"el plato {eleccion} no se encuentra en el menu !!")
print("pediste estos platos: ")
for elec in pedido:
    print ("- ", elec)
    
