#include <iostream>
#include <string>
using namespace std;
void matrizMet(int**, int);
int main() {
	int const l = 10;
	float a = 1.0;
	cout << a << "\n";	
	int** matriz = new int*[l];
	for(int i=0;i<l;i++){
		matriz[i]= new int[l];
	}
	for (int i = 0;i < l;i++) {
		matriz[0][i] = i;
	}
	for (int i = 0;i < l;i++) {
		cout << matriz[0][i];
	}
	matrizMet(matriz, l);
	for (int i = 0;i < l;i++) {
		cout << matriz[0][i] << endl;
	}
	return 0;
}
void matrizMet(int** matriz,int l) {
	for (int i = 0;i<l;i++) {
		matriz[0][i] = 0;
	}
}
