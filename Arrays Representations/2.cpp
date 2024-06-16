// Increase size of array
#include<iostream>
using namespace std;

int main(){
    int i;
    int * p = new int[5]; 
    int * q = new int[10]; 
    for ( i = 0; i < 5; i++)
    {
       q[i] = p[i];
    }
    delete[]p;
    p=q;
    q=NULL;

    return 0;
}
