#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main(){
    queue<char>q;
    string str="mohdrizwankhan";//deleting middle element inside the Q
    int middleelement=str.length()/2;
    for(int i=0;i<str.length();i++){
        if (i==middleelement){
            continue;}
            else{
        q.push(str[i]);}}
    while(!q.empty()){
        cout<<q.front();
        q.pop();}
    return 0;}