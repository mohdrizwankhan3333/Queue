#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    stack<char>s;//satck implementing reverseing string 
    queue<char>q;//Queue implementing see imput or input as output
    string str="mohdrizwankhan";
   for (char c: str){
    q.push(c);
    s.push(c);}
    cout<<"Queue's output:- "<<endl;
   while(!q.empty()){
    cout<<q.front();
    q.pop();}
   cout<<endl<<"stack's output:- "<<endl;
   while(!s.empty()){
    cout<<s.top();
    s.pop();}
    return 0;}