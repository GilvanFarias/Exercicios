#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	float num1, num2, num3;
	
	cout << "Digite a medida do 1 lado do triângulo" << endl;
	cin >> num1;
	
	cout << "Digite a medida do 2 lado do triãngulo" << endl;
	cin >> num2;
	
	cout << "Digite a medida do 3 lado do triângulo" << endl;
	cin >> num3;
	
	if (num1 == num2 && num2 == num3){
	
		cout << " O triângulo é Equilatero " << endl;
	
	}else if(num1==num2 || num2 == num3 ||num3 == num1){
	
		cout << " O triângulo é Escaleno " << endl;
		
	}else if(num1 == !num2 || !num2 == !num3){
		
		cout << "O triângulo é Isósceles";
	}
	
	
}
