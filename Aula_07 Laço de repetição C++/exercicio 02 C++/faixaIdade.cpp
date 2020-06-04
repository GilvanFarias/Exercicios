#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	int idade;
	
	cout << "*****************Digite a sua categoria********************" << "\n";
	cout << " INFANTIL - Competidores entre 7 e 12 anos" << "\n";
	cout << " JUVENIL  - Competidores entre 13 e 17 anos" << "\n";
	cout << " ADULTO   - Competidores entre 18 e 49 anos" << "\n";
	cout << " SENIOR   - Competidores com 50 anos ou mais" << "\n";
	cout << "************************************************************" << "\n";
	
	cout << " Digite a sua idade: ";
	cin >> idade;
	
	while( idade! = -1)
	
		
		if (idade >= 7 && idade <= 12){
			
			cout << " Sua categoria é a infantil";
			
		} else if(idade >= 13 && idade <= 17){
			
			cout << " Sua categoria é a Juvenil \n";
			
		}
		
		cout << " Digite a sua idade: ";
		cin >> idade;
	

}
