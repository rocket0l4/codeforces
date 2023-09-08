#include <iostream>

using namespace std;

int main()
{
    struct node
    {
        int data;
        node * next;
    };

    node * head;
    node * n;
    node * temp;
    node * q;
    int number;

    cout << "Enter numbers";
    cin >> number;
        n = new node;
        n->data = number; 
        head = n;
        temp = n; 
    while (cin >> number)
    {
        if (number != -500)
        {
            n = new node;
            n->data = number;
            temp->next = n;
            temp = n;

        }
    }


    while (head != NULL)
    {
        cout << head->data;
        head = head->next; 

    }
}