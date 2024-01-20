#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

// Vector
vector<int>createVector(int n);
void printVector(vector<int> &v);

// Stack
stack<int> createStack(int n);
stack<char> createStack(string s);
void printStack(stack<int> &s); 
void printStack(stack<char> &s); 

// Queue
queue<int> createQueue(int n);
void printQueue(queue<int> &q);


// Grid
void printGrid(int arr[][5]);


int main()
{
    // Vector
    vector<int>v1;
    v1 = createVector(3);
    printVector(v1);

    
    // Stack
    stack<int> s1; 
    string test = "hello";

    s1 = createStack(3);
    printStack(s1);    

    stack<char>s2 = createStack(test);
    printStack(s2);

    // Queue
    queue<int>q1;
    q1 = createQueue(3);
    printQueue(q1);


    // Grid
    int arr[2][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10}
    };

    printGrid(arr);
}



// Vector
vector<int>createVector(int n)
{
    vector<int>v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }

    return v;
}

void printVector(vector<int> &v)
{   
    cout << "Vector" << endl;
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }

    cout << endl;
}


// Stack
stack<int> createStack(int n)
{
    stack<int> s;
    for (int i = 1; i <= n; i++)
    {
        s.push(i);
    }

    return s;
}

stack<char> createStack(string s)
{
    stack<char>stackey;
    for (char c :s)
    {
        stackey.push(c);
    }

    return stackey;
}

void printStack(stack<int> &s)
{      
    cout << endl;

    cout << "Stack" << endl;
    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    
}

void printStack(stack<char> &s)
{      
    cout << endl;

    cout << "Stack" << endl;
    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << '\n';
}


// Queue
queue<int> createQueue(int n)
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    return q;
}

void printQueue(queue<int> &q)
{
    cout << "Queue" << endl;
    while(!q.empty())
    {
        cout << q.front() << " ";  
        q.pop();
    }
    cout << '\n';
}



// Grid 
void printGrid(int arr[][5])
{
    cout << "Grid" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0 ; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


}
