#include <iostream>
#include "kebab.h"
#include <algorithm>
#include <vector>

using namespace std;
Kebab::Kebab()
{
    skewer= {};

}



bool Kebab:: addIngredient(char item)
{

    if(skewer.size() < maxlength && isValidIngredient(item) )
    {

        skewer.push_back(item);
        return true;
    }
    else

        return false;

}

void Kebab:: buildKebab(std::string s)
{

    for(string::size_type i=0; i< s.length(); i++)
    {
       char c = s[i];
     //  cout<<c;
     addIngredient(c);
    }

}

unsigned int Kebab::numMeats()const
{
    int mycount1 = std::count(skewer.begin(),skewer.end(),'b');
  int  mycount2 = std::count(skewer.begin(),skewer.end(),'B');

    int mycount =mycount1+mycount2;

    return mycount;

}

bool Kebab:: hasSameIngredients(Kebab& k)const
{

    int beef = std::count(this->skewer.begin(),this->skewer.end(),'b')+
               std::count(this->skewer.begin(),this->skewer.end(),'B');

    int beef2 = std::count(k.skewer.begin(),k.skewer.end(),'b')+
                std::count(k.skewer.begin(),k.skewer.end(),'B');

    int tomato =std::count(this->skewer.begin(),this->skewer.end(),'t')+
                std::count(this->skewer.begin(),this->skewer.end(),'T');

    int tomato2=std::count(k.skewer.begin(),k.skewer.end(),'t')+
                std::count(k.skewer.begin(),k.skewer.end(),'T');

    int mushroom=std::count(this->skewer.begin(),this->skewer.end(),'m')+
                 std::count(this->skewer.begin(),this->skewer.end(),'M');

    int mushroom2=std::count(k.skewer.begin(),k.skewer.end(),'m')+
                  std::count(k.skewer.begin(),k.skewer.end(),'M');

    int pepper =std::count(this->skewer.begin(),this->skewer.end(),'p')+
                std::count(this->skewer.begin(),this->skewer.end(),'P');

    int pepper2=std::count(k.skewer.begin(),k.skewer.end(),'p')+
                std::count(k.skewer.begin(),k.skewer.end(),'P');

    int squash =std::count(this->skewer.begin(),this->skewer.end(),'s')+
                std::count(this->skewer.begin(),this->skewer.end(),'S');

    int squash2=std::count(k.skewer.begin(),k.skewer.end(),'s')+
                std::count(k.skewer.begin(),k.skewer.end(),'S');


    if(beef>=beef2 && tomato>=tomato2 && squash>=squash2 && pepper>=pepper2
            && mushroom>=mushroom2)
    {

        return true;
    }
    return false;
}


std::string  Kebab:: listIngredients() const
{
    string a="";
   for(int i=0;i<skewer.size();i++){
     string s(1,skewer[i]);

     a = a+s;
   }
   return  a;
}



