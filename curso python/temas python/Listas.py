"""LISTAS == array
-Estrucuturas de datos que nos permiten almacenar varios valores como un grupo de variables
- En python las listas pueden guardar diferentes tipos de valores
- Se pueden expandir dinamicamente
SINTAXIS
nombreDeLaLista =[elemto1 ,elemento2, elemento3......] puede tener ningun elemento,varios , infinitos."""


lista=["ronal","antonio","maria","marcos"]

print(lista[-3]) #acceder a un elemto de la lista del ultimo al primero si es -
print (lista[0:3]) #accede a los primeros 3 elemntos y lo demas no lo imprime
print (lista[1:3])
print (lista[2:])
print (lista[:2])

lista.append("sara") #aggregar nuevo elemento al final
print(lista[:])

lista.insert(2,"javier") #agrega un nombre en lugar especifico
print (lista[:])

lista.extend(["josue", "lucia", "juancho"]) #agrega varios elementos en la ultima la lista
print(lista[:])

print (lista.index("marcos")) # muestra en que posicion esta el elemento

print ("marcos" in lista) #coprovar si se encuentra ele lemnto en lalista true o false

lista2=[12.54,"antonio",12412.23,True] #acepta diferentes tipos de datos
lista2.remove("antonio") #para elimina un elemnto
lista2.pop() # elimina el ultimo elemento de la lista
print (lista2[:])

laque=[123,121,255,255,34]*3 # *3 sirve para repetir la cantidad de veces la lista

ronal=[123,56,78,4,5]

sola=laque+ronal #sirve para imprimir o cantenenar listas

print (sola[:])