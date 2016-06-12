//Tema3- Corrida de carros
#include <iostream> 
#include <string>// Para poder usar o tipo dado string
#include <ctime>// Para poder usar o tempo como semente do gerador de numero
using namespace std;

void imprimir_espacos(int total); //Identificando a função void criada.

int main(int argc, char* args[])// função principal.
{

	bool sair = false; // Variavel do tipo boleana para usar na condição do while.

	string jog1, jog2; //Variavel do tipo string para salvar os nomes dos jogadores, sem definir tamanho.
					   
	int total1 = 0, total2 = 0;//Variavel do tipo inteira para definir a quantidade de  espacos inicial de cada carrinho, e fazer à adição a cada rodada.

	cout << "Digite o nome do primeiro piloto:" << endl; //Solicita que o primeiro jogador digite seu nome.
	cin >> jog1; // Salva o nome digitado na variavel jog1.

	cout << "Digite o nome do segundo piloto:" << endl; //Solicita que o segundo jogador digite seu nome.
	cin >> jog2; // Salva o nome digitado na variavel jog2.

	//Usando o laço para determinar a hora de parar.(Usando a variavel boleana como condição)
	//Usando o laço while pq não se sabe o número de vezes que ele vai repetir.
	while (sair == false)
	{


		// Variavel inteira para definir o tamanho da pista.
		int total_espacos = 80;

		//Fazendo o calculo para gerar um numero aleatório. (USA O TEMPO PARA GERAR ESSE NUMERO)
		srand((int)time(0));

		//Para o jogador 1: Gera um numero aleatorio para o total de espacos (Entre 1 e 3)
		total_espacos = rand() % 3 + 1;

		total1 = total1 + total_espacos;

		//Para o jogador 2: Gera um numero aleatorio para o total de espacos (Entre 1 e 3)
		total_espacos = rand() % 3 + 1;

		total2 = total2 + total_espacos;

		//Imprimindo na tela a parte gráfica(desenho) dos carrinhos. Além, de mostrar o nome do jogador, o local de chegada, largada e o nome do jogo.

		cout << "Pista de corrida do Zé:" << endl;

		cout << "LARGADA:                                                               CHEGADA:" << endl;

		cout << "Piloto 1:" << jog1 << endl; // Usa o nome digitado no jog1 como nome do piloto 1.
		imprimir_espacos(total1);//Usa o numero aleatorio gerado no Total1 para definir a qntd de espaços que devem ser impressos.
		cout << "  _  " << endl;// 1º Parte do grafico do carrinho. (TETO)
		imprimir_espacos(total1);//Usa o numero aleatorio gerado no Total1 para definir a qntd de espaços que devem ser impressos.
		cout << "-o-o>" << endl;// 2º Parte do grafico do carrinho. (CORPO DO CARRO)
		cout << "_______________________________________________________________________________" << endl;//Imprimindo a pista 

																										  
		cout << "Valor que andou: " << total1 << endl;  //Total de espaços andando pelo carrinho 1


		cout << "Piloto 2:" << jog2 << endl;// Usa o nome digitado no jog2 como nome do piloto 2.
		imprimir_espacos(total2);//Usa o numero aleatorio gerado no Total2 para definir a qntd de espaços que devem ser impressos.
		cout << "  _  " << endl;// 1º Parte do grafico do carrinho. (TETO)
		imprimir_espacos(total2);//Usa o numero aleatorio gerado no Total2 para definir a qntd de espaços que devem ser impressos.
		cout << "-o-o>" << endl;// 2º Parte do grafico do carrinho. (CORPO DO CARRO)
		cout << "_______________________________________________________________________________" << endl;//Imprimindo a pista 

																										  
		cout << "Valor que andou: " << total2 << endl;  //Total de espaços andando pelo carrinho 2

		//Apaga tudo a cada rodada
		system("cls");


		//Se sair não limpa a tela.
		if (total1 >= 80 || total2 >= 80)//Condição para fazer a condição do laço ficar falsa, e o jogo parar.
		{
			sair = true;//Muda a veracidade do laço

		}

		//Se continuar limpa a tela.
		else system("cls");


	}

	//Quando sair do laço mostra que o jogo acabou
	cout << "Fim de jogo!" << endl;

	//Define qual jogador ganhou, ou se houve empate.
	if (total1 >= 80) cout << jog1 << ", Parabens, voce venceu a corrida!" << endl;

	else if (total2 >= 80) cout << jog2 << ", Parabens, voce venceu a corrida!" << endl;

	else cout << "EMPATE!" << endl;

	return 0; //Retorna ao inicio.

}



void imprimir_espacos(int total) //Usando a função void como "Super poder".
{



	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++)// Laço for pq sabe quantas vezes ele vai repetir..
	{
		cout << " ";// espaço que vai ser impresso, dependendo do numero aleatorio.


	}

}
