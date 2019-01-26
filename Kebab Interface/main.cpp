

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

#include "kebab.h"
#include "linkedlist.h"
#include "grill.h"

using namespace std;

// forward function declarations
void runScriptedTests();
void runInteractiveTest();
void displayMenu();
void handleQueryShowGrill(Grill& grill);
void handleQueryBuyX(Grill& grill);
void handleQueryBuyList(Grill& grill);
void handleQueryNewKebab(Grill& grill);
void handleQuerySwap(Grill& grill);
void handleQuerySort(Grill& grill);

int main()
{
   runScriptedTests();
  runInteractiveTest();

  return 0;
}

void runScriptedTests()
{

  Kebab a;
  cout<<a.addIngredient('b')<<endl;
  cout<<a.addIngredient('b')<<endl;
  cout<<a.addIngredient('b')<<endl;
  cout<<a.addIngredient('b')<<endl;
  cout<<a.addIngredient('b')<<endl;
  cout<<a.addIngredient('b')<<endl;
  cout<<a.addIngredient('m')<<endl;
  cout<<a.addIngredient('y')<<endl;
  cout<<a.addIngredient('b')<<endl;
  cout<<a.addIngredient('b')<<endl;
  cout<<a.addIngredient('b')<<endl;

  Kebab b;
  cout<<b.addIngredient('m')<<endl;
  cout<<b.addIngredient('B')<<endl;
  cout<<b.addIngredient('b')<<endl;
   b.buildKebab("bBbbMtTPbbbbb");
   cout<< b.numMeats()<<endl;
   cout<<b.listIngredients();
   cout<< a.listIngredients();

  Kebab a;
  Kebab c;
 cout<<  c.hasSameIngredients(a)<<endl;
  a.addIngredient('b');
  a.addIngredient('M');
  a.addIngredient('p');
  Kebab b;

 cout<< a.hasSameIngredients(b)<<endl;
  b.addIngredient('s');
 cout<< a.hasSameIngredients(b)<<endl;
  a.addIngredient('S');
   cout<< a.hasSameIngredients(b)<<endl;


  LinkedList a;
   Kebab* b = new Kebab;
   b->addIngredient('b');
   b->addIngredient('m');

   Kebab* c = new Kebab;
   c->addIngredient('p');
   c->addIngredient('p');
   c->addIngredient('t');

   Kebab* d = new Kebab;
   d->addIngredient('m');
   d->addIngredient('t');
   d->addIngredient('t');

    cout<< a.removeAt(0)->listIngredients()<<endl;
  a.insertAt(b,0);
   a.insertAt(c,1);
   a.insertAt(d,2);
   cout<< a.removeAt(2)->listIngredients()<<endl; //2+ node remove back
   cout<< a.removeAt(1)->listIngredients()<<endl;
   cout<< a.removeAt(0)->listIngredients()<<endl;
   a.insertAt(b,0);
   a.insertAt(c,1);
   a.insertAt(d,2);
   a.insertAt(b,3);
   cout<< a.removeAt(0)->listIngredients()<<endl;
   cout<< a.removeAt(0)->listIngredients()<<endl;
 cout<< a.removeAt(0)->listIngredients()<<endl;
 cout<< a.removeAt(0)->listIngredients()<<endl;


 Kebab* x = new Kebab;
   x->addIngredient('b');
   x->addIngredient('m');

   Kebab* y = new Kebab;
   y->addIngredient('p');
   y->addIngredient('p');
   y->addIngredient('t');

   Kebab* z = new Kebab;
   z->addIngredient('m');
   z->addIngredient('t');
   z->addIngredient('t');


  LinkedList a;
  a.insertAt(x,0);
 a.insertAt(y,1);
  a.insertAt(y,1);
  LinkedList b(a);
 cout<< a.removeAt(0)->listIngredients()<<endl;
cout<< a.removeAt(0)->listIngredients()<<endl;
cout<< a.removeAt(0)->listIngredients()<<endl;




   LinkedList s=a;
   cout<< a.removeAt(0)->listIngredients()<<endl;
cout<< a.removeAt(0)->listIngredients()<<endl;
cout<< a.removeAt(0)->listIngredients()<<endl;

 cout<< s.removeAt(0)->listIngredients()<<endl;
cout<< s.removeAt(0)->listIngredients()<<endl;
cout<< s.removeAt(0)->listIngredients()<<endl;



   Kebab* x = new Kebab;
   x->addIngredient('t');
   x->addIngredient('m');

   Kebab* y = new Kebab;
   y->addIngredient('p');
   y->addIngredient('p');
   y->addIngredient('t');

   Kebab* z = new Kebab;
   z->addIngredient('m');
   z->addIngredient('t');
   z->addIngredient('b');


   LinkedList c;
   c.insertAt(x,0);
   c.insertAt(y,1);
   c.insertAt(z,2);
    Kebab g*=  c.removeAt(1)->listIngredients()<<endl;
    Kebab v*=  c.removeAt(2)->listIngredients()<<endl;
 cout<<  c.insertAt(v,2)->listIngredients()<<endl;
cout<<  c.insertAt(g,1)->listIngredients()<<endl;



   Kebab f;
   f.addIngredient('b');

LinkedList c;
c.insertAt(x,0);
c.insertAt(y,1);
c.insertAt(z,1);
cout<<c.contains(f)<<endl;

 f.addIngredient('t');
cout<<c.contains(f)<<endl;










  a.insertFront(b);
   a.insertFront(b);
   cout<<a.size()<<endl;
  a.insertBack(b);
  a.insertBack(b);
  cout<<a.size()<<endl;
  a.insertAt(b,0);
cout<<a.size()<<endl;
 a.insertAt(b,1);
 cout<<a.size()<<endl;
 a.insertAt(b,5);
  cout<<a.size()<<endl;
 a.insertAt(b,2);
 cout<<a.size()<<endl;
   LinkedList c(a);
 cout<<c.size()<<endl;
  a.insertFront(b);

 cout<<c.size()<<endl;
    cout<<a.size()<<endl;
    /LinkedList b(a);



}

