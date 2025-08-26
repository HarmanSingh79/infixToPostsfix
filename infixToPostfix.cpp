#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<math.h>
using namespace std;

int evaluation(vector<string>&expression){
    stack<int>s;
    for(int i=0;i<expression.size();i++){
        if(expression[i]=="+"||expression[i]=="-"||expression[i]=="*"||expression[i]=="/"||expression[i]=="^"){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            int c;
            if(expression[i]=="+"){
                s.push(a+b);
            }else if(expression[i]=="-"){
                s.push(b-a);
            }else if(expression[i]=="*"){
                s.push(b*a);
            }else if(expression[i]=="^"){
                s.push(pow(b,a));
            }else{
                s.push(b/a);
            }
        }else{
            s.push(stoi(expression[i])); 
        }
        
    }
    return s.top();
}


int main(){
    vector<string>expression={"4","2","-","3","^","3","*","8","2","-","+","5","/"};
    cout<<"Answer for given postfix expression is:"<<evaluation(expression)<<endl;
    return 0;
}
