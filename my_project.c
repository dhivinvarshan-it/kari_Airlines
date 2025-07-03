#include<stdio.h>
#include <time.h>
#include<string.h>
#include<stdlib.h>

void showAmenities() {
    printf("\n\n--------- INCLUDED AMENITIES ---------\n");
    printf("1. Beachfront Accommodation \n");
    printf("2. Welcome Drinks & Unlimited Buffet\n");
    printf("3. Free Transport\n");
    printf("4. DJ Night + Unlimited Liquors\n");
    printf("5. Adventure Activities\n");
    printf("6. Gaming Night \n");


    printf("--------------------------------------\n\n\n\n");
}

void booking(int given_price) {
    int person, pricegiven, bal, total;
    char names[50][50];

    struct tm input_time = {0};
    time_t user_time, current_time;

    do {
        printf("\nEnter booking date (DD MM YYYY): ");
        scanf("%d %d %d", &input_time.tm_mday,
              &input_time.tm_mon,
              &input_time.tm_year);

        input_time.tm_mon -= 1;
        input_time.tm_year -= 1900;

        user_time = mktime(&input_time);
        time(&current_time);

        if (difftime(user_time, current_time) < 0) {
            printf("You entered a past date! Please enter a valid future date.\n\n");
        }
    } while (difftime(user_time, current_time) < 0);







    printf("Enter how many persons are traveling (including you): ");
    scanf("%d", &person);

    for (int i = 0; i < person; i++) {
        printf("Enter name for person %d: ", i + 1);
        scanf("%s", names[i]);
    }

    total = given_price * person;

    printf("To confirm your booking, please pay Rs.%d: ", total);
    scanf("%d", &pricegiven);

    if (pricegiven == total) {
        printf("Your tickets are booked for %d persons.\n\n", person);
    } else if (pricegiven < total) {
        printf("You paid less. Please pay the balance Rs.%d: ", total - pricegiven);
        scanf("%d", &bal);
        if (bal == total - pricegiven) {
            printf("\nDear %s, your Ticket Booking is Completed\n------- Enjoy Your Journey! --------\n", names[0]);
        } else {
            printf("Booking failed. Incorrect remaining amount.\n");
        }
    } else {
        printf("You paid more. Returning Rs.%d\n", pricegiven - total);
    }
    printf("\nThank you %s! Your booking for %02d-%02d-%d is confirmed.\n\n",
           names, input_time.tm_mday, input_time.tm_mon + 1, input_time.tm_year + 1900);
     printf("Your Booking is Completed!\n");
printf("Your Unique PNR No: 123456\n\n");

}


