/*
Meghan Moore
February 21, 2015
CIT 245 - Data Structures and Programming C++
Assignment 4 - Chapter 7
Purpose: Create a counter. Use a static variable to keep track of the total number of incs and decs.
*/

#include <iostream> //cin, cout, cerr
#include <cstdlib> //system
using namespace std;

class Counter{
  public:
    Counter():count(0){}
    Counter(int countValue):count(countValue){}
    void display();
    //Postcondition: prints status of both class variables to screen.
    void inc() {count++; incDec++;}
    void dec() {count--; incDec++;}
  private:
    int count;
    static int incDec;
};

int Counter::incDec = 0;

int main(){
  Counter c1, c2(200);
  
  cout << "Current state of C1 (created with the default constructor)\n";
  c1.display();
  cout << "Current state of C2 (created as C2(200))\n";
  c2.display();
  
  for(int i = 0; i < 85; i++){
    c1.inc();
  }
  cout << "Current state of C1 after 85 inc()\n";
  c1.display();
  
  for(int j = 0; j < 242; j++){
    c2.dec();
  }
  cout << "Current state of C2 after 242 dec()\n";
  c2.display();
  
  system("pause");
  return 0;
} //end main

void Counter::display(){
  cout << "Current count: " << count << endl;
  cout << "Total increments and decrements: " << incDec << endl << endl;
} //end Counter::display
