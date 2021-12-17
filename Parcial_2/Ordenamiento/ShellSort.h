using namespace std;
class ShellSort {
	public:
	 int vector[100], temp, inc, i, j;
	 void generar(int arreglo[],int);
	 void ordenar(int[], int);
	 void mostrar(int[], int);
};
void ShellSort::ordenar(int V[], int N) {
	 for (inc = 1; inc < N;inc = inc * 3 + 1);
	 while (inc > 0) {
		 for (i = inc; i < N; i++) {
			 j = i;
			 temp = V[i];
			 while ((j >= inc) && (V[j - inc] > temp)) {
				 V[j] = V[j - inc];
				 j = j - inc;
			}
		 	V[j] = temp;
		 }
	 inc /= 2;
	 }
}
void ShellSort::mostrar(int V[], int N) {
	for (int i = 0;i < N;i++) {
		cout << V[i] << " ";
	}
}
void ShellSort::generar(int arreglo[],int n) {
	srand(time(NULL)); 
	for (int i = 0; i < n; i++) {
	arreglo[i] = 1 + rand() % 10; 
	}
}
