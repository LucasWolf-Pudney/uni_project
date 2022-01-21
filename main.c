#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// does it edit in in dropbox?

int initalMenu(); // call first 

int mangerMenuOne(); // call if the user is a manager

int bookingOperatorOne();

int checkInOperatorOne();

int checkOutOne();

int ownerOne();

int menuExicutionLayerOne()
{
    /* deals with the condidtial exicution of the menu
    it will call the intal menu to ask the user what job they have
    then it will call the second menu assocated with that job 
    then return the number with the spsific job that they want to do
    */
   int input;

    switch(initalMenu())
    {
        case 1:
        input = mangerMenuOne();
        break;
        case 2:
        input = bookingOperatorOne();
        break;
        case 3:
        input = checkInOperatorOne();
        break;
        case 4:
        input = checkOutOne();
        break;
        case 5:
        ownerOne();

    }

    return input;
    // lwp
}







struct Customer
   {
       bool in; // true if there is someone staying
       char name[50];
       char adress[50];
       int telephoneNumber;
       int customerNumber; 
       int stayLength; // how many days they are staying for
       float discount;
       
   };



struct Group
{
    int size;
    char nameOfGroup[50];

    struct Customer;

};

struct Room
{
    int roomNumber;
    int floor;
    char roomName[4]; 
    /* will be the floor number followed by the room Number followed by
     the class unles it doesnt have a class then will be N  
     eg 32A  on the third floor room number 2 class a*/
    char class; // the price class of the room A, B or C
    bool booked; // true if they are occupied
    double discount; // the percentage off the standard price
    
   struct Customer occupant;
    // LWP
};




void main()
{
    int userInputTwo;
    userInputTwo = menuExicutionLayerOne();




    main();
    // once the person has done what they need to do call main again
}



int initalMenu()
{
    /*asks the user what job they have 
    and returns the number liked to that job*/
    int input; // what the user inputs
    printf("are you: \n(1) The manager");
    printf("\n(2) The booking operator");
    printf("\n(3) The check-in operator");
    printf("\n(4) The check-out operator");
    printf("\n or (5) The owner");
    printf("or enter 24 if you want to stop the program");
    printf("\n? ");
    fflush(stdin);

    scanf("%d", &input);

    if (input == 24)
    {
        exit(1);
    }
    else if (input < 1 || input > 5)
    {
        printf("\n please enter a valid number ");
        initalMenu(); // calls the funtion again and again unitll a correct value is enterd 
    }
    return input;
    //lwp
}


int mangerMenuOne()
{
    int input;
    /*if the user is the manger it asks them 
    if they want to go set / ammend classes or provide disconts */
    printf("do you want to :");
    printf("\n (1) set / ammend classes");
    printf("\n (2) provide discounts");
    printf("\n ? ");

    fflush(stdin);
    scanf("%d", &input);

    if (input < 1 || input > 2)
    {
        printf("\n please enter a valid number ");
        initalMenu(); // calls the funtion again and again unitll a correct value is enterd 
    }
    return input;
    // lwp
}


int bookingOperatorOne()
{
    int input;

    printf("\ndo you want to? ");
    printf("\n(1) search for rooms? ");
    printf("\n(2) register a customer? ");
    printf("\n? ");

    fflush(stdin);
    scanf("%d", &input);

    if (input < 1 || input > 2)
    {
        printf("\n please enter a valid number");
        bookingOperatorOne();
    }
    return input;
    // lwp
}



int checkInOperatorOne()
{
    int input;

    printf("\ndo you want to? ");
    printf("\n(1) recond the arrival of a new custormer? ");
    printf("\n(2) change details of a registerd customer? ");
    printf("\n? ");

    fflush(stdin);
    scanf("%d", &input);

    if (input < 1 || input > 2)
    {
        printf("\n please enter a valid number");
        checkInOperatorOne();
    }
    return input;
    // lwp
}


int checkOutOne()
{
    int input;

    printf("\ndo you wan to? ");
    printf("\n(1) record a custosmer leaving? ");
    printf("\n(2) give a customer a discounted price and record why they got a discount as they leave ?");

    fflush(stdin);
    scanf("%d", &input);

    if (input < 1 || input > 2)
    {
        printf("\n please enter a valid number");
        checkOutOne();
    }

    return input;
    // lwp
}


int ownerOne()
{
    int input;

    printf("\nwould you like to? ");
    printf("\n(1) see the number of customers? ");
    printf("\n(2) see a breakdown of room prices and frequency of room bookings? ");
    printf("\n(3) see the ammount of booking in each month? "); // monthy booking hisogram
    printf("\n(4) see the number of unhappy customers? ");
    printf("\n(5) see group bookings? ");

    fflush(stdin);
    scanf("%d", &input);

    if (input < 1 || input > 5)
    {
        printf("\n please enter a valid number");
        ownerOne();
    }
    return input;
    //lwp
}