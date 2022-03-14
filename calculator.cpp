#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two no."<<endl;
    cin>>a>>b;
    char op;
    cout<<"enter a operator:"<<endl;
    cin>>op;
    switch (op)
    {
    
    case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
    
    default:
    cout<<"enter another operator"<<endl;
        break;
    } 
    return 0;
}