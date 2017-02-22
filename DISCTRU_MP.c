/*******************************************************************************
Program: DISCTRU MP
Created by: Kurt Aquino, Ian Penales, Johansson Eco Tan
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FALSE 0
#define TRUE 1

typedef char s4[5];

/*data structure of the X & Y
 coordinates of a given point*/
typedef struct{
	int posX; /*position in the X axis*/
	int posY; /*position in the Y axis*/
} XYCoord;

/*data structure of an array of points*/
typedef struct{
	XYCoord Coords[36]; /*array of points*/
	int nCtr;           /*number of points*/
} posCoord;

/*displays opening logo*/
void displayMP()
{
	int i;
	printf("%c%c%c%c%c%c%c     ", 213, 205, 205, 205, 205, 205, 184); /*D*/
	printf("%c%c%c ",213,205,184); /*I*/
	printf("%c%c%c%c%c%c%c%c%c ",213,205,205,205,205,205,205,205,184); /*S*/
	printf("%c%c%c%c%c%c%c%c%c ",213,205,205,205,205,205,205,205,184); /*C*/
	printf("%c%c%c%c%c%c%c%c%c ",213,205,205,205,205,205,205,205,184); /*T*/
	printf("%c%c%c%c%c%c%c%c%c ",213,205,205,205,205,205,205,205,184); /*R*/
	printf("%c%c%c   %c%c%c \n",213,205,184,213,205,184); /*U*/
	
	printf("%c     %c%c%c   ", 179,212,205,184); /*D*/
	printf("%c %c ",179,179); /*I*/
	printf("%c %c%c%c%c%c%c%c ",179,213,205,205,205,205,205,190); /*S*/
	printf("%c %c%c%c%c%c%c%c ",179,213,205,205,205,205,205,190); /*C*/
	printf("%c%c%c%c %c%c%c%c ",212,205,205,184,213,205,205,190); /*T*/
	printf("%c %c%c%c%c%c %c ",179,213,205,205,205,184,179); /*R*/
	printf("%c %c   %c %c \n",179,179,179,179); /*U*/
	
	printf("%c  %c%c%c  %c%c%c ", 179,213,205,184,212,205,184); /*D*/
	printf("%c %c ",179,179); /*I*/
	printf("%c %c       ",179,179); /*S*/
	printf("%c %c       ",179,179); /*C*/
	printf("   %c %c    ",179,179); /*T*/
	printf("%c %c   %c %c ",179,179,179,179); /*R*/
	printf("%c %c   %c %c \n",179,179,179,179); /*U*/
	
	for (i=0;i<5;i++)
	{
		printf("%c  %c ",179,179); /*D*/
		if(i==0)
			printf("%c%c%c  ",212,205,184); /*D*/
		else if(i==4)
			printf("%c%c%c  ",213,205,190); /*D*/
		else
			printf("  %c  ",179); /*D*/
		printf("%c ",179); /*D*/
		printf("%c %c ",179,179); /*I*/
		/*S*/
		if(i==0)
			printf("%c %c       ",179,179);
		else if(i==1)
			printf("%c %c%c%c%c%c%c%c ",179,212,205,205,205,205,205,184);
		else if(i==2)
			printf("%c       %c ",179,179);
		else if(i==3)
			printf("%c%c%c%c%c%c%c %c ",212,205,205,205,205,205,184,179);
		else if(i==4)
			printf("      %c %c ",179,179);
			
		printf("%c %c       ",179,179); /*C*/
		printf("   %c %c    ",179,179); /*T*/
		
		/*R*/
		if(i==0)
			printf("%c %c%c%c%c%c %c ",179,212,205,205,205,190,179);
		else if(i==1)
			printf("%c %c%c%c%c%c%c%c ",179,213,205,205,205,205,205,190);
		else if(i==2)
			printf("%c %c%c%c     ",179,212,205,184);
		else if(i==3)
			printf("%c   %c%c%c   ",179,212,205,184);
		else
			printf("%c %c%c%c %c%c%c ",179,213,205,184,212,205,184);
		
		printf("%c %c   %c %c ",179,179,179,179); /*U*/
		printf("\n");
	}
	
	printf("%c  %c%c%c  %c%c%c ", 179,212,205,190,213,205,190); /*D*/
	printf("%c %c ",179,179); /*I*/
	printf("      %c %c ",179,179); /*S*/
	printf("%c %c       ",179,179); /*C*/
	printf("   %c %c    ",179,179); /*T*/
	printf("%c %c %c%c%c %c ",179,179,212,205,184,179); /*R*/
	printf("%c %c   %c %c \n",179,179,179,179); /*U*/
	
	printf("%c     %c%c%c   ", 179,213,205,190); /*D*/
	printf("%c %c ",179,179); /*I*/
	printf("%c%c%c%c%c%c%c %c ",213,205,205,205,205,205,190,179); /*S*/
	printf("%c %c%c%c%c%c%c%c ",179,212,205,205,205,205,205,184); /*C*/
	printf("   %c %c    ",179,179); /*T*/
	printf("%c %c   %c %c ",179,179,179,179); /*R*/
	printf("%c %c%c%c%c%c %c \n",179,212,205,205,205,190,179); /*U*/
	
	printf("%c%c%c%c%c%c%c     ", 212, 205, 205, 205, 205, 205, 190); /*D*/
	printf("%c%c%c ",212,205,190); /*I*/
	printf("%c%c%c%c%c%c%c%c%c ",212,205,205,205,205,205,205,205,190); /*S*/
	printf("%c%c%c%c%c%c%c%c%c ",212,205,205,205,205,205,205,205,190); /*C*/
	printf("   %c%c%c    ",212,205,190); /*T*/
	printf("%c%c%c   %c%c%c ",212,205,190,212,205,190); /*R*/
	printf("%c%c%c%c%c%c%c%c%c \n",212,205,205,205,205,205,205,205,190); /*U*/
	
	
	printf("\t\t  %c%c%c        %c%c%c ",213,205,184,213,205,184); /*M*/
	printf("%c%c%c%c%c%c%c%c%c\n",213,205,205,205,205,205,205,205,184); /*P*/
	
	printf("\t\t  %c %c%c      %c%c %c ",179,212,184,213,190,179); /*M*/
	printf("%c %c%c%c%c%c %c\n",179,213,205,205,205,184,179); /*P*/
	
	printf("\t\t  %c  %c%c    %c%c  %c ",179,212,184,213,190,179); /*M*/
	printf("%c %c   %c %c\n",179,179,179,179); /*P*/
	
	printf("\t\t  %c   %c%c  %c%c   %c ",179,212,184,213,190,179); /*M*/
	printf("%c %c%c%c%c%c %c\n",179,212,205,205,205,190,179); /*P*/
	
	printf("\t\t  %c %c%c %c%c%c%c %c%c %c ",179,213,184,212,
										184,213,190,213,184,179); /*M*/
	printf("%c %c%c%c%c%c%c%c\n",179,213,205,205,205,205,205,190); /*P*/
	
	printf("\t\t  %c %c%c%c %c%c %c%c%c %c ",179,179,212,184,
										212,190,213,190,179,179); /*M*/
	printf("%c %c\n",179,179); /*P*/
	
	printf("\t\t  %c %c %c%c  %c%c %c %c ",179,179,212,184,213,190,179,179);/*M*/
	printf("%c %c\n",179,179); /*P*/
	
	printf("\t\t  %c %c  %c%c%c%c  %c %c ",179,179,212,205,205,190,179,179);/*M*/
	printf("%c %c\n",179,179); /*P*/
	
	printf("\t\t  %c%c%c        %c%c%c ",212,205,190,212,205,190); /*M*/
	printf("%c%c%c\n",212,205,190); /*P*/
	for(i=0;i<28;i++)
		printf("-");
	printf("START!!!");
	for(i=0;i<29;i++)
		printf("-");
	getch();
	system("cls");
}

