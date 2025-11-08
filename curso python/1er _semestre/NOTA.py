n= int (input ('introduce la nota: '))
if n>=51 and n<=100:
    resp= 'aprobado'
elif n>=0 and n<51:
    resp = 'reprobado'
else:     
    resp= 'inexistente!!'
print (resp)