#include  <iostream>
#include <string> 
using namespace std;

void rocketLaunch(int  n)
{
    if (n == 0)
    {
        cout << "Blast Off!" << endl;
        return;
    }
    
    cout << n << "....." << endl;
    return rocketLaunch(n-1);
}



int factorial(unsigned int n)
{
    if (n == 0)
    {
         return 1;
     }    
     
     return n * factorial(n-1);
}


bool isPalidrome(string text)
{
      if (text.length() <= 1)
      {
          return true;
      }
   
   
     if (text[0] != text[text.length()-1])
     {
          return false;
      }   
     // Remove first character  
     text.erase(0,1);
     
     // Remove last character
     text.pop_back();
   
      return isPalidrome(text);     
}


void printString(string& s, string order="default")
{
    if (s.length() == 0)
      {
           cout <<endl;
           return;
       } 
       
       
       if (order == "reverse")
       {      
           cout << s[s.length()-1];
           s.erase(s.length()-1,1);
        }
       else if (order == "default")
       {
           cout  << s[0];
           s.erase(0,1);
        }
              
       return  printString(s,order);
}


void printStringHelper(string& s)
{
     printString(s,"reverse");   // reverse print
    printString(s);  // default print
}


int answer(int n)
{
     return factorial(n);
}


void coinFlip(string soFar, int n)
{
    if (n == 0)
    {
        cout << soFar << endl;
        return;
    }
    coinFlip(soFar + "H", n -1);
    coinFlip(soFar + "T", n -1);
}


int main()
{
    rocketLaunch(5);    

    // Calling Wrapper Function    
    int result = answer(4);
    cout << result << endl;
    
    string text = "wali";    
    printStringHelper(text);

    
    bool palidrome = isPalidrome("racefwecar");
    cout << palidrome << endl;
       
    coinFlip("",3);
}