def operacion():
    base = 2 ** 64
    primo = 2057
    multiplicacion = (base ** (2 * 4)) / primo
    modulo = 7077

    coeficiente = ((modulo / base ** (4 - 1)) * multiplicacion / base ** (4 + 1))
    residuo = (modulo % (base ** (4 + 1)) - coeficiente - (primo % (base ** (4 + 1))))

    if residuo < 0:
        residuo = residuo + base **(4 + 1)

    while residuo >= primo:
         residuo = residuo - primo

    return(coeficiente)

operacion()
