#dado un caracter determinar si es vocal o no CON FUNCION


def vocal(c):
    resp="no es vocal"
    if c == 'a' or c == 'A':
        resp= "es vocal"
    if c == 'e' or c == 'E':
        resp= "es vocal"
    if c == 'i' or c == 'I':
        resp= "es vocal"
    if c == 'o' or  c == 'O':
        resp= "es vocal"
    if c == 'u' or c == 'U':
        resp= "es vocal"
    return resp
c=input('ingrese el caracter: ')
print (vocal(c))