/*swaps the coordinates of two given points*/
void CoordSwap(XYCoord *Coord1, XYCoord *Coord2)
{
	/*temporary structure of a point*/
	XYCoord CoordTemp;
	
	/*stores the X & Y coordinates of the first point into the temp*/
	CoordTemp.posX = Coord1->posX;
	CoordTemp.posY = Coord1->posY;
	
	/*stores the X & Y coordinates of the second point into the first*/
	Coord1->posX = Coord2->posX;
	Coord1->posY = Coord2->posY;
	
	/*stores the X & Y coordinates of the temp point into the second*/
	Coord2->posX = CoordTemp.posX;
	Coord2->posY = CoordTemp.posY;
}

/*sorts an array of a given set of points depending on their coordinates*/
void sortCoord(posCoord *Positions)
{
	int i, j; /*counter variables*/

	/*checks all of the points of a given set*/	
	for(i = 0; i < Positions->nCtr; i++)
		
		/*checks all of the following points next to the first set*/
		for(j = i + 1; j < Positions->nCtr; j++)
		
			/*if the Y coordinate of the first point is larger than the second*/
			if(Positions->Coords[i].posY > Positions->Coords[j].posY)
				/*swaps the coordinates of the two points*/
				CoordSwap(&Positions->Coords[i], &Positions->Coords[j]);
			
			/*if the Y coordinates of the two points are equal*/
			else if(Positions->Coords[i].posY == Positions->Coords[j].posY)
				
				/*if the X coordinate of the first point is larger than the second*/
				if(Positions->Coords[i].posX > Positions->Coords[j].posX)
					/*swaps the coordinates of the two points*/
					CoordSwap(&Positions->Coords[i], &Positions->Coords[j]);
}

