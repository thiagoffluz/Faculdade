/************************************************************************/

//Bibliotecas:
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
#include<windows.h>

/************************************************************************/

//Variaveis:
            
            int go;
            int letra[3],letra2[3],todas[8],x,y1,y2,z=0,mudar,mudou[8];
            int desenho[4]={3,4,5,6},t=0;;
            int down=0,left=0;
            int carta[8]={219,219,219,219,219,219,219,219};
            
            int libera[7];
            

         
            
            



/************************************************************************/

//Funções Segundarias:

void delay(int seconds)
    {
         clock_t current, end;
    
         current = clock();
         end = current + CLOCKS_PER_SEC * seconds;
    
         while(current < end)
             current = clock();
    }
void gotoxy(int coluna, int linha)
{
             COORD point;
             point.X = coluna; 
             point.Y = linha;
             SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
}
    
void start()
{
   int col=34,lin;
   system("color f");
   for(lin=20;lin>2;lin--)
   {
      gotoxy(col,lin);
      printf("Jogo da memoria");
      
      system("cls");
   }

   system("cls");
   gotoxy(34,3);   
   printf("Jogo da memoria");
      system("color 0");
system("color 1");
system("color 2");
system("color 3");
system("color 4");
system("color 5");
system("color 6");
system("color 7");
system("color 8");
system("color 9");
system("color a");
system("color b");
system("color c");
system("color d");
system("color e");
system("color f");
   
   system("cls");
   gotoxy(35,8);
   printf("** Jogo **");
   gotoxy(35,9);
   printf("   Sair");
   
            
   
}

void selecao()
{
     system("color f");
     int j=1;
     while(getch()!=13)
     {
                    
     
     char();
     
     switch(getch())
     {
     case 72:               
     system("cls");
     gotoxy(35,8);
     printf("** Jogo **\n");
     gotoxy(35,9);
     printf("   Sair");
     go=1;
     break;
     
     case 80:
     system("cls");
     gotoxy(35,8);
     printf("   Jogo\n");
     gotoxy(35,9);
     printf("** Sair **\n");
     go=2;
     break;
     
       
           
           }
     }
}
void gol()
{
     if(go==2)
     {
              system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("\t****************************************************************\n");
printf("\t**        Totalmente desenvolvido por: Kayo N Almeida         **\n");
printf("\t**      Desenvolvido para estudo em logica e linguagem C      **\n");
printf("\t** Caso encontre imperfeicoes, sinta-se a vontade para edicao **\n");
printf("\t****************************************************************\n");
delay(10);
              exit(1);
     }
}

void inst()
{
         system("cls");  
         printf("\t\t*******************************************************\n"); 
         printf("\t\t*******************************************************\n");
         printf("\t\t***                   =Instru%coes=                  ***\n\n",135);
         printf("\t\t** 1- Escolha uma carta usando as teclas direcionais.**\n");
         printf("\t\t** 2- Quando escolher aperte ENTER.                  **\n",135);
         printf("\t\t** 3- Procure o par correto.                         **\n");
         printf("\t\t** 4- O jogador vence quando achar todos os pares.   **\n");
         printf("\t\t** 5- Desafie um amigo, ser%c mais divertido ainda.   **\n\n",160);
         printf("\t\t*******************************************************\n"); 
         printf("\t\t*******************************************************\n");
         delay(10);
              system("cls");
     printf("\t\t\t     Escolha uma carta\n\n");
     //Primeira linha:
                if(libera[0]!=1)
                {
                printf("\t\t\t\t%c  ",carta[0]);
                }
                else
                {
                    printf("\t\t\t\t%c ",todas[x]);
                }
                         
                if(libera[1]!=1)
                {
                printf("%c  ",carta[1]);
                }
                else{
                     printf("%c ",todas[x]);}
                     if(libera[2]!=1)
                {
                printf("%c  ",carta[2]);}
                else{
                     printf("%c  ",todas[x]);}
                     
     
     //Segunda linha:
               if(libera[3]!=1)
                {
                printf("\n\n\t\t\t\t%c     ",carta[3]);}
                else{
                     printf("\n\n\t\t\t\t%c    ",todas[x]);}
                     if(libera[4]!=1)
                {
                printf("%c  ",carta[4]);}
                else{printf("%c  ",todas[x]);}
     
     //Terceira linha:
                 if(libera[5]!=1)
                {
                printf("\n\n\t\t\t\t%c  ",carta[5]);}
                else{
                     printf("\n\n\t\t\t\t%c ",todas[x]);}
                if(libera[6]!=1)
                {
                printf("%c  ",carta[6]);}
                else{printf("%c ",todas[x]);}
                if(libera[7]!=1){
                printf("%c \n\n",carta[7]);}
                else{printf("%c \n\n",todas[x]);}    
}
//Funções:
          
