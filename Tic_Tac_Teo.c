#include<stdio.h>

void gameboard(int [][3],int);
void gameboard(int tac[3][3],int p)
{
    int i,j,k=0;
    static int pos[9],m=0;

    if(p>=0)
    {
        pos[p-1]=p;
    }

    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(pos[k]>0)
            {
                if(j==0 || j==1)
                {
                    printf(" %c  | ",tac[i][j]);
                }
                else
                {
                    printf(" %c ",tac[i][j]);
                }
            }
            else
            {
                if(j==0 || j==1)
                {
                    printf("    | ");
                    //printf("  %d  | ",tac[i][j]);
                }
                else
                {
                    printf("    ");
                    //printf("  %d  ",tac[i][j]);
                }
            }
            k++;

        }
        printf("\n");
        if(i==0 || i==1)
        {
            printf("____|_____|_____\n");
        }
    }
    printf("    |     |   \n");
}



int main()
{
    int t[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,count=0;
    int pos;

    printf("\nWelcome To,Tic Tac Teo :\n");
    gameboard(t,0);

    int sel,win=0;
    char ch;

    ch='O';

    do
    {
        if(ch=='O')
        {
            ch='X';
        }
        else if(ch=='X')
        {
            ch='O';
        }

        printf("\nEnter Number for '%c' :",ch);
        scanf("%d",&sel);

        switch(sel)
        {
            case 1:
                    pos=1;
                    t[0][0]=ch;
                    gameboard(t,pos);
                    break;
                    
            case 2:
                    pos=2;
                    t[0][1]=ch;
                    gameboard(t,pos);
                    break;
             case 3:
                    pos=3;
                    t[0][2]=ch;
                    gameboard(t,pos);
                    break;
             case 4:
                    pos=4;
                    t[1][0]=ch;
                    gameboard(t,pos);
                    break;
            case 5:
                    pos=5;
                    t[1][1]=ch;
                    gameboard(t,pos);
                    break;
             case 6:
                    pos=6;
                    t[1][2]=ch;
                    gameboard(t,pos);
                    break;
             case 7:
                    pos=7;
                    t[2][0]=ch;
                    gameboard(t,pos);
                    break;
             case 8:
                    pos=8;
                    t[2][1]=ch;
                    gameboard(t,pos);                    
                    break;
             case 9:
                    pos=9;
                    t[2][2]=ch;
                    gameboard(t,pos);
                    break;
            default:
                    printf("Not Valid");
                    ch='O';
                    break;
        }
        count++;
        
        if(count!=0)
        {
            if((t[0][0]=='X' && t[0][1]=='X' && t[0][2]=='X') || (t[0][0]=='X' && t[1][0]=='X' && t[2][0]=='X') ||
               (t[0][1]=='X' && t[1][1]=='X' && t[2][1]=='X') || (t[0][2]=='X' && t[1][2]=='X' && t[2][2]=='X') ||
               (t[1][0]=='X' && t[1][1]=='X' && t[1][2]=='X') || (t[2][0]=='X' && t[2][1]=='X' && t[2][2]=='X') ||
               (t[0][0]=='X' && t[1][1]=='X' && t[2][2]=='X') || (t[0][2]=='X' && t[1][1]=='X' && t[2][0]=='X'))
            {
                printf("+---------------+\n");
                printf("| 'X' is Winner |\n");
                printf("+---------------+");
                win++;
                
            }
            else if((t[0][0]=='O' && t[0][1]=='O' && t[0][2]=='O') || (t[0][0]=='O' && t[1][0]=='O' && t[2][0]=='O') ||
               (t[0][1]=='O' && t[1][1]=='O' && t[2][1]=='O') || (t[0][2]=='O' && t[1][2]=='O' && t[2][2]=='O') ||
               (t[1][0]=='O' && t[1][1]=='O' && t[1][2]=='O') || (t[2][0]=='O' && t[2][1]=='O' && t[2][2]=='O') ||
               (t[0][0]=='O' && t[1][1]=='O' && t[2][2]=='O') || (t[0][2]=='O' && t[1][1]=='O' && t[2][0]=='O'))
            {
                printf("+---------------+\n");
                printf("| 'O' is Winner |\n");
                printf("+---------------+");
                win++;
            }
            else if(count==9)
            {
                printf("---------------------\n");
                printf("   'Match is Draw'  \n");
                printf("---------------------\n");
                win++;
            }

        }
        if(win==1)
        {
            break;
        }

    }while(count>=1 && count<=9);

    return 0;
}

//Old Game Board
            // printf("\n");
            // printf(" %d  |  %d  | %d  \n",tac[0][0],tac[0][1],tac[0][2]);
            // printf("_____|______|____\n");
            // printf(" %d  |  %d  | %d  \n",tac[1][0],tac[1][1],tac[1][2]);
            // printf("_____|______|____\n");
            // printf(" %d  |  %d  | %d  \n",tac[2][0],tac[2][1],tac[2][2]);
            // printf("     |      |    \n");


// void currnetboard(int tac[][3],int);
// void currentboard(int tac[3][3],int p)
// {
//     static int pos[9],i;
//     int j,m,k=0;
    
//     for(int i=0;i<9;i++)
//     {
//         pos[i]=p;
//         break;
//     }

//     for(j=0;j<3;j++)
//     {
//         for(m=0;m<3;m++)
//         {
//             if(pos[k]==1)
//             {
//                 printf("%c  ",tac[i][j]);
//             }
//             else
//             {
//                 printf("%d  ",tac[i][j]);
//             }
//             k++;
//         }
//         printf("\n");
//     }
//     return ;
// }

// void currnetboard(int tac[][3],int);
// void currentboard(int tac[3][3],int p)
// {
//     static int pos[9],i;
//     int j,m,k=0;
    
//     for(int i=0;i<9;i++)
//     {
//         pos[i]=p;
//         break;
//     }

//     for(j=0;j<3;j++)
//     {
//         for(m=0;m<3;m++)
//         {
//             if(pos[k]==1)
//             {
//                 printf("%c  ",tac[i][j]);
//             }
//             else
//             {
//                 printf("%d  ",tac[i][j]);
//             }
//             k++;
//         }
//         printf("\n");
//     }
//     return ;
// }

// void inputposition(int [][3],int,char);
// void inputposition(int teo[3][3],int p,char c)
// {
//     int i=0,j=0,m=0;
//     int tic[9];

//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             tic[m]=teo[i][j];
//             m++;
//         }
//     }

//     for(i=0;i<9;i++)
//     {
//         tic[p-1]=c;
//     }

//     m=0;

//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             teo[i][j]=tic[m];
//             m++;
//         }
//     }

//     gameboard(teo,p);

//     return ;
// }