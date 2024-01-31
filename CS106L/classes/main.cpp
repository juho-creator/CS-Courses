#include <iostream> 
#include <map>
#include  "Student.h"


using namespace std;

int printMap(map<int,int> &m)
{
    for (auto iter = m.begin(); iter != m.end();  iter++)    
    {
             auto  &[key, value] = *iter;
             cout << key << " : " <<  value << endl;   
        }
}

int main()
{
        // Calling classes
        auto s =   Student("Juho",21, "coding");
         s.getStudentinfo();
         s.introduce();
         
         // type alias
        using  Cool  = map<int, vector<int>>;
        
         Cool m = {
            {1, {2, 3, 5}},
            {2, {4, 7, 23}}
        };
 }
    