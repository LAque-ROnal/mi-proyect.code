#dado 3 numeros mostrar el mayor de los tres
num1 =int (input())
num2 = int (input())
num3 = int (input())
if (num1 >num2 and num1 >num3):
        print (f" el mayor es: {num1}") 
else:
    if (num2 >num1 and num2 >num3):
        print ( f"el mayor es: {num2}") 
    else:
        print (f"el mayor es: {num3}")