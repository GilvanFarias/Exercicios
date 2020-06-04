#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
    int num, soma;
    int cont = 0;
    cout << " Quantidade de multiplos de 3 de um número\n";
    
    for(cont; cont < 10; cont++){
    	
    	cout << " Digite um número ";
    	cin >> num;
    	
    	soma = soma + num;
    	
	}
	
	 cout << "quantidade de multiplos de 3 é: " << soma/3;
	
}
