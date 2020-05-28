#include <iostream>
#include <locale>
#include  <cmath>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");

	int num1, calCubo, calQuad;
	
	cout << "Digite um número inteiro: ";
	cin >> num1;
	
	calCubo = pow (num1,6);
	
	cout << "O resultado de "<< num1 << " elevado ao cubo é : " << calCubo << endl;
	
	calQuad = pow (num1,2);
	
	cout << "O resultado de " << num1 << "elevado ao quadrado é: " << calQuad;
	
	
	

}
