#include<stdio.h>
int choice1,choice1_1,choice1_2,choice1_3,choice1_4,a,b,qty,cost1=0,cost2=0,cost3=0,choice;
//pizza selection
int menu()
{

    printf("\n                                        ---*** PIZZA HUT ***---\n\n");
    printf(" Select your pizza\n 1 - Veg pizzas\n 2 - Chicken pizzas\n 3 - Sides\n 4 - Exit\n");
    printf("\n Select a number : ");
    scanf("%d",&choice1);
    if(choice1==1)
    {
        veg_pizzas();
    }
    else if(choice1==2)
    {
        chicken_pizzas();
    }
    else if(choice1==3)
    {
        sides();
    }
    else if(choice1==4)
    {
        Exit();
    }
    else
    {
        printf(" Invalid Number");
        printf("\n Enter a valid number\n");
        menu();
    }


}//  veg pizza selection
int veg_pizzas()
{
    printf(" 1 - Margherita\n 2 - Spicy Triple Tango\n 3 - Double cheese margherita\n 4 - Farm house\n 5 - Exit");
    printf("\n\n Select a number : ");
    scanf("%d",&choice1_1);
    if(choice1_1>=1 && choice1_1<=4)
    {
        printf("\n\n 1 - Small(550.00)\n 2 - Medium(1050.00)\n 3 - Large(1850.00)\n");
        printf(" Select a pizza size : ");
        scanf("%d",&a);
        printf(" Quantity : ");
        scanf("%d",&qty);
        if(a==1)
        {

            cost1 = 550*qty;

        }
        else if(a==2)
        {

            cost1 = 1050*qty;

        }
        else if(a==3)
        {

            cost1 = 1850*qty;

        }
        else
        {
            printf("invalid number");
            veg_pizzas();
        }
        add();
    }
    else if(choice1_1==5)
    {
        Exit();
    }
    else
    {
        printf(" Invalid Number");
        printf("\n Enter a valid number\n");
        veg_pizzas();
    }

}

// chicken pizza selection
int chicken_pizzas()
{
    printf(" 1 - cheese and BBQ chicken\n 2 - Chicken fiesta\n 3 - Chicken Mexican\n 4 - Chicken global delight\n 5 - Exit");
    printf("\n\n Select a number : ");
    scanf("%d",&choice1_2);
    if(choice1_2>=1 && choice1_2<=4)
    {
        printf("\n\n 1 - Small(650.00)\n 2 - Medium(1250.00)\n 3 - Large(2050.00)\n");
        printf(" Select a pizza size : ");
        scanf("%d",&b);
        printf(" Quantity : ");
        scanf("%d",&qty);

        if(b==1)
        {


            cost2 =650*qty ;

        }
        else if(b==2)
        {

            cost2 = 1250*qty ;

        }
        else if(b==3)
        {

            cost2 = 2050*qty;

        }
        else
        {
            printf("invalid number");
            chicken_pizzas();
        }
        add();
    }
    else if(choice1_2==5)
    {
        Exit();
    }
    else
    {
        printf(" Invalid Number");
        printf("\n Enter a valid number\n");
        chicken_pizzas();
    }

}

// sides
int sides()
{
    printf(" 1 - Zingy parcel veg(350.00)\n 2 - Zingy parcel non veg(550.00)\n 3 - Taco mexican veg(400.00)\n 4 - Taco mexican non veg(700.00)\n 5 - Exit");
    printf("\n\n Select a number : ");
    scanf("%d",&choice1_3);
    printf(" Quantity : ");
    scanf("%d",&qty);

    if(choice1_3==1)
    {

        cost3 = 350*qty;
        add();
    }

    else if(choice1_3==2)
    {

        cost3 = 550*qty;
        add();
    }
    else if(choice1_3==3)
    {

        cost3 = 400*qty;
        add();
    }
    else if(choice1_3==4)
    {

        cost3 = 700*qty;
        add();
    }
    else if(choice1_3==5)
    {
        Exit();
    }
    else
    {
        printf(" Invalid Number");
        printf("\n Enter a valid number\n");
        sides();
    }
}
int cost11()
{
    cost1=cost1+cost1;

printf("%d",cost1+cost2+cost3);

}
int cost22()
{
    cost2=cost2+cost2;
    printf("%d",cost2+cost1+cost3);
}
int cost33()
{
    cost3=cost3+cost3;
    printf("%d",cost3+cost1+cost2);
}
int add()
{
 printf("\nAdded to cart Successfully\n");
 printf("\n 1 - Add Item\n 2 - View Bill\n\n");
 printf("Select a number : ");
 scanf("%d",&choice);

 if(choice==1)
 {

     menu();
 }
 else if(choice==2)
 {
     if(choice1==1)
     {
         cost11();
     }
     else if(choice1==2)
     {
         cost22();
     }
     else if(choice==3)
     {
         cost33();
     }
 }

}
int Exit()
{

}
int main()
{
    menu();
}
