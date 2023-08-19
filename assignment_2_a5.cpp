// WAP to find the difference between ASCII of two characters ,take them as input .
#include<iostream>
using namespace std;
int main(){
    char x, y;
    cout<<"Enter any two characters: ";
    cin>>x>>y;
    int diff = (int)x - (int)y;
    cout<<"The diff between ASCII val is "<<x<<" and "<<y<<" is "<<diff;
}