#include <stdio.h>
#include <cs50.h>

int main (void)
{
    // calculating the minimum amount of coins
    int i = 0, amount = 0, change = 0, zangou = 500, waygou = 250, waytaki = 200, waranka = 100, dalway = 50, dalgou = 25, dalhinka = 10, dalfo = 5, un_franc=1;


    //type the amount in CFA and check if it is valid amount
    do
    {
        amount = get_int("type a valid amount in CFA:  ");
    }
    while(amount<0);

    while(amount>=zangou)
    {
        change = change+1;
        amount = amount-zangou;
        i++;
    }
    while(amount>=waygou)
    {
        change = change+1;
        amount = amount-waygou;
        i++;
    }
    while(amount>=waytaki)
    {
        change = change+1;
        amount = amount-waytaki;
        i++;
    }
    while(amount>=waranka)
    {
        change = change+1;
        amount = amount-waranka;
        i++;
    }
    while(amount>=dalway)
    {
        change = change+1;
        amount = amount-dalway;
        i++;
    }
    while(amount>=dalgou)
    {
        change = change+1;
        amount = amount-dalgou;
        i++;
    }
    while(amount>=dalhinka)
    {
        change = change+1;
        amount = amount-dalhinka;
        i++;
    }
    while(amount>=dalfo)
    {
        change = change+1;
        amount = amount-dalfo;
        i++;
    }
      while(amount>=un_franc)
    {
        change = change+1;
        amount = amount-un_franc;
        i++;
    }
    printf("%i is the minimum of coins that will be returned to the user \n",change);


}