#include <stdio.h>


int main (){
    int opcion;
    struct alumno
    {
      int matricula;
      char nombre [50];
      char direccion [50];
      char materia [50];
      float nota;  
    }

    int opcion;


    do {
        printf("1.- Ingresa un alumno nuevo");
        printf("2.- Ver los alumnos ingresados");
        printf("3.- Salir");
        printf("Seleccione una opcion");

        scanf("%d",&opcion);


    switch (opcion) {
            case 1:  // Ingresar alumno 
               
            case 2:  //ver alumos

            case 3:  
                printf("Eligio la opcion de salir");
                break;
        }
    } while (opcion != 3);

    return 0;
}