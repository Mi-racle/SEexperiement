#include <iostream>
#include <string.h>
using namespace std;
#define mc memcpy
int main()
{
    int a[10000];
    int b[10000];
    for(int i=0;i<10000;i++) a[i]=rand();
    //
    mc(b,a,10000*sizeof(int));
    return 0;
}