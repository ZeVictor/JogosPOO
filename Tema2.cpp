#include <iostream>
#include <string>//Para poder usar o tipo de dado String.
#include <ctime>//Para poder usar o tempo como "semente" do gerador.

using namespace std;
//Fuñção principal.
int main(int argc, char* args[])
{
	bool sair = false; //Variavel logica para usar na condição do laço.
	string jog1, jog2; //Variavel para salvar o nome dos jogadores.
	int vida1 = 20, vida2 = 20; //Define a vida inicial do jogador.
	int A = 4, D = 2; //Define ataque e defesa dos jogadores.


	cout << "Digite o nome do jogador 1:" << endl; // Solicita que o jogador 1 digite o nome.
	cin >> jog1; //Salva o nome digitado na variavel "jog1".

	cout << "Digite o nome do jogador 2:" << endl; // Solicita que o jogador 2 digite o nome.
	cin >> jog2; //Salva o nome digitado na variavel "jog2"
	while (sair == false) {

		//Imprimindo os guerreiros, alem de mostrar o nome, a vida e o status.
		cout << " o                       o" << endl;
		cout << ".T./                   \\.T." << endl;
		cout << " ^                       ^" << endl;
		cout << jog1 << "             " << jog2 << endl;
		cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
		cout << "A:" << A << "           " << "A:" << A << endl;
		cout << "D:" << D << "           " << "D:" << D << endl;


		system("pause"); //Pausa para que os jogadores fiquem aparecendo em tela.

		int dado6;

		//Adiciona uma "semente" ao gerador de numeros (TEMPO).
		srand((int)time(0));
		//Gera um número aletorio.
		dado6 = rand() % 6 + 1;

		//Se o número for maior que quatro (4), executa os comandos dentro dos paramêtros do if.
		if (dado6 > 4)
		{
			vida1 = vida1 - dado6; // Subtrai o número gerado da vida do jogador.
			cout << jog1 << "Dano:" << -dado6 << endl; // Mostra o dano gerado na vida do jogador.
			cout << jog2 << "Acertou!" << endl;// Mostra que o jogador acertou.
			cout << "Proxima jogada (Digite enter):" << endl;// Solicita que  jogador digite enter para ir para à próxima jogada.
			cin.get();//Dá uma pausa até o jogador digitar enter e pular para próxima jogada.
		}
		//Se for maior ou igual a quatro (4) executa isso que está nos paramêtros do else if.
		else if (dado6 <= 4)
		{

			cout << jog2 << "Errou!" << endl; //Mostra que o jogador errou
			cout << "Proxima jogada (Digite enter):" << endl;// Solicita que  jogador digite enter para ir para à próxima jogada.
			cin.get();//Dá uma pausa até o jogador digitar enter e pular para próxima jogada.

		}
		//Mesma coisa para o jogador 2
		dado6 = rand() % 6 + 1;

		//Se o número for maior que quatro (4), executa os comandos dentro dos paramêtros do if.
		if (dado6 > 4)
		{

			vida2 = vida2 - dado6; // Subtrai o número gerado da vida do jogador.
			cout << jog2 << "Dano:" << -dado6 << endl;// Mostra o dano gerado na vida do jogador.
			cout << jog1 << "Acertou!" << endl;//Mostra que o jogador acertou.
			cout << "Proxima jogada (Digite enter):" << endl; // Solicita que  jogador digite enter para ir para à próxima jogada.
			cin.get();//Dá uma pausa até o jogador digitar enter e pular para próxima jogada.
		}

		//Se for maior ou igual a quatro (4) executa isso que está nos paramêtros do else if.
		else if (dado6 <= 4) {

			cout << jog1 << "Errou!" << endl; //Mostra que o jogador errou
			cout << "Proxima jogada (Digite enter):" << endl; // Solicita que  jogador digite enter para ir para à próxima jogada.
			cin.get();//Dá uma pausa até o jogador digitar enter e pular para próxima jogada.

		}

		//cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;

		system("cls"); //Limpa a tela ao final de cada rodada.

		// se sair não limpa a tela
		if (vida1 <= 0 || vida2 <= 0)
		{

			sair = true;
		}
		// se continuar entao limpa a tela
		else system("cls");
	}

	//Mostra que o jogo acabou
	cout << "Fim de jogo!" << endl;

	//Mostra o jogador que ganhou, ou se os dois perderam.
	if (vida1 > 0) cout << jog1 << "Venceu!" << endl;
	else if (vida2 > 0) cout << jog2 << "Venceu!" << endl;
	else cout << "Os dois perderam!" << endl;
	return 0;


}