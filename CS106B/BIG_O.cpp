#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void coinFlip(string soFar, int n)
{
    if (n == 0)
    {
        cout << soFar << endl;
        return;
    }
    coinFlip(soFar + "H", n - 1);
    coinFlip(soFar + "T", n - 1);
}

void measureRuntime(int n)
{
    auto start_time = high_resolution_clock::now();  // Record the start time

    coinFlip("", n);

    auto end_time = high_resolution_clock::now();  // Record the end time
    auto duration = duration_cast<milliseconds>(end_time - start_time);

    cout << "Runtime for n=" << n << ": " << duration.count() << " milliseconds" << endl;
    cout<< endl;
}

int main()
{
    measureRuntime(3);
    measureRuntime(6);

    return 0;
}
