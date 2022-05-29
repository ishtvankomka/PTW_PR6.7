#include <iostream>
#include "Elem.h"
using namespace std;

int main() {
    Elem* first = nullptr, *last = nullptr;
    int n;
    cout << "n = "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cout << "list[" << i+1 << "] = "; cin >> a;
        enqueue(first, last, a);
    }
    print(first);
    
    int x, y;
    cout << "replace number x by y" << endl;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    replace(first, x, y);
    print(first);
    
    return 0;
}
