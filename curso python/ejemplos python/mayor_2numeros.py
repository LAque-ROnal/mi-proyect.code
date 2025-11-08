num1 = int (input ('Ingrese el primer número: '))
num2 = int (input ('Ingrese el segundo número: '))

if num1>num2:
    m=num1
if num2>num1:
    m=num2
print (m)

#funcion

def mayor (a,b):
    if a>b:
        may=a
    if b>a:
        may = b
    return may
a=int (input ('ingrese1: '))
b=int (input ('ingrese2:'))
print (f'el mayores:',mayor(a,b))