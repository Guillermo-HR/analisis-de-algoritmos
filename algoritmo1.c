#include <stdio.h>
#include <time.h>

int main() {
    float vectorPrueba[] = {1024.0};  // Declaración e inicialización del arreglo
    clock_t start, end;  // Variables para medir el tiempo de inicio y fin
    double cpu_time_used; // Variable para almacenar el tiempo de CPU usado
    float valorAccedido;  // Variable para almacenar el valor accedido
    
    start = clock();  // Tomar el tiempo antes de acceder al arreglo
    valorAccedido = vectorPrueba[0];  // Leer el primer elemento del arreglo
    (void) valorAccedido;  // Evita la advertencia sin hacer nada adicional
    end = clock();  // Tomar el tiempo después de acceder al arreglo
    
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC; // Calcular el tiempo de CPU usado

    printf("Tiempo de ejecución: %.10f segundos\n", cpu_time_used);

    return 0;
}
