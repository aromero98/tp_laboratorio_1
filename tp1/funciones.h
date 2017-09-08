#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


void lista();// menu de las calculadoras


void error();// muestra el error


void limpiarLista();// limpia el menu de la calcudora

int agregarOperando1 ();
int suma(int numero1, int numero2);//funcion de suma entre operandos ingresados


int resta(int numero1, int numero2);//funcion que hace la resta entre dos operandos


float division(int numero1, int numero2);//funcion que hace la multiplicacion entre dos operandos

int multiplicacion(int numero1, int numero2);//funcion que hace la multiplicacion entre dos operandos


// funcion que calcula por separado el factorial de X y el de Y
unsigned long long int factorialX(int numero1);
unsigned long long int factorialY(int numero2);



#endif // FUNCIONES_H_INCLUDED
