#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	int num, resto;
	
	cout << "Digite um n�mero inteiro: ";
	cin >> num;
	
	resto = num%2;
	
	if(resto == 0){
		
		cout << "O n�mero digitado �: " << num << " par";
		
	}else{
		
		cout << "O n�mero digitado �: " << num << " impar"; 
	}
}
