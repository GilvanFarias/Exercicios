#include <iostream>

using namespace std;

int main(){
	
	int num, resto;
	
	cout << "Digite um n�mero inteiro: ";
	cin >> num;
	
	resto = num%2;
	
	if(resto == 0){
		
		cout << "O n�mero " << num << "� par";
		
	}else{
		
		cout << "O n�mero " << num << " � impar"; 
	}
}
