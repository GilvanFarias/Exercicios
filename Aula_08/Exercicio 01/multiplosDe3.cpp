#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
    int num, soma;
    int cont = 0;
    cout << " Quantidade de multiplos de 3 de um n�mero\n";
    
    for(cont; cont < 10; cont++){
    	
    	cout << " Digite um n�mero ";
    	cin >> num;
    	
    	soma = soma + num;
    	
	}
	
	 cout << "quantidade de multiplos de 3 �: " << soma/3;
	
}
