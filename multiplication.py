def multiplicacion():
    modulo = 7763
    longitud = modulo.bit_length()
    numero1 = 2019
    numero2 = 3069
    residuo = 0
    coeficiente = 0

    for i in range(0, longitud):
        coeficiente = int(coeficiente + (numero1 & (1 << i) != 0) * numero2) % 2
        residuo  = int((residuo + (numero1 & (1 << i) != 0) * numero2 + coeficiente * modulo) / 2)

    return(residuo % modulo)

multiplicacion()