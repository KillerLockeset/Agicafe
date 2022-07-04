 #include <stdio.h>
 #include <stdlib.h>
 #include <windows.h>
 #include <locale.h>

/*Quiz Lingua portuguesa*/

void gotoxy(int x, int y) 
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);  
}

main() 
{
	int r, p, coluna, cont;  /*R = Resultado e P = pontos */
	for(coluna=40; coluna>=5;coluna--)
	{
		system("cls");
		system("color 3"); 
		gotoxy(coluna, 10); printf("\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC\xDC");
		gotoxy(coluna, 11); printf("\xDFO\xDF\xDF\xDF\xDF\xDFO\xDF");
		printf("  ");
		printf("Bem-vindo ao quiz 1984\n");
		
		for (cont=0; cont<-100000; cont++);
	}
	printf("\tClique iniciar o quiz");
	getch();
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	printf("(A)Como o grande irmão é retratado no livro?\n\n");
	printf("(1)Nariz grande e cabelo encaracolado loiro\n");
	printf("(2)Cabelo e bigode pretos\n");
    printf("(3)Moreno e de óculos escuros\n");
    printf("(4)Ele não é retratado\n\n");
    scanf("%d",&r);
    
    if(r==2)
	{
		p=p+1;
		printf("\nResposta correta\n\n");
	}
		else
	{
		printf("\nResposta incorreta\n\n");
	}
	printf("Clique enter para continuar");
	getch();
	system("cls");
	
    printf("(B)Qual a função do ministério do amor?\n\n");
	printf("(1)Controle populacional\n");
	printf("(2)Racionamento de comida\n");
	printf("(3)Garantir o conforto\n");
	printf("(4)Lutar contra outros países\n\n");
	scanf("%d",&r);
	
	 if(r==1)
	{
		p=p+1;
		printf("\nResposta correta\n\n");
	}
		else
	{
		printf("\nResposta incorreta\n\n");
	}
	printf("Clique enter para continuar");
	getch();
	system("cls");
	 		
    printf("(C)Qual o nome do amigo de Winston que é vaporizado?\n\n");
	printf("(1)Syme\n");
	printf("(2)Parsons\n");
    printf("(3)Charrington\n");
    printf("(4)Bryan\n\n");
    scanf("%d",&r);
    
    if(r==1)
	{
		p=p+1;
		printf("\nResposta correta\n\n");
	}
		else
	{
		printf("\nResposta incorreta\n\n");
	}
	printf("Clique enter para continuar");
	getch();
	system("cls");
	    	   				
	printf("(D)Como a existência do Grande irmão é comprovada no livro?\n\n");
	printf("(1)Ele aparece para Winston enquanto ele é torturado\n");
	printf("(2)Ele não existe\n");
	printf("(3)A existência dele não é comprovada\n");
	printf("(4)O'Brien era ele disfarçado\n\n");
	scanf("%d",&r);
	
	 if(r==3)
	{
		p=p+1;
		printf("\nResposta correta\n\n");
	}
		else
	{
		printf("\nResposta incorreta\n\n");
	}
	printf("Clique enter para continuar");
	getch();
	system("cls");
	
	printf("(E)O que Winston fazia em seu trabalho?\n\n");
	printf("(1)Destruía palavras para atualizar o novidioma\n");
	printf("(2)Alterava as notícias históricas\n");
	printf("(3)Escrever livros\n");
	printf("(4)Ele tinha sido demitido no começo do livro\n\n");
	scanf("%d",&r);
	
	 if(r==4)
	{
		p=p+1;
		printf("\nResposta correta\n\n");
	}
		else
	{
		printf("\nResposta incorreta\n\n");
	}
	printf("Clique enter para continuar");
	getch();
	system("cls");
	    			
    printf("(F)Qual o nome da cafeteria que ficava perto de Winston\n\n");
	printf("(1)Café de avelã\n");
	printf("(2)Café castanhas\n");
	printf("(3)Agi café\n");
	printf("(4)Café castanheira\n\n");
	scanf("%d",&r);
	
	 if(r==4)
	{
		p=p+1;
		printf("\nResposta correta\n\n");
	}
		else
	{
		printf("\nResposta incorreta\n\n");
	}
	printf("Clique enter para continuar");
	getch();
	system("cls");
	
	printf("(G)Qual o nome dos 3 impérios retratados no livro?\n\n");
	printf("(1)Oceania, Ásia e Lascivia\n");
	printf("(2)Eurásia, Lestásia e Ásia\n");
	printf("(3)Ásia, Oceania e Europa\n");
	printf("(4)Eurásia, Lestasia e Oceania\n\n");
	scanf("%d",&r);
	
	 if(r==4)
	{
		p=p+1;
		printf("\nResposta correta\n\n");
	}
		else
	{
		printf("\nResposta incorreta\n\n");
	}
	printf("Clique enter para continuar");
	getch();
	system("cls");
			
	
	printf("(H)Qual o nome da marca de alimentos que Winston consumia?\n\n");
	printf("(1)Helena\n");
	printf("(2)Maria\n");
	printf("(3)Vitória\n");
	printf("(4)Tailson\n\n");
	scanf("%d",&r);
	
	 if(r==3)
	{
		p=p+1;
		printf("\nResposta correta\n\n");
	}
		else
	{
		printf("\nResposta incorreta\n\n");
	}
	printf("Clique enter para continuar");
	getch();
	system("cls");
	
    printf("(I)Quantos ministérios existem na Oceania?\n\n");
	printf("(1)3\n");
	printf("(2)1\n");
	printf("(3)4\n");
	printf("(4)5\n\n");
	scanf("%d",&r);
	
	 if(r==3)
	{
		p=p+1;
		printf("\nResposta correta\n\n");
	}
		else
	{
		printf("\nResposta incorreta\n\n");
	}
	printf("Clique enter para continuar");
	getch();
	system("cls");
	
	printf("(J)Qual é o nome do lugar aonde se passa o livro?\n\n");
	printf("(1)Força aérea 41\n");
	printf("(2)Inglaterra\n");
	printf("(3)Grã-Bretanha\n");
	printf("(4)Pista de pouso número 1\n\n");
	scanf("%d",&r);
	
	 if(r==4)
	{
		p=p+1;
		printf("\nResposta correta\n\n");
	}
		else
	{
		printf("\nResposta incorreta\n\n");
	}
	printf("Clique enter para continuar");
	getch();
	system("cls");
	
				
	switch(p)
	{
	
	case 9: case 10:
		printf("\n Você acertou %d decorou o livro!", p);
		getch();
	break;
	
	case 7: case 8:
		printf("\n Você acertou %d entendeu tudo!", p);
		getch();
	break;
	
	case 5: case 6:
		printf("\n Você acertou %d conhece os pontos principais!", p);
		getch();
	break;
	
	case 3: case 4:
		printf("\n Você acertou %d está começando a entender!", p);
		getch();
	break;
		
	case 1: case 2: 
		printf("\n Você acertou %d precisa reler o livro!", p);
		getch();
	break;
	}	
}
