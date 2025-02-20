/*
 * PruebaUsuario.cpp
 *
 *  Created on: 7 feb 2025
 *      Author: jose
 */


#include "PruebasUsuario.h"
#include "Usuario.h"

#include <iostream>
using namespace std;


void pruebasUsuariosInstanciasEstica(){
	cout<<"INICIANDO PRUEBAS SOBRE OBJETOS ESTATICOS DE LA CLASE USUARIO"<<endl;
	Usuario u1;
	u1.mostrar();

	u1.setNombreCompleto("Ana Sánchez");
	u1.setTelefono("+34 111111111");
	u1.setEdad(23);
	u1.mostrar();

	string nombre1=u1.getNombreCompleto();
	cout<<"el nombre completo obtenido de getNombre es = "+nombre1<<endl;


	string nombre2;
	u1.getNombreCompleto(nombre2);
	cout<<"el nombre completo obtenido de getNombre es = "+nombre2<<endl;

	string usuario1= u1.pasarACadena();
	cout << "Datos del usuario 1 devueltos por pasarACadena:"<<endl;
	cout<< usuario1<<endl;

	Usuario u2=u1; // o también:Usuario u2(u1)
	u2.mostrar();


}

void pruebasUsuarioInstanciasDinamicas(){
		cout<<"INICIANDO PRUEBAS SOBRE OBJETOS DINAMICAS DE LA CLASE USUARIO"<<endl;

		//caso 1: constructor por defecto
		Usuario *usuario1;
		usuario1 = new Usuario();

		usuario1->setNombreCompleto("Fuentes Morales, Juan");
		usuario1->setEdad(20);
		usuario1->setTelefono("658394876");
		usuario1->mostrar();

		//caso 2: constructor parametrizado 1
		Usuario *usuario2;
		usuario2 = new Usuario("Fuentes Morales, Juan","658394876",20);

		//caso 2: constructor parametrizado 1
		Usuario *usuario3;
		usuario3 = new Usuario("Fuentes Morales, Juan","658394876",20,"ES9485",100);

		//caso 3: constructor por copia
		Usuario * Usuario4;
		Usuario4 = new Usuario(*usuario3);

}

