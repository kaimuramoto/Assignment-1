#ifndef DEQUE_H
#define DEQUE_H

#include <iostream>
using namespace std;

template <typename Object>
class Deque 
{
  public:
    Deque()
      {  
         theCapacity = 8 ;
         objects = new Object[ theCapacity ]; 
         theSize = 0 ;
         front = 0 ; 
         back = 0 ; 
      }
      
    ~Deque( )
      { delete [ ] objects; }

    bool empty( ) const  { return size( ) == 0; }
    int size( ) const { return theSize; }
    void clear( )
    {
        // remove all contents and reset the capacity to it's initial value 
        // 
        // Implement this... (while the 0 < size delete the values)
        
        for (int z = 0; z < theSize; z++ ) {
          dequeue();
        }

        theCapacity = 8;
        objects = new Object[ theCapacity ]; 
        theSize = 0;
        front = 0;
        back = 0;
        
    }


    void reserve( int newCapacity )
    {
        // change the capacity to newCapacity 
        // (provided it is larger than the current size)
        // 
        // Implement this...

        // if ( theCapacity > theSize );
        // int newCapacity = theCapacity;

        if ( newCapacity > theSize){
          Object * newArray = new Object[ newCapacity ];
          for ( int k = 0; k < theSize; ++k ){
            newArray[k] = objects[(front + k) % theCapacity];
          }

          front = 0;
          back = 0;

          for ( int y = 0; y < theSize; y++ ){
            back++;
          }

          Object * temp = objects;
          objects = newArray;
          delete [] temp;
          theCapacity = newCapacity;
        }
    
    }

    // Operations 

    void enqueue( const Object & x )// Insert a new object at the back 
    {
        if( theSize == theCapacity ) reserve( 2 * theCapacity + 1 );
        objects[ back ] = x ; 
        back = (back+1) % theCapacity ;
        theSize++ ;
    }

    void jump( const Object & x )// Insert a new object at the front (jumps/skips the queue and adds the element to the front + 1)
    {
        // Implement this 
        if( theSize == theCapacity ) reserve( 2 * theCapacity + 1 );
          if (front == 0) {
            front = theCapacity - 1;
        }

          else {
            front = front - 1;
        }
        objects[front] = x;
        theSize++;
    }

    Object dequeue( )// Remove and return the object at the front 
    {
        theSize--;
        Object temp = objects[front];
        front = (front+1) % theCapacity ;
        return temp ;
    }

    Object eject( )// Remove and return the object at the back 
    {
        // Implement this
        theSize--;
        Object temp = objects[back];
        back = (back+1) % theCapacity;
        return temp;

    }


    void display() const // print out the contents of the deque
    {
       // Implement this.  The output should be similar to that 
       // used in the Vector and Stack classes provided.
        cout << "size=" << theSize << endl;

        cout << " < " ;
        for( int i = 0; i < theSize ; i++ ){
            cout << i << "=" << objects[i] << ", " ;
        }
        cout << ">" << endl;

    }


    void ddisplay() const // print out the contents of the objects 
    // array, and relevant variables, for debugging or verifying 
    // correctness. 
    {
        // Implement this.  The output should be in the style used in 
        // Vector and Stack classes provided.
        cout << "capacity=" << theCapacity << ", size=" << theSize << endl;

        cout << "front index=" << front << ", back index=" << back << endl;

        cout << "[ " ;
        for( int i = 0; i < theCapacity ; i++ ){
           cout << i << "=" << objects[i % 8] << ", " ;
        }
        cout << "] " << endl;

    }

  private:
    int theSize;
    int front;
    int back;
    int theCapacity;
    Object * objects;

};


#endif 