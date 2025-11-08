"""
ejercio con diccionaryo:
cuenta= {
    "nombre" = "ronal"
    "saldo" = 550
    "moneda" = "Bs"
}

programa debe permitir:
-depositar dinero
-retirar (si hay saldo)
-consultar saldo
nota-. usa while con opciones tipo menu.


"""
cuenta= {
    "nombre" :"ronal",
    "saldo" :550,
    "moneda" :" Bs"
}
while True:
    print ("BANCO UNIMOVIL")
    print ("1. Consultar saldo")
    print ("2. Depositar")
    print ("3. Retirar ")
    print ("4. Salir")
    opcion = input ("Porfavor eliga la opcion que desea realizar: ")
    if opcion == "1":
        print (f"Saldo actual es: {cuenta["saldo"]} {cuenta["moneda"]}")
    elif opcion == "2":
        monto= float(input ("Ingrese el monto que desea depositar: "))
        cuenta ["saldo"]+= monto
        print ("Deposito exitoso")
        print (f"su saldo actual es {cuenta["saldo"]}{cuenta["moneda"]}")
    elif opcion=="3":
        retiro= input ("ingrese el monto a retirar: ")
        if monto <= cuenta["saldo"]:
            cuenta["saldo"]-=retiro
            print ("Retiro exitoso")
        else:
            print ("Saldo insuficiente")
    elif opcion == "4":
        print ("gracias por utilizar mi BANCOUNIMOVIL")
        break
    else:
        print("OPCION INVALIDO!!")