/*removes a given point's coordinates from the set of free points*/
void makeFree(posCoord *Free, XYCoord posnInput)
{
	int i, j,       /*counter variables*/
		nStop = 0;  /*sentinel variable*/
	
	/*checks all of the points of a given set*/
	for(i = 0; i < Free->nCtr;i ++)
		
		/*if nStop is 0 and the X & Y coordinates of a
		  scanned point is equal to the given point*/
		if(!nStop && Free->Coords[i].posX == posnInput.posX &&
			Free->Coords[i].posY == posnInput.posY)
			nStop = 1;
		
		/*if nStop is 1(meaning the point has already been found)*/	
		else if(nStop)
		{
			/*shifts all of the X & Y coordinates one container backwards*/
			Free->Coords[i-1].posX = Free->Coords[i].posX;
			Free->Coords[i-1].posY = Free->Coords[i].posY;
		}
	
	/*decrements the total number of points from the array*/	
	Free->nCtr--;
}

/*game flow of each player's move*/
void NextPlayerMove(XYCoord posn, posCoord *xposn, posCoord *oposn, int *turn,
					int *moves, posCoord *free)
{
	int nMember = 0, /*check variable*/
		i;           /*counter variable*/
		
	/*checks if the input coordinates hasn't been already selected*/
	for(i = 0; !nMember && i < free->nCtr; i++)
		/*if the input coordinates is present within the set of unselected points*/
		if(free->Coords[i].posX == posn.posX && free->Coords[i].posY == posn.posY)
			nMember = 1; 
	
	if(nMember)
	{
		/*removes the input coordinates from the set of unselected points*/
		makeFree(free,posn);
		
		/*if it is Player one's (X) turn*/
		if(*turn)
		{
			/*the input X & Y coordinates will be stored in an array of points*/
			xposn->Coords[xposn->nCtr].posX = posn.posX;
			xposn->Coords[xposn->nCtr].posY = posn.posY;
			/*the number of points in the array will be incremented*/
			xposn->nCtr++;
			/*signifies the next player's turn*/
			*turn = FALSE;
			/*sorts the array of coordinates*/
			sortCoord(xposn);
		}
		/*if it is Player two's (O) turn*/
		else
		{
			/*the input X & Y coordinates will be stored in an array of points*/
			oposn->Coords[oposn->nCtr].posX=posn.posX;
			oposn->Coords[oposn->nCtr].posY=posn.posY;
			/*the number of points in the array will be incremented*/
			oposn->nCtr++;
			/*signifies the next player's turn*/
			*turn = TRUE;
			/*sorts the array of coordinates*/
			sortCoord(oposn);
		}
		/*increments the total number of moves*/
		(*moves)++;
	}
	/*if input coordinates has already been used*/
	else
	{
		printf("That coordinate has already been chosen.\n");
		getch();
	}
}

/*counts the number of lines formed when the input coordinates
  is within the winning positions to be filled*/
