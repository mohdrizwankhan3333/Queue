#include<iostream>             //Q implenting 
#include<stdlib.h>
using namespace std;        //FD front se delete and insert from the last 
class q {
public:
    int *arr;
    int size;
    int f, r;
     q(int v) {
        size = v;
        f = -1, r = -1;
        arr = new int[size];
    }
    ~q() {
        delete[] arr;
    }

    bool isfull() { 
        return (r == size - 1); }
    bool isempty() {
        return ( f ==r);} //check is it empty or not
    void push(int data) {
        if (isfull()) {
            cout << "Overflow Q!" << endl;
            exit(1);}
        arr[++r] = data;}
    int pop() {
        if (isempty()) {
            cout << "Underflow Q!" << endl;
            exit(1);  }
        return arr[++f];}};
int main() {
    q k(31);
    k.push(2);
    k.push(21);
    k.push(12);
    cout << k.pop() << endl;
    cout << k.pop() << endl;
    cout << k.pop() << endl;
    cout << k.pop() << endl;
    
    return 0;}
 