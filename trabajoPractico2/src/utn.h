/*
 * utn.h
 *
 *  Created on: 26 jun. 2021
 *      Author: JoaX
 */

#define LIMITE_BUFFER_STRING 4096
int utn_getInt(char* mensaje, char* mensajeError, int* pResultado,int reintentos,int maximo,int minimo);
int utn_getFloat(char* mensaje,char* mensajeError,float* pResultado,float minimo,float maximo,int reintentos);
int esUnNombreValido(char* cadena,int limite);
int utn_getNombre(char* mensaje, char* mensajeError, char* pResultado,int reintentos, int limite);
int esFlotante(char* array,int limite);
int getFloat(float* pFloat);
