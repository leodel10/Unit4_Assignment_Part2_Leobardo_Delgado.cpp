//Leobardo Delgado COSC_1436_57002 Repl.it IDE 
//In this program, the user sets the stopping point and the result is outputting the suffix according to the number and hello after saying a day. EX. "ist Hello"


#include <iostream>
using namespace std;
int main() 

{
//initialize and declare variables 
int stop = 0;
//accept the input from the user 
cout << "Please enter a stopping point: " << endl;
cin >> stop;

for (int i = 1; i<= stop; i++)
{
  if ( ( i % 10 == 1) ) //used modulus to find the remainder to figure out what ending to use 
    {    
      cout << i << "st Hello" << endl;
    }
  else if ( (i % 10 == 2 ) )
    {
      cout << i << "nd Hello" << endl;
    }
  else if ( (i % 10 == 3 ) )
    {
      cout << i << "rd Hello" << endl;
    }
  else if ( (i % 10 == 4 ) || (i % 10 == 5 ) ) //used "||" to test out two options at a time 
    {
      cout << i << "th Hello" << endl;
    }
  else if ( (i % 10 == 6)  || (i % 10 == 7) ) 
    {
      cout << i << "th Hello" << endl; 
    }
  else if ( (i % 10 == 8)  || (i % 10 == 9) )
    {
      cout << i << "th Hello" << endl; 
    } 
  else if ( (i % 10 == 0 ) )
    {
      cout << i << "th Hello" << endl;
    }
}


}