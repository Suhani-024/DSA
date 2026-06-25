#include <iostream>
#include <stack>
using namespace std;

stack<int> s;
stack<int> ss;

void push(int a)
{
    s.push(a);
    if (ss.size() == 0 || ss.top() >= a)
    {
        ss.push(a);
    }
    
}
int pop()
{
    if (s.size() == 0)
    {
        return -1;
    }
    int ans = s.top();
    s.pop();
    if (ss.top() == ans)
    {
        ss.pop();
    }
    return ans;
}

int getMin()
{
    if (ss.size() == 0)
    {
        return -1;
    }

    return ss.top();
}

int main()
{
    push(5);
    push(2);
    push(4);
    push(1);

    cout << "Minimum: " << getMin() << endl;

    pop();
    cout << "Minimum after pop: " << getMin() << endl;

    return 0;
}
int main()
{
    push(5);
    push(2);
    push(4);
    push(1);

    cout << "Minimum: " << getMin() << endl;

    pop();
    cout << "Minimum after pop: " << getMin() << endl;

    return 0;
}
