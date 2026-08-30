filas=3
columnas=3

def captura_matriz(a):
    for i in range(filas):
        for j in range(columnas):
            ##print("Ingrese los valores de la posicion ["+str(i)+"]["+str(j)+"]: \n")
            a[i][j]=int(input("Ingrese los valores de la posicion ["+str(i)+"]["+str(j)+"]: \n"))
    return a

def impresion_matriz(arr):
    print("Los valores de la matriz son: \n")
    for a in range(filas):
        for b in range(columnas):
            print(arr[a][b], end=" ")
        print("\n")

    ##return 0

def main():
    arreglo_bidimension=[[0]*columnas for _ in range(filas)]
    print("Actividad 03 - Arreglo Bidimensional (Matriz MxN)\n")
    arr_local= captura_matriz(arreglo_bidimension)
    ##print(arr_local)
    impresion_matriz(arr_local)

if __name__=="__main__":
    main()
