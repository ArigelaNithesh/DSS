#include<iostream>
using namespace std;
class student{
public:
int a,b,c;
void display(){
cout<<"enter the value of a,b :"<<endl;
cin>>a>>b;
c=a+b;
cout<<c;
 

}
 
};
int main(){
 student s1;
 s1.display();

return 0;
}