// WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std;
int main(){
    float radius, height;
    cout<<"enter the radius: ";
    cin>>radius;
    cout<<"enter the height";
    cin>>height;
    float volume = 3.14*radius*radius*height;
    cout<<"The vol. of the cylinder with radius = "<<radius<<" and height = "<<height<<" is "<<volume;
}