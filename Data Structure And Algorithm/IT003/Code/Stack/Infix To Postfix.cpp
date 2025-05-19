
#include <iostream>
using namespace std;
#define MAXN 100

struct NODE
{
    int info;
    NODE *pNext;
};
typedef NODE *stack;

void init(stack &s)
{
    s = NULL;
}
NODE *CreateNode(int x)
{
    NODE *curr = new NODE;
    curr->info = x;
    curr->pNext = NULL;
    return curr;
}
void push(stack &s, int x)
{
    NODE *p = CreateNode(x);
    if (s == NULL)
    {
        s = p;
    }
    else
    {
        p->pNext = s;
        s = p;
    }
}
int top(stack s)
{
    return s->info;
}
void pop(stack &s)
{
    NODE *p = s;
    s = s->pNext;
    delete p;
}
bool isEmpty(stack s)
{
    return s == NULL;
}
void Input_infix(char infix[], int &ni)
{
    char x;
    ni = 0;
    cin >> x;
    while (x != '#')
    {
        infix[ni++] = x;
        cin >> x;
    }
}
int DoUuTien(char x)
{
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/' || x == '%')
        return 2;
    if (x == '^')
        return 3;
    return -1;
}
bool isOperator(char x)
{
    if (x == '*' || x == '/' || x == '+' || x == '-' || x == '^')
        return true;
    return false;
}
void infix_to_postfix(char infix[], int &ni, char postfix[], int &np)
{
    stack s;
    init(s);
    char token;
    np = 0;
    for (int i = 0; i < ni; i++)
    {
        token = infix[i];
        if (token == '(')
            push(s, token);
        else if (token == ')')
        {
            while (!isEmpty(s) && top(s) != '(')
            {
                postfix[np++] = top(s);
                pop(s);
            }
            pop(s);
        }
        else if (isOperator(token))
        {
            while (!isEmpty(s) && isOperator(top(s)))
            {
                if (DoUuTien(top(s)) >= DoUuTien(token))
                {
                    postfix[np++] = top(s);
                    pop(s);
                }
                else
                    break;
            }
            push(s, token);
        }
        else
            postfix[np++] = token;
    }
    while (!isEmpty(s))
    {
        postfix[np++] = top(s);
        pop(s);
    }
}
void Output(char postfix[], int np)
{
    for (int i = 0; i < np; i++)
    {
        cout << postfix[i] << " ";
    }
}

int main()
{
    char infix[MAXN], postfix[MAXN];
    int ni, np;

    Input_infix(infix, ni);

    infix_to_postfix(infix, ni, postfix, np);

    Output(postfix, np);

    return 0;
}
