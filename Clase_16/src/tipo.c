/*
 * tipo.c
 *
 *  Created on: 12 may. 2021
 *      Author: santi
 */

#ifndef TIPO_C_
#define TIPO_C_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tipo.h"
#include "utn.h"

Tipo* tip_new(void)
{
	return (Tipo*)malloc(sizeof(Tipo));
}

Tipo* tip_newParam(int idTipo,char* marca,char* fabrica,char* tipoDeTela,int idProducto)
{
	Tipo* pTipo = tip_new();

	if(pTipo !=NULL)
	{
		if(tip_setIdTipo(pTipo, idTipo)||tip_setMarca(pTipo, marca)||tip_setFabrica(pTipo, fabrica)||tip_setTipoDeTela(pTipo, tipoDeTela)||tip_setIdProducto(pTipo, idProducto))
		{

			tip_delete(pTipo);
			pTipo=NULL;
		}
	}

	return pTipo;
}
int tip_delete(Tipo* this)
{
	int retorno = -1;

	if(this != NULL)
	{
		free(this);
		retorno = 0;
	}

	return retorno;
}

int tip_setIdTipo(Tipo* this,int idTipo)
{
	int retorno = -1;

	if(this != NULL && idTipo >= 0)
	{
		this->idTipo=idTipo;
		retorno = 0;
	}

	return retorno;
}
int tip_getidTipo(Tipo* this,int* flagError)
{
	*flagError = -1;
	int aux;

	if(this != NULL)
	{
		aux=this->idTipo;
		*flagError = 0;
	}

	return aux;
}

int tip_setMarca(Tipo* this,char* marca)
{
	int retorno = -1;

	if(this != NULL && marca != NULL && utn_validarLetra(marca))
	{
		strcpy(this->marca,marca);
		retorno = 0;
	}

	return retorno;
}
char* tip_getMarca(Tipo* this,int* flagError)
{
	*flagError=-1;
	char* aux=NULL;

	if(this != NULL && flagError != NULL)
	{
		aux=this->marca;
		*flagError=0;
	}
	return aux;
}
int tip_setFabrica(Tipo* this,char* fabrica)
{
	int retorno = -1;

	if(this != NULL && fabrica != NULL && utn_validarLetra(fabrica))
	{
		strcpy(this->fabrica,fabrica);
		retorno = 0;
	}

	return retorno;
}
char* tip_getFabrica(Tipo* this,int* flagError)
{
	*flagError=-1;
	char* aux=NULL;

	if(this != NULL && flagError != NULL)
	{
		aux=this->fabrica;
		*flagError=0;
	}
	return aux;
}
int tip_setTipoDeTela(Tipo* this,char* tipoDeTela)
{
	int retorno = -1;

	if(this != NULL && tipoDeTela != NULL && utn_validarLetra(tipoDeTela))
	{
		strcpy(this->tipoDeTela,tipoDeTela);
		retorno = 0;
	}

	return retorno;
}
char* tip_getTipoDeTela(Tipo* this,int* flagError)
{
	*flagError=-1;
	char* aux=NULL;

	if(this != NULL && flagError != NULL)
	{
		aux=this->tipoDeTela;
		*flagError=0;
	}
	return aux;
}
int tip_setIdProducto(Tipo* this,int idProducto)
{
	int retorno = -1;

	if(this != NULL && idProducto >= 0)
	{
		this->idProducto=idProducto;
		retorno = 0;
	}

	return retorno;
}
int tip_getIdProducto(Tipo* this,int* flagError)
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
#endif /* TIPO_C_ */
//leonardi :D
