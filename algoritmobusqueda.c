#include <stdio.h>
#include <time.h>

// Función de búsqueda binaria
int busquedaBinaria(int arr[], int izquierda, int derecha, int objetivo) {
    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        // Verificar si el objetivo está en el medio
        if (arr[medio] == objetivo)
            return medio;

        // Si el objetivo es mayor, ignorar la mitad izquierda
        if (arr[medio] < objetivo)
            izquierda = medio + 1;
        else  // Si es menor, ignorar la mitad derecha
            derecha = medio - 1;
    }
    return -1; // Elemento no encontrado
}

int main() {
    int arreglo[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; // Arreglo ordenado
    int n = sizeof(arreglo) / sizeof(arreglo[0]); // Tamaño del arreglo
    int objetivo;
    
    // Pedir al usuario que ingrese el número a buscar
    printf("Ingrese el número que desea buscar: ");
    scanf("%d", &objetivo);
    
    clock_t start, end;
    double tiempo_ejecucion;

    start = clock();  // Iniciar medición de tiempo
    int resultado = busquedaBinaria(arreglo, 0, n - 1, objetivo);
    end = clock();  // Finalizar medición de tiempo

    // Calcular el tiempo de ejecución
    tiempo_ejecucion = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Mostrar el resultado
    if (resultado != -1)
        printf("Elemento encontrado en la posición: %d\n", resultado);
    else
        printf("Elemento no encontrado\n");

    // Mostrar el tiempo de ejecución
    printf("Tiempo de ejecución: %f segundos\n", tiempo_ejecucion);

    return 0;
}

