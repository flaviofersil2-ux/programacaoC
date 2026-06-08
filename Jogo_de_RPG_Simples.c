#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int vidaJogador = 30;
int cura;

// (rolarD10())



int rolarD20(){

  return rand() % 20 + 1;

    
}

 int rolarD10(){
 
    return rand() % 10 + 1;

 }

  void investigacao(){
int investigacao;
int sorteioDeItens;

printf("Você achou um local de investigação!\n");
   printf("Você irá rolar um dado de 20 lados e se tirar 15 ou mais talvez você ache algo!\n");
 investigacao = rolarD20();
 printf("Você rolou o resultado %i no dado e...\n", investigacao);
if (investigacao >= 15)
{
        
    
    
    printf("Você achou um item!\n");
// srand (time(0));
   char itens[][50] = {
   "Uma_poção_de_cura",
   "Uma_garrafa",
   "Um_escudo"
   };
  sorteioDeItens = rand() % 3;

printf("Você achou %s!\n", itens[sorteioDeItens]);
if (sorteioDeItens == 0 && vidaJogador < 30)
{
  cura = (rand() %  10 + 1); 
  printf("E você curou %i de vida!\n", cura);
  vidaJogador += cura;
  printf("Sua vida atual é %i!\n", vidaJogador);
}
 
  } else
{
    printf("Não tinha nada de interessante ai\n");
}

  }

  
  
  int batalha(){
 int fugir;   
 int ataqueJogador, defesaJogador;
 int ataqueInimigo, defesaInimigo;
 int opcao;
 int danoJogador, danoInimigo;
 int vidaInimigo = 30;
 printf("BATALHA ENCONTRADA, DIGITE O NUMERO DA SUA ESCOLHA\n");

printf("EXPLICAÇÃO BASICA DE BATALHA: TERÁ UM DADO DE 20 LADOS PARA VOCÊ E PARA O INIMIGO QUANDO FOR ATACAR E DEFENDER,\n E TERÁ UM DADO DE 10 LADOS PARA O DANO\n");
 printf("VOCÊS DOIS COMEÇAM COM 30 DE VIDA\n");
 printf("\n");
 printf("E a sua vida atual e %i\n", vidaJogador);
 

 do
 {
    
    
    printf("1 - Atacar\n");
    printf("2 - Defender\n");
    printf("3 - Fugir\n");
    scanf("%i", &opcao);


 switch (opcao)
 {
 case 1: //ATAQUE
    ataqueJogador = rolarD20();
    defesaInimigo = rolarD20();
     printf("Você rolou o resultado %i no dado e ele %i\n", ataqueJogador, defesaInimigo);

     if (ataqueJogador == 20)
     {
        printf("CRITICO! você acertou e o dano é em dobro!\n");
        danoJogador = rolarD10() * 2;
        printf("Você deu %i de dano!!\n", danoJogador);
        vidaInimigo -= danoJogador;
    printf("A vida atual dele é %i!\n", vidaInimigo);
     } else
     
    if (ataqueJogador >= defesaInimigo)
    {
       
        danoJogador = rolarD10();
       printf("Você acertou e deu %i de dano nele!\n", danoJogador);
       vidaInimigo -= danoJogador;
    printf("A vida atual dele é %i!\n", vidaInimigo);
    } else if (ataqueJogador < defesaInimigo)
    {
        printf("Você errou\n");
        printf("A vida atual dele é %i!\n", vidaInimigo);
    } 
    
    if (ataqueJogador == 1)
    {
        printf("Você errou e tirou desastre! o inimigo tem direito a um contra ataque!\n");
        danoInimigo = rolarD10();
        printf("Ele deu %i de dano!\n", danoInimigo);
       vidaJogador -= danoInimigo;
        printf("A sua vida atual é: %i!\n", vidaJogador);
    } else if (ataqueJogador == 1 && ataqueJogador == ataqueInimigo)
    {
        printf("você acertou por muita sorte!\n");
        danoJogador = rolarD10();
        printf("Você deu %i de dano dele!\n", danoJogador);
        printf("A vida dele agora é %i!\n", vidaInimigo);
    }
    
    

    if (vidaInimigo < 1)
{
    printf("PARABÉNS! você derrotou ele! E ganhou todo o dinhero dele!\n");
} else
    {
    
    printf("Vez do inimigo!\n"); //TURNO DO INIMIGO

    ataqueInimigo = rolarD20();
    defesaJogador = rolarD20();
    printf("Você rolou o resultado %i no dado para defender e ele %i\n", defesaJogador, ataqueInimigo);

    if (ataqueInimigo == 20)
     {
        printf("CRITICO! ele acertou e o dano é em dobro!\n");
        danoInimigo = (rolarD10()) * 2;
        vidaJogador -= danoInimigo;
        printf("A sua vida atual é: %i!\n", vidaJogador);
     } else 
     
    if (ataqueInimigo >= defesaJogador)
    {
       
        danoInimigo = rolarD10();
       printf("Ele acertou e deu %i de dano em você!\n", danoInimigo);
       vidaJogador -= danoInimigo;
        printf("A sua vida atual é: %i!\n", vidaJogador);
    } else if (ataqueInimigo < defesaJogador)
    {
        printf("Ele errou\n");
        printf("A sua vida atual é %i\n", vidaJogador);
        // printf("E a vida dele é %i!\n", vidaInimigo);
    } 
    
    if (ataqueInimigo == 1 || ataqueInimigo == 0)
    {
        printf("Ele errou e tirou desastre! você tem direito a um contra ataque!\n");
        danoJogador = rolarD10();
        printf("Você deu %i de dano!\n", danoJogador);
vidaInimigo -= danoJogador;
    printf("A vida atual dele é %i!\n", vidaInimigo);
    }
 }
   break;
 case 2: //DEFESA
    printf("Você fica com +3 na defesa, mas não poderá atacar! e o inimigo tem +2 de dano se te acertar!\n");
    ataqueInimigo = rolarD20();
    defesaJogador = rand() % (20 + 1) + 3;
    printf("Você rolou com a soma o resultado %i no dado para se defender e ele %i\n", defesaJogador, ataqueInimigo);

    if (ataqueInimigo == 20)
     {
        printf("CRITICO! ele acertou e o dano é em dobro!\n");
        danoInimigo = ((rolarD10()) * 2) + 2;
        vidaJogador -= danoInimigo;
     } else
     
    if (ataqueInimigo >= defesaJogador)
    {
       
        danoInimigo = rand() % (10 + 1) + 2;
       printf("Ele acertou e deu %i de dano em você!\n", danoInimigo);
        vidaJogador -= danoInimigo;
    } else if (ataqueInimigo < defesaJogador)
    {
        printf("Ele errou\n");
    } 
    
    if (ataqueInimigo == 1 || ataqueInimigo == 0)
    {
        printf("Ele errou e tirou desastre! você tem direito a um contra ataque!\n");
        danoJogador = rolarD10();
        printf("Você deu %i de dano!\n", danoJogador);
 vidaInimigo -= danoJogador;
    printf("A vida atual dele é %i!\n", vidaInimigo);
    }
    break;
 case 3: //FUGIU
   fugir = rolarD20();
    if (fugir >= 15)
    {
        printf("Você conseguiu fugir do combate!\n");
    } else
    {
        printf("Ele foi mais rápido que você e você não conseguiu fugir! e é o turno dele!\n");
    ataqueInimigo = rolarD20();
    defesaJogador = rolarD20();
    printf("Você rolou o resultado %i no dado para defender e ele %i\n", defesaJogador, ataqueInimigo);

    if (ataqueInimigo == 20)
     {
        printf("CRITICO! ele acertou e o dano é em dobro!\n");
        danoInimigo = (rolarD10()) * 2;
        vidaJogador -= danoInimigo;
        printf("A sua vida atual é: %i!\n", vidaJogador);
     } else 
     
    if (ataqueInimigo >= defesaJogador)
    {
       
        danoInimigo = rolarD10();
       printf("Ele acertou e deu %i de dano em você!\n", danoInimigo);
       vidaJogador -= danoInimigo;
        printf("A sua vida atual é: %i!\n", vidaJogador);
    } else if (ataqueInimigo < defesaJogador)
    {
        printf("Ele errou\n");
        printf("A sua vida atual é %i\n", vidaJogador);
        // printf("E a vida dele é %i!\n", vidaInimigo);
    } 
    
    if (ataqueInimigo == 1 || ataqueInimigo == 0)
    {
        printf("Ele errou e tirou desastre! você tem direito a um contra ataque!\n");
        danoJogador = rolarD10();
        printf("Você deu %i de dano!\n", danoJogador);
        vidaInimigo -= danoJogador;
    printf("A vida atual dele é %i!\n", vidaInimigo);
    }
    }
    
    
    break;
 
 default: //QUALQUER OUTRO VALOR
 danoInimigo = rand() % 10 + 20;
 printf("Você não fez nada e ele te atacou você tomou %i de dano!\n", danoInimigo);
 vidaJogador -= danoInimigo;
        printf("A sua vida atual é: %i!, não pode fazer as coisas que não tem como ainda né\n", vidaJogador);
    break;
 }

    } while (fugir < 15 && vidaJogador > 0 && vidaInimigo > 0 );


if (vidaJogador < 1)
{
    printf("Você morreu e perdeu todos os itens!\n");
    exit(0);
}

  }



    int main(){ //inicio main
    srand(time(0));
int eventos,chanceDEevento, opcao2, menu;
char mapa[10][10];
int playerX = 5;
int playerY = 5;


   printf("***BEM VINDO AO RPG DO FLAVIO***\n");

do
{ //inicio do de andar
    
   printf("1 - Jogar\n");
   printf("2 - Explicações/atualizações\n");
   printf("3 - Sair do jogo\n");
   scanf("%i", &menu);


 switch (menu)
 { //inicio switch do menu
 case 1:

   printf("VOCÊ ESTÁ COMEÇANDO A SUA AVENTURA!\n");
 
do
{ //inicio DO de andar


printf("\n\n\n\n\n\n");

for (int y = 0; y < 10; y++)
{
    for (int x = 0; x < 10; x++)
    {
        
        
       mapa[y][x] = '.';
      
       
    }
    
    

}

       mapa[2][2] = '#';
       mapa[2][3] = '#';
       mapa[2][4] = '#';
       mapa[3][4] = '#';
       mapa[1][5] = 'I';
       mapa[7][3] = 'I';
       
mapa[playerY][playerX] = 'P';

for (int y = 0; y < 10; y++)
{
    for (int x = 0; x < 10; x++)
    {
        printf("%c ", mapa[y][x]);
    }

    printf("\n");
}
    
    printf("ESCOLHA UM LADO PARA IR\n");
   printf("1 - Frente\n");
   printf("2 - atrás\n");
   printf("3 - Esquerda\n");
   printf("4 - Direita\n");
   printf("5 - Sair do jogo\n");
    scanf("%i", &opcao2);

printf("Você anda e............\n");


int movimento = 0;
 switch (opcao2)
{ //inicio switch de andar
case 1:

if (playerY > 0 && mapa[playerY - 1][playerX] != '#' &&
    mapa[playerY - 1][playerX] != 'I')
  {

    playerY--;
    movimento = 1;

  } else
  {
    printf("Dá de cara na parede\n");
  }
  
  
  

    break; // final do case 1
 
case 2:

 if (playerY < 9 && mapa[playerY + 1][playerX] != '#' &&
    mapa[playerY + 1][playerX] != 'I')
{

    playerY++;
    movimento = 1;

}else
  {
    printf("Dá de cara na parede\n");
  }




break; //final do case 2

case 3:

if (playerX > 0 && mapa[playerY][playerX - 1] != '#'&&
    mapa[playerY][playerX - 1] != 'I')
{

    playerX--;
    movimento = 1;

}else
  {
    printf("Dá de cara na parede\n");
  }




break; //final do case 3

case 4:

if (playerX < 9 && mapa[playerY][playerX + 1] != '#'&&
    mapa[playerY][playerX + 1] != 'I')
{

    playerX++;
    movimento = 1;

}else
  {
    printf("Dá de cara na parede\n");
  }


break; //final do case 4

case 5:
printf("Saindo da aventura...\n");
break;
default:
printf("Você cai no limbo e morre!\n");
 exit(0);
    break;
} // final switch de andar

if (movimento)
{
    
  chanceDEevento = rand() % 100 + 1;

if (chanceDEevento <= 35)
{
    


   eventos = rand() % 2 + 1;  
if (eventos == 1)
{
    batalha();

} else if (eventos == 2)
{
    investigacao();
 } 
 

}
  else
    {
     printf("Nada acontece..... por enquanto\n");
    } 

} 



} while (opcao2 != 5); //final DO de andar

   
    break;
 
    case 2:
//regras aqui
printf("Você é um explorador em busca de aventura e de alguns recursos para você, mas que não sabe oque te espera pela frente\n");
printf("O jogo funciona com um sistem bem básico de rpg d20 onde você rola dados para seus resultados em combate e investigação\n");
printf("Por exemplo para você achar um item em uma área que provavelmente possa ter um você irá rolar um dado de 20 lados e dependendo do resultado você pode ou não achar um item que te ajude\n");
printf("E sim! Terão itens que vão te ajudar na sua aventura! Nem todos ainda estão prontos apenas a poção de cura\n");
printf("\n");
printf("***GRANDE ATUALIZAÇÃO***\n");
printf("AGORA O JOGO TEM UM MAPA!!! E SIM! TEM COMO ANDAR POR ELE\n");
printf("Os inimigos e itens por enquanto ainda não aparecem nele porém já é um mapa funcional que dá para se mover nele!\n");
printf("O mapa funciona da seguinte maneira:\n");
printf("onde tiver um . é por onde você consegue andar e onde tiver # é uma parede\n");
printf("\n ");
printf("inimigos serão adicionados em breve como um I e eles já estão no mapa porém ainda não são funcionais e funcionam mais como uma parede\n");
printf("Os itens também ainda não são funcionais apenas a poção de cura só que só dá para usar ela quando você tiver perdido vida\n");
printf("Mesma coisa o inventario, ainda não funciona, então ainda não dá para guardar os itens que achar\n");
printf("\n");
printf("É isso, Boa sorte na sua exploração aventureiro e cuidado!\n");
    break;

    case 3:
  printf("Saída do jogo realizada\n");
  exit(0);
    break;

 default:
  printf("Não tem nada aí aventureiro!\n");
    break;

} //final switch menu 

  } while (menu != 3); // final DO do menu
return 0;
    }  //final main  