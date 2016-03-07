#include<stdio.h>
void print(char *);
void position(char *);
int main (void)
{
	char board[3][3],posi[3][3][4];
	int i,j,k;
		for(i=0;i<3;i++)
			for(j=0;j<3;j++)
				board[i][j]=' ';
		for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			posi[i][j][0]=(char)(i+48);
			posi[i][j][1]=',';
			posi[i][j][2]=(char)(j+48);
			posi[i][j][3]='\0';
		}
	//	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",	&posi[0][0][0],	&posi[0][1][0],	&posi[0][2][0],	&posi[1][0][0],&	posi[1][1][0],&	posi[1][2][0],&	posi[2][0][0],	&posi[2][1][0],	&posi[2][2][0]);
		
/*	printf("Postion map of Tic Tac Toe board \n\n");
	printf("0 0 | 0 1 | 0 2\n");
	printf("    |     |         \n");
	printf("----+-----+----\n");
	printf("1 0 | 1 1 | 1 2 \n");
	printf("    |     |         \n");
	printf("----+-----+----\n");
	printf("2 0 | 2 1 | 2 2 \n");
	printf("    |     |         \n");*/
	int x,y,ctr=0;
	char turn;
		printf("who want to begin the game(x or o)\n");
		scanf("%c",&turn);
	for(i=0;i<9;i++)
	{
		print(&board[0][0]);
		printf("positions on board\n");
		position(&posi[0][0][0]);
		printf("\nits your turn %c .  Move to which position\n ",turn);
		scanf("%d,%d",&x,&y);
			posi[x][y][0]=' ';
			posi[x][y][1]=' ';
			posi[x][y][2]=' ';
			posi[x][y][3]='\0';
		board[x][y]=turn;
		if((board[0][0]==board[0][1] && board[0][1]==board[0][2] && board[0][2]==board[0][0] && board[0][0]!=' '&& board[0][1]!=' '&& board[0][2]!=' ')|| (board[1][0]==board[1][1] && board[1][1]==board[1][2] && board[1][2]==board[1][0] && board[1][0]!=' '&& board[1][1]!=' '&& board[1][2]!=' ')  ||( board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[2][2]==board[0][0] && board[2][2]!=' '&& board[0][0]!=' '&& board[1][1]!=' ') || (board[2][0]==board[2][1] && board[2][1]==board[2][2] && board[2][2]==board[2][0] && board[2][0]!=' '&& board[2][1]!=' '&& board[2][2]!=' ') || (board[0][0]==board[1][0] && board[1][0]==board[2][0] && board[2][0]==board[0][0] && board[0][0]!=' '&& board[1][0]!=' '&& board[2][0]!=' ')|| (board[0][1]==board[1][1] && board[1][1]==board[2][1] && board[2][1]==board[0][1] && board[0][1]!=' '&& board[1][1]!=' '&& board[2][1]!=' ')|| (board[0][2]==board[1][2] && board[1][2]==board[2][2] && board[2][2]==board[0][2] && board[2][2]!=' '&& board[0][2]!=' '&& board[1][2]!=' ') || (board[0][2]==board[1][1] && board[1][1]==board[2][0]&& board[2][0]==board[0][2] && board[0][2]!=' '&& board[1][1]!=' '&& board[2][0]!=' '))
			{
				print(&board[0][0]);
				printf("%c Wins the game\n",turn);
				ctr++;
				break;
			}
		if(turn=='x')
			turn='y';
		else turn='x';
		
	}
	if(ctr!=1)
	print(&board[0][0]);
	
return 0;
}
void print(char *ptr)
{
	printf("\n%c   | %c   | %c  \n",*(ptr+3*0+0),*(ptr+3*0+1),*(ptr+3*0+2));
	printf("    |     |         \n");
	printf("----+-----+----\n");
	printf("%c   | %c   | %c   \n",*(ptr+3*1+0),*(ptr+3*1+1),*(ptr+3*1+2));
	printf("    |     |         \n");
	printf("----+-----+----\n");
	printf("%c   | %c   | %c  \n",*(ptr+3*2+0),*(ptr+3*2+1),*(ptr+3*2+2));
	printf("    |     |         \n");
	return ;
}
void position(char *posi)
{
	printf("\n%s   | %s  | %s\n",(posi+3*0+4*0+0),(posi+3*0+4*1),(posi+3*0+4*2));
	printf("      |      |         \n");
	printf("----+-----+---------\n");
	printf("%s   | %s  | %s\n",(posi+3*4*1+4*0),(posi+3*4*1+4*1),(posi+3*4*1+4*2));
	printf("      |      |         \n");
	printf("----+-----+---------\n");
	printf("%s   | %s  | %s\n",(posi+3*4*2+4*0),(posi+3*4*2+4*1),(posi+3*4*2+4*2));
	printf("      |      |         \n");
	return ;
}
