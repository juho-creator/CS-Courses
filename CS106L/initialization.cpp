#include <iostream>
#include <string>
#include <tuple>
#include <vector>
using namespace std;


struct Student
{
    string name;
    string state;
    int age;
};

tuple<string,string,string> getClassInfo()
{
    string className = "CS106L";
    string buildingName = "Turing Auditorium";
    string language = "C++";
    
    return {className, buildingName, language};
}

void shift(vector<pair<int,int>> &nums)
{
    for (auto& [num1,num2]:nums)
    {
        num1++;
        num2++;

    }
}


int main()
{   
    // Pairs (structure with 2 member variables)
    pair<int,string>p{21,"Juho"};
    cout << p.first << " " << p.second << endl;


    // 1. Direct Initialization (to int)
    // - Narrow conversion = unintended conversion of data types (4.3 -> 4)
    int numOne = 12.0;
    int numTwo(12.0);

    cout << "numOne is " << numOne << endl;
    cout << "numTwo is " << numTwo << endl;
    

    // 2. Uniform initialization  (Data type matters!)
    // - No narrow conversion (safe!)
    int One{12.0};  // Error!
    int Two{12}; 
    cout << "N2 is " << Two << endl;


    Student{"Juho","happy",21};


    // 3. Structured Binding
    //- Initializing variable with fixed size 
    // - Multipl value returns 
    

   // Method 1 (Using auto)
    auto[className, classBuilding, langauge] = getClassInfo();
    cout << className<< classBuilding<< langauge<< endl; 

    // Method 2 (get with tuple)
    auto classInfo =  getClassInfo();
    string t1 = get<0>(classInfo);
    string t2 = get<1>(classInfo);
    string t3 = get<2>(classInfo);
 
    cout << t1 << t2 << t3 << endl; 


    // Sample values for the vector of pairs
    std::vector<std::pair<int, int>> v3 = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    // Print the original vector
    std::cout << "Original Vector:" << std::endl;
    for (const auto &pair : v3) {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << std::endl;

    // Call the shift function
    shift(v3);

    // Print the modified vector after the shift
    std::cout << "Modified Vector:" << std::endl;
    for (const auto &pair : v3) {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << std::endl;
    
    // Complie with g++ :  g++ -std=c++17 main.cpp -o main
   
}
