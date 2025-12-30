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
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
bool checkif(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void insertNode(Node *&tail, int element, int data)
{
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

void deletenode(Node *&tail, int element, int del)
{
    Node *curr = tail;
    // curr = tail;
    if (tail->data == del)
    {
        tail = tail->next;
        tail = NULL;
    }
    else
    {
        do
        {
            curr = tail->next;

        } while (tail->next->data != del);
        curr->next = curr->next->next;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
}

int main()
{
    Node *tail = NULL;
    insertNode(tail, 3, 2);
    insertNode(tail, 2, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 7, 9);
    insertNode(tail, 9, 1);
    print(tail);
    cout << endl;
    // deletenode(tail, 5, 2);
    print(tail);
    cout << endl;

    if (checkif(tail))
    {
        cout << "circular in nature";
    }
    else
    {
        cout << "not circular in nature ";
    }
    return 0;
}