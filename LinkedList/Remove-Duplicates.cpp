#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        delete next;
        this->next = NULL;
    }
};
void insertathead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertattail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertatposition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *nodetoin = new Node(d);
    nodetoin->next = temp->next;
    temp->next = nodetoin;

    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }
}

void append(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
    temp->next = NULL;
}

void deletenode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

Node *rd(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node *nextkanext = curr->next->next;
            curr->next = nextkanext;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    append(tail, 20);
    append(tail, 30);
    append(tail, 40);
    append(tail, 40);
    append(tail, 50);
    append(tail, 60);
    rd(head);
    print(head);

    return 0;
}