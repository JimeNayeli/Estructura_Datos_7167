#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Lista.h"
#include "../Project1/Nodo.h"
#include "../Project1/Persona.h"
#include "../Project1/Persona.cpp"
#include "../Project1/Validacion.h"
#include "../Project1/Procesos.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PruebasUnitarias
	/*****************************VALIDAR CEDULA TEST*******************************/
{
	TEST_CLASS(PruebasUnitarias)
	{
	public:
		
		TEST_METHOD(validarCedula1)
		{
			std::string id = "1724701402";
			Assert::AreEqual(true, validarCedula(id));

		}
		TEST_METHOD(validarCedula2)
		{
			std::string id = "1719132027";
			Assert::AreEqual(true, validarCedula(id));
		}

		TEST_METHOD(validarCedula3)
		{
			std::string id = "123456798";
			Assert::AreEqual(true, validarCedula(id));
		}
	};
	/*************************VALIDAR LETRA TEST**********************/
	TEST_CLASS(Validation2)
	{
	public:

		TEST_METHOD(validarLetra1)
		{
			std::string id = "123456798";
			Assert::AreEqual(true, validarLetra(id));
		}
		TEST_METHOD(validarLetra2)
		{
			std::string id = "Hola";
			Assert::AreEqual(true, validarLetra(id));
		}
		TEST_METHOD(validarLetra3)
		{
			std::string id = "Paul";
			Assert::AreEqual(true, validarLetra(id));
		}
	};
	/*************************VALIDAR NUMERO TEST**********************/
	TEST_CLASS(Validation3)
	{
	public:

		TEST_METHOD(validarEntero1)
		{
			std::string id = "123456798";
			Assert::AreEqual(true, validarEntero(id));
		}
		TEST_METHOD(validarEntero2)
		{
			std::string id = "58";
			Assert::AreEqual(true, validarEntero(id));
		}
		TEST_METHOD(validarEntero3)
		{
			std::string id = "123Yulli";
			Assert::AreEqual(true, validarEntero(id));
		}
	};
	/*****************CREATE CORREO TEST*************************/
	TEST_CLASS(Generator3)
	{
	public:

		TEST_METHOD(create_email1)
		{
			Persona persona = Persona("1724701402", "Jimena", "Nayeli", "Tutillo", "Quito", "0984008409","HAD345");
			Lista list;
			Nodo* primero;
			std::string email = "jntutillo@espe.edu.ec";
			Assert::AreEqual(email, list.generarCorreo(primero, persona));
		}
		TEST_METHOD(create_email2)
		{
			Persona persona = Persona("1724701402", "Jimena", "Nayeli", "Tutillo", "Quito", "0984008409", "HAD345");
			Lista list;
			Nodo* primero;
			std::string email = "jntutillo@espe.edu.ec";
			Assert::AreEqual(email, list.generarCorreo(primero, persona));
		}
		TEST_METHOD(create_email3)
		{
			Persona persona = Persona("1724701402", "Jimena", "Nayeli", "Tutillo", "Quito", "0984008409", "HAD345");
			Lista list;
			Nodo* primero;
			std::string email = "jntutillo@espe.edu.ec";
			Assert::AreEqual(email, list.generarCorreo(primero, persona));
		}
	};



}
