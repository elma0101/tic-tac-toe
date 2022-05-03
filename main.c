#include <stdio.h>
#include <stdlib.h>
void interface();
int main()
{
      system("color B");
      char ch1,ch2;
      int rnd,i;
       interface();
       rules();
       choice();

    return 0;
}
void interface()
{  int i;
     printf("\t\t\t\t********************** TIC TAC TOE **********************\n");
     printf("\t\t\t\t                 **********************          \n\n\n\n");
     printf("\n\t\t\t\t\t\t");
     for(i=0;i<26;i++)
     { printf("=");
       Sleep(20);
     }
     printf("\n\t\t\t\t\t\t");
     for(i=0;i<26;i++)
     { printf("=");
       Sleep(20);
     }
     printf("\n\t\t\t\t\t\t");
     printf("==");
      printf("  X   ");
     Sleep(20);

     printf("==");

     Sleep(20);
     printf("  O   ");
     Sleep(20);
     printf("==");
     Sleep(20);
     printf("      ");
     Sleep(20);
     printf("==");
     printf("\n\t\t\t\t\t\t");
     for(i=0;i<3;i++)
     { printf("==\t");
       Sleep(20);
     }
     printf("==");
     printf("\n\t\t\t\t\t\t");
     for(i=0;i<26;i++)
     { printf("=");
       Sleep(20);
     }
     printf("\n\t\t\t\t\t\t");
     printf("==");
      printf("      ");
     Sleep(20);

     printf("==");

     Sleep(20);
     printf("  X   ");
     Sleep(20);
     printf("==");
     Sleep(20);
     printf("  O   ");
     Sleep(20);
     printf("==");
     printf("\n\t\t\t\t\t\t");
     for(i=0;i<3;i++)
     { printf("==\t");
       Sleep(20);
     }
     printf("==");
     printf("\n\t\t\t\t\t\t");
     for(i=0;i<26;i++)
     { printf("=");
       Sleep(20);
     }
      printf("\n\t\t\t\t\t\t");
     printf("==");
      printf("      ");
     Sleep(20);

     printf("==");

     Sleep(20);
     printf("  X   ");
     Sleep(20);
     printf("==");
     Sleep(20);
     printf("  O   ");
     Sleep(20);
     printf("==");
      printf("\n\t\t\t\t\t\t");
     for(i=0;i<3;i++)
     { printf("==\t");
       Sleep(20);
     }
     printf("==");
     printf("\n\t\t\t\t\t\t");
     for(i=0;i<26;i++)
     { printf("=");
       Sleep(20);
     }
     printf("\n\t\t\t\t\t\t");
     for(i=0;i<26;i++)
     { printf("=");
       Sleep(20);
     }
     printf("\n\n\t\t\t\t\t\t");
     printf("    *START THE GAME !*");
     getchar();
     system("cls");

}

void rules()
{
    int i;
    printf("\t\t\t\t********************** TIC TAC TOE **********************\n");
    printf("\t\t\t\t                 **********************          \n\n\n\n");
    printf("\n\t\t\t\t\t\t");
    printf("\t*RULES*");
    printf("\n\t\t\t\t\t\t");
    printf("       ---------");
    printf("\n\t\t\t\t\t\t");
    printf("       ---------");
    printf("\n\n\n\n\t\t");
    printf("1. The game is played on a grid that's 3 squares by 3 squares . ");
    printf("\n\n\t\t");
    printf("2. You are X, your friend is O. Players take turns putting their marks in empty squares .");
    printf("\n\n\t\t");
    printf("3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner .");
    printf("\n\n\t\t");
    printf("4. When all 9 squares are full,the game is over.\n\n\t\tIf no player has 3 marks in a row, the game ends in a tie .\n\n");
    printf("\n\n\n\t\t\t\t");
    for(i=0;i<5;i++)
     {  printf("\t(^_^)");
       Sleep(500);
     }
    printf("\n\n\t\t\t\t\t\t   ");
    printf("Press any key !\n");
    getchar();
    system("cls");

}

