#include <iostream>
using namespace std;
#include "Arena.h"
int main()
{
    Arena ar(15,15);
    ar.place_traps(5);
    cout << ar << endl;
}
