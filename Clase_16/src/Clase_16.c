/*
 ============================================================================
 Name        : Examen_memoriaDinamica.c
 Author      : asdasd
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "producto.h"
#include "utn.h"

#define CAN_PRODUCTOS 10

int main(void) {
	setbuf(stdout,NULL);

	int flagError;

	Producto* arrayProducto[CAN_PRODUCTOS];

	arrayProducto[0]=pro_newParam(0, "TELA", 0, 0);

	printf("%-15s%-15s%-15s%-15s\n","ID PRODUCTO","DESCRIPCION","ID NACIONALIDAD","ID TIPO");
	printf("%-15d%-15s%-15d%-15d",pro_getId(arrayProducto[0],&flagError),pro_getDescripcion(arrayProducto[0], &flagError),pro_getIdNacionalidad(arrayProducto[0], &flagError),pro_getIdTipo(arrayProducto[0], &flagError));


	/*
	arrayClientes[0]=cli_newParam("Santiago", "Leonardi", "42640255", 0);
	arrayClientes[1]=cli_newParam("PAPA", "CACA", "42000000", 1);


	printf("El nombre es: %s\nEl apellido es: %s\nEl DNI es: %s \nEl idCliente es: %d\n",cli_getNombre(arrayClientes[0],&flagError),
   			   																		     cli_getApellido(arrayClientes[0],&flagError),
																					     cli_getDni(arrayClientes[0], &flagError),
																					     cli_getId(arrayClientes[0],&flagError));

	printf("\nEl nombre es: %s\nEl apellido es: %s\nEl DNI es: %s \nEl idCliente es: %d\n",cli_getNombre(arrayClientes[1],&flagError),
	   			   																		 cli_getApellido(arrayClientes[1],&flagError),
																						 cli_getDni(arrayClientes[1], &flagError),
																						 cli_getId(arrayClientes[1],&flagError));


	for(int i=0;i<CAN_CLIENTES;i++)
	{
		arrayClientes[i]=NULL;
	}

	do
	{
		utn_getInt(&opcion, "1)Alta cliente\n2)Baja cliente\nOPCION: ", "Error, ");

		switch (opcion) {
			case 1:
				for(int i=0;i<CAN_CLIENTES;i++)
				{
					if(arrayClientes[i]==NULL)
					{
						arrayClientes[i]=cli_alta(arrayClientes[i], CAN_CLIENTES);
						break;
					}
				}
				break;

			case 2:
					for(int i=0;i<CAN_CLIENTES;i++)
					{
						if(arrayClientes[i] != NULL && CAN_CLIENTES > 0)
						{
							printf("%d)El nombre es: %s\n",i,arrayClientes[i]->nombre);
						}
					}

					if(utn_getInt(&indice, "Ingrese el indice del cliente a dar de baja: ", "Error, "))
					{
						if(arrayClientes[indice]!=NULL)
						{
							arrayClientes[indice]=NULL;
							free(arrayClientes[indice]);
						}
					}



				break;
			case 3:
				for(int i=0;i<CAN_CLIENTES;i++)
				{
					if(arrayClientes[i] != NULL && CAN_CLIENTES > 0)
					{
						printf("El nombre es: %s\n",arrayClientes[i]->nombre);
					}
				}
				break;
			default:
				break;
		}

	}while(salir==0);

*/
	return EXIT_SUCCESS;
}