int Lines(posCoord posn, XYCoord wposn[][3])
{
	int i, j, k, l,  /*counter variables*/
	    nCount = 0,  
		nLines = 0,  /*number of lines formed*/
		nStop = 0;   /*sentinel variable*/
	
	/*two sets of winning positions/lines*/
	for(i = 0; i < 2; i++)
	{
		/*each set has three points for the winning position*/
		for(j = 0; j < 3; j++)
		{
			/*checks if current point from a winning position is in the array
				of points inputted
				If in array, adds to a counter to signify a point is there*/
			for(k = 0;!nStop && k < posn.nCtr;k ++)
				if(posn.Coords[k].posX == wposn[i][j].posX&&
					posn.Coords[k].posY == wposn[i][j].posY)
				{
					nCount++;
					nStop = 1;
				}
			nStop = 0;
		}
		nLines += nCount/3; /*if nCount is 3, it adds 1 to nLine since the 3 
								indicates it satisfied the coordinates of a
								winning position
							  if less than 3, it adds nothing (0) since it
							  did not satisfy all coordinates of a 
							  	winning line*/
		nCount = 0; /*resets the counter for the the 2nd winning position*/
	}
	
	/*returns the number of lines formed*/
	return nLines;
}

/*determines if the conditions for the game to end has been fulfilled*/
void EndGame(int over, s4 result[], XYCoord J[][3], XYCoord K[][3], 
				XYCoord L[][3], XYCoord M[][3], posCoord xposn, posCoord oposn)
{
	/*if Player one (X) has formed at least one line
	  from the predetermined points of the 4 winning sets*/
	if(Lines(xposn,J)>0&&Lines(xposn,K)>0&&Lines(xposn,L)>0&&Lines(xposn,M)>0)
		strcpy(result[0],"ex");
	
	/*if Player two (O) has formed at least one line
	  from the predetermined pointsof the 4 winning sets*/
	if(Lines(oposn,J)>0&&Lines(oposn,K)>0&&Lines(oposn,L)>0&&Lines(oposn,M)>0)
		strcpy(result[1],"oh");
	
	/*if all of the points has already been filled, but neither
	  player has formed at least one line on every winning set or both formed 
	  at least one line on every winning set*/
	if(over==TRUE && ((strcmp(result[0],"")==0 && strcmp(result[1],"")==0)||
		(strcmp(result[0],"ex")==0 && strcmp(result[1],"oh")==0)))
		strcpy(result[2],"draw");
		
	/*if the game is not over but each player has a winning position in
		every winning set*/
	if(over==FALSE && strcmp(result[0],"ex")==0 && strcmp(result[1],"oh")==0)
	{
		over=TRUE;
		strcpy(result[2],"draw");
		printf("The needed positions has already been filled.\n");
	}
}

/*visual interface of the grid*/
void displayGrid(posCoord xposn, posCoord oposn)
{
	int i, j, k, l;
	for(i=0;i<7;i++)
	{
		if(i==0)
			printf("     %c",213);
		printf("%c",205);
		if(i<6)
			printf("%c",209);
		else if(i==6)
			printf("%c",184);
		else
			printf("%c",180);
	}
	
	for(i=0,k=0,l=0;i<7;i++)
	{
		printf("\n");
		for(j=0;j<7;j++)
			if(i==0&&j==0)
				printf("     %c%c", 179, 92);
			else if(i==0)
				printf("%c%d",179, j);
			else if(j==0)
				printf("     %c%d",179, i);
			else if(k<xposn.nCtr&&j==xposn.Coords[k].posX&&
					i==xposn.Coords[k].posY)
			{
				k++;
				printf("%cX", 179);
			}
			else if(l<oposn.nCtr&&j==oposn.Coords[l].posX&&
					i==oposn.Coords[l].posY)
			{
				l++;
				printf("%cO", 179);
			}
			else
				printf("%c%c",179,176);
		printf("%c\n", 179);			
		for(j=0;j<7;j++)
		{
			if(j==0&&i<6)
				printf("     %c",198);
			else if(j==0&&i==6)
				printf("     %c",212);
			printf("%c",205);
			if(i==6&&j<6)
				printf("%c",207);
			else if(j<6)
				printf("%c",216);
			else if(i==6)
				printf("%c",190);
			else
				printf("%c",181);
		}	
	}
}

