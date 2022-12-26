#include "IVector.h"
#include <iostream>
using namespace std;

int main( )
{
    const int N = 12;

    IVector v ; // Make an int Vector 
    v.display(); // print its contents
    v.ddisplay(); // print the array contents
    
    // Store N ints in the Vector
    for( int i = 20 ; i < N+20 ; ++i )
    {
        v.push_back( i );
    }

    // print the contents
    v.display();
    v.ddisplay(); // print the array contents

    v[2] = v[4];
    v.pop_back();
    v.pop_back();
    
    v.display();
    v.ddisplay(); // print the array contents

    return 0;
}


/*

int main( )
{
    const int N = 10;

    Deque <int> d ; // Make an int Deque 
    d.display(); // print its contents
    d.ddisplay(); // print the array contents

    // Store N ints in the Vector
    for( int i = 12 ; i < N+10 ; ++i )
    {
        d.enqueue(i);
        
    }

    // print the contents
    d.display();
    d.ddisplay(); // print the array contents


    for( int i = 12 ; i < N+10 ; ++i )
    {

        d.jump(i);
    }
    //d[2] = d[4];
   // d.pop_back();
    //d.pop_back();
    
    d.display();
    d.ddisplay(); // print the array contents

    return 0;

}
*/