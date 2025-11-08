#LAS TUPLAS son listas inmutalble inmodificables es  decir que no se pueden modificar  una vez creado
# no permite añadir elimivar mover elementos (no appen, extend,reomve)
# si permiten extraer porciones, pero el resultado de la extraccion es un tupla nueva
# no permiten busquedad (no index)
# si permiten comprobar si un elemnto se enucnetra en la tupla
#UTILIDAD
# mas rapidos
# menos espcio (mayor optimizacion)
# formatean strings
# puedden itilizarse como claves en un diccionario
#SINTAXIS 
# nombrelista = (elemto1, elemento2,elemento3.........)
#                 [0]        [1]       [3]

tupla=("ronal", 12,"laque")
print (tupla[2])
#METODO PARA CONVERTIR TUPLA A LISTA O VICEVERSA
#lista a tupla
lista = list(tupla)
print (lista)
#tupla a lista
lista=["ronal", 12,"laque","ronal"]
tupla = tuple(lista)
print (tupla)
print ("ronal"in tupla)
#METODO TUBLA SIRVE PARA PREGUNTAR CUANTAS VECES APARECE UN ELEMENTO

print(tupla.count("ronal"))
#metodo len() para averiguar la longitud de la tubla
print( len(tupla))

datos= ("ronal",13,2026)
print (datos[:])
print (datos.index(2026))

nombre,dia,año=datos

print (nombre)
print (dia)
print (año)