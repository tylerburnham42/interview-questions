// Garbage Solution	
// CPP program to check for balanced brackets.
#include <bits/stdc++.h>
using namespace std;
 
bool areBracketsBalanced(string expr)
{ 
    stack<char> s;
 
    for (int i = 0; i < expr.length() - 1; i++)
    {
	if (expr[i] == '(')
	{
		s.push(expr[i]);
	}
	else if (expr[i] == '[') {
		s.push(expr[i]);
	}
	else if (expr[i] == '{')
	{
		s.push(expr[i]);
	}
 
	if(expr[i] = ')') 
	{
	  char x = s.top();
	  s.pop();
	  if (x == '{' || x == '[')
	      return false;
	}
	else if(expr[i] = '}') 
	{
	  char x = s.top();
	  s.pop();
	  if (x == '(' || x == '[')
	      return false;
	}
	else if(expr[i] = ']')
	{
	  char x = s.top();
	  s.pop();
	  if (x == '(' || x == '{')
	      return false;
	}
    }
 
    return (s.empty());
}
 
int main()
{
    string expr = "{()}[]";
 
    if (areBracketsBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
