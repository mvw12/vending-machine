/**
* ENGG1110 Problem Solving by Programming *
* Course Project
*
* I declare that the project here submitted is original
* except for source material explicitly acknowledged,
* and that the same or closely related material has not been
* previously submitted for another course.
* I also acknowledge that I am aware of University policy and
* regulations on honesty in academic work, and of the disciplinary
* guidelines and procedures applicable to breaches of such
* policy and regulations, as contained in the website. *
* University Guideline on Academic Honesty:
* https://www.cuhk.edu.hk/policy/academichonesty/ *
* Student Name : MAANAV VIJAY WADHWA
* Student ID : 1155138112
* Class/Section : ENGG 1110 D
* Date : 09/12/2019
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void info(char name[][10],int cost[])
{
    printf("\n(1) The displayed products are:\n");
    printf("A. %s ($%d)\n",name[0],cost[0]);
    printf("B. %s ($%d)\n",name[1],cost[1]);
    printf("C. %s ($%d)\n",name[2],cost[2]);
    printf("D. %s ($%d)\n",name[3],cost[3]);
    printf("E. %s ($%d)\n",name[4],cost[4]);
    printf("\n");
}
int main(void)
{
    char name[5][10]={"Juice","Cola","Tea","Water","Coffee"};
    int cost[5]={10,6,5,8,7};
    int sum = 0;
    int coin = 1;
    int value[4] = {1,2,5,10};
    char index[5]={32,32,32,32,32};
    int count[5]={5,1,2,1,9};
    int choice = 1;
    int revenue = 0;
    double code;
    printf("*---------------------------*\n");
    printf("|      Vending Machine      |\n");
    printf("*---------------------------*\n");
    printf("|   A    B    C    D    E   |\n");
    printf("|  $%2d  $%2d  $%2d  $%2d  $%2d  |\n",cost[0],cost[1],cost[2],cost[3],cost[4]);
    printf("|  [ ]  [ ]  [ ]  [ ]  [ ]  |\n");
    printf("*---------------------------*\n");
    printf("|                    [$%2d]  |\n", sum);
    printf("|                           |\n");
    printf("|           [===]           |\n");
    printf("*---------------------------*\n\n");
    while(choice!=0)
    {
        printf("What would you like to do?\n");
        printf("1. Read product information\n");
        printf("2. Insert coin\n");
        printf("3. Press product button\n");
        printf("4. Press return button\n");
        printf("9. Open service menu (code required)\n");
        printf("0. Quit\n");
        printf("Your choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            info(name,cost);
        }
        else if(choice==2)
        {
            coin=1;
            while(coin!=0)
            {
                printf("\n(2) Which coin would you like to insert?\n");
                printf("1. $1\n");
                printf("2. $2\n");
                printf("3. $5\n");
                printf("4. $10\n");
                printf("0. Go back\n");
                printf("Your choice:");
                scanf("%d",&coin);
                if(coin==0)
                {
                    printf("Going back!\n");
                    printf("\n");
                    printf("*---------------------------*\n");
                    printf("|      Vending Machine      |\n");
                    printf("*---------------------------*\n");
                    printf("|   A    B    C    D    E   |\n");
                    printf("|  $%2d  $%2d  $%2d  $%2d  $%2d  |\n",cost[0],cost[1],cost[2],cost[3],cost[4]);
                    printf("|  [%c]  [%c]  [%c]  [%c]  [%c]  |\n",index[0],index[1],index[2],index[3],index[4]);
                    printf("*---------------------------*\n");
                    printf("|                    [$%2d]  |\n", sum);
                    printf("|                           |\n");
                    printf("|           [===]           |\n");
                    printf("*---------------------------*\n\n");
                }
                else if((coin>=1)&&(coin<=4))
                {
                    sum+=value[coin-1];
                    printf("You have inserted $%d.\n",value[coin-1]);
                    printf("\n");
                    for(int i=0;i<5;i++)
                    {
                        if(count[i]==0)
                            index[i]=88;
                        else if(sum>=cost[i])
                            index[i]=79;
                        else
                            index[i]=32;
                    }
                      printf("*---------------------------*\n");
                      printf("|      Vending Machine      |\n");
                      printf("*---------------------------*\n");
                      printf("|   A    B    C    D    E   |\n");
                      printf("|  $%2d  $%2d  $%2d  $%2d  $%2d  |\n",cost[0],cost[1],cost[2],cost[3],cost[4]);
                      printf("|  [%c]  [%c]  [%c]  [%c]  [%c]  |\n",index[0],index[1],index[2],index[3],index[4]);
                      printf("*---------------------------*\n");
                      printf("|                    [$%2d]  |\n", sum);
                      printf("|                           |\n");
                      printf("|           [===]           |\n");
                      printf("*---------------------------*\n");
                }
                else
                    printf("Invalid choice!\n");
            }
        }
        else if(choice==3)
        {
            int option = 6;
            while((option<0)||(option>5))
            {
                char A = '@';
                printf("\n(3) Which product button would you like to press?\n");
                printf("1. A\n");
                printf("2. B\n");
                printf("3. C\n");
                printf("4. D\n");
                printf("5. E\n");
                printf("0. Go back\n");
                printf("Your choice:");
                scanf("%d",&option);
                A = A + option;
                if(option==0)
                {
                    printf("Going back!\n");
                    printf("\n");
                    printf("*---------------------------*\n");
                    printf("|      Vending Machine      |\n");
                    printf("*---------------------------*\n");
                    printf("|   A    B    C    D    E   |\n");
                    printf("|  $%2d  $%2d  $%2d  $%2d  $%2d  |\n",cost[0],cost[1],cost[2],cost[3],cost[4]);
                    printf("|  [%c]  [%c]  [%c]  [%c]  [%c]  |\n",index[0],index[1],index[2],index[3],index[4]);
                    printf("*---------------------------*\n");
                    printf("|                    [$%2d]  |\n", sum);
                    printf("|                           |\n");
                    printf("|           [===]           |\n");
                    printf("*---------------------------*\n\n");
                }
                else if((option>=1)&&(option<=5))
                {
                    printf("You have pressed button %c.\n",A);
                    printf("\n");
                    if((sum>=cost[option-1])&&(count[option-1]>0))
                    {
                        sum = sum - cost[option-1];
                        count[option-1]--;
                        revenue+=cost[option-1];
                    }
                    else
                        A = 61;
                    for(int j=0;j<5;j++)
                    {
                        if(count[j]==0)
                            index[j]=88;
                        else if(sum>=cost[j])
                            index[j]=79;
                        else
                            index[j]=32;
                    }
                    printf("*---------------------------*\n");
                    printf("|      Vending Machine      |\n");
                    printf("*---------------------------*\n");
                    printf("|   A    B    C    D    E   |\n");
                    printf("|  $%2d  $%2d  $%2d  $%2d  $%2d  |\n",cost[0],cost[1],cost[2],cost[3],cost[4]);
                    printf("|  [%c]  [%c]  [%c]  [%c]  [%c]  |\n",index[0],index[1],index[2],index[3],index[4]);
                    printf("*---------------------------*\n");
                    printf("|                    [$%2d]  |\n", sum);
                    printf("|                           |\n");
                    printf("|           [=%c=]           |\n",A);
                    printf("*---------------------------*\n\n");
                }
                else
                    printf("Invalid choice!\n");
            }
        }
        else if(choice==4)
        {
            printf("\n(4) Return button is pressed.\n");
            printf("$%d has been returned.\n",sum);
            sum = 0;
            for(int k=0;k<5;k++)
            {
                if(count[k]==0)
                    index[k]=88;
                else
                    index[k]=32;
            }
            printf("\n");
            printf("*---------------------------*\n");
            printf("|      Vending Machine      |\n");
            printf("*---------------------------*\n");
            printf("|   A    B    C    D    E   |\n");
            printf("|  $%2d  $%2d  $%2d  $%2d  $%2d  |\n",cost[0],cost[1],cost[2],cost[3],cost[4]);
            printf("|  [%c]  [%c]  [%c]  [%c]  [%c]  |\n",index[0],index[1],index[2],index[3],index[4]);
            printf("*---------------------------*\n");
            printf("|                    [$%2d]  |\n", sum);
            printf("|                           |\n");
            printf("|           [===]           |\n");
            printf("*---------------------------*\n\n");
        }
        else if(choice==9)
        {
            printf("\n(9) Opening service menu. Access code is required.\n");
            printf("Enter access code:");
            scanf("%lf",&code);
            if(code!=1110)
            {
                printf("Incorrect code!\n\n");
                printf("*---------------------------*\n");
                printf("|      Vending Machine      |\n");
                printf("*---------------------------*\n");
                printf("|   A    B    C    D    E   |\n");
                printf("|  $%2d  $%2d  $%2d  $%2d  $%2d  |\n",cost[0],cost[1],cost[2],cost[3],cost[4]);
                printf("|  [%c]  [%c]  [%c]  [%c]  [%c]  |\n",index[0],index[1],index[2],index[3],index[4]);
                printf("*---------------------------*\n");
                printf("|                    [$%2d]  |\n", sum);
                printf("|                           |\n");
                printf("|           [===]           |\n");
                printf("*---------------------------*\n\n");
            }
            else
            {
                printf("Correct code!\n");
                int opt = 1;
                while(opt!=0)
                {
                    printf("\n(9) What would you like to do?\n");
                    printf("1. Inspect machine status\n");
                    printf("2. Withdraw all money\n");
                    printf("3. Refill product\n");
                    printf("4. Change product\n");
                    printf("0. Go back\n");
                    printf("Your choice:");
                    scanf("%d",&opt);
                    if(opt==1)
                    {
                        char X = 'A';
                        printf("\n(9-1) Machine status\n");
                        printf("Amount of revenue: $%d\n",revenue);
                        printf("Amount of inserted coins: $%d\n",sum);
                        printf("Product information:\n");
                        for(int i=0;i<5;i++)
                        {
                            if(count[i]==0)
                                printf("%c. %s ($%d) (sold out)\n",X,name[i],cost[i]);
                            else
                                printf("%c. %s ($%d) (%d left)\n",X,name[i],cost[i],count[i]);
                            X++;
                        }
                    }
                    else if(opt==2)
                    {
                        printf("\n(9-2) All money is being withdrawn.\n");
                        printf("$%d is withdrawn.\n",sum+revenue);
                        sum = 0;
                        revenue = 0;
                    }
                    else if(opt==3)
                    {
                        int ref=6;
                        while((ref<0) || (ref>5))
                        {
                            printf("\n(9-3) Which product would you like to refill?\n");
                            printf("1. A\n");
                            printf("2. B\n");
                            printf("3. C\n");
                            printf("4. D\n");
                            printf("5. E\n");
                            printf("0. Go back\n");
                            printf("Your choice:");
                            scanf("%d",&ref);
                            char Y = 64 + ref;
                            if(ref==0)
                            {
                                printf("Going back!\n");
                            }
                            else if((ref>=1)&&(ref<=5))
                            {
                                printf("You have refilled product %c to full.\n",Y);
                                count[ref-1]=10;
                                if(sum>=cost[ref-1])
                                    index[ref-1]=79;
                                else
                                    index[ref-1]=32;
                            }
                            else
                                printf("Invalid choice!\n");
                        }
                    }
                    else if(opt==4)
                    {
                        int change = 6;
                        while((change<0) || (change>5))
                        {
                            printf("\n(9-4) Which product would you like to change?\n");
                            printf("1. A\n");
                            printf("2. B\n");
                            printf("3. C\n");
                            printf("4. D\n");
                            printf("5. E\n");
                            printf("0. Go back\n");
                            printf("Your choice:");
                            scanf("%d",&change);
                            char Z = 64 + change;
                            char new[10];
                            int new_pr;
                            if(change==0)
                            {
                                printf("Going back!\n");
                            }
                            else if((change>=1)&&(change<=5))
                            {
                                printf("You are changing product %c.\n",Z);
                                printf("\nEnter new product name:");
                                scanf("%s",new);
                                strcpy(name[change-1],new);
                                printf("Enter new product price:");
                                scanf("%d",&new_pr);
                                cost[change-1] = new_pr;
                                printf("The new product %c has been filled to full.\n",Z);
                                count[change-1] = 10;
                            }
                            else
                                printf("Inavlid choice!\n");
                        }
                    }
                    else if(opt==0)
                    {
                        printf("Going back!\n\n");
                        printf("*---------------------------*\n");
                        printf("|      Vending Machine      |\n");
                        printf("*---------------------------*\n");
                        printf("|   A    B    C    D    E   |\n");
                        printf("|  $%2d  $%2d  $%2d  $%2d  $%2d  |\n",cost[0],cost[1],cost[2],cost[3],cost[4]);
                        printf("|  [%c]  [%c]  [%c]  [%c]  [%c]  |\n",index[0],index[1],index[2],index[3],index[4]);
                        printf("*---------------------------*\n");
                        printf("|                    [$%2d]  |\n", sum);
                        printf("|                           |\n");
                        printf("|           [===]           |\n");
                        printf("*---------------------------*\n\n");
                    }
                    else
                        printf("Invalid choice!\n");
                }
            }
        }
        else if(choice==0)
            exit(0);
        else
            printf("Invalid choice!\n\n");
    }
    return 0;
}
