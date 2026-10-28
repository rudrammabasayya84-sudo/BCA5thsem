#include<iostream>

void swap(int &a,int&b);
int& getLarger(int&x,int&y);

int main(){
      int num1=10,num2=20;
      cout <<"Before swap:"<<endl;
      cout <<"num1=" <<num1 <<",num2=" <<num2 <<endl;
      swap(num1,num2);
      cout <<"\nAftr swap(using call by reference):"<<endl;
      cout <<"num1="<<num1  <<",num2="<<num2 <<endl;
      cout <<"\nUsing return by reference to modify the larger value."<<endl;
      getLarger(num1,num2)=100;
      cout <<"num1="<<num1 <<",num2="<<num2 <<endl;
      return 0;
}
void swap(int&a,int&b){
  int temp=a;
  a=b;
  b=temp;
}
int& getLarger(int &x,int&y){
    return (x>y)?x:y;
}
