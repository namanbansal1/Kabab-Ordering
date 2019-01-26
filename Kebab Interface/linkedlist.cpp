#include<iostream>
#include "linkedlist.h"
using namespace std;


LinkedList::LinkedList()
{

    length=0;
    front=NULL;
    back=NULL;
}


LinkedList:: ~LinkedList()
{
    int phelp=0;
    Node* a=NULL;
    for(Node* help=front; phelp<length; help=help->next)
    {



        delete help->data;
        help->data=NULL;
        delete help;


        phelp++;

    }


}



LinkedList::LinkedList(const LinkedList& ll)    //deep copy
{
    Node* f=NULL;
    Node* b =NULL;
    Node* helpagain=NULL;
    length=ll.length;
    front=NULL;
    back=NULL;

    int phelp=1;
    for(Node* help=ll.front; phelp<=ll.length; help=help->next)
    {

        Kebab* a= new Kebab;
        if(help==ll.front)
        {
            helpagain= new Node(a);
            f=helpagain;
        }
        else
        {
            helpagain= new Node(a);
        }
        if(help!=ll.front)
        {
            b->next=helpagain;
        }
        helpagain->data->buildKebab(help->data->listIngredients());

        phelp++;
        b=helpagain;

    }

    front=f;
    back=b;

}



void LinkedList::insertFront(Kebab* item)
{


    Node* a = new Node(item);
    length=length+1;
    if(front==NULL)
    {
        front= a;
        back= a->next;
    }
    Node* help =NULL;
    if(front!=NULL && back==NULL)
    {
        help=front;
        front=a;
        front->next=help;
        back=front->next;
    }
    if(front!=NULL && back!=NULL)
    {
        help=front;
        front=a;
        front->next=help;
    }
}

void LinkedList::insertBack(Kebab* item)
{


    Node* a = new Node(item);
    length=length+1;
    if(front==NULL)
    {
        front= a;
        back= a->next;
    }

    if(front!=NULL && back==NULL)
    {
        front->next=a;
        back=a;
        back->next=NULL;
    }
    Node* help =NULL;
    if(front!=NULL && back!=NULL)
    {
        help=back;
        back=a;
        help->next=a;
        back->next=NULL;
    }
}
// Inserts an item in position p (0-indexed)
// Returns false for invalid index
// PRE:   0 <= p <= size
// POST:  List contains item at position p
// PARAM: item = item to be inserted, p = position where item will be inserted

bool LinkedList::insertAt(Kebab* item,unsigned int p)
{
    if(p==0)
    {
        insertFront(item);
        return true;
    }
    if(p==length)
    {
        insertBack(item);
        return true;
    }
    Node* help =NULL;
    Node* helpagain =NULL;
    if(p>0 && p<length)
    {
        length=length+1;
        int phelp=0;
        for(Node* help = front; phelp<=p ; help=front->next)
        {
            phelp=phelp+1;
            if(phelp==p)
            {


                Node* a = new Node(item);
                helpagain= help->next;
                help->next=a;
                a->next=helpagain;
            }
        }
        return true;
    }
    return false;
}


// Removes and returns an item from position p (0-indexed)
// Return NULL if index is invalid
// PRE:   0 <= p < size
// POST:  Item is removed from list.
//        Node is deallocated but Kebab should in memory
//        Thus set data to NULL before deleting
// PARAM: p = position from where item will be removed

Kebab* LinkedList:: removeAt(unsigned int p)
{
    Node* help =NULL;
    Kebab* savekebab=NULL;
     if(length>=1){
    if(p==0 && front->next==NULL) ///one node remove.
    {

        length=length-1;
        savekebab=front->data;
        front->data=NULL;
        delete front;
        front=NULL;
        return savekebab;
    }

    if(p==0 && front->next!=NULL) //more than 2 nodes remove first
    {

        length=length-1;
        help=front;
        front=front->next;
        savekebab= help->data;
        help->data=NULL;
        help->next=NULL;
        delete help;
        help=NULL;
        return savekebab;

    }

    if(p==1 && length==2)  //twonode remove back
    {

        length=length-1;
        savekebab=back->data;
        back->data=NULL;
        delete back;
        front->next=NULL;
        return savekebab;
    }
    Node* help4= NULL;
    Node* secondlast =NULL;           //more than two node remove back
    if(p==length-1 && length>2)
    {
     // cout<<"A";
        length=length-1;           //seocndlastelement of list
        for(Node* help=front; help->next->next!=NULL; help=help->next)
        {
            secondlast=help;
        }

        savekebab=back->data;
        back->data=NULL;
        help4=back;
        back=secondlast->next;
        back->next=NULL;
        delete help4;
        return savekebab;
    }


    Node* help3=NULL;
    Node* elementdelete=NULL;              //removing the inbetween ones.
    if(p>0 && p<length-1)               //secondlastelement from index
    {
 //cout<<"B";
        int phelp=0;
        length=length-1;
        for(Node* help=front; phelp<=p; help=help->next)
        {
            elementdelete=help;
            phelp++;
        }
        int phelp2=0;
        for(Node* help1=front; phelp2<=p-1; help1=help1->next)
        {
            secondlast=help1;
            phelp2++;
        }

        savekebab= elementdelete->data;
        elementdelete->data=NULL;
        help3=elementdelete->next;
        elementdelete->next=NULL;
        secondlast->next=help3;
        delete elementdelete;
        return savekebab;


    }
     }
   //  cout<<"empty";
    return NULL;

}

unsigned int LinkedList:: size()const
{
    return length;
}

bool LinkedList:: isEmpty()const
{
    if(length==0)
    {
        return true;
    }
    return false;

}

// Returns existence of a Kebab that has at least
//   all the same ingredients as k, in any order
//   i.e. the list has a Kebab whose ingredients
//   are a super-multiset of k's ingredients
bool LinkedList:: contains(Kebab& k)const
{

    Node* helpme=NULL;
    int phelp=1;
    for(Node* help =front; phelp<=length; help=help->next)
    {

        if(help->data->hasSameIngredients(k))
        {
            return true;
        }
        else
        {

            phelp++;
        }
    }

    return false;

}


// Returns item at index (0-indexed)
// Returns NULL if index is invalid
Kebab* LinkedList:: elementAt(unsigned int p)const
{

    if(p<0||p>length-1)
    {
        return NULL;
    }

    Node* helpme=NULL;

    int phelp=0;
    for(Node* help =front; phelp<=p; help=help->next)
    {

        helpme=help;

        phelp++;
    }
    return helpme->data;


}


LinkedList& LinkedList::operator=(const LinkedList& ll)
{

    if(this!=&ll)
    {
        LinkedList(ll);
    }
    else
    {

        return *this;

    }
}



