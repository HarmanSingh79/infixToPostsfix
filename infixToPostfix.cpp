#include<iostream>
#include<stack>
#include<string>
using namespace std;

int precedance(char c){
    if(c=='^'){
        return 3;
    }else if(c=='*'||c=='/'){
        return 2;
    }else if(c=='+'||c=='-'){
        return 1;
    }
    return 0;
}

string infixToPostfix(string infix){
    string ans;
    stack<char>s;
    infix.push_back(')');
    s.push('(');
    for(int i=0;i<infix.length();i++){
        char c=infix[i];
            if((c>='a' && c<='z')||(c>='A' && c<='Z')||(c>='0'&&c<='9')){
                ans.push_back(c);
            }else if(c=='('){
                s.push(c);
            }else if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^'){
                while(precedance(s.top())>=precedance(c)){
                    ans.push_back(s.top());
                    s.pop();
                }
                s.push(c);
            }else if(c==')'){
                while(s.top()!='('){
                    char op=s.top();
                        ans.push_back(op);
                        s.pop();
                }
                s.pop();
            }
    }
    return ans;
}
int main(){
    string infix="((((4-2)^3)*3)+(8-2))/5";
    cout<<"Answer is:"<<infixToPostfix(infix)<<endl;
    return 0;
}
