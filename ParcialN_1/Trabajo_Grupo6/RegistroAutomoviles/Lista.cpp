#include "Lista.h"
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <fstream>
using namespace std;
void Lista::insertarCabeza(Persona persona)
{
	
    Nodo *nuevo = new Nodo(persona);
    if(primero==NULL)
	{
		primero=nuevo;
		primero->setSiguiente(nuevo);
		primero->setAnterior(nuevo);
		ultimo=nuevo;
		
	}else{
		ultimo->setSiguiente(nuevo);
		nuevo->setSiguiente(primero);
		nuevo->setAnterior(ultimo);
		ultimo=nuevo;
		
	}
	ultimo->setSiguiente(primero);
}



Persona Lista::buscarPersona(string cedula)
{
    Persona persona;
    if(primero == NULL)
    {
        std::cout << "Lista vacia";
    }
    else
    {
        Nodo *auxiliar = primero;
        while(auxiliar != NULL)
        {
            if(cedula.compare(auxiliar->getPersona().getCedula()) != 0){
                auxiliar = auxiliar->getSiguiente();
            }else{
            	persona = auxiliar->getPersona();
	            std::cout<<"\nCedula:   | "<<auxiliar->getPersona().getCedula()<<std::endl;
	            std::cout<<"Nombre:   | "<<persona.getPrimerNombre()<<" "<<auxiliar->getPersona().getSegundoNombre()<<std::endl;
	            std::cout<<"Apellido: | "<<persona.getApellido()<<std::endl;
	            std::cout<<"Correo:   | "<<generarCorreo(primero,persona)<<"@espe.edu.ec"<<std::endl;
	            std::cout<<"Direccion:| "<<persona.getDireccion()<<std::endl;
	            std::cout<<"Telefono: | "<<persona.getTelefono()<<std::endl;
	            std::cout<<"Placa:    | "<<persona.getPlaca()<<std::endl;
	            std::cout<<"-----------------------------------------\n";
			
                return auxiliar->getPersona();
                return persona;
            }

        }

    }
    return persona;
}

void Lista::imprimir()
{
	if(primero!=NULL)
	{
		Nodo *auxiliar=primero;
		do{
			cout<<"\n";
			Persona persona = auxiliar->getPersona();
            std::cout<<"\nCedula:   | "<<auxiliar->getPersona().getCedula()<<std::endl;
            std::cout<<"Nombre:   | "<<persona.getPrimerNombre()<<" "<<auxiliar->getPersona().getSegundoNombre()<<std::endl;
            std::cout<<"Apellido: | "<<persona.getApellido()<<std::endl;
            std::cout<<"Correo:   | "<<generarCorreo(primero,persona)<<"@espe.edu.ec"<<std::endl;
            std::cout<<"Direccion:| "<<persona.getDireccion()<<std::endl;
            std::cout<<"Telefono: | "<<persona.getTelefono()<<std::endl;
            std::cout<<"Placa:    | "<<persona.getPlaca()<<std::endl;
            std::cout<<"-----------------------------------------\n";
            
            
            auxiliar = auxiliar->getSiguiente();
		}while(auxiliar!=primero);	
	}	
	else
	{
		cout<<"\nLista Vacia";
	}
    
}
void Lista ::archivo(){
		if(primero!=NULL)
	{
		Nodo *auxiliar=primero;
		do{
			ofstream guardar;
			guardar.open("registro.txt",ios::out | ios::app);
			if(guardar.fail()){
				cout<<"No se pudo crear el archivo";
				exit(1);
			}
			
			Persona persona = auxiliar->getPersona();
			guardar<<"\nDATOS DEL CLIENTE "<<endl;
			guardar<<"Primer nombre: "<<persona.getPrimerNombre()<<endl;
			guardar<<"Segundo nombre: "<<persona.getSegundoNombre()<<endl;
			guardar<<"Apellido: "<<persona.getApellido()<<endl;
			guardar<<"Cedula "<<persona.getCedula()<<endl;
			guardar<<"Correo:  "<<generarCorreo(primero,persona)<<"@espe.edu.ec"<<endl;
			guardar<<"Direccion :"<<persona.getDireccion()<<endl;
			guardar<<"Telefono :"<<persona.getTelefono()<<endl;
			guardar<<"Placa :"<<persona.getPlaca()<<endl;
			guardar.close();
		    auxiliar = auxiliar->getSiguiente();
		}while(auxiliar!=primero);	
		cout<<"\nLos datos se guardaron correctamente en el archivo...";
		system("pause");
	}	
	else
	{
		cout<<"\nLista Vacia";
	}
	
		  
}

Nodo *Lista::getPrimero()
{
    return this->primero;
}

string Lista::generarCorreo(Nodo* primero, Persona &persona)
{
    Nodo *auxiliar = primero;
    string inicialesNombre = "";
    string inicialApellido = "";
    string numFCed="";
    int contadorI;
    string strAux;
    inicialesNombre.push_back(tolower(persona.getPrimerNombre()[0]));
    inicialesNombre.push_back(tolower(persona.getSegundoNombre()[0]));
    
    string correo = inicialesNombre + persona.getApellido() + persona.getCedula()[8]+persona.getCedula()[9];
    inicialApellido.push_back(tolower(persona.getApellido()[0]));
    correo.replace(2,1,inicialApellido);
    while(auxiliar!=primero)
    {
        if(auxiliar->getPersona().getCorreo().compare(correo)==0)
        {
            strAux = auxiliar->getPersona().getCorreo();
            char contador = strAux.at(strAux.length()-1);
            stringstream ss;
            strAux="";
            strAux.push_back(contador);
            ss << strAux;
            ss >> contadorI;
            contadorI++;
            correo.replace(correo.length()-1,1,to_string(contadorI));
        }
        
        auxiliar = auxiliar->getSiguiente();
    }
    return correo;
}

bool Lista::buscarDuplicado(string cedula){
	if(primero!=NULL)
	{
		Nodo *auxiliar=primero;
		do{
			if(auxiliar->getPersona().getCedula().compare(cedula)==0)
			{
            	return false;
       	    }
            auxiliar = auxiliar->getSiguiente();
		}while(auxiliar!=primero);	
	}	
	
	return true;
}

bool Lista::buscarDuplicadoPlaca(string placa){
    if(primero!=NULL)
	{
		Nodo *auxiliar=primero;
		do{
			if(auxiliar->getPersona().getPlaca().compare(placa)==0)
			{
            	return false;
       	    }
            auxiliar = auxiliar->getSiguiente();
		}while(auxiliar!=primero);	
	}	
	
	return true;
}

/*int Lista::buscarDuplicadoNombre(string placa){
    if(primero!=NULL)
	{
		Nodo *auxiliar=primero;
		do{
			if(auxiliar->getPersona().getPlaca().compare(placa)==0)
			{
            	return false;
       	    }
            auxiliar = auxiliar->getSiguiente();
		}while(auxiliar!=primero);	
	}	
	
	return true;
}*/