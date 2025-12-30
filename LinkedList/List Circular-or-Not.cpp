#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertNode(Node *&tail, int element, int data)
{ // element is jiske aage insert karna hai

    // this follows in the case of empty list
    if (tail == NULL)
    {
        Node *newnode = new Node(data);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

// void print(Node *&tail) {
//   Node *temp = tail;
//   do {
//     cout << tail->data << " ";
//     tail = tail->next;
//   } while (tail != temp);
// }

void print(Node *&tail)
{
    Node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void check(Node *&t)
{
    Node *temp = t->next;
    while (temp->next != t)
    {
        temp = temp->next;
        if (temp->next == t)
        {
            cout << "circular hai";
        }
    }
}

int main()
{
    Node *tail = NULL;
    insertNode(tail, 1, 1);
    insertNode(tail, 1, 2);
    insertNode(tail, 2, 3);
    insertNode(tail, 3, 4);
    // check(tail);
    print(tail);
    return 0;
}