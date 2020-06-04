#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	cout<< " Mostra menor número\n";
	
	int num1, num2, num3, menor;
	int cont=0;
	
	cout<< " Digite um número ";
	cin>> num1;
	
	cout<< "Digite um número ";
	cin>> num2;
	
	if(num1<num2){
		
		menor= num1;
		
	}else{
		
		menor =num2;
	}
	
	for(cont; cont < 4; cont++){
		
		cout<< " Digite um número ";
		cin>> num3;
		
		if(num3 < menor){
			
			menor = num3;
			cont++;
		}if(cont == 3){
			
			cout<< " O número menor é "<< menor;
		}
		
		
		
	}
		
		
		
	
	
	
	
}
