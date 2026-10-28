#include<iostream>
inline int square(int x){
    return x*x;
}
int main(){
    int number;
    cout<<"Enter a number to find its square:";
    cin>.number;
    int result=square(number);
    cout<<"Square of"<<number<<"is."<<result<<endl;
    return 0;
}
