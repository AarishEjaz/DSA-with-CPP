#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next = NULL;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insert(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
    tail->next = NULL;
}

int length(Node *&head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

int middle(int len, Node *&head)
{
    Node *temp = head;
    int mid = (len / 2) + 1;
    int count = 1;
    while (count != mid)
    {
        count++;
        temp = temp->next;
    }
    return (temp->data);
}

int main()
{
    Node *first = new Node(69);
    Node *head = first;
    Node *tail = first;
    insert(tail, 1);
    insert(tail, 2);
    insert(tail, 3);
    insert(tail, 4);
    insert(tail, 5);

    int len = length(head);
    int element = middle(len, head);
    cout << len << endl;
    cout << element;
    return 0;
}