num=int (input('Ingrese el numero a verificar: '))
def verifi(num):
    if num>0:
        res='POSITIVO'
    if num<0:
        res = 'NEGATIVO'
    if num==0:
        res= 'NEUTRO'
    return res
print ('el numero es: ', verifi(num))