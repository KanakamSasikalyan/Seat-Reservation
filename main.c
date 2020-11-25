#include<stdio.h>
int seats;
int i,j;
int k=1;
int count;
int reserve_seat;
int reservedarr[100];
void display();
void reserve();
void avail_seats_display();
void count_seats();
void Bus();
int main()
{
    printf("\n                                      ##################################");
    printf("\n                                      ||     BUS SEAT RESERVATION     ||");
    printf("\n                                      ##################################\n\n");
    printf("\n                                      ###################################");
    printf("\n                                      ||  1  :    DISPLAY SEATS        ||");
    printf("\n                                      ||  2  :    RESERVE SEAT         ||");
    printf("\n                                      ||  3  :    AVAILABLE SEATS      ||");
    printf("\n                                      ||  4  :    EMPTY SEATS          ||");
    printf("\n                                      ||  5  :    FUN BUS DIAGRAM  ;)  || ");
    printf("\n                                      ###################################\n");
    int choice;
    printf("\nENTER NUMBER OF SEATS IN THE BUS  : ");
    scanf("%d",&seats);
    count=seats;
    while(1)
    {
        printf("\nENTER YOUR CHOICE  : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                display();
                break;
            case 2:
                reserve();
                break;
            case 3:
                avail_seats_display();
                break;
            case 4:
                count_seats();
                break;
            case 5:
                Bus();
                break;
            default:
                printf("\nCurrently Bus is Not Running ! Wait for Further Updates @_@\n");
                break;
        }
    }
}

void display()
{
    printf("\n|########################################################################################|\n");
    printf("|                                        BUS SEATS                                       |");
    printf("\n|----------------------------------------------------------------------------------------|\n");

    for(i=1;i<=seats;i++)
    {
        printf("\t | %d |\t",i);
        if (i%5==0)
        {
            printf("\t||\n");
        }
    }
    printf("\n|########################################################################################|\n");

    printf("\n|----------------------------------------------------------------------------------------|\n");
}

void reserve()
{
    label : printf("\nENTER SEAT NUMBER TO RESERVE  :");
    scanf("%d",&reserve_seat);
    for(i=1;i<seats;i++)
    {
        for(j=1;j<seats;j++)
        {
            if(reservedarr[i]==reserve_seat)
            {
                printf("\n                                      |############################### |");
                printf("\n                                      | WARNING : ALREADY RESERVED :(  |");
                printf("\n                                      | TRY AGAIN !                    |");
                printf("\n                                      |################################|\n\n");
                goto label ;
            }
            else
            {
                count--;
                continue;
            }
        }
    }
    if(k<=50)
    {
        reservedarr[k]=reserve_seat;
        k++;
    }
    else
    {
        printf("\nUNABLE TO RESERVE THE SEAT :(");
    }
}

void avail_seats_display()
{
    int val;
    printf("\n|########################################################################################|");
    printf("\n|*RD = SEAT RESERVED                                                                     |");
    printf("\n|----------------------------------------------------------------------------------------|\n");

    for(i=1;i<=seats;i++)
    {
        for(j=1;j<seats;j++)
        {
            if(reservedarr[j]==i)
            {
                printf("\t |*RD| \t");
                val = reservedarr[j];
            }
        }
        if(val == i)
        {
            if(val%5==0)
            {
                printf("\t||\n");
            }
            else
            {
                continue;
            }
        }
        else
        {
            printf("\t| %d |\t",i);
            if(i%5==0)
            {
                printf("\t||\n");
            }
        }
    }
    printf("\n|########################################################################################|\n");
    printf("\n|----------------------------------------------------------------------------------------|\n");
}

void count_seats()
{
    printf("EMPTY SEATS AVAILABLE   :    %d",count);
}

void Bus()
{
    printf("\n                                                                       ^.^                 ^.^          \\ | / ");
    printf("\n                                                                                  ^.^                ---  O ---");
    printf("\n                                                                                                        / | \\");
    printf("\n\n              __|####################################|__                                                   ^ ^ ^ ^\n");
    printf("                |_____________________________________\\                                                ^ ^ ^ ^ ^ ^ ^ ^ \n");
    printf("                |__|___|__|___|___|__|__|___|___|__|_0_\\                                              ^ ^ ^ ^ ^ ^ ^ ^ ^\n");
    printf("                |                                       |                                               ^ ^ ^  ^ ^ ^ \n");
    printf("                |=====OO=====OO====================O====)                                                    ||\n");
    printf(" ______________________________________________________________________________________________ _____________||_____________________________\n");



}
