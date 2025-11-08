n = int (input ('ingrese su nota: '))

if n<51:
    resp =  'REPROBADO'
if n>=51 and n<70:
    resp = 'regular'
if n>= 70 and n<90:
    resp = 'BIEN'
if n>=90 and n<= 100:
    resp = 'EXCELENTE'
print (resp)