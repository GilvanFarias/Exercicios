#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	int numElementos = 5, i=0;
	int vetor[10];
	int num[10];
	int tentativas=3;
	
	for(int i=0; i<numElementos; i++){
		
		cout<< "Digite "<<i+1<< " n�mero ";
		cin>> vetor[i];
		
		system("CLS");
		
		
	}
			 
		for(i; i<numElementos; i++){
			
			if(num[i] < 3){
				cout<<"Digite umm n�mero";
				cin>>num[i];
				cout<<" Voc� errou";
			}else if(vetor[i] == num){
			
			cout<< "Parab�ns voc� acertou\n";
			cout<< " Esse n�mero est� na posi��o "<<num[i];
			return 0;
			
			}
		
 		}
}
