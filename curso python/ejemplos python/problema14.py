#determinar si un número es multiplo de 5 y 3

num=int (input ('ingrese el numero: '))

if num % 3 ==0 and num % 5 ==0:
    res= 'es multiplo de 3 y 5'
else:
    res = 'No es multiplo de 3 y 5'

print (res)


#con funcion
n= int (input ("ingrese el numero a verificar: "))
def multiplo(num):
    if n % 3 == 0 and n % 5 ==0:
        resp="es multiplo de 3 y 5"
    else:
        resp = "no es multiplo de 3 y 5"
    return resp

x=multiplo(num)
print (x)


