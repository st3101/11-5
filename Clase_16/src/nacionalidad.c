/*
 * nacionalidad.c
 *
 *  Created on: 12 may. 2021
 *      Author: santi
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "nacionalidad.h"
#include "string.h"

Nacionalidad* nac_new(void)
{
	return (Nacionalidad*) malloc(sizeof(Nacionalidad));
}

Nacionalidad* nac_newParam(int idNacionalidad,char* descripcion,int idProducto)
{
	Nacionalidad* pNacionalidad = nac_new();

	if(pNacionalidad != NULL)
	{
		if(nac_setIdNacionalidad(pNacionalidad, idNacionalidad) || nac_setDescripcion(pNacionalidad, descripcion) || nac_setIdProducto(pNacionalidad, idProducto))
		{

			nac_delete(pNacionalidad);
			pNacionalidad=NULL;
		}
	}


	return pNacionalidad;

}

int nac_setIdNacionalidad(Nacionalidad* this,int idNacionalidad)
{
	int retorno = -1;



	if(this != NULL && idNacionalidad >= 0)
	{
		this->idNacionalidad=idNacionalidad;
		retorno = 0;
	}

	return retorno;
}
int nac_getIdNacionalidad(Nacionalidad* this,int* flagError)
{
	*flagError = -1;
	int aux;

	if(this != NULL)
	{
		aux=this->idNacionalidad;
		*flagError = 0;
	}

 return aux;
}

int nac_setDescripcion(Nacionalidad* this,char* descripcion)
{
	int retorno = -1;

	if(this != NULL && descripcion != NULL && utn_validarLetra(descripcion))
	{
		strcpy(this->descripcion,descripcion);
		retorno = 0;
	}

	return retorno;
}

char* nac_getDescripcion(Nacionalidad* this,int* flagError)
{
	*flagError=-1;
	char* aux=NULL;

	if(this != NULL && flagError != NULL)
	{
		aux=this->descripcion;
		*flagError=0;
	}

	return aux;
}
int nac_setIdProducto(Nacionalidad* this,int idProducto)
{
	int retorno = -1;

	if(this != NULL && idProducto >= 0)
	{
		this->idProducto=idProducto;
		retorno = 0;
	}

	return retorno;
}
int nac_getIdProducto(Nacionalidad* this,int* flagError)
{
	*flagError = -1;
	int aux;

	if(this != NULL)
	{
		aux=this->idProducto;
		*flagError = 0;
	}

 return aux;
}

int nac_delete(Nacionalidad* this)
{
	int retorno = -1;

	if(this != NULL)
	{
		free(this);
		retorno = 0;
	}

	return retorno;
}
