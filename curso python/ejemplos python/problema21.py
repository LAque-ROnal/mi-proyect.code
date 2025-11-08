"""al ingresar la temperatura obtener el tipo de clima segun la tabla:
    TEMPERATURA         CLIMA
    temp <10            frio
    temp entre 10 y 20  nublado
    temp entre 21 y 30  calor
    temp > 30           tropical
"""

temp = int (input ("introduce la temperatura: "))
def clima (temp):
    if temp < 10:
        res= 'FRIO'
    elif temp >= 10 and temp <= 20:
        res = 'NUBLADO'
    elif temp >= 21 and temp<= 30:
        res = 'CALOR'
    else:
        res = 'TROPICAL'
    return res

c= clima(temp)
print (f'el clima es: {c}')