#include <iostream>

using namespace std;

int main()
{
      int menu,meal_1,meal_2,meal_3 ,drink1,drink2,drink3,totalprice;

    cout << "******WELCOME TO ZETECH UNIVERSITY RESTAURANT*******" << endl;
    cout<<"******************TODAYS SPECIAL*******************" << endl;
   //menu
    cout <<"ITEM                 NAME                         PRICE"<<endl ;
    cout<<"1.                   FISH SERVED WITH RICE          500"<<endl;
    cout<<"2.                   BEEF SERVED WITH UGALI         150"<<endl;
    cout<<"3.                   CHICKEN SERVED WITH CHAPATI   300 "<<endl;
    cout<<"            *********DRINKS********                    "<<endl;
    cout<<"1.                   FRUIT JUICE                    100"<<endl;
    cout<<"2.                   SODA                            50"<<endl;
    cout<<"3.                   LEMON WATER                     40"<<endl;
    cout<<"4.                   TEA                             30"<<endl;
      //input area for three student
      cout<<"price for meal 1"<<endl;
      cin>>meal_1;
      cout<<"price for meal 2"<<endl;
      cin>>meal_2;
      cout<<"price of meal 3"<<endl;
      cin>>meal_3;

      cout<<"price of drink ordered by the student1"<<endl;
      cin>>drink1;
      cout<<"price of the drink ordered by the student2"<<endl;
      cin>>drink2;
      cout<<"price of the student ordered by the student3"<<endl;
      cin>>drink3;

      totalprice=meal_1+meal_2+meal_3+drink1+drink2+drink3;
      cout<<" Total bill is Ksh="<<totalprice;

    return 0;
}
