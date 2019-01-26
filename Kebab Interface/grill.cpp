#include<iostream>
#include"grill.h"

using namespace std;

Grill::Grill()
{}

// Switches the kebabs at pos1 and pos2
// Returns true if positions are valid and swap can be performed
// Returns false if positions are invalid
bool Grill::swap(unsigned int pos1, unsigned int pos2)
{
    if(0 <pos1 && pos1 <=rack.size() && 0<pos2 && pos2<=rack.size())
    {
        if(pos1==pos2)
        {
            return true;
        }

            Kebab* p2= rack.elementAt(pos2-1);
            Kebab* p1= rack.elementAt(pos1-1);
            rack.removeAt(pos1-1);
            rack.removeAt(pos2-1);
            rack.insertAt(p2,pos1-1);
            rack.insertAt(p1,pos2-1);
            return true;
 }

return false;

}


// remove and return the kebab at a 1-indexed
// position on the grill
// return NULL if pos invalid

Kebab* Grill::request(unsigned int pos)
{
    if(0<pos<=rack.size())
    {

        return rack.removeAt(pos-1);


    }

    return NULL;

}

// remove and return the leftmost kebab matching
// at least the ingredients of r, in any order
// return NULL if no match found

Kebab* Grill::request(Kebab& r)
{

    for(int i=0; i<rack.size(); i++)
    {

        if(rack.elementAt(i)->hasSameIngredients(r))
        {


            return rack.removeAt(i);
        }
    }


    return NULL;

}

void Grill::addKebab(Kebab& a)
{
    rack.insertBack(&a);

}

// arrange in decreasing order of # of meat items
void Grill::sortByMeat()
{
    // cout<<"help";

     int largest=0;


   for(int x=0; x<rack.size(); x++)
{
     unsigned int prev=0;
        for(int i=1+x; i<=rack.size(); i++)
        {
            if(rack.elementAt(i-1)->numMeats()>prev)
            {
                largest=i;

            }

            prev=rack.elementAt(i-1)->numMeats();

        }
        Kebab* l= rack.removeAt(largest-1);
        rack.insertAt(l,x);

   }

}

// returns a vector containing the string representation of all
//   kebabs on the grill
std::vector<std::string> Grill:: showKebabs() const
{
    std::vector<std::string> s;
    for(int i=0; i<rack.size(); i++)
    {
        s.push_back( rack.elementAt(i)->listIngredients());


    }
    return s;
}



