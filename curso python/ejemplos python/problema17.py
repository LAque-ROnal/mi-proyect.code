#dado un número  devolver el doble si el numero no es par caso contrario trile.

def par (n):
    if n % 2!=0:
        res= n*2
    else:
        res = n*3
    return res

n=int (input ('introduce el numero: '))
print (par(n))