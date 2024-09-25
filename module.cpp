#include <iostream>
#include "outils.h"

using namespace std;

int sommeR(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n+sommeR(n-1);
    }
}


