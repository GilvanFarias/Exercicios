#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	int vetor[10];
	
	for(int i=0; i<10; i++){
		
		cout<< "Digite um número";
		cin>> vetor[i];
		
	}
}
