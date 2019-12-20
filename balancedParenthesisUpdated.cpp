#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
bool isBalancedParenthesis(string expr)
{
	stack<char>s;
	for(int i=0;i<expr.length();i++)
	{
		char ch = expr[i];
		if(ch=='(' or ch=='[' or ch=='{'){
			s.push(ch);
		}
		else if(ch==')'){
			if(!s.empty() and s.top()=='('){
				s.pop();
				continue;
			}

			else{
				return false;
			}

		}
		else if(ch==']'){
			if(!s.empty() and s.top()=='['){
				s.pop();
				continue;
			}
			else{
				return false;
			}

		}
		else if(ch=='}'){
				if(!s.empty() and s.top()=='{'){
					s.pop();
					continue;
				}
				else{
					return false;
				}
			}
	}
	if(s.empty()){
		return true;
	}
	return false;
	if(s.size()==0)
		return true;
	else
		return false;
}
int main()
{
	string s;
	getline(cin,s);
	if(isBalancedParenthesis(s))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}
