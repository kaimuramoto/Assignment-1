#include "Deque.h"
#include <iostream>
using namespace std;

int main() {

    Deque<int>deq;

    // Testing the display, ddisplay, and jump function 
    cout << "Enqueue 6 elements\n";

    deq.enqueue(1);
    deq.enqueue(2);
    deq.enqueue(3);
    deq.enqueue(4);
    deq.enqueue(5);
    deq.enqueue(6);

    deq.display();
    deq.ddisplay();


    // Testing jump function 
    cout << "\nTesting for Jump\n";
    deq.jump(10);
    deq.jump(18);

    deq.display();
    deq.ddisplay();


    // Testing the Eject Function
    cout << "\nTesting for Eject:\n";
    deq.eject();   // removes 10

    deq.display();
    deq.ddisplay();


    // Testing the Clear and the Reserve Functions
    cout << "\nTesting clear:\n";
    deq.clear();
    deq.reserve(8);

    deq.display();
    deq.ddisplay();


    // Test for the immplementation of objects and array in your code
    cout << "\nTesting other inputs:\n";
    Deque<string> deq1;

    deq1.enqueue("Hello");
    deq1.enqueue("World");
    deq1.enqueue("C++");
    deq1.jump("SFU");    

    deq1.display();
    deq1.ddisplay();  


    // Testing the Eject function on a string on different data types
    cout << "\nTesting eject on a string:\n";

    deq1.eject();

    deq1.display();
    deq1.ddisplay();


    // Testing the Clear and the Reserve Functions on different data types
    cout << "\nTesting clear and reserve on strings:\n";
    deq1.clear();
    deq1.reserve(5);

    deq1.display();
    deq1.ddisplay();
}



    /*
    // TESTING MY FUNCTIONS displayLinks(), Height(), and Depth()
    AvlTree<int> t;
    //    int NUMS = 400000;
    int NUMS = 10;
    const int GAP  = 3 ;
    const int CAP  = 19;
    int i;
    int key ;

    cout << "Start of AVLtest for displayLinks()" << endl;

    key = CAP/2;
    for( i = 1 ; i <= NUMS ; i++ ){
        key = (key + GAP) % CAP ;
        t.insert( key );
    }

    if( NUMS < 40 ){
        cout << "Keys:" << endl ;
        t.printTree( );

        cout << "Tree:" << endl ;
        t.displayTree();

        cout << "Links:" << endl ;
        t.displayLinks(); 
        
    }

    // cout << "Height: " << t.height() << endl;
    // cout << "Depth of 17 is: " << t.depth(17) << endl;

    //int NUMS = 400000

    cout << "\n________Start of AVLtest for height() AND depth()_______\n" << endl;
    key = CAP/2;
    for( i = 1 ; i <= NUMS ; i++ ){
        key = (key + GAP) % CAP ;
        t.insert( key );
    }

    if( NUMS < 40 ){
        cout << "Keys:" << endl ;
        t.printTree();

        cout << "Tree:" << endl ;
        t.displayTree();

        cout << "Height = " << 
        t.height() << endl;

        cout << "Depth of 15 is: " << t.depth(15) << endl;
    }

    cout << "\n________End of AVLtest for height() AND depth()_______\n" << endl;


    cout << "\n________Start of AVLtest part 2_______\n" << endl;
    // Creating a new tree to test our functions validity 
    for (int i = 0; i < 10; i++)
    {
        t.insert(i);
    }
    cout << "Keys:" << endl ;
    t.printTree();
    
    cout << "Tree:" << endl ;
    t.displayTree();
    
    cout << "Height = " <<
    t.height() << endl;

    cout << "Depth of 9 is: " << t.depth(9) << endl;

    cout << "\n________End of AVLtest part 2_______\n" << endl;


    cout << "\n________Start of Empty AVL tree test________\n" << endl;
    // removing all the elements from the tree to test if isempty() and height is 0
    for (int i = 0; i < 19; i++)
    {
        t.remove(i);
    }
    // test if empty tree will give us 0 for height
    cout << "Keys:" << endl ;
    t.printTree();

    cout << "Tree:" << endl ;
    t.displayTree();

    cout << "Height = " <<
    t.height() << endl;

    cout << "Depth of 5 is: " << t.depth(5) << endl;

    cout << "\n________End of Empty AVL tree test________\n" << endl;
    */

    // FIRST TREE BST: Tall skinny tree (T1)