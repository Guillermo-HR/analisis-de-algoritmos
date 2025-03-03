#include <stdio.h>
#include <time.h>

#define tamano 800 // Definir el tamaño del arreglo

int main() {
    float matriz3_3Prueba[tamano][tamano][tamano];  // Declaración e inicialización del arreglo
    clock_t start, end;  // Variables para medir el tiempo de inicio y fin
    double cpu_time_used; // Variable para almacenar el tiempo de CPU usado
    float valorAccedido;  // Variable para almacenar el valor accedido

    for (int i = 0; i < tamano; i++) {
        for (int j = 0; j < tamano; j++) {
            for (int k = 0; k < tamano; k++) {
                matriz3_3Prueba[i][j][k] = 0;  // Inicializar la matriz con 0
            }
        }
    }
    
    start = clock();  // Tomar el tiempo antes de acceder al arreglo
    for (int i = 0; i < tamano; i++) {
      for (int j = 0; j < tamano; j++) {
            for (int k = 0; k < tamano; k++) {
                valorAccedido = matriz3_3Prueba[i][j][k];  // Acceder al arreglo
            }
      }
    }
    end = clock();  // Tomar el tiempo después de acceder al arreglo
    
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC; // Calcular el tiempo de CPU usado
    printf("Tiempo de ejecución: %.10f segundos\n", cpu_time_used);

    return 0;
}