int main ()
{
	int i, j, k, l,   /*counter variables*/
	    over = FALSE, /*sentinel variable to notify when the game is over*/
		moves = 0,    /*total number of moves made by both players*/
		turn = TRUE;  /*indicator variable to specify which player's turn*/
		
	posCoord Free, /*data structure for the unselected points*/  
			 temp, /*temp data structure for storage*/
			 xposn, oposn; /*data structure for the coordinates
			                 of the X & O positions*/
	
	s4 result[3]; /*array of strings for the results*/
	
	/*specified coordinates to be filled to form lines on each quadrant*/
	int CoordJ[2][6]={{1,1,2,2,3,3},{1,3,2,2,3,1}};
	int CoordK[2][6]={{1,4,2,4,3,4},{3,4,3,5,3,6}};
	int CoordL[2][6]={{4,1,4,2,4,3},{4,3,5,3,6,3}};
	int CoordM[2][6]={{4,5,5,5,6,5},{5,4,5,5,5,6}};
	
	XYCoord posn,  /*storage for the input coordinates*/
			/*data structures for the coordinates of the
			  specified points to be filled on each quadrant*/
		    J[2][3], K[2][3], L[2][3], M[2][3];
	
	/*initializes the number of points of each structure to 0*/	    
	Free.nCtr = xposn.nCtr = oposn.nCtr = 0;
	
	/*initializes the coordinates of the points to be filled
	  on each quadrant to their specified data structures*/
	for(i = 0; i < 2; i++)
		for(j = 0, k = 0; j < 5 && k < 3; k++, j += 2)
		{
			J[i][k].posX = CoordJ[i][j];
			J[i][k].posY = CoordJ[i][j+1];
			K[i][k].posX = CoordK[i][j];
			K[i][k].posY = CoordK[i][j+1];
			L[i][k].posX = CoordL[i][j];
			L[i][k].posY = CoordL[i][j+1];
			M[i][k].posX = CoordM[i][j];
			M[i][k].posY = CoordM[i][j+1];
		}
	
	/*initializes the container of unselected points*/
	for(i = 0, k = 0; i < 6; i++)
		for(j = 0; j < 6; j++, k++)
		{
			Free.Coords[k].posX = i + 1;
			Free.Coords[k].posY = j + 1;
			Free.nCtr++;
		}
	for(i=0;i<3;i++)
		strcpy(result[i],"");
	displayMP();
	/*while the game is not over & the number of moves is less than 36*/
	do
	{
		/*visual interface of the grid*/
		displayGrid(xposn, oposn);
		
		/*notifies which player's turn it is*/
		if(turn)
			printf("\n\nPlayer X! Your turn:\n");
		else
			printf("\n\nPlayer O! Your turn:\n");
			
		do
		{
			/*asks for input coordinates*/	
			printf("Enter X-coordinate: ");
			scanf("%d",&posn.posX);
			printf("Enter Y-coordinate: ");
			scanf("%d",&posn.posY);
			
			/*notifies if the input coordinates is not within the range*/
			if(posn.posX < 1 || posn.posX > 6)
				printf("Your X-coordinate is not within the range.\n");
			if(posn.posY < 1 || posn.posY > 6)
				printf("Your Y-coordinate is not within the range.\n");
				
		} while(posn.posX < 1 || posn.posX > 6 || posn.posY < 1 || posn.posY > 6);
		
		/*validates whether the input coordinates has already been selected or not*/ 
		NextPlayerMove(posn, &xposn, &oposn, &turn, &moves, &Free);
		
		/*if the total number of moves is 36*/
		if(moves == 36)
		    /*the game is over*/
			over = TRUE;
			
		/*gets the results of the game*/
		EndGame(over, result, J, K, L, M, xposn, oposn);
		system("cls");
	} while(!over && moves < 36);
	displayGrid(xposn, oposn);
	printf("\nThe game has ended..... And now the result..\n");
	getch();
	
	/*if the result is ex*/
	if(!strcmp(result[0],"ex"))
		/*Player one (X) wins*/
		printf("Player X wins!\n");
		
	/*if the result is oh*/
	else if(!strcmp(result[1],"oh"))
		/*Player two (O) wins*/
		printf("Player O wins!\n");
		
	/*if the result is draw*/
	else if(!strcmp(result[2],"draw"))
		/*both player wins*/
		printf("It's a draw!\n");
	
	/*closing message*/	
	printf("Thank you for playing!\n");
	return 0;
} 
