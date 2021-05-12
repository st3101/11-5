/*
 * tipo.h
 *
 *  Created on: 11 may. 2021
 *      Author: santi
 */

#ifndef TIPO_H_
#define TIPO_H_

typedef struct
{
	int idTipo;
	char marca[64];
	char fabrica[64];
	char tipoDeTela[64];
	int idProducto;
}Tipo;

Tipo* tip_new(void);
Tipo* tip_newParam(int idTipo,char* marca,char* fabrica,char* tipoDeTela,int idProducto);
int tip_delete(Tipo* this);

int tip_setIdTipo(Tipo* this,int idTipo);
int tip_getidTipo(Tipo* this,int* flagError);

int tip_setMarca(Tipo* this,char* marca);
char* tip_getMarca(Tipo* this,int* flagError);

int tip_setFabrica(Tipo* this,char* fabrica);
char* tip_getFabrica(Tipo* this,int* flagError);

int tip_setTipoDeTela(Tipo* this,char* tipoDeTela);
char* tip_getTipoDeTela(Tipo* this,int* flagError);

int tip_setIdProducto(Tipo* this,int idProducto);
int tip_getIdProducto(Tipo* this,int* flagError);


#endif /* TIPO_H_ */
