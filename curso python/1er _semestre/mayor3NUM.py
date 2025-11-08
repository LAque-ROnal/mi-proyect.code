a=int (input('introduce el primer numero: '))
b=int (input('introduce el segundo numero: '))
c=int (input('introduce el tercer numero: '))

if a>b:
    if a>c:
        m=a
    else:
        m=c
else:
    if b>c:
        m=b
    else:
        m=c
print ('el mayor de los 3 numeros es: ',m)


