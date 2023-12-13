#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c50=10,c25=10,c10=10,c5=10;
    int s25=10,s15=10,s10=10;
    int x;
    int y;
    char t;
    char G,N;

    printf("Enter the amount of coins:");
    scanf("%d",&x);
    printf("Enter the price of stamps:");
    scanf("%d",&y);

    do {


  if (y>x)
    {
        printf("\nInsufficient amount tendered");
    }
    else if (y!=25 && y!=15 && y!=10){
        printf("no stamp available");
    }
    else if (x!=50,x!=25,x!=10,x!=5){
        printf("no change available");
    }


    switch (x)
    {
    case 50:

        if (y==25)
        {
            if (s25>0)
            {
                if (c25>0)
                {
                    printf("\nStamp is dispenced");
                    --s25;
                    printf("\nchange is RS.25");
                    --c25;
                    ++c50;
                }
                else
                {
                    printf("\nNo change available");
                    printf("\nRemain 50");

                }
            }
            else
            {
               printf("\nNo stamp available");
            }
        }
        else if (y==15)
        {
           if (s15>0)
           {
               if (c25>0 && c10>0)
               {
                    printf("\nStamp is dispenced");
                    --s15;
                    printf("\nchange is RS.25+ RS.10");
                    --c25;
                    --c10;
                    ++c50;

               }
               else
               {
                  printf("\nNo change available");
                    printf("\nRemain 50");

               }
           }
            else
            {
              printf("\nNo stamp available");
            }

        }
        else if (y==10)
        {
          if (s10>0)
          {
           if (c25>0 && c10>0 && c5>0)
           {
                    printf("\nStamp is dispensed");
                    --s10;
                    printf("\nchange is RS.25+ RS.10+ RS.5");
                    --c25;
                    --c10;
                    --c5;
                    ++c50;
           }
             else
               {
                  printf("\nNo change available");
                    printf("\nRemain 50");

               }

          }
          else
            {
              printf("\nNo stamp available");
            }
        }
    break;

    case 25:
        if (y==25)
        {
            if (s25>0)
            {
              printf("\nStamp is dispenced");
              --s25;
              printf("\nchange is zero");
              ++c25;

            }
            else
            {
               printf("\nNo stamp available");
            }
        }
        else if (y==15)
        {
           if (s15>0)
           {
               if (c10>0)
               {
                    printf("\nStamp is dispenced");
                    --s15;
                    printf("\nchange is RS.10");
                    --c10;
                    ++c25;
               }
               else
               {
                  printf("\nNo change available");
                    printf("\nRemain 25");

               }
           }
            else
            {
              printf("\nNo stamp available");
            }

        }
        else if (y==10)
        {
          if (s10>0)
          {
           if (c10>0 && c5>0)
           {
                    printf("\nStamp is dispenced");
                    --s10;
                    printf("\nchange is RS.10+ RS.5");
                    --c10;
                    --c5;
                    ++c25;
           }
             else
               {
                  printf("\nNo change available");
                    printf("\nRemain 25");

               }

          }
          else
            {
              printf("\nNo stamp available");
            }
        }
    break;

    case 10:

        if (y==10)
        {
            if (s10>0)
            {
              printf("\nStamp is dispensed\n");
              --s10;
              printf("\nchange is zero\n");
              ++c10;
            }
            else
            {
               printf("\nNo stamp available\n");
            }
        }

       break;

    case 5:
        printf("\nNo available\n");

        }

        printf("\n50 Coin Amount: %d",c50);
        printf("\n25 Coin Amount: %d",c25);
        printf("\n10 Coin Amount: %d",c10);
        printf("\n5 Coin Amount: %d\n",c5);

        printf("\n25 Stamp Amount: %d",s25);
        printf("\n15 Stamp Amount: %d",s15);
        printf("\n10 Stamp Amount: %d\n",s10);

        printf("\n\nDo you want another stamp? (G/N)\n");
        scanf(" %c",&t);

    }
    while (t=='G'|| t=='g');
    {
        printf("\n Thank you come again.\n ");
    }



   return 0;

  }









