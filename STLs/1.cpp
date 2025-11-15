#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void print()
{
    cout << "abhishek";
}

int sum(int a, int b)
{
    return a + b;
}

// Vectors
// vectors represents a dynamic sized array in standard template library
// that automatically grows when elements grows when elements are added beyond current capacity

void Vector()
{
    // declaration of an vector
    vector<int> v;

    // inititalising an vector
    v = {2, 4, 6, 8};

    // inserting into vector at the end
    v.push_back(10);

    // inserting at a specific position
    v.insert(v.begin() + 1, 0);

    // iterating over an vector
    for (auto num : v)
    {
        cout << num << ",";
    }

    // Access any element at any position
    cout << v.at(0) << endl;
    cout << v[3] << endl;

    // updtae any particular value
    v[3] = 56;
    cout << v[3] << endl;

    // find vector length
    int n = v.size();
    cout << n << endl;

    // vector can store amy typoe of avlue
    vector<char> str;
    str = {'a', 'b', 'c', 'd', 'e'};
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << endl;
    }

    // deletinf the last elemnt
    str.pop_back();

    // deleting any partiuclar elemrnt
    str.erase(find(str.begin(), str.end(), 'a'));

    // cehecking if an vector is epmpty
    cout << v.empty() << endl;
}

// Deque stand for double ended queue
// Its a sequence container that allows you to add or remove elemnts
// efficinetly from both front and back
// Deque

void Deque()
{
    // initialising an deque
    deque<int> d1;

    // assigining value to the deque
    d1 = {20, 40, 60};

    // iterating over deque
    for (int val : d1)
    {
        cout << val << ",";
    }

    // basic operation
    // inserting any particular position

    // Insert 25 at position 2 (third element)
    d1.insert(d1.begin() + 2, 25);

    // inserting at last position
    d1.push_back(200);
    d1.push_back(300);

    for (int val : d1)
    {
        cout << val << ",";
    }

    // inserting element at the beginiing
    d1.push_front(00);
    d1.push_front(59);

    for (int val : d1)
    {
        cout << val << ",";
    }

    // deletion of element
    // removing from last
    d1.pop_back();
    d1.pop_back();

    // removing from front
    d1.pop_front();
    d1.pop_front();

    for (int val : d1)
    {
        cout << val << ",";
    }

    // accessing elemnts
    // elements can be accessed using front() and back()

    cout << d1.front() << endl;

    cout << d1.back();

    // returning length of the deque
    cout << d1.size() << "," << endl;

    // checking if an deque is empty or not
    cout << d1.empty() << endl;

    // removing all the elemnts from deque
    d1.clear();
}

// stack is a data structure that follows the Last in first out order
// means the last elemnt that being pushed is the one that can be out at a time
// to use stack in our code we must include stack header file

void Stack()
{
    // initialising stack
    stack<int> mystack;

    mystack.push(2);
    mystack.push(4);
    mystack.push(30);
    mystack.push(40);

    // finding out the stack size
    cout << mystack.size() << endl;

    // finding the top element
    cout << mystack.top() << endl;

    // popping elemnt of the top
    mystack.pop();

    // setting the top value
    mystack.top() = 60;
    cout << mystack.top() << endl;

    // checking if stack is empty
    cout << mystack.empty() << endl;
}

// queue is a data structure that used FIFO order
// it means the one ehich gets first will be the one to get out
// to use queue we need to use the queue header file first
// in queue we can on;y access element from either front or either

void Queue()
{
    queue<int> myq;

    //   insertion of elelemnt in queue
    myq.push(20); // front ellemnt
    myq.push(60);
    myq.push(70);
    myq.push(100); // back elelemnt-

    // accessing elemnt can only done from wither front or the back

    cout << myq.front() << endl;

    cout << myq.back() << endl;

    // we can change the elelment from either the front and back
    // example
    myq.front() = 500;
    cout << myq.front() << endl;

    myq.back() = 1000;
    cout << myq.back() << endl;

    // we can find the size of the queue
    cout << myq.size() << endl;

    // we can find if the que is empty or not
    cout << myq.empty() << endl;
}

int main()
{
    int ans = sum(6, 7);
    cout << ans;

    // Vector();
    // Deque();
    // Stack();
    Queue();

    return 0;
}