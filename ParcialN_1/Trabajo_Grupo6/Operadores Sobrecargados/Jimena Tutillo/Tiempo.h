
class Tiempo {
   private:
      int hora;             
      int minuto;           
      
   public:
      Tiempo() {
         hora = 0;
         minuto = 0;
      }
      Tiempo(int h, int m) {
         hora = h;
         minuto = m;
      }
      void mostrarTiempo();
      Tiempo operator++ ();
      Tiempo operator++(int);
};