void runInteractiveTest()
{
  // create a Grill and populate it with some Kebabs

  Grill g;
  Kebab* freshkebab;
  freshkebab = new Kebab();
  freshkebab->buildKebab("MMBB");
  g.addKebab(*freshkebab);
  freshkebab = new Kebab();
  freshkebab->buildKebab("TbTB");
  g.addKebab(*freshkebab);
  freshkebab = new Kebab();
  freshkebab->buildKebab("bbbbb");
  g.addKebab(*freshkebab);
  freshkebab = new Kebab();
  freshkebab->buildKebab("bbbbbbbbb");
  g.addKebab(*freshkebab);
  freshkebab = new Kebab();
  freshkebab->buildKebab("bb");
  g.addKebab(*freshkebab);
  freshkebab = new Kebab();
  freshkebab->buildKebab("bb");
  g.addKebab(*freshkebab);


  string inputchoice = "";
  int choice = 0;

  while (choice != 8)
  {
    displayMenu();
    // get the menu choice from standard input
    getline(cin, inputchoice);
    choice = atoi(inputchoice.c_str());

    switch (choice)
    {
    case 1: // See the kebabs
      handleQueryShowGrill(g);
      break;
    case 2: // Buy a kebab by pointing
      handleQueryBuyX(g);
      break;
    case 3: // Buy a kebab by listing ingredients
      handleQueryBuyList(g);
      break;
    case 4: // Make a new kebab
      handleQueryNewKebab(g);
      break;
    case 5: // Swap two kebabs on the grill
      handleQuerySwap(g);
      break;
    case 6: // Descending sort the kebabs by meat amount
      handleQuerySort(g);
      break;
    case 8: // End
      cout << "Thank you, come again!" << endl;
      break;
    default: // invalid option
      cout << "Invalid choice." << endl;
      break;
    }
  }
}


