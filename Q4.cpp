#include <queue>
#include <iostream>
#include <string>
#include <stack>
using namespace std;       //reverse Q by using stack
int main() {
    stack<char> s;
    string str = "timerizwan";
    queue<char> q;
    cout << "Original String: " << str << endl;
    // Push characters onto the queue and q.front(); value on to stack
    for (char c : str) {
        q.push(c);
        s.push(q.front());
        q.pop();}
    cout << "Reversed String: ";
    while (!s.empty()) {           //pop element from stack and saved to Q then cout<<q.front();
        q.push(s.top());
        s.pop();
        cout<<q.front();
        q.pop();}
    return 0;}
