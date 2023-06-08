#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;
int main()
{
 string playername;
 int balance;
 int bettingamount;
 int guess;
 int dice;
 char choice;
 srand(time(0));
 cout<<"\n\t\t======WELCOME TO MY WORLD======\n\n";
 cout<<"\n\nEnter your name : ";
 getline(cin,playername);
 cout<<"\n\nEnter the starting balance to play game : $";
 cin>>balance;
 do
 {
     system("cls");

     cout<<"\n\nYour current balance is $"<<balance<<"\n";
     do
     {
         cout<<"Hey, "<<playername<<", enter amount to bet : $";
         cin>>bettingamount;
         if(bettingamount>balance)
         { cout<<"betting amount can't be more then current balance!\n";
           cout<<"\nre-enter balance\n";

         }

     }while(bettingamount>balance);

   do
   {
       cout<<"\nguess any number between 1 to 10 :\n";
       cin>>guess;
       if(guess<=0||guess>10)
       {
           cout<<"\nnumber should be b/t 1 to 10"<<"\nre-enter the number\n";

       }
   }while(guess<=0 || guess>10);
   dice=rand()%10+1;
   if(dice==guess)
   {
       cout<<"\n\nyou are in luck!! you have won $ :"<<bettingamount*10;
       balance=balance+bettingamount*10;
   }
   else
   {
       cout<<"\n\noops, better luck next time !! you lost $ :"<<bettingamount<<"\n";
       balance=balance - bettingamount;

   }
   cout<<"\nThe winning number was : "<<dice<<"\n";
   cout<<"\n"<<playername<<", you have balance of $ "<<balance<<"\n";
   if(balance==0)
   {
       cout<<"you have no money" ;
       break;
   }
   cout<<"\n\n-->Do you want to play again(y/n)?";
   cin>>choice;

 }while(choice=='Y' || choice=='y');
cout<<"\n\n\n";
cout<<"\n\nThank you for playing the game, your balance is $ "<<balance<<"\n\n";


return 0;
}