void leia1()
{
          int cont,stime,i;
           
          stime=(unsigned)time(NULL);
          srand(stime);
           
          for(cont=0;cont<=3;cont++)
          {          
          letra[cont]=rand()%4;
         
          for(i=1;i<=3;i++)
          {
          if(letra[cont]==letra[cont-i] || letra[cont]==4)
          {
             cont--;
          }
          }
                         
          }
          
}
void leia2()
{
          int cont,stime,i;
         
          stime=(unsigned)time(NULL);
          srand(stime);
          
          for(cont=0;cont<=3;cont++)
          {          
          letra2[cont]=rand()%4;
          
          for(i=1;i<=3;i++)
          {
          if(letra2[cont]==letra2[cont-i] || letra2[cont]==4)
          {
             cont--;
          }
          }
                         
          }
          
}

void tela()
{
     system("cls");
     
     printf("\t\t\t     Escolha uma carta\n\n");
     //Primeira linha:
                if(libera[0]!=1)
                {
                printf("\t\t\t\t%c  ",carta[0]);
                }
                else
                {
                    
                    printf("\t\t\t\t%c  ",todas[0]);
                }
                         
                if(libera[1]!=1)
                {
                printf("%c  ",carta[1]);
                }
                else{
                     printf("%c  ",todas[1]);}
                     if(libera[2]!=1)
                {
                printf("%c  ",carta[2]);}
                else{
                     printf("%c   ",todas[2]);}
                     
     
     //Segunda linha:
               if(libera[3]!=1)
                {
                printf("\n\n\t\t\t\t%c     ",carta[3]);}
                else{
                     printf("\n\n\t\t\t\t%c     ",todas[3]);}
                     if(libera[4]!=1)
                {
                printf("%c  ",carta[4]);}
                else{printf("%c   ",todas[4]);}
     
     //Terceira linha:
                 if(libera[5]!=1)
                {
                printf("\n\n\t\t\t\t%c  ",carta[5]);}
                else{
                     printf("\n\n\t\t\t\t%c  ",todas[5]);}
                if(libera[6]!=1)
                {
                printf("%c  ",carta[6]);}
                else{printf("%c  ",todas[6]);}
                if(libera[7]!=1){
                printf("%c \n\n",carta[7]);}
                else{printf("%c  \n\n",todas[7]);}
                                    
     
     
     
     
}

