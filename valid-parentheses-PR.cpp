// Garbage Solution
// CPP program to check for balanced brackets.
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <iostream>
#include <malloc.h>
using namespace std;

bool Are_Brackets_Balanced(string expr)
{
    stack<char> s;

    int n = expr.length();
    char *char_array;
    char_array = &expr[0];
    cout << char_array << endl;

    int i = 0;
loopBegin:
    char x = i[char_array];
    cout << x << endl;

    int OpenParentheses = 40;
    int _squareBracket = 91;
    int Curly_Brace = 123;

    if (x == OpenParentheses)
    {
        // push expr[i] on to the stack
        s.push(expr[i]);
    }
    else if (x == _squareBracket) {
            s.push(expr[i]);
    }
    else if (x == Curly_Brace)
{
        cout << "HERE" << endl;
        s.push(expr[i]);
    }

    if(x == OpenParentheses + 1)
    {
        // pop the stack and compare equality
        char x = s.top();
        s.pop();
        if (x == Curly_Brace || x == _squareBracket) {
            cout << "BAD" << endl;
            return false;
        }
    }
    else if(x == Curly_Brace + 2)
    {
        // pop the stack and compare equality
        char x = s.top();
        s.pop();
        if (x == OpenParentheses || x == _squareBracket)
            return false;
    }
    else if(x == _squareBracket + 2)
    {
        // pop the stack and compare equality
        char x = s.top();
        s.pop();
        if (x == OpenParentheses || x == Curly_Brace)
            return false;
    }
    i++;
    if (i < n) {
        goto loopBegin;
    }

    return (s.empty());
}

int main()
{
    string expr = "{()}[]";

    if (Are_Brackets_Balanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
