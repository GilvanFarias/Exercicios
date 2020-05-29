#include <iostream>

using namespace std;

int main(){
	
	int num, resto;
	
	cout << "Digite um número inteiro: ";
	cin >> num;
	
	resto = num%2;
	
	if(resto == 0){
		
		cout << "O número " << num << "é par";
		
	}else{
		
		cout << "O número " << num << " é impar"; 
	}
}
