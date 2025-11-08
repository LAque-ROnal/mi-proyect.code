#DICCIONARIOS
#estructura de datos que nos permite almacenar valores de diferentes tipos(enteros,cadenas de text,decimales) e incluso listas u otros diccionarios
# uno de las caracteriztiza es que los datos se almacenan asociados a una clave de tal forma que se crea una asociacion de tipo CLAVE: VALOR para cada elemento almacenado
# los elementos almacenados no estan ordenados, El orden es indiferende ala hora de almacenar informacion en un diccionario
#CLAVE : VALOR

midiccionario = {"alemania":"berlin","francia":"paris","bolivia":"sucre","peru":"cerru"}
midiccionario["argentina"]="salta" #añadir un valor y clave al diccionario

print (midiccionario["bolivia"])

print (midiccionario)
midiccionario ["argentina"]="Buenos aires" #sobreescribir 
print (midiccionario)
#eliminar un elemento
del midiccionario ["alemania"]
print (midiccionario)

midiccionario2 ={"ronal":"laque", "juila":"zubieta","marcos":"porco", "temporadas":[1,2,3,4,5]}

print (midiccionario2.keys()) #para ver solo las claves
print (midiccionario2.values()) # para ver solo los valores 
print (len(midiccionario2)) # para saber la cantidad de elemntos hay