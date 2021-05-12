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


Producto* cli_new(void);

int pro_setId(Producto* this,int idProducto);
int pro_getId(Producto* this,int* flagError);
/*
Producto* cli_newParam(char* nombre,char* apellid,char* dni,int idEmpleado);
int cli_delete(Producto* this);

int cli_setNombre(Producto* this,char* nombre);
char* cli_getNombre(Producto* this,int* flagError);

int cli_setApellido(Producto* this,char* apellido);
char* cli_getApellido(Producto* this,int* flagError);

int cli_setDni(Producto* this,char* dni);
char* cli_getDni(Producto* this,int* flagError);




int cli_inicializarLibre(Producto* array,int len);
int cli_BuscarLibre(Producto* array,int len,int* indice);
Producto* cli_alta(Producto* array,int len);
int cli_MostrarUno(Producto* objeto);
int cli_MostrarTodos(Producto* array,int len);
*/
#endif /* PRODUCTO_H_ */
