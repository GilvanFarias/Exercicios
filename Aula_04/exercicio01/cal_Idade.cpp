#include <iostream> //Sinaliza a inclus�o da biblioteca iostream, que permite o uso dos comandos cin e cout, entre outros.//

using namespace std; // Um namespace � uma regi�o declarativa que fornece um escopo para os identificadores (nomes dos tipos, fun��o, vari�veis etc.) 
//dentro dele. Todas as declara��es dentro desses blocos s�o declaradas no escopo nomeado.//
//Utilizar esta linha no in�cio do programa faz com que n�o precisemos escrever std::cout <<"Ano atual: ".//

int main(){   //Os programas em C s�o organizados em forma de fun��o. A fun��o principal � denominada main, esta linha marca a abertura da fun��o principal do programa.//
	
	int anoAtual, anoNasc,  idade; //  Declara as vari�veis anoAtual, anoNasc e idade, e as declara como sendo do tipo inteiro. 
	//Essas vari�veis ir�o armazenar, respectivamente, o ano atual, o ano de nascimento do usu�rio e a idade a ser calculada pelo programa.//

	
	cout << "Ano Atual: "; //Exibe, em tela, a mensagem entre aspas.//
	cin >> anoAtual; //Recebe, via teclado, um valor e o armazena na vari�vel anoAtual//
	
	cout << "Ano de nascimento: "; 
	cin >> anoNasc;
	
	idade= anoAtual - anoNasc; //Calcula a idade do usu�rio realizando a subtra��o entre o ano atual e ano de nascimento e armazena na vari�vel idade.//

	
	cout << "Voc� tem ou far� " << idade << " anos.";
	
}

