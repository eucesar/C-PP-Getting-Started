//#include<stdio.h> //incluir biblioteca
#include <iostream> //entrada e saida de dados = receber msg e valores

#include <cstdlib>//c ++ biblioteca
#include <ctime> //atauliza com forme o tempo passa

//para n digitar "std ::"" TD vzs, bloco padrão para definir coisasa padrões em c++
using namespace std;


//antes : std :: cout << "..." << std :: endl;
//dps: cout << "..." << endl;
//CODIGO MAIS CURTO E MAIS APRENSETVEL

//função princiapal - td codigo executado - MAIN
int main (){
   /* 
    output = saida = print = o ususario q vai escrever (co nsole)
    cout = escrever coisas na saida (print)
    std = standart = padrão - pacotes padrões de C++ - oq vai na frente das funções
    :: => separa o std do count - separa qq coisa do padrao da função
    << => oq vai ocorrer - tipo sinal de igual e soma
    endl = endline => quebra de linha
    */

    cout << "......................." << endl; // mensagem que imprima dentro das aspas = imprimi coisa no terminal = quebra de linha no final
    cout << "..JOGO DA ADIVINHAÇÃO.." << endl;
    cout << "......................." << endl;

    cout << "Escolha o seu nivel de dificuldade: " << endl;
    cout << "Fácil (F), Médio (M) ou Difícil (D)" << endl;

    char dificuldade;
    cin >> dificuldade;

    int numero_de_tentativas;

    if(dificuldade == 'F'){
        numero_de_tentativas = 15;
    }
    else if(dificuldade == 'M'){
        numero_de_tentativas = 10;
    }
    else {
        numero_de_tentativas = 5;
    }

    cout << "O numero secreto é" << numero secreto << ". Não conte para ninguém!" << endl;

    //semente dos numeros aleatorios - o time null vai estar sempre mudando
    srand(time(NULL));
    //constante = n ah alteração na variavel = n coloco dentro do while pq ela é uma constante, constante fica parada
    //rand = alatorio = sobrea de 100
    const int NUMERO_SECRETO = rand() % 100;
    // << funciona como sinal de soma (+) em JAVA.
    bool nao_acertou = true;
    int tentativas = 0;
    double pontos = 1000.0;

    //for pode por uma de uma condição, por isso uso ele
   for(tentativas = 1;tentativas <= numero_de_tentativas;tentativas++) {

    //tentativas++; //tentativas = tentativas + 1 => soma 1 tentativa a cada vzs q passa por todo o loop

    //c input = cin
    int chute;
    cout << "Tentativas" << tentativas << endl;
    cout << "Qual é seu chute ?" << endl;
    //INPUT - saindo valor - setinha pra direita
    cin >> chute;
    //abs = absolute = deixar qq numero positivo
    double pontos_perdidos = abs(chute - numero_secreto)/2.0;
    //atualizar pontos
    pontos = pontos - pontos_perdidos;



    //recebendo valor, setinha para esquerda
    cout << "O valor do seu chute é: " << chute << endl;

    //armazenar a condição das condicionais
    bool acertou = chute == numero_secreto
    bool maior = chute > numero_secreto

    if (acertou)
    {
        cout << "Parabéns! Voce acertou o número secreto!" << endl;
        nao_acertou = false;
        break; //quando acerto ele para - da um break no loop
    }
    else if (maior){
        cout << "Seu chute foi maior que o número secereto!" << endl;
    }
    else{
        cout << "Seu chute foi menor que o número secereto!" << endl:
    }

    }

    cout << "Fim de jogo!" << endl;
    if(nao_acertou){
        cout << "Você perdeu! Tente novamente!" << endl;
    }
    else{
        cout << "Você acertou o número secreto em " << tentativas << " tentativas" << endl;
        //pular duas casas dps da virgula
        cout.precision(2);
        //transformar em notação ciencifica em nomral
        cout << fixed;
        cout << "Sua pontuação foi de " << pontos << " pontos." << endl;
    }

}


