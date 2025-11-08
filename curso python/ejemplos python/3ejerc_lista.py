"""
crea una lista con 5 puntajes de un chavon:
ejemplo:

puntaje = [23,43,67,89,10]

-muestra el puntaje maximo y minimo
-calcula el promedio
-ordena la lista de mayor y menor
-muestra la posicion del jugador con el puntaje mas alto
 

"""
puntaje = [23,43,67,89,10]
print (f"el puntaje maximo es: ",max(puntaje))
print ("el puntaje minimo es: ", min(puntaje))

print(f"el promedio del puntaje es: ",sum(puntaje)/len(puntaje))
#menor a mayor
puntaje.sort()
print("de menor a mayor: ",puntaje)
#sin modificar la lista
orden=sorted(puntaje)
print("de menor a mayor sin modificar: ",orden)

#mayor a menor
puntaje.sort(reverse=True)
print("de mayor a menor: ",puntaje)
#sin modificar 
descendente=sorted(puntaje,reverse=True)
print ("de mayor a menor sin modificar ",descendente)