void room()
{
   printf("\nChoose Room Type:\n");
                                   printf("1. Standard Room - Rs. 1000/person/day\n");
                                    printf("2. Deluxe Room   - Rs. 2000/person/day\n");
                                      printf("3. Suite Room    - Rs. 3000/person/day\n");
                                          printf("Enter your choice (1-3): ");
                                          int choice;
                                      scanf("%d",&choice);
                                      int costperday,total ,day ,person;
                                      char name[50];
                                    switch(choice)
                                    {

                                    case 1:
                                        costperday=1000;
                                        break;
                                    case 2:
                                        costperday=2000;
                                        break;
                                    case 3:
                                        costperday=3000;
                                        break;
                                    default:
                                         printf("Invalid");

                                    }
                                    printf("Enter Your Name :");
                                    scanf("%s",name);
                                        struct tm input_time = {0};
    time_t user_time, current_time;

    do {
        printf("\nEnter booking date (DD MM YYYY): ");
        scanf("%d %d %d", &input_time.tm_mday,
              &input_time.tm_mon,
              &input_time.tm_year);

        input_time.tm_mon -= 1;
        input_time.tm_year -= 1900;

        user_time = mktime(&input_time);
        time(&current_time);

        if (difftime(user_time, current_time) < 0) {
            printf("You entered a past date! Please enter a valid future date.\n\n");
        }
    } while (difftime(user_time, current_time) < 0);
                                    printf("\nEnter How Many Gust Are Coming Along With You: ");
                                    scanf("%d",&name);
                                    printf("\n Enter How Many Days are YOu Staying Here");
                                    scanf("%d",&day);
                                    total=costperday*person*day;
                                    printf("To confirm Your Booking please pay %d\n",total);
                                    int pricegiven,bal;
                                    scanf("%d",&pricegiven);
                                    if(pricegiven==total)
                                    {
                                        printf("YOur Booking Sucessful\n");
                                    }
                                    else if(pricegiven<total)
                                    {
                                        printf("You Paid Lessthen the Rent please pay %d\n",total-pricegiven);
                                        scanf("%d",&bal);
                                        if(bal==total-pricegiven)
                                        {
                                            printf("Your Booking is Completed");
                                        }

                                    }
                                    else if(pricegiven>total)
                                    {
                                        printf("Your Given More then the total price\nHere Your Balance %d",pricegiven-total);
                                    }
                                    else
                                        {
                                            printf("Your Booking cancelled");
                                        }



}
void bookingroom()
{
                                   printf("\n\nChoose Trip's:\n");
                                   printf("1.Bachelors trip- Rs. 2000/person/day\n");
                                   printf("2. Friends trip  - Rs. 2000/person/day\n");
                                   printf("3.Family trip    - Rs. 1000/person/day\n");
                                   printf("Enter your choice (1-3): ");
                                   int choice;

                                      scanf("%d",&choice);
                                      int costperday,total ,day ,person;
                                      char name[50];
                                    switch(choice)
                                    {

                                    case 1:
                                        costperday=2000;
                                        break;
                                    case 2:
                                        costperday=2000;
                                        break;
                                    case 3:
                                        costperday=1000;
                                        break;
                                    default:
                                         printf("Invalid");

                                    }
                                    printf("Enter Your Name :");
                                   scanf("%s",name);
                                    printf("\nEnter How Many Gust Are Coming Along With You: ");
                                    scanf("%d",&person);



    struct tm input_time = {0};
    time_t user_time, current_time;

    do {
        printf("Enter booking date (DD MM YYYY): ");
        scanf("%d %d %d", &input_time.tm_mday,
              &input_time.tm_mon,
              &input_time.tm_year);

        input_time.tm_mon -= 1;
        input_time.tm_year -= 1900;

        user_time = mktime(&input_time);
        time(&current_time);

        if (difftime(user_time, current_time) < 0) {
            printf("You entered a past date! Please enter a valid future date.\n");
        }
    } while (difftime(user_time, current_time) < 0);







                                    //printf("\n Enter How Many Days are YOu Staying Here");
                                   // scanf("%d",&day);
                                    total=costperday*person;
                                    printf("To confirm Your Booking please pay %d\n",total);
                                    int pricegiven,bal;
                                    scanf("%d",&pricegiven);
                                    if(pricegiven==total)
                                    {
                                        printf("Your Booking Sucessful\n Enjoy your partyyy");
                                    }
                                    else if(pricegiven<total)
                                    {
                                        printf("You Paid Lessthen the Rent please pay %d\n",total-pricegiven);
                                        scanf("%d",&bal);
                                        if(bal==total-pricegiven)
                                        {
                                            printf("\nYour Party Booking is Completed\n\n-------Enjoy Your Party!!!!!--------");
                                        }

                                    }
                                    else if(pricegiven>total)
                                    {
                                        printf("Your Given More then the total price\nHere Your Balance %d",pricegiven-total);
                                    }
                                    else
                                        {
                                            printf("Your Booking cancelled");
                                        }
                                        printf("Thank you %s! Your booking for %02d-%02d-%d is confirmed.\n",
           name, input_time.tm_mday, input_time.tm_mon + 1, input_time.tm_year + 1900);
}
void trip()
{
    char username[50];
    printf("\nEnter your Name: ");
    scanf("%s", username);

    struct tm input_time = {0};
    time_t user_time, current_time;

    do {
        printf("Enter booking date (DD MM YYYY): ");
        scanf("%d %d %d", &input_time.tm_mday,
              &input_time.tm_mon,
              &input_time.tm_year);

        input_time.tm_mon -= 1;
        input_time.tm_year -= 1900;

        user_time = mktime(&input_time);
        time(&current_time);

        if (difftime(user_time, current_time) < 0) {
            printf("You entered a past date! Please enter a valid future date.\n");
        }
    } while (difftime(user_time, current_time) < 0);

    printf("Thank you %s! Your booking for %02d-%02d-%d is confirmed.\n",
           username, input_time.tm_mday, input_time.tm_mon + 1, input_time.tm_year + 1900);

//    return 0;
}



