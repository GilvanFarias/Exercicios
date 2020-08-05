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
		
		cout<< "Digite "<<i+1<< " número ";
		cin>> vetor[i];
		
		system("CLS");
		
		
	}
			 
		for(i; i<numElementos; i++){
			
			if(num[i] < 3){
				cout<<"Digite umm número";
				cin>>num[i];
				cout<<" Você errou";
			}else if(vetor[i] == num){
			
			cout<< "Parabéns você acertou\n";
			cout<< " Esse número está na posição "<<num[i];
			return 0;
			
			}
		
 		}
}
