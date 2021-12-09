#include <stdio.h>

#include <stdlib.h>

#include<conio.h>

#include<windows.h>



struct dob

{

   int year;

   int month;

   int date;

}dob_obj;

struct details

{

   char name[50];

   char gender;

}details_obj;

void gotoxy(int x, int y)

{

COORD coord;

coord.X = x;

coord.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

void horoscopesign();

void fortunes();

void about_zodiac();

void colornum();



int  num;

int c=0;

int main()

{    char zodiac[20];



   int x=0;

   do{

   gotoxy(35,8);printf("To unravel your mystery tell us about your history");

    gotoxy(40,10);printf("Enter Year of birth :");

   scanf("%d",&dob_obj.year);

    gotoxy(40,11);printf("Enter Month :");

   scanf("%d",&dob_obj.month);

    gotoxy(40,12);printf("Enter Date :");

   scanf("%d",&dob_obj.date);



    if((dob_obj.month>12)||(dob_obj.month==2&&dob_obj.date>=30)||(dob_obj.month==(1||3||5||7||8||10||12)&&dob_obj.date>31)||(dob_obj.month==2,4,6,9,11&&dob_obj.date>30)||(2020-dob_obj.year>100)||(dob_obj.year>2020))

           {

               x=1;

               system("cls");

               gotoxy(45,5);printf("Your Entry Was Wrong");

               gotoxy(38,7);printf("Please Enter Correct date of birth");

           }



               else

                   x=0;
}while(x>0);

system("cls");

do{
            gotoxy(45,3);printf("Tell us more");

   gotoxy(35,6);printf("Enter Your Name : ");

   gets(details_obj.name);

   gets(details_obj.name);


gotoxy(35,8);printf("Enter Your Gender(F/M/O) : ");

scanf("%c",&details_obj.gender);

if(details_obj.gender=='F'||details_obj.gender=='M'||details_obj.gender=='O'||details_obj.gender=='f'||details_obj.gender=='m'||details_obj.gender=='o')

   break;
system("cls");
}while(c==0);



     if( (dob_obj.month == 12 && dob_obj.date >= 22) || (dob_obj.month == 1 && dob_obj.date <= 19) )

   {

       gotoxy(23,10);printf("Your Zodiac Sign based on your Birth date is : Capricorn\n");

       strcpy(zodiac,"Capricorn");

       num=1;

   }

   else if( (dob_obj.month == 1 && dob_obj.date >= 20) || (dob_obj.month == 2 && dob_obj.date <= 17) )

   {

       gotoxy(23,10);printf("Your Zodiac Sign based on your Birth date is : Aquarius\n");

        strcpy(zodiac,"Aquarius");

        num=2;

   }

   else if( (dob_obj.month == 2 && dob_obj.date >= 18) || (dob_obj.month == 3 && dob_obj.date <= 19) )

   {

       gotoxy(23,10);printf("Your Zodiac Sign based on your Birth date is : Pisces\n");

        strcpy(zodiac,"Pisces");

        num=3;

   }

   else if( (dob_obj.month == 3 && dob_obj.date >= 20) || (dob_obj.month == 4 && dob_obj.date <= 19) )

   {

       gotoxy(23,10);printf("Your Zodiac Sign based on your Birth date is : Aries\n");

        strcpy(zodiac,"Aries");

        num=4;

   }
   else if( (dob_obj.month == 4 && dob_obj.date >= 20) || (dob_obj.month == 5 && dob_obj.date <= 20) )

   {


       gotoxy(23,10);printf("Your Zodiac Sign based on your Birth date is : Taurus\n");

        strcpy(zodiac,"Taurus");

        num=5;

   }

   else if( (dob_obj.month == 5 && dob_obj.date >= 21) || (dob_obj.month == 6 && dob_obj.date <= 20) )

   {

       gotoxy(23,10); printf("Your Zodiac Sign based on your Birth date is : Gemini\n");

        strcpy(zodiac,"Gemini");

        num=6;

   }

   else if( (dob_obj.month == 6 && dob_obj.date >= 21) || (dob_obj.month == 7 && dob_obj.date <= 22) )

   {


      gotoxy(23,10);printf("Your Zodiac Sign based on your Birth date is : Cancer\n");

        strcpy(zodiac,"Cancer");

        num=7;

   }

   else if( (dob_obj.month == 7 && dob_obj.date >= 23) || (dob_obj.month == 8 && dob_obj.date <= 22) )

   {

      gotoxy(23,10); printf("Your Zodiac Sign based on your Birth date is : Leo\n");

        strcpy(zodiac,"Leo");

        num=8;

   }

   else if( (dob_obj.month == 8 && dob_obj.date >= 23) || (dob_obj.month == 9 && dob_obj.date <= 22) )

   {

       gotoxy(23,10);printf("Your Zodiac Sign based on your Birth date is : Virgo\n");

        strcpy(zodiac,"Virgo");

        num=9;

   }

   else if( (dob_obj.month == 9 && dob_obj.date >= 23) || (dob_obj.month == 10 && dob_obj.date <= 22) )

   {

       gotoxy(23,10);printf("Your Zodiac Sign based on your Birth date is : Libra\n");

        strcpy(zodiac,"Libra");

        num=10;

   }

   else if( (dob_obj.month == 10 && dob_obj.date >= 23) || (dob_obj.month == 11 && dob_obj.date <= 21) )

   {

       gotoxy(23,10);printf("Your Zodiac Sign based on your Birth date is : Scorpio\n");

        strcpy(zodiac,"Scorpio");

        num=11;

   }

   else if( (dob_obj.month == 11 && dob_obj.date >= 22) || (dob_obj.month == 12 && dob_obj.date <= 21) )

   {
       gotoxy(23,10);printf("Your Zodiac Sign based on your Birth date is : Sagittarius\n");

        strcpy(zodiac,"Sagittarius");

        num=12;

   }





gotoxy(40,20);system("pause");

system("cls");

int choice;
gotoxy(35,15);printf("Now you hold the key to unlock your mystery");
system("cls");
do{
   gotoxy(25,8);printf("Choose wisely");
   printf("\n");
   gotoxy(25,10);printf("1. Your horoscope sign  is\t");

   printf("2. Fortunes");

   gotoxy(25,11);printf("3. About your zodiac  \t\t");

   printf("4. Lucky numbers and colors");

   gotoxy(25,12);printf("5. EXIT");

   gotoxy(30,14);printf("\tEnter Your Choice :");

   scanf("%d",&choice);

   system("cls");



   switch(choice)

   {

   case 1:

       horoscopesign();

       break;



   case 2:

       fortunes();

       break;



   case 3:

       about_zodiac();

       break;



   case 4:

       colornum();

       break;



       case 5:

       exit(0);

       break;



   }  gotoxy(30,14);system("pause");

   system("cls");

   }while(choice!=5);}



void horoscopesign()

{



   switch(num)

   {

       case 4:

       gotoxy(3,2);printf("Your horoscope sign is Aries-The Ram");

       gotoxy(6,3);printf(".-.   .-.");

       gotoxy(5,4);printf("(_  \\ /  _)");

       gotoxy(10,5);printf("|");

       gotoxy(10,6);printf("|\n\n");

           break;

             case 5:

                  gotoxy(3,2);printf("Your horoscope sign is Taurus-The Bull");

       gotoxy(6,3);printf(".     .");

       gotoxy(6,4);printf("'._.'");

       gotoxy(6,5);printf(".'   `.");

       gotoxy(5,6);printf(":       :");

       gotoxy(5,7);printf(":       :");

       gotoxy(6,8);printf("`._.'\n\n");

           break;

           case 8:

                  gotoxy(3,2);printf("Your horoscope sign is Leo-The Lion");

       gotoxy(7,3);printf(".--.");

       gotoxy(6,4);printf("(    )");

       gotoxy(5,5);printf("(_)  /");

       gotoxy(9,6);printf("(_,\n\n");

           break;

           case 7:

       gotoxy(3,2);printf("Your horoscope sign is Cancer-The Crab");

       gotoxy(8,3);printf(".--.");

       gotoxy(7,4);printf("/   _`.");

       gotoxy(6,5);printf("(_) ( )");

       gotoxy(5,6);printf("'.    /");

       gotoxy(5,7);printf("  `--'\n\n");





           break;

           case 9:

                   gotoxy(3,2);printf("Your horoscope sign is Virgo-The Virgin");

                   gotoxy(6,3);printf("_");

                   gotoxy(5,4);printf("' `:--.--.");

                   gotoxy(8,5);printf("|  |  |_");

                   gotoxy(8,6);printf("|  |  | )");

                   gotoxy(8,7);printf("|  |  |/");

                   gotoxy(13,8);printf("(J\n\n");



           break;

            case 6:

                gotoxy(3,2);printf("Your horoscope sign is Gemini-The Twins");

       gotoxy(5,3);printf(".___.");

       gotoxy(7,4);printf("| |");

       gotoxy(7,5);printf("| |");

       gotoxy(7,6);printf("| |");

       gotoxy(6,7);printf("||_");

       gotoxy(5,8);printf("'     `\n\n");



           break;

           case 12:

                gotoxy(3,2);printf("Your horoscope sign is Sagittarius-  The Archer");

       gotoxy(11,3);printf("...");

       gotoxy(11,4);printf(".':");

       gotoxy(9,5);printf(".'");

       gotoxy(5,6);printf("`..'");

       gotoxy(5,7);printf(".'`.\n\n");

           break;

           case 10:

               gotoxy(3,2);printf("Your horoscope sign is Libra-The Balance");

       gotoxy(10,3);printf("__");

       gotoxy(5,4);printf("_.'  '._");

       gotoxy(5,5);printf("____\n\n");



           break;

           case 11:

                      gotoxy(3,2);printf("Your horoscope sign is Scorpio-The Scorpion");

       gotoxy(6,3);printf("_");

       gotoxy(5,4);printf("' `:--.--.");

       gotoxy(8,5);printf("|  |  |");

       gotoxy(8,6);printf("|  |  |");

       gotoxy(8,7);printf("|  |  |  ..,");

       gotoxy(14,8);printf("`---':");



           break;

           case 3:

                       gotoxy(3,2);printf("Your horoscope sign is Pisces-The Fishes");

       gotoxy(5,3);printf("`-.    .-'");

       gotoxy(8,4);printf(":  :");

       gotoxy(6,5);printf("--:--:--");

       gotoxy(8,6);printf(":  :");

       gotoxy(5,7);printf(".-`    `-.\n\n");



           break;

           case 1:

                 gotoxy(3,2);printf("Your horoscope sign is Capricorn-  The Goat");

       gotoxy(13,3);printf("_");

       gotoxy(5,4);printf("\\      /_)");

       gotoxy(6,5);printf("\\    /`.");

       gotoxy(7,6);printf("\\  /   ;");

       gotoxy(8,7);printf("\\/ __.'\n\n");



           break;

           case 2:

               gotoxy(3,2);printf("Your horoscope sign is Aquarius-The Water Bearer");

       gotoxy(5,3);printf("..-\"-..-\"-..-");

       gotoxy(5,4);printf("..-\"-..-\"-..-\n\n");



           break;

   }

}

 void fortunes()

 {

     switch(num)

     {

     case 4:

         gotoxy(16,10);printf("YOU WILL GET A BIG SURPRISE THIS MONTH. YOUR CHILDHOOD FRIEND \n\t\tMIGHT MEET YOU IN COMING DAYS.");

         break;



     case 5:

         gotoxy(16,10);printf("MISUNDERSTANDINGS MIGHT BREAK YOUR FRIENDSHIP.YOU HAVE THE CAPACITY TO LEARN FROM\n\t\tYOUR MISTAKES DON'T TROUBLE THE TROUBLE UNTIL THE TROUBLE TROUBLES YOU.");

       break;

     case 8:

         gotoxy(16,10);printf("LOT OF HAPPINESS WILL ACCOMPANY YOU IN THIS MONTH. SING AND REJOICE,\n\t\tFORTUNE IS SMILING AT YOU.");

       break;

     case 7:

         gotoxy(16,10);printf("SOMEONE SPECIAL MIGHT INVITE YOU TO A GRAND PARTY, ALSO SOMEONE THINKS YOU ARE WONDERFULLY MYSTERIOUS.\n\t\tA TUB AND A RUB WILL CHANGE YOUR DAY.");

        break;

     case 9:

         gotoxy(16,10);printf("IN COMING MONTH THE HEAVEN WILL RAIN SUCCESS ON YOU. AT THE SAME TIME YOU WILL HAVE A FINE\n\t\tCAPACITY FOR THE ENJOYMENT OF LIFE.");

       break;

     case 6:

         gotoxy(16,10);printf("YOU WILL LEARN A LOT IN COMING MONTH. YOU HAVE UNUSUAL EQUIPMENT FOR SUCCESS, USE IT PROPERLY.\n\t\tYOU WILL RECEIVE A FORTUNE COOKIE.");

       break;

     case 12:

         gotoxy(16,10);printf("YOU WILL BE EXPRESSING YOURSELF IN THE COMING DAYS. \n\t\tYOU WILL MAKE A SUDDEN RISE IN LIFE.");

       break;

     case 10:

         gotoxy(16,10);printf("SOMEONE FROM YOUR PAST WILL RETURN TO STEAL YOUR HEART.\n\t\tYOU DISPLAY THE WONDERFUL TRAITS OF CHARM AND COURTESY.");

       break;

     case 11:

         gotoxy(16,10);printf("YOU WILL REACH GREAT HEIGHTS IN YOUR PROFESSIONAL CAREER. YOU WOULD BE ABLE TO UNDERTAKE AND COMPLETE ANYTHING.\n\t\t YOUR PRESENT PLANS ARE GOING TO SUCCEED");

       break;

     case 3:

        gotoxy(16,10);printf("TRUST YOUR INTUITION.THE HARD TIMES WILL BEGIN TO FADE,\n\t\tJOY WILL TAKE THEIR PLACE IN COMING WEEKS.");

       break;

     case 1:

         gotoxy(16,10);printf("MANY CHANGES OF MIND AND MOOD, DO NOT HESITATE TOO LONG. YOUR HARD WORK WILL SOON PAY OFF,\n\t\tALSO IT IS A GOOD TIME TO FINISH UP OLD TASKS.");

       break;

     case 2:

         gotoxy(16,10);printf("A SECRET ADMIRER WILL SOON SEND YOU A SIGN OF AFFECTION. DO NOT MISTAKE TEMPTATION FOR OPPURTUNITY.\n\t\t IN THE COMING MONTH THE GREATEST DANGER COULD BE YOUR STUPIDITY.");

       break;

     }

 }

  void about_zodiac()

  {

      switch(num)

      {

          case 1:

             gotoxy(16,10); printf("  They seem to be unaffected by the natural process of ageing, and are brimming with vitality and grace.\n\t\tYou are loyal, kind, caring, and often very generous to friends.");

              break;



              case 2:

             gotoxy(16,10); printf("If your Aquarius roommate is the bane of your existence as she constantly keeps turning the AC off,\n\t\ton the pretext of feeling icy cold while you're practically melting cut her some slack.\n\t\tTurns out, Aquarius people tend to have perpetually cold hands and feet");

              break;



              case 3:

              gotoxy(16,10);printf("they're pretty chilled out and can totally take you for a fun ride!\n\t\tYou are adventurous, ambitious, impulsive, enthusiastic and full of energy.\n\t\tYou are a musically or artisticly gifted person, and creativeness is inherent in you. ");

              break;



              case 4:

              gotoxy(16,10);printf(" You can't help being a slob, probably because your overly ambitious nature takes up most of your time,\n\t\t and you prefer not to waste even the slightest bit of time or your energy \n\t\ton something which doesn't bring you any gain.");

              break;



              case 5:

              gotoxy(16,10);printf("Their first and foremost love is Food.\n\t\tThey have a weird obsession with food.\n\t\t They're always equipped with the yummiet snacks,\n\t\t whether it is en route a trip, on the way to a party, at the movies the works");

              break;



              case 6:

              gotoxy(16,10);printf("You have the ability to learn super-fast, adapt and exchange ideas and concepts.\n\t\t Their mind works at lightning speed, \n\t\tsometimes making it difficult for even their own selves to keep pace with it");

              break;



              case 7:

              gotoxy(16,10);printf("People confuse their loyal, tenacious, and emotional nature for plain old sensitive, \n\t\tbut few are aware that they are gushing with an all consuming love,\n\t\t which they prefer to keep a secret");

              break;



              case 8:

              gotoxy(16,10);printf("Super creative, passionate with oodles of confidence.\n\t\tA Leo aces sales, and will convince anyone to buy what they're selling—be it a good, a service or just a mere concept of theirs");

              break;



              case 9:

              gotoxy(16,10);printf("You are shy and idealistic.\n\t\tYou are quick thinking and observant.\n\t\tYou have sharp feelings of taste, time, hearing and sense of smell.\n\t\tIn all business matters you have good judgment, and are not easily imposed upon or deceived.");

              break;



              case 10:

              gotoxy(16,10);printf("It is pretty unusual for you to express anger, but when you do it is usually a storm.\n\t\tYou are extremely positive and decisive in all your thoughts and actions.");

              break;





              case 11:

              gotoxy(16,10);printf("You are usually extremely pure-minded, virtuous, and religious.\n\t\tYou often have to go through a great deal of trouble, difficulty\n\t\t and sooner or later success and fame nearly always find you.");

              break;



              case 12:

              gotoxy(16,10);printf("You have an appetite for learning and travel.\n\t\t You are often the great workers;\n\t\t You never seem to tire until you drop with fatigue.\n\t\tYou show such qualities as reliance, affability and courtesy.");

              break;





      }



  }



  void colornum()

{

switch(num){



case 1:

gotoxy(16,10);printf("All tones of grey, all ranges of violet and purple, and also black are most suitable colours for you.\n\n\t\t Your lucky number is:3,9,27");

break;

case 2:

gotoxy(16,10);printf("The most favorable colors for you are all shades of  blues and greys\n \n\t\tYour lucky number is:4,7,18");

break;

case 3:

gotoxy(16,10);printf("Most suitable color to you are all shades of mauve, violet, and purple.\n\n\t\t Your lucky number is:1,8,4");

break;

case 4:

gotoxy(16,10);printf("The most harmonious color for you is all shades of red -crimson, rose, and pink.\n\n\t\t Your lucky number is:12,7,4");

break;

case 5:

gotoxy(16,10);printf("Most favorable colors for you are all shades of blue.\n\n\t\t Your lucky number is:65,3,7");

break;

case 6:

gotoxy(16,10);printf("Your colors are silver, glistening white, and all shimmering things.\n\n\t\t Your lucky number is:54,1,0");

break;

case 7:

gotoxy(16,10);printf("The colors most in harmony for you are all shades of green, and cream and white.\n\n\t\t Your lucky number is:3,6,78");

break;

case 8:

gotoxy(16,10);printf("The colors most in harmony for you are all pink ,green ,brown.\n\n\t\t Your lucky number is:4,7,32");

break;

case 9:

gotoxy(16,10);printf("Your most suitable colors are all very pale shades and silvery, shimmering materials.\n\n\t\t Your lucky number is:23,4,8");

break;

case 10:

gotoxy(16,10);printf("All shades of blue, violet, purple and mauve are more suitable colour for you.\n\n\t\t Your lucky number is:9,45,32");

break;

case 11:

gotoxy(16,10);printf("The colors most suitable for you are all shades of crimson and blue.\n\n\t\t Your lucky number is:23,56,9");

break;

case 12:

gotoxy(16,10);printf(" Most suitable colors are all shades of violet and mauve and violet-purple.\n\n\t\t Your lucky number is:10,67,3");

break;



}}
