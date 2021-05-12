/*
 * cliente.h
 *
 *  Created on: 9 may. 2021
 *      Author: santi
 */

#ifndef PRODUCTO_H_
#define PRODUCTO_H_

typedef struct
{
	int idProducto;
	char descripcion[64];
	int idNacionalidad;
	int idTipo;
	float precio;

}Producto;


Producto* pro_new(void);
Producto* pro_newParam(int idProducto,char* descripcion,int idNacionalidad,int idTipo);
int pro_delete(Producto* this);

int pro_setId(Producto* this,int idProducto);
int pro_getId(Producto* this,int* flagError);

int pro_setDescripcion(Producto* this,char* descripcion);
char* pro_getDescripcion(Producto* this,int* flagError);

int pro_setIdNacionalidad(Producto* this,int idNacionalidad);
int pro_getIdNacionalidad(Producto* this,int* flagError);

int pro_setIdTipo(Producto* this,int idTipo);
int pro_getIdTipo(Producto* this,int* flagError);





/*
int cli_inicializarLibre(Producto* array,int len);
int cli_BuscarLibre(Producto* array,int len,int* indice);
Producto* cli_alta(Producto* array,int len);
int cli_MostrarUno(Producto* objeto);
int cli_MostrarTodos(Producto* array,int len);
*/
#endif /* PRODUCTO_H_ */
