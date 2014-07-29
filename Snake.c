main()
{
      void startScreen();
      void exitScreen(int);
      startScreen();
      int i,j;
      int field[21][61];
      int snake[21*61][2];
      for(i=0;i<21;i++)
      {
                       for(j=0;j<61;j++)
                       {
                                       if(i==0 || i==20 || j==0 || j==60)
                                       field[i][j]=9977;
                                       else
                                       field[i][j]=0;
                       }
      }
      int applex[10]={16,3,14,12,19,12,13,18,1,4};
      int appley[10]={39,35,8,34,16,23,27,56,1,59};
      field[16][39]=3;
      int k=0;
      snake[0][0]=8; snake[0][1]=8;
      snake[1][0]=8; snake[1][1]=7;
      snake[2][0]=8; snake[2][1]=6;
      int length=3;
      char movement='d';
      while(kbhit() || !kbhit())
      {
                    for(i=0;i<length;i++)
                    {
                                         field[snake[i][0]][snake[i][1]]=2;
                    }
                    system("cls");
                    printf("\n\n\t");
                    field[0][0]=9977;
                    for(i=0;i<21;i++)
                    {
                         for(j=0;j<61;j++)
                         {
                                       printf("%c",field[i][j]);
                         }
                         printf("\n\t");
                    }
                    printf("Snake Length: %d",length);
                    if((field[snake[0][0]][snake[0][1]])==(field[applex[k]][appley[k]]))
                    {
                                                                                     ++length;
                                                                                     ++k;
                                                                                     if(k==10)
                                                                                     k=0;
                                                                                     field[applex[k]][appley[k]]=3;
                    }
                    for(i=0;i<length;i++)
                    {
                                         field[snake[i][0]][snake[i][1]]=0;
                    }
                    if(kbhit())
                    {
                         movement=getch();
                    }
                    
                    if(movement=='d')
                    {
                                     for(i=length-1;i>=1;i--)
                                     {
                                                          for(j=0;j<2;j++)
                                                          {
                                                                          snake[i][j]=snake[i-1][j];
                                                          }
                                     }
                                     ++snake[0][1];
                    }
                    if(movement=='a')
                    {
                                     for(i=length-1;i>=1;i--)
                                     {
                                                          for(j=0;j<2;j++)
                                                          {
                                                                          snake[i][j]=snake[i-1][j];
                                                          }
                                     }
                                     --snake[0][1];
                    }
                    if(movement=='w')
                    {
                                     for(i=length-1;i>=1;i--)
                                     {
                                                          for(j=0;j<2;j++)
                                                          {
                                                                          snake[i][j]=snake[i-1][j];
                                                          }
                                     }
                                     --snake[0][0];
                    }
                    if(movement=='s')
                    {
                                     for(i=length-1;i>=1;i--)
                                     {
                                                          for(j=0;j<2;j++)
                                                          {
                                                                          snake[i][j]=snake[i-1][j];
                                                          }
                                     }
                                     ++snake[0][0];
                    }
                    for(i=0;i<length-1;i++)
                    {
                                         for(j=i+1;j<length-1;j++)
                                         {
                                                                  if(snake[i][0]==snake[j][0] && snake[i][1]==snake[j][1])
                                                                  {
                                                                       exitScreen(length);
                                                                  }
                                         }
                    }
                    if(snake[0][0]==0 || snake[0][0]==20 || snake[0][1]==0 || snake[0][1]==60)
                    exitScreen(length);
      }
      getch();
}
void startScreen()
{
     int i;
     printf("\n\n\n\n\n\t\t\t   *** *   * **** *  * ***\n");
     printf("\t\t\t   *   **  * *  * * *  *\n");
     printf("\t\t\t   *** * * * **** **   ***\n");
     printf("\t\t\t     * *  ** *  * * *  *\n");
     printf("\t\t\t   *** *   * *  * *  * ***\n\n");
     printf("\t\t\t%c ",3);
     for(i=1;i<=25;i++)
     {
                       if(i%2==0)
                       printf("%c",(char)2);
                       else
                       printf("%c",(char)1);
     }
     printf(" %c",3);
     printf("\n\n\t\t\t  .Aroon Mathai Production.\n\n\n\n\t\t\t   HIT ANY KEY TO CONTINUE");
     char ent;
     ent=getche();
     if((int)ent>0)
     {
                   system("cls");
     }
}
void exitScreen(int length)
{
     system("cls");
     printf("\n\n\n\n\n");
     printf("\n\n\n\n\n\t\t\t         Your Score: %d    \n\n\t\t          PRESS ANY KEY TO CONTINUE.",length);
     char ent;
     ent=getche();
     if(ent>0)
     {
            system("cls");
     }  
     printf("\n\n\n\n\n\n\n\n");
     printf("\t\t              THANK YOU FOR PLAYING\n\n");
     printf("\n\t\t         %c%c%c%c%c %c%c%c%c %c %c%c%c %c%c%c%c %c%c%c%c %c%c%c%c",(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1);
     printf("\n\n\t\t            .Aroon Mathai Production.");
     printf("\n\n\n\n\n\t\t\t    Restart:  Press SPACE BAR");
     ent=getch();
     system("cls");
     if(ent==32)
     {
                main();
     }
     else
     {
                getch();
     }
}