int main()
{
    int s,balance ;
      while(1)
    {
    printf("---------WELCOME TO KARI AIRLINES---------\n\n");

        printf("Hi there, keep flying, keep saving, keep booking on 'KARI AIRLINES'\n\n");
        printf("Our Services:\n");
        printf("1.Flight Booking\n");
        printf("2.Hotel Booking\n");
        printf("3.Trip Organizing\n");
        printf("4.Exit");
        scanf("%d",&s);
        system("cls");

    int o;

   switch(s)

    {
        case 1:
            printf("----------Flight Ticket Booking:----------\n");
            printf("We Are Budget Airlines Operates Within some major Cities of TamilNadu \n");
            printf("1.Chennai to Guduvancheri=Rs.1500\n2.Chennai to Chengalpattu=Rs.1500 \n3.Chennai to Thiruvallur=Rs1750 \n4.Chennai to Kanchipuram=Rs2200 \n5.Chennai to Mahaballipuram=Rs.2500");
            printf("Enter Your Location And Destination for further Booking Processe\n\n");
            printf("Enter Your Location: ");

            scanf("%d",&o);
            switch (o) {
                    case 1:
                        printf("You selected Chennai to Guduvancheri\n");
                        booking(1500);
                        //fun();

                        break;

                    case 2:
                        printf("You are selected Chennai to Chengalpattu\n");
                        booking(1500);


                        break;
                    case 3:
                        printf("You are selected Chennai to Thiruvallur\n");
                        booking(1750);
                        break;
                    case 4:
                        printf("You are selected Chennai to Kanchipuram\n");
                        booking(2200);
                        break;
                    case 5:
                        printf("You are selected Chennai to Mahabalipuram\n");
                        booking(2500);
                       // system("cls");
                        break;
                    default:
                        printf("\nInvalid route option. Try again.\n");
                }
                break;
        case 2:
                        printf("You Are Selected to Book Hotel Room's\n");
                        printf("Please Enter The City You Want to Book the Room: ");
                        printf("\nWe Have Rooms In \n1.Chennai\n2.Coimbatore\n3.Madurai\n");
                        char place[50];
                        printf("Enter Your Place :");
                        scanf("%s",&place);
                        char place1[]="chennai";
                        char place2[]="coimbatore";
                        char place3[]="madurai";
                        if(strcmp(place,place1)==0)
                        {
                            printf("You are Entered Chennai ");
                            room();
                        }
                        else if(strcmp(place,place2)==0)
                        {
                            printf("You Are Entered Coimbatore ");
                            room();

                        }
                        else if(strcmp(place,place3)==0)
                        {
                            printf("You Are Entered Madurai");
                            room();
                        }
                        else
                        {
                            printf("Invalid Input");
                        }
                        break;
                        /*switch(place)
                        {
                                case 1: int choice;
                                 printf("You Entered Chennai");
                                  room();
                                   break;
                                    case 2:
                                        printf("Yoy Are Enterd Coimbatore");
                                        room();
                                        break;
                                    case 3:
                                        printf("You Enterd Madurai");
                                        room();
                                        break;
                                     default:
                                     printf("invalid");

                        }
                        break;*/
            case 3:
                printf("You Are Selected Trip Organization\n");
                printf("We have Various Packages\n");
                printf("1.Bachelors Trip\n");
                printf("2.Honey Moon Trip\n");
                printf("3.Couples Trip\n");
                int t;
                scanf("%d",&t);
                switch(t)
                {
                case 1:
                    bookingroom();
                   // trip();

                    showAmenities();
                  //  system("cls");
                    break;
                case 2:
                   // trip();
                    bookingroom();
                    showAmenities();
                   // system("cls");
                    break;
                case 3:
                    //trip();
                    bookingroom();
                    showAmenities();
                    //system("cls");
                    break;
                default:
                    printf("invalid");


                    }
break;


default:
     system("cls"); printf("\n\n-----Thank You For Using Kari Airlines-----\n\n");
     return 0;}





    }


    }





