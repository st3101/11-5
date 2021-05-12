/*
 * cliente.c
 *
 *  Created on: 9 may. 2021
 *      Author: santi
 */

#include "producto.h"

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "string.h"


Producto* pro_new(void)
{
	return (Producto*)malloc(sizeof(Producto));
}

Producto* pro_newParam(char* nombre,char* apellido,char* dni,int idEmpleado)
{
	Producto* pCliente = cli_new();

	if(pCliente != NULL)
	{
		if(pro_set)
		{
				pro_delete(pCliente);
				pCliente = NULL;
		}
	}

	return pCliente;
}

int cli_delete(Producto* this)
{
	int retorno = -1;

	if(this != NULL)
	{
		free(this);
		retorno = 0;
	}

	return retorno;
}
/*

//NOMBRE
int cli_setNombre(Producto* this,char* nombre)
{
	int retorno =-1;

	if(this != NULL && nombre != NULL && utn_validarLetra(nombre))
	{
		strcpy(this->nombre,nombre);
		retorno = 0;
	}

	return retorno;
}
char* cli_getNombre(Producto* this,int* flagError)
{
	char* auxNombre=NULL;
	*flagError= -1;

	if(this != NULL && flagError != NULL )
	{
		auxNombre=this->nombre;
		*flagError= 0;
	}

	return auxNombre;
}

//APELLIDO
int cli_setApellido(Producto* this,char* apellido)
{
	int retorno = -1;

	if(this != NULL && apellido != NULL && utn_validarLetra(apellido))
	{
		strcpy(this->apellido,apellido);
		retorno = 0;
	}

		return retorno;
}
char* cli_getApellido(Producto* this,int* flagError)
{
	char* auxApellido=NULL;
	*flagError= -1;

	if(this != NULL && flagError != NULL)
	{
		auxApellido=this->apellido;
		*flagError= 0;
	}

	return auxApellido;
}

//DNI
int cli_setDni(Producto* this,char* dni)
{
	int retorno = -1;

	if(this != NULL && dni != NULL && utn_validarNumero(dni))
	{
		strcpy(this->dni,dni);
		retorno = 0;
	}

		return retorno;
}
char* cli_getDni(Producto* this,int* flagError)
{
	char* auxDni=NULL;
	*flagError= -1;

	if(this != NULL && flagError != NULL)
	{
		auxDni=this->dni;
		*flagError= 0;
	}

	return auxDni;
}
*/
//DNI
int pro_setId(Producto* this,int idProducto)
{
	int retorno = -1;

	if(this != NULL && idProducto >= 0)
	{
		this->idProducto=idProducto;
		retorno = 0;
	}

		return retorno;
}
int pro_getId(Producto* this,int* flagError)
{
	int auxId;
	*flagError= -1;

	if(this != NULL && flagError != NULL)
	{
		auxId=this->idProducto;
		*flagError= 0;
	}

	return auxId;
}
/*
int cli_BuscarLibre(Cliente* array,int len,int* indice)
{
	int retorno = 0;

	if(len > 0)
	{
		for(int i=0;i<len;i++)
		{
			if(array[i]==NULL)
			{
				*indice=i;
				retorno = 1;
				break;
			}
		}
	}
	return retorno;
}

Cliente* cli_inicializarLibre(Cliente* array,int len)
{
	int retorno=0;

	if(len > 0)
	{
		for(int i=0;i<len;i++)
		{

			array[i]=NULL;


			retorno = 1;
		}
	}
	return retorno;
}
*/
/*
Producto* cli_alta(Producto* array,int len)
{

	Producto* pCliente = (Producto*)malloc(sizeof(Producto));

	if(pCliente != NULL)
	{
		array=pCliente;
		utn_getSoloLetras(array->nombre, "Ingrese el nombre: ", "Error, ", 3);
	}


	return array;
}

int cli_MostrarUno(Producto* objeto)
{
	int retorno = 0;

	if(objeto != NULL)
	{
		printf("%15s",objeto->nombre);
		retorno = 1;
	}

	return retorno;
}
int cli_MostrarTodos(Producto* array,int len)
{
	int retorno=0;



	return retorno;
}
*/
