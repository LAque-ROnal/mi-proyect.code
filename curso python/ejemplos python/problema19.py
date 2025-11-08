"""un restaurante ofrece un descuent0 de 10% para consumos de hasta s/100.00 
y un descuento de 20% para consumos mayores,para ambos casos se aplica un impuesto del 19%. 
determinar el monto del descuento, el impuesto y el importe a pagar
"""
D1= 0.1
D2 = 0.2
IGV= 0.19  # 19%
costo = int (input ('inserte la cantidad de consumo: '))
if costo <=100:
    descuento = costo * D1
else:
    descuento = costo * D2

impuesto = (costo - descuento)* IGV
importe = (costo - descuento)+impuesto

print (f'monto del descuento: {descuento}')
print (f'impuesto con IGV: {impuesto}')
print (f"importe total a pagar:{importe} ")