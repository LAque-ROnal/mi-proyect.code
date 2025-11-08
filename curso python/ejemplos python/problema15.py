# determinar si un numero es par o impar CON FUNCION

def par(num):
    if num % 2 ==0:
        res="PAR"
    else:
        res = "IMPAR"
    return res
num = int (input ("ingres el numero: "))
print (par(num))