void muda_tela()
{
   int j;
    if(down==0 && left==0)
    {
                     
                for(j=0;j<8;j++)
               {
               
                              
              
                                  carta[j]=219;
                              
               }
               x=0;
               carta[0]=177;
               tela();
    }else{
          
     if(down==0 && left==1)
    {
               for(j=0;j<8;j++)
               {
                
                               carta[j]=219;
                               
               }
             x=1;
               carta[1]=177;
               tela();
    }else{
       
    if(down==0 && left==2)
    {
               for(j=0;j<8;j++)
               {
                               
                               carta[j]=219;
                               
               }
              x=2;
               carta[2]=177;
               tela();
    }else{     
         
     if(down==1 && left==0)
    {
                for(j=0;j<8;j++)
               {
                              
                               carta[j]=219;
                               
               }
              x=3;
               carta[3]=177;
               tela();
    }else{
    if(down==1 && left==2){
    
               for(j=0;j<8;j++)
               {
                                
                               carta[j]=219;
                               
               }
              x=4;
               carta[4]=177;
               tela();
    }else{
    if(down==2 && left==0)
    {
               for(j=0;j<8;j++)
               {
                                
                               carta[j]=219;
                               
               }
             x=5;
               carta[5]=177;
               tela();
    }else{
    if(down==2 && left==1)
    {
               for(j=0;j<8;j++)
               {
                              
                               carta[j]=219;
                               
               }
             x=6;
               carta[6]=177;
               tela();
    }else{
    if(down==2 && left==2)
    {
               for(j=0;j<8;j++)
               {
                               
                               carta[j]=219;
                               
               }
             x=7;
               carta[7]=177;
               tela();
    }}}}}}}}
}
void escolha_carta()
{
     
     _flushall();
          while(getch()!=13)
     {
                    
     char();
     
     
     switch(getch())
     {
     case 77:
          if(left==2)
          {
          printf("\a");
          }
          else{               
     left++;
     
      muda_tela();
      }
     break;
     
     case 75:
          if(left==0)
          {
          printf("\a");
          }
          else{
     left--;
     muda_tela();
     }
     
     break;
     
     case 72:
          if(down==0)
          {
          printf("\a");
          }
          else{
     down--;
     
     muda_tela();
     }
     break;
     
     case 80:
          if(down==2)
          {
          printf("\a");
          }
          else{
     down++;
     muda_tela();
     }
     break;
     
       
           
           }
     }
}

void passa()
{
     todas[0]=desenho[letra[2]];
     todas[1]=desenho[letra[1]];
     todas[2]=desenho[letra[3]];
     todas[3]=desenho[letra[0]];
     todas[4]=desenho[letra2[1]];
     todas[5]=desenho[letra2[0]];
     todas[6]=desenho[letra2[3]];
     todas[7]=desenho[letra2[2]];
}
void enter()
{
   
     libera[x]=1;
     tela();
     y1=x;
     
}
void enter2()
{
     
       
     libera[x]=1;
     tela();
     
     y2=x;  
     
     
} 
void escolhida1()
{
     y1=todas[x];
     
     tela();
   
     
}
void escolhida2()
{
     y2=todas[x];
     tela();
}
void comparar()
{
     int p;
     if(y1==y2)
     {
               gotoxy(29,10);
           printf("Encontrou um par\n\n");
           delay(1);
           z++;     
     }
     else
     {
         gotoxy(31,10);
         system("echo Não é par");
         delay(1);
         for(p=0;p<8;p++)
         {
                         
         libera[p]=0;
         
         }
         z=0;
          tela();
         }
} 

/*Função Principal*/         
main()
{
      int contt;
      system("title Jogo da memoria / Por: Kayo N Almeida");
      start();
      selecao();
      gol();
      inst();
      delay(2);
      
      leia1();
      leia2();
      passa();
    while(z!=4)
    { 
    escolha_carta();
    enter();
    escolhida1();
    escolha_carta();
    enter2();
    escolhida2();
    comparar();    
    }
    tela();
    delay(2);
    if(z==4)
    {
            system("cls");
            printf("\n\t\t\tparab%cns, voc%c ganhou!!!",130,136);
            
printf("\n\n\n\n\n\n\n\n\n\n\n");
printf("\t****************************************************************\n");
printf("\t**        Totalmente desenvolvido por: Kayo N Almeida         **\n");
printf("\t**      Desenvolvido para estudo em logica e linguagem C      **\n");
printf("\t** Caso encontre imperfeicoes, sinta-se a vontade para edicao **\n");
printf("\t****************************************************************\n");
delay(10);
            
    }  
    

}
