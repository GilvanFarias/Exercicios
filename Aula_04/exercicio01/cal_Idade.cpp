#include <iostream> //Sinaliza a inclusão da biblioteca iostream, que permite o uso dos comandos cin e cout, entre outros.//

using namespace std; // Um namespace é uma região declarativa que fornece um escopo para os identificadores (nomes dos tipos, função, variáveis etc.) 
//dentro dele. Todas as declarações dentro desses blocos são declaradas no escopo nomeado.//
//Utilizar esta linha no início do programa faz com que não precisemos escrever std::cout <<"Ano atual: ".//

int main(){   //Os programas em C são organizados em forma de função. A função principal é denominada main, esta linha marca a abertura da função principal do programa.//
	
	int anoAtual, anoNasc,  idade; //  Declara as variáveis anoAtual, anoNasc e idade, e as declara como sendo do tipo inteiro. 
	//Essas variáveis irão armazenar, respectivamente, o ano atual, o ano de nascimento do usuário e a idade a ser calculada pelo programa.//

	
	cout << "Ano Atual: "; //Exibe, em tela, a mensagem entre aspas.//
	cin >> anoAtual; //Recebe, via teclado, um valor e o armazena na variável anoAtual//
	
	cout << "Ano de nascimento: "; 
	cin >> anoNasc;
	
	idade= anoAtual - anoNasc; //Calcula a idade do usuário realizando a subtração entre o ano atual e ano de nascimento e armazena na variável idade.//

	
	cout << "Você tem ou fará " << idade << " anos.";
	
}

