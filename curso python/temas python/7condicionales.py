# condicioanl simple lf 
print ("PROGRAMA PARA EBALUAR LA NOTA DE UN ALUMNO")
alumno = (input ("introduce la nota del estudiante: "))
def evaluacion (nota):
    valoracion= "aprobado"
    if nota <50:
        valoracion = "reprobado"
    return valoracion

print (evaluacion(int(alumno)))