''' 
crea una lista con el nombre de tus amigos.
haZ un programa que:
-pida tu nombre
-si estas en la lista diga,"hey {tu nombre} ya estas ivitado"
-sino estas te agregur en la lista e imprima el nuevo grupo de invitados

'''
invitados =["ronal","josue","maria","samuel"]

nombre=input("ingresa tu nombre: ")

if nombre in invitados:
    print (f"Hey {nombre} ya estas invitado ")
else:
    invitados.append(nombre)
    print (f"no estaba en la lista {nombre}")
    print (f"la nueva lista es: {invitados}")