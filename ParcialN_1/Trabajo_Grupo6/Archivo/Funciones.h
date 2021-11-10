#include <stdlib.h>
class Funciones{
	public:
		template<class... Args>
		auto sumar(Args... args);
		void leerArchivo();
};