void choice()
{
  char ch1,ch2,rec1[5],rec2[5],w,T[3][3]={'1','2','3','4','5','6','7','8','9'},R[9]={'1','2','3','4','5','6','7','8','9'};
  int rnd,i,j,cpt=0,k,y,cas1,cas2,cas3,cas4,scr1=0,scr2=0,f1,W[20],mode,n,lim;
  do{
  do{
     printf("\t\t\t\t********************** TIC TAC TOE **********************\n");
     printf("\t\t\t\t                 **********************          \n\n\n\n");
     printf("\n\t\t\t\t\t\t");
     printf("\n\t\t\t\t\t\t");
     printf("  choose MODE ");
     printf("\n\n\n\t\t\t\t\t\t");
     printf("  *1*P1 VS P2 \n");
     printf("\n\t\t\t\t\t\t");
     printf("  *2*P1 VS CPU\n");

     scanf("%d",&mode);
     Sleep(600);
     printf("\n\t\t\t\t\t\t");
     printf("  choose : X/O \n");
     printf("\n\t\t\t\t\t\t");
     printf("  *Player 1*  ");

     printf("\n\n\t\t\t\t\t\t        ");
     scanf(" %c",&ch1);
     if(ch1!='X' && ch1!='O' && ch1!='x'&& ch1!='o' && mode!=1 && mode!=2 )
      system("cls");
  }while(ch1!='X' && ch1!='O' && ch1!='x'&& ch1!='o' && mode!=1 && mode!=2);
  Sleep(600);
  if(ch1=='X' || ch1=='x')
  {  printf("\n\n\t\t\t\t\t\t");
     printf("  *Player 2*  ");
     printf("\n\n\t\t\t\t\t\t        O");
    ch2='O';
  }else
  {  printf("\n\n\t\t\t\t\t\t");
     printf("  *Player 2*  ");
     printf("\n\n\t\t\t\t\t\t        X");
     ch2='X';
  }
  Sleep(1000);
  printf("\n\n\t\t\t\t\t\t     ");
  printf("Rounds  ");
  printf("\n\t\t\t\t\t\t        ");
  scanf("%d",&rnd);
  printf("\n\n\t\t\t\t\t\t");
  printf("     LOADING...");
  printf("\n\n\t\t\t");
   for(i=0;i<32;i++)
    {  printf("\xdb ");
       Sleep(200);
    }
  system("cls");

  for(y=0;y<rnd;y++)
 {
    char T[3][3]={'1','2','3','4','5','6','7','8','9'},R[9]={'1','2','3','4','5','6','7','8','9'};
    cpt=0;
    w=0;

   do{
     printf("\t\t\t\t********************** TIC TAC TOE **********************\n");
     printf("\t\t\t\t                 **********************          \n\n\n\n");
     printf("\n\t\t\t\t\t\t");
     printf("\n\t\t\t\t\t\t\t");
     printf("  ROUND %d ",y+1);
     printf("\n\t\t\t\t\t\t");
    for(i=0;i<3;i++)
    {   printf("\n\t\t\t\t\t\t");
       for(k=0;k<26;k++)
       printf("-");
       printf("\n\t\t\t\t\t\t");
       for(j=0;j<3;j++)
       printf("|   %c   |", T[i][j]);
       printf("\n\t\t\t\t\t\t");
       for(k=0;k<26;k++)
       printf("-");
    }
     printf("\n\n\n\t\t\t");
    printf("player 1 : ");
    scanf(" %c",&rec1[cpt]);
    for(i=0;i<3;i++)
     for(j=0;j<3;j++)
       if(rec1[cpt]==T[i][j])
          {
            T[i][j]=ch1;
            break;
          }

   if(mode==1)
   {
     if(cpt!=4 && w!=ch1 )
     {printf("\n\t\t\t");
      printf("player 2 : ");
      scanf(" %c",&rec2[cpt]);
    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
        if(rec2[cpt]==T[i][j])
          {
            T[i][j]=ch2;
            break;
          }
     }
   }else
   {

      if(cpt!=4 && w!=ch1 )
     {
      for(i=0;i<9;i++)
       if(rec1[cpt]==R[i])
      { R[i]=R[i+1];

      }
      n=rand()%9;
      rec2[cpt]=R[n];
      printf("\n\t\t\t");
      printf("player 2 : %c ",rec2[cpt]);
      Sleep(300);
    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
        if(rec2[cpt]==T[i][j])
          {
            T[i][j]=ch2;
            break;
          }
     }
   }




    for(i=0;i<3;i++){

    cas1=0;
    cas2=0;
    cas3=0;
    cas4=0;
    for(j=0;j<2;j++)
    { if(T[i][j]==T[i][j+1])
      { cas1++;
        if(cas1==2)
          w=T[i][j];

      }
      if(T[j][i]==T[j+1][i])
      { cas2++;
        if(cas2==2)
          w=T[j][i];

      }
      if(T[j][j]==T[j+1][j+1])
      { cas3++;
        if(cas3==2)
          w=T[j][j];

      }
      if(T[j][2-j]==T[j+1][2-(j+1)])
      { cas4++;
        if(cas4==2)
          w=T[j][2-j];

      }
    }
   if(cas1==2 || cas2==2 || cas3==2 || cas4==2)
      break;

  }


   if(cas1==2 || cas2==2 || cas3==2 || cas4==2)
      break;
  cpt++;
  system("cls");
 }while(cpt<=4);
 system("cls");
 printf("\t\t\t\t********************** TIC TAC TOE **********************\n");
     printf("\t\t\t\t                 **********************          \n\n\n\n");
     printf("\n\t\t\t\t\t\t");
     printf("\n\t\t\t\t\t\t");
    for(i=0;i<3;i++)
    {   printf("\n\t\t\t\t\t\t");
       for(k=0;k<26;k++)
       printf("-");
       printf("\n\t\t\t\t\t\t");
       for(j=0;j<3;j++)
       printf("|   %c   |", T[i][j]);
       printf("\n\t\t\t\t\t\t");
       for(k=0;k<26;k++)
       printf("-");
    }



    printf("\n\n\n\t\t\t\t\t\t   ");
 if(w==ch1)
   { printf("PLAYER 1 WINS ROUND %d \n",y+1);
     scr1++;
     W[y]=1;
   }
 else if(w==ch2)
       { printf("PLAYER 2 WINS ROUND %d \n",y+1);
         scr2++;
         W[y]=2;
       }
    else
       {
         printf("EQUAL RESULTS \n");
         W[y]=3;
       }
  Sleep(2000);
  system("cls");
 }

 if(scr1>scr2)
 {
    printf("\t\t\t\t********************** TIC TAC TOE **********************\n");
    printf("\t\t\t\t                 **********************          \n\n\n\n");
    printf("\n\n\n\t\t\t\t\t   ");
    printf("\xdb\xdb\xdb\xdb\xdb\xdb\xbb  \xdb\xdb\xbb    \xdb\xdb\xbb    \xdb\xdb\xbb\xdb\xdb\xbb\xdb\xdb\xdb\xbb   \xdb\xdb\xbb");
    printf("\n\t\t\t\t\t   ");
    printf("\xdb\xdb\xc9\xcd\xcd\xdb\xdb\xbb\xdb\xdb\xdb\xba    \xdb\xdb\xba    \xdb\xdb\xba\xdb\xdb\xba\xdb\xdb\xdb\xdb\xbb  \xdb\xdb\xba");
    printf("\n\t\t\t\t\t   ");
    printf("\xdb\xdb\xdb\xdb\xdb\xdb\xc9\xbc\xc8\xdb\xdb\xba    \xdb\xdb\xba \xdb\xbb \xdb\xdb\xba\xdb\xdb\xba\xdb\xdb\xc9\xdb\xdb\xbb \xdb\xdb\xba");
    printf("\n\t\t\t\t\t   ");
    printf("\xdb\xdb\xc9\xcd\xcd\xcd\xbc  \xdb\xdb\xba    \xdb\xdb\xba\xdb\xdb\xdb\xbb\xdb\xdb\xba\xdb\xdb\xba\xdb\xdb\xba\xc8\xdb\xdb\xbb\xdb\xdb\xba");
    printf("\n\t\t\t\t\t   ");
    printf("\xdb\xdb\xba      \xdb\xdb\xba    \xc8\xdb\xdb\xdb\xc9\xdb\xdb\xdb\xc9\xbc\xdb\xdb\xba\xdb\xdb\xba \xc8\xdb\xdb\xdb\xdb\xba");
    printf("\n\t\t\t\t\t   ");
    printf("\xc8\xcd\xbc      \xc8\xcd\xbc     \xc8\xcd\xcd\xbc\xc8\xcd\xcd\xbc \xc8\xcd\xbc\xc8\xcd\xbc  \xc8\xcd\xcd\xcd\xbc");

 }else if(scr1<scr2)
        {
          printf("\t\t\t\t********************** TIC TAC TOE **********************\n");
          printf("\t\t\t\t                 **********************          \n\n\n\n");
          printf("\n\n\n\t\t\t\t\t   ");
          printf("\xdb\xdb\xdb\xdb\xdb\xdb\xbb \xdb\xdb\xdb\xdb\xdb\xdb\xbb     \xdb\xdb\xbb    \xdb\xdb\xbb\xdb\xdb\xbb\xdb\xdb\xdb\xbb   \xdb\xdb\xbb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xbb");
          printf("\n\t\t\t\t\t   ");
          printf("\xdb\xdb\xc9\xcd\xcd\xdb\xdb\xbb\xc8\xcd\xcd\xcd\xcd\xdb\xdb\xbb    \xdb\xdb\xba    \xdb\xdb\xba\xdb\xdb\xba\xdb\xdb\xdb\xdb\xbb  \xdb\xdb\xba\xdb\xdb\xc9\xcd\xcd\xcd\xcd\xbc");
          printf("\n\t\t\t\t\t   ");
          printf("\xdb\xdb\xdb\xdb\xdb\xdb\xc9\xbc \xdb\xdb\xdb\xdb\xdb\xc8\xbc    \xdb\xdb\xba \xdb\xbb \xdb\xdb\xba\xdb\xdb\xba\xdb\xdb\xc9\xdb\xdb\xbb \xdb\xdb\xba\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xbb");
          printf("\n\t\t\t\t\t   ");
          printf("\xdb\xdb\xc9\xcd\xcd\xcd\xbc \xdb\xdb\xdb\xc9\xcd\xcd\xbc     \xdb\xdb\xba\xdb\xdb\xdb\xbb\xdb\xdb\xba\xdb\xdb\xba\xdb\xdb\xba\xc8\xdb\xdb\xbb\xdb\xdb\xba\xc8\xcd\xcd\xcd\xcd\xdb\xdb\xba");
          printf("\n\t\t\t\t\t   ");
          printf("\xdb\xdb\xba     \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xbb    \xc8\xdb\xdb\xdb\xc9\xdb\xdb\xdb\xc9\xbc\xdb\xdb\xba\xdb\xdb\xba \xc8\xdb\xdb\xdb\xdb\xba\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xba");
          printf("\n\t\t\t\t\t   ");
          printf("\xc8\xcd\xbc     \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xbc     \xc8\xcd\xcd\xbc\xc8\xcd\xcd\xbc \xc8\xcd\xbc\xc8\xcd\xbc  \xc8\xcd\xcd\xbc\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

        }else
         {
           printf("\t\t\t\t********************** TIC TAC TOE **********************\n");
           printf("\t\t\t\t                 **********************          \n\n\n\n");
           printf("\n\n\n\t\t\t\t\t   ");
           printf("\xdb\xdb\xdb\xdb\xdb\xdb\xbb \xdb\xdb\xdb\xdb\xdb\xdb\xbb  \xdb\xdb\xdb\xdb\xdb\xbb \xdb\xdb\xbb    \xdb\xdb\xbb    \xdb\xdb\xbb");
           printf("\n\t\t\t\t\t   ");
           printf("\xdb\xdb\xc9\xcd\xcd\xdb\xdb\xbb\xdb\xdb\xc9\xcd\xcd\xdb\xdb\xbb\xdb\xdb\xc9\xcd\xcd\xdb\xdb\xbb\xdb\xdb\xba    \xdb\xdb\xba    \xdb\xdb\xba");
           printf("\n\t\t\t\t\t   ");
           printf("\xdb\xdb\xba  \xdb\xdb\xba\xdb\xdb\xdb\xdb\xdb\xdb\xc9\xbc\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xba\xdb\xdb\xba \xdb\xbb \xdb\xdb\xba    \xdb\xdb\xba");
           printf("\n\t\t\t\t\t   ");
           printf("\xdb\xdb\xba  \xdb\xdb\xba\xdb\xdb\xc9\xcd\xcd\xdb\xdb\xbb\xdb\xdb\xc9\xcd\xcd\xdb\xdb\xba\xdb\xdb\xba\xdb\xdb\xdb\xbb\xdb\xdb\xba    \xc8\xcd\xbc");
           printf("\n\t\t\t\t\t   ");
           printf("\xdb\xdb\xdb\xdb\xdb\xdb\xc9\xbc\xdb\xdb\xba  \xdb\xdb\xba\xdb\xdb\xba  \xdb\xdb\xba\xc8\xdb\xdb\xdb\xc9\xdb\xdb\xdb\xc9\xbc    \xdb\xdb\xbb");
           printf("\n\t\t\t\t\t   ");
           printf("\xc8\xcd\xcd\xcd\xcd\xcd\xbc \xc8\xcd\xbc  \xc8\xcd\xbc\xc8\xcd\xbc  \xc8\xcd\xbc \xc8\xcd\xcd\xbc\xc8\xcd\xcd\xbc     \xc8\xcd\xbc");
         }
    printf("\n\n\n\t\t\t\t\t\t   ");
    for(i=0;i<24;i++)
        printf("-");
    printf("\n\t\t\t\t\t\t   ");
    printf("|  Round   ||  Winner  |");
    printf("\n\t\t\t\t\t\t   ");
    for(i=0;i<24;i++)
        printf("=");
    printf("\n\t\t\t\t\t\t   ");
    for(y=0;y<rnd;y++)
    { if(W[y]==1)
        printf("|   %d      ||     P1   |",y+1);
      else if(W[y]==2)
              printf("|   %d      ||     P2   |",y+1);
           else
              printf("|   %d      ||    Draw  |",y+1);
      printf("\n\t\t\t\t\t\t   ");
      for(i=0;i<24;i++)
        printf("-");
      printf("\n\t\t\t\t\t\t   ");
    }

    printf("\n\n\n\n\n\t\t\t\t\t\t\t*1*PLAY AGAIN !\n\n\t\t\t\t\t\t\t*3*QUIT ");
    scanf("%d",&f1);
    system("cls");
}while(f1==1);
}