// prints the options menu to screen
void displayMenu()
{
  cout << "*****************************************\n"
       << "* Welcome to Speedy Kebab terminal      *\n"
       << "* What would you like to do?            *\n"
       << "*                                       *\n"
       << "* Customer operations:                  *\n"
       << "* 1. See the kebabs on the grill        *\n"
       << "* 2. Buy a kebab by number              *\n"
       << "* 3. Buy a kebab by listing ingredients *\n"
       << "*                                       *\n"
       << "* Staff operations:                     *\n"
       << "* 4. Make a new kebab                   *\n"
       << "* 5. Swap two kebabs                    *\n"
       << "* 6. Sort by meat amounts               *\n"
       << "*                                       *\n"
       << "* 8. End                                *\n"
       << "*****************************************" << endl;
  cout << "Please enter your choice: ";
}

void handleQueryShowGrill(Grill& grill)
{
  vector<string> kebabs = grill.showKebabs();
  int numkebabs = kebabs.size();
  // pad all kebab strings with " " to make them SKEWER_SIZE
  for (int i = 0; i < numkebabs; i++)
  {
    if (kebabs[i].length() < SKEWER_SIZE)
    {
      while (kebabs[i].length() < SKEWER_SIZE)
        kebabs[i] = kebabs[i] + " ";
    }
    cout << i + 1 << "\t";
  }
  cout << endl;
  for (int i = 0; i < numkebabs; i++)
    cout << "~~~\t";
  cout << endl;
  for (int chars = 0; chars < SKEWER_SIZE; chars++)
  {
    for (int k = 0; k < numkebabs; k++)
    {
      cout << kebabs[k][chars] << "\t";
    }
    cout << endl;
  }
}

void handleQueryBuyX(Grill& grill)
{
  string inputchoice = "";
  int choice = 0;
  cout << "Enter the number of the kebab: ";
  getline(cin, inputchoice);
  choice = atoi(inputchoice.c_str());
  Kebab* purchased = grill.request((unsigned int)choice);
  if (purchased != NULL)
    cout << "Thank you, enjoy!\n" << endl;
  else
    cout << "Sorry, I cannot help you with that.\n" << endl;
  delete purchased;
}

void handleQueryBuyList(Grill& grill)
{
  string wanted;
  cout << "Enter the first character of each ingredient you want: ";
  getline(cin, wanted);
  Kebab wantedkebab;
  wantedkebab.buildKebab(wanted);
  Kebab* purchased = grill.request(wantedkebab);
  if (purchased != NULL)
    cout << "Thank you, enjoy!\n" << endl;
  else
    cout << "Sorry, I cannot help you with that.\n" << endl;
  delete purchased;
}

void handleQueryNewKebab(Grill& grill)
{
  string ilist;
  cout << "Enter the first character of each ingredient to use: ";
  getline(cin, ilist);
  Kebab* freshkebab = new Kebab();
  freshkebab->buildKebab(ilist);
  grill.addKebab(*freshkebab);
  cout << "A fresh kebab is on the grill!\n" << endl;
}

void handleQuerySwap(Grill& grill)
{
  string inputchoice = "";
  int k1 = 0;
  cout << "Enter the number of the first kebab: ";
  getline(cin, inputchoice);
  k1 = atoi(inputchoice.c_str());
  int k2 = 0;
  cout << "Enter the number of the second kebab: ";
  getline(cin, inputchoice);
  k2 = atoi(inputchoice.c_str());
  if (grill.swap((unsigned int)k1, (unsigned int)k2))
    cout << "Kebabs swapped.\n" << endl;
  else
    cout << "Sorry, you cannot do that.\n" << endl;
}

void handleQuerySort(Grill& grill)
{
  grill.sortByMeat();
  cout << "More meat on the left!\n" << endl;
}

