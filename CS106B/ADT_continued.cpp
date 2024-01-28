#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <map>

using namespace std;

// Set
void printSet(set<string> & s)
{   
    cout << "{";
    for (string t : s)
    {
        cout << t << " ";
    }
    cout << "}" << endl;

}


// Vector
pair<set<string>,set<string>> checkDuplicate(vector<string>& v1)
{
    set<string> seen;
    set<string> alreadyExist;

    for (string v : v1)
    {
        if (seen.count(v))
        {
            cout << "Duplicate : " << v << endl;
            alreadyExist.insert(v);
        }

        seen.insert(v);
    }
    return {alreadyExist, seen};
}



// Map 
void printMap(map<string, string>& m)
{
    cout << "{" << endl;
    for (const auto& pair : m) 
    {
        cout << pair.first << ": " << pair.second << endl;
    }
    cout << "}" << endl;

}

// Overloaded function for map<string, vector<string>>
void printMap(const map<string, vector<string>>& m) {
    cout << "{" << endl;
    for (const auto& pair : m) {
        cout << pair.first << ": [";
        for (const string& value : pair.second) {
            cout << value << " ";
        }
        cout << "]" << endl;
    }
    cout << "}" << endl;
}


int main()
{
    // SET
    // Modifying set
    set<string> s1 = {"unicorn", "cupcake", "swamp", "cupcake", "unicorn", "unicorn"};
    s1.insert("horse");
    s1.erase("cupcake");
    printSet(s1);

    cout << s1.count("horse") << endl; // check if 'horse' exists in set

    // VECTOR
    // Check for duplicate items
    vector <string> v1 = {"test1","test1","test","test","wali","woolo"};
    auto result = checkDuplicate(v1);


    set<string> duplicate = result.first;
    set<string> duplicateRemoved = result.second;

    printSet(duplicate);
    printSet(duplicateRemoved);


    // Map
    map<string, string> m;

    m["Juho"] = "Kim";
    m["Clinton"] = "Kwarteng";
    m["Sean"] = "Szumlanski";
    printMap(m);
    cout << m["Sean"] << endl;



    // Modifying map vector using reference variable (vector referece variable --> vector value of Map)
    map<string, vector<string>> m2;

   vector<string>& julieNames = m2["Julie"];
   julieNames.push_back("Zelenski");
   julieNames.push_back("Stanford");

   vector<string>& chrisNames = m2["Chris"];
   chrisNames.push_back("Gregg");
   chrisNames.push_back("Piech");

   vector<string>& nickNames = m2["Nick"];
   nickNames.push_back("Troccoli");
   nickNames.push_back("Parlante");

   printMap(m2);

   // Map size = 3 vectors .
   cout << "Map size: " << m2.size() << endl;
}
