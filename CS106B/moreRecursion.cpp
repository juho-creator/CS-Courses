#include <iostream>
#include <vector>
#include <algorithm> // for sort
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
#include <string>
#include <chrono>    // for measuring time

using namespace std;
using namespace chrono;


vector<int> createSortedRandomVector(int n)
{
   vector<int> v;

   for (int i = 0; i < n; i++)
   {
      v.push_back(rand()); 
   }

   sort(v.begin(), v.end());
   return v;
}


//  Recursive functions
int linearSearch(vector<int>& v, int key)
{
   for (int i = 0; i < v.size(); i++)
   {
      if (v[i] == key)
      {
         return i;
      }
   }
   return -1;
}

int binarySearch(vector<int>& v, int key, int lo, int hi)
{
   if (lo > hi)
   {
      return -1;
   }

   int mid = lo + (hi - lo) / 2;

   if (key < v[mid])
   {
      return binarySearch(v, key, lo, mid - 1);
   }
   else if (key > v[mid])
   {
      return binarySearch(v, key, mid + 1, hi);
   }
   else
   {
      return mid;
   }
}

void permute(string soFar, string rest)
{
   if (rest == "")
   {
      cout << soFar << endl;
      return;
   }

   for (int i = 0; i < rest.length(); i++)
   {
      string newRest = rest.substr(0, i) + rest.substr(i + 1);
      permute(soFar + rest[i], newRest);
   }
}


// Wrapper function
void permute(string s)
{
   permute("", s);
}

int binarySearch(vector<int>& v, int key)
{
   return binarySearch(v, key, 0, v.size() - 1);
}

int main()
{
   srand(static_cast<unsigned>(time(0)));

   vector<int> v = createSortedRandomVector(100000);
   for (int num : v)
   {
      cout << num << " ";
   }
   cout << endl;

   while (true)
   {
      cout << endl << "What integer shall we search for? (-1 to quit) ";
      int key;
      cin >> key;

      if (key == -1)
      {
         break;
      }

      // Measure time for linear search
      auto startLinear = high_resolution_clock::now();
      int linearResult = linearSearch(v, key);
      auto stopLinear = high_resolution_clock::now();
      auto durationLinear = duration_cast<microseconds>(stopLinear - startLinear);

      // Measure time for binary search
      auto startBinary = high_resolution_clock::now();
      int binaryResult = binarySearch(v, key);
      auto stopBinary = high_resolution_clock::now();
      auto durationBinary = duration_cast<microseconds>(stopBinary - startBinary);

      cout << "-> Linear Search Result: " << linearResult << " | Time taken: " << durationLinear.count() << " microseconds" << endl;
      cout << "-> Binary Search Result: " << binaryResult << " | Time taken: " << durationBinary.count() << " microseconds" << endl;
   }


   // permutation
   while(1){
        string text;
        cout << "which text should permutate? ";
        cin >> text;
        if (text =="")
        {
            break;
        }
        permute(text);
   }

   return 0;
}
