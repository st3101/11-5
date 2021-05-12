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

Producto* pro_newParam(int idProducto,char* descripcion,int idNacionalidad,int idTipo)
{
	Producto* pProducto = pro_new();

	if(pProducto != NULL)
	{
		if(pro_setId(pProducto, idProducto) || pro_setDescripcion(pProducto, descripcion) || pro_setIdNacionalidad(pProducto, idNacionalidad) || pro_setIdTipo(pProducto, idTipo))
		{

				pro_delete(pProducto);
				pProducto = NULL;
		}
	}
	return pProducto;
}

int pro_delete(Producto* this)
{
	int retorno = -1;

	if(this != NULL)
	{
		free(this);
		retorno = 0;
	}

	return retorno;
}

int pro_setDescripcion(Producto* this,char* descripcion)
{
	int retorno =-1;

	if(this != NULL && descripcion != NULL && utn_validarLetra(descripcion))
	{
		strcpy(this->descripcion,descripcion);
		retorno = 0;
	}

	return retorno;
}
char* pro_getDescripcion(Producto* this,int* flagError)
{
	char* auxDescripcion=NULL;
	*flagError= -1;

	if(this != NULL && flagError != NULL )
	{
		auxDescripcion=this->descripcion;
		*flagError= 0;
	}

	return auxDescripcion;
}

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
int pro_setIdNacionalidad(Producto* this,int idNacionalidad)
{
	int retorno = -1;

	if(this != NULL && idNacionalidad >= 0)
	{
		this->idNacionalidad=idNacionalidad;
		retorno = 0;
	}

		return retorno;
}

int pro_getIdNacionalidad(Producto* this,int* flagError)
{
	int auxIdNacionalidad;
	*flagError= -1;

	if(this != NULL && flagError != NULL)
	{
		auxIdNacionalidad=this->idNacionalidad;
		*flagError= 0;
	}

	return auxIdNacionalidad;
}

int pro_setIdTipo(Producto* this,int idTipo)
{
	int retorno = -1;

	if(this != NULL && idTipo >= 0)
	{
		this->idTipo=idTipo;
		retorno = 0;
	}

		return retorno;
}

int pro_getIdTipo(Producto* this,int* flagError)
{
	int aux;
	*flagError= -1;

	if(this != NULL && flagError != NULL)
	{
		aux=this->idTipo;
		*flagError= 0;
	}

	return aux;
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
