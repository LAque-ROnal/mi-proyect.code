#con funcion
num1=int (input ('primer termino: '))
num2= int (input ('segundo termino: '))
num3= int (input ('tercer termino: '))
def mayorr(num1,num2,num3):
    may=num1
    if num2>may:
        may=num2
    if num3>may:
        may=num3
    return may


print (f'el mayor de los 3 numeros es: ', {mayorr (num1,num2,num3)})