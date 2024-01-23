#include <stdio.h>

int main() {
    FILE *archivo;
    int opcion;

    struct Alumno 
    {
    int matricula;
    char nombre[50];
    char direccion[50];
    char materia[50];
    float nota ;
    };



    do {
        printf("1.- Ingresar un alumno nuevo\n");
        printf("2.- Mostrar alumnos ingresados\n");
        printf("3.- Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: {
                struct Alumno alumnoIngresado;

                printf("Ingrese la matrícula del alumno: ");
                scanf("%d", &alumnoIngresado.matricula);

                printf("Ingrese el nombre del alumno: ");
                scanf("%s", alumnoIngresado.nombre);

                printf("Ingrese la dirección del alumno: ");
                scanf("%s", alumnoIngresado.direccion);

                printf("Ingrese la materia del alumno: ");
                scanf("%s", alumnoIngresado.materia);

                printf("Ingrese la matrícula del alumno: ");
                scanf("%f", &alumnoIngresado.nota);

                
                archivo = fopen("alumnos.txt", "a");// En esta parte abre el archivo en modo de escritura  o crea uno nuevo

                fprintf(archivo, "%d %s %s %s %f\n", alumnoIngresado.matricula, alumnoIngresado.nombre, alumnoIngresado.direccion, alumnoIngresado.materia, alumnoIngresado.nota);// Escribe el alumno en el archivo

                fclose(archivo);// Cierra el archivo

                printf("Alumno ingresado con éxito.\n");
                break;
            }

            case 2: {
                struct Alumno alumno;

                
                archivo = fopen("alumnos.txt", "r");// Abre el archivo en modo de lectura para lo cualse usa r

                if (archivo == NULL) {
                    printf("No se puedo emcontrar el archivo\n");
                    break;
                }

                
                while (fscanf(archivo, "%d %s %s %s %f", &alumno.matricula, alumno.nombre, alumno.direccion, alumno.materia, alumno.nota) {

                    printf("Matricula: %d, Nombre: %s, Direccion: %s, Materia: %s\n", alumno.matricula, alumno.nombre, alumno.direccion, alumno.materia,alumno.nota);// se muestra cada alumno del archivo
                }

                
                fclose(archivo);// Se cierra el archivo
                break;
            }

            case 3:
                printf("Selecciono la opcion de salir\n");
                break;
        }

    } while (opcion != 3);

    return 0;
}