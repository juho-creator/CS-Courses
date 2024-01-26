#include <iostream>
#include <vector>
#include <map>
    
using namespace std;

void printMap(map<int ,int> m)
{
     for(auto iter = m.begin(); iter!=m.end(); iter++)
      {
          const auto &[key, value] = *iter;
          cout << key << " : "<<  value << endl;
      }
}

int main() {
        
        
     map<int,int> m {{1,2} , {3,4} ,{5,6}};
     printMap(m);     
     
     
     // Reference Variable vs Pointers
     int n = 3;
     
     int &referenceVariable =  n;     // reference variable
     int *ptr = &n;    // pointers
     
     cout << "Reference Variable : " << referenceVariable << endl;
     cout << "ptr pointing to :" << *ptr << endl;
        
    return 0;
}