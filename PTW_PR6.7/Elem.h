#include <iostream>
using namespace std;

struct Elem
{
    Elem* link;
    int info;
};

void enqueue(Elem* &first, Elem* &last, int info) {
    Elem *tmp = new Elem;
    tmp->info = info;
    tmp->link = NULL;
    if (last != NULL)
        last->link = tmp;
    last = tmp;
    if (first == NULL)
        first = tmp;
}

void print(const Elem* first)
{
    int i = 0;
    while (first != nullptr)
    {
        cout << first->info << " ";
        i++;
        first = first->link;
    }
    cout << endl;
}

void replace(Elem*& first, int x, int y)
{
    Elem *first1 = first;
    while (first1 != NULL)
    {
        if(first1->info == x)
        {
            first1->info = y;
        }
        first1 = first1->link;
    }
}
