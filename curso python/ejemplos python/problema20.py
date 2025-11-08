"""determinar el monto de descuento,el importe del impuesto y el importe a pagar

consumo            descuento %
hasta 100           10
mayor a 100         20
mayor a 200         30
"""

D1= 0.1
D2 = 0.2
D3= 0.3
IGV= 0.19  # 19%
consumo = float (input ('introduce la cantidad de consumo: '))
if consumo <= 100:
    descuento = consumo *D1
elif consumo> 100 and consumo <200:
    descuento = consumo * D2
elif consumo >=200:
    descuento = consumo * D3

impuesto = (consumo - descuento) * IGV
importe =  (consumo - descuento)+ impuesto
print (f'monto del descuento: {descuento}')
print (f'impuesto con IGV: {impuesto}')
print (f"importe total a pagar:{importe} ")

