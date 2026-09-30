"""
Proyecto: MisGustos - Tecnologías (Examen 1er Parcial)
Lenguaje: Python
Descripción: Programa interactivo basado en consola que gestiona estructuras 
             de datos lineales (listas, matrices y comportamiento de Pila).
"""

def matriz(arreglo):
    """
    Transforma el arreglo estático en una matriz de 2x3 y la muestra en pantalla.
    Complejidad Temporal: O(R x C) -> O(1) ya que las dimensiones son constantes (2x3).
    Complejidad Espacial: O(R x C) para almacenar la matriz bidimensional.
    """
    print("\n--- MATRIZ 2x3 DE TECNOLOGÍAS ---")
    # Construcción de la matriz 2x3 mediante comprensión de listas
    m = [arreglo[i:i+3] for i in range(0, len(arreglo), 3)]
    
    for fila in m:
        print(" ".join([f"[{val}]" for val in fila]))

def pila(arreglo):
    """
    Simula una estructura de Pila (LIFO) utilizando una lista de Python,
    cargando los 6 valores iniciales y agregando dos adicionales.
    Complejidad Temporal: O(N)
    Complejidad Espacial: O(N)
    """
    # Usamos una lista como Pila (las inserciones con append y extracciones con pop operan al final)
    stack_pila = list(arreglo)
    
    # Agregamos dos valores adicionales
    stack_pila.append("Rust")
    stack_pila.append("TypeScript")
    
    print("\n--- ESTADO DE LA PILA (LIFO - Último en entrar, primero en salir) ---")
    print("(Cima de la pila en la parte superior)")
    for elemento in reversed(stack_pila):
        print(f" | {elemento} |")
    print(" +---------+")

def imprimir_valores_finales(arreglo):
    """
    Imprime los valores finales del arreglo base.
    Complejidad Temporal: O(N)
    Complejidad Espacial: O(1)
    """
    print("\n--- VALORES FINALES DEL ARREGLO ESTÁTICO ---")
    for idx, valor in enumerate(arreglo, start=1):
        print(f"{idx}. {valor}")

def main():
    # 4. Declaración de arreglo estático de 6 valores STRING predefinidos
    tecnologias = ["C++", "Python", "Java", "Docker", "Linux", "Git"]
    opcion = 0

    # 3. Ciclo While para mantener el programa en ejecución hasta que el usuario decida salir
    while opcion != 5:
        print("\n========================================")
        print("    PROYECTO: MisGustos [TuNombre]      ")
        print("========================================")
        print("1. Mostrar Arreglo Estatico de Tecnologias")
        print("2. Ejecutar Funcion Matriz (2x3)")
        print("3. Ejecutar Funcion Pila (+ 2 elementos)")
        print("4. Imprimir Valores Finales")
        print("5. Salir")
        
        try:
            opcion = int(input("Seleccione una opcion: "))
        except ValueError:
            print("Entrada invalida. Por favor, ingrese un numero entero.")
            continue

        if opcion == 1:
            print("\n--- ARREGLO ESTÁTICO INICIAL ---")
            for t in tecnologias:
                print(f"- {t}")
        elif opcion == 2:
            matriz(tecnologias)
        elif opcion == 3:
            pila(tecnologias)
        elif opcion == 4:
            imprimir_valores_finales(tecnologias)
        elif opcion == 5:
            print("\nSaliendo del programa... ¡Éxito en tu examen!")
        else:
            print("Opcion no valida. Intente de nuevo.")

if __name__ == "__main__":
    main()
