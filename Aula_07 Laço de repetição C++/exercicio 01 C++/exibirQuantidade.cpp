#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	float idade, peso, mediaIdade, mediaPeso;
	int pessoas = 0, somaIdade = 0, somaPeso = 0;
	
	cout << " Digite sua idade";
	cin >> idade;
	
	cout << " Digite seu peso ";
	cin >> peso;
		
		while (pessoas >= 0){
			
		somaIdade = somaIdade + idade;
		somaPeso = somaPeso + peso;
			
		if(idade == 0 && peso == 0){
			
		cout << " Total de pessoa(s): " << pessoas << "\n";
		
		cout << " a idade média delas é:  " << somaIdade / pessoas << "\n";
		
		cout << " O peso médio delas é: " << somaPeso / pessoas;
		
		cout << "\n" << " Sistema Finalizado!!" << "\n";
		
		return 0;
	}
			
		cout << " Digite sua idade";
		cin >> idade;
	
		cout << " Digite seu peso ";
		cin >> peso;
		

        pessoas ++;
	}
	     
	
	
	
}
