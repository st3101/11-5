/*
 * nacionalidad.h
 *
 *  Created on: 11 may. 2021
 *      Author: santi
 */

#ifndef NACIONALIDAD_H_
#define NACIONALIDAD_H_

typedef struct
{
	int idNacionalidad;
	char descripcion[64];
	int idProducto;
}Nacionalidad;

Nacionalidad* nac_new(void);
Nacionalidad* nac_newParam(int idNacionalidad,char* descripcion,int idProducto);
int nac_delete(Nacionalidad* this);


int nac_setIdNacionalidad(Nacionalidad* this,int IdNacionalidad);
int nac_getIdNacionalidad(Nacionalidad* this,int* flagError);


int nac_setDescripcion(Nacionalidad* this,char* descripcion);
char* nac_getDescripcion(Nacionalidad* this,int* flagError);

int nac_setIdProducto(Nacionalidad* this,int idProducto);
int nac_getIdProducto(Nacionalidad* this,int* flagError);




#endif /* NACIONALIDAD_H_ */
