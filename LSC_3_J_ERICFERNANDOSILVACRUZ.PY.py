### Encabezado
numero_global = 8

## Funciones Secundarias
def sumatoria(numero_local):
    arreglo_numeros = [0] * numero_local
    resultado = 0
    resultado2 = 0
    
    for i in range(numero_local):
        arreglo_numeros[i] = int(input(f"ingrese el valor de la posicion: {i + 1}: "))
        resultado = resultado + arreglo_numeros[i]
        resultado2 += arreglo_numeros[i]
        
    return resultado

## Funcion Principal
def main():
    print("Actividad 02 - Sumatoria Acumulativa - Memoria Estatica")
    resultado_main = sumatoria(numero_global)
    print("El resultado de la sumatoria es igual a:", resultado_main)

if __name__ == "__main__":
    main()
