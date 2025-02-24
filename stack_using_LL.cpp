#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void push(Node*& top, int value)  
{
    Node* temp = new Node;   
    temp->data = value;      
    temp->next = top;      
    top = temp;              
}


void display(Node* top)
{
    while (top != nullptr)
    {
        cout << top->data << " ";
        top = top->next;
    }
    cout << endl;
}



void peek(Node* top)
{
    if (top == nullptr)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Top element: " << top->data << endl;
    }
}

void pop(Node*& top)
{
    if (top == nullptr)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        Node* temp = top; 
        top = top->next;  
        cout << "Popped element: " << temp->data << endl;
        delete temp;      
    }
}







int main()
{
    Node* top = nullptr; 

    
    push(top, 10);
    push(top, 20);
    push(top, 30);

    
    cout << "Stack elements: ";
    display(top);
    peek(top);
    pop(top);

    return 0;
}