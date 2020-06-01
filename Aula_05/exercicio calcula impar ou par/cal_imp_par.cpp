#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	int num, resto;
	
	cout << "Digite um número inteiro: ";
	cin >> num;
	
	resto = num%2;
	
	if(resto == 0){
		
		cout << "O número digitado é: " << num << " par";
		
	}else{
		
		cout << "O número digitado é: " << num << " impar"; 
	}
}
