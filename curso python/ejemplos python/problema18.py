#dado 3 numeros devolver los numeros en orden ascendente
a = int (input('num1: '))
b= int (input ('num2: '))
c= int (input ('num3: '))
if a>b:
    if a>c:
        mayor = a
    else:
        mayor =c
else:
    if b>c:
        mayor=b
    else:
        mayor = c
if a<b and a<c:
    menor =a
elif b<a and b<c:
    menor =b
else:
    menor =c
intermedio= (a+b+c)-(mayor + menor)

print ('menor: ',menor)
print (f'intermedio: {intermedio}')
print ('mayor: ',mayor)