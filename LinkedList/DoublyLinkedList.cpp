#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void inserthead(int d, Node *&head)
{
    Node *temp = new Node(d);
    head->prev = temp;
    temp->next = head;
    head = temp;
}
void inserttail(int d, Node *&tail)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertposition(int d, int position, Node *&head, Node *&tail)
{
    if (position == 1)
    {
        inserthead(d, head);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *nodetoinsert = new Node(d);
    nodetoinsert->prev = temp;
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
    temp->next->prev = nodetoinsert;

    if (temp->next == NULL)
    {
        inserttail(d, tail);
        return;
    }
}
void deletenode(int position, Node *&head, Node *tail)
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
    curr->prev = NULL;
    prev->next = curr->next; // list won't be linked doubly
    curr->next = NULL;
    delete curr;
} // deletion code is incomplete

void print(Node *head)
{ // Node* &head
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *node1 = new Node(69);
    Node *head = node1;
    Node *tail = node1;
    inserthead(96, head);
    inserthead(9, head);
    inserthead(6, head);
    inserttail(4, tail);
    inserttail(9, tail);
    print(head);
    cout << endl;
    insertposition(3, 6, head, tail);
    print(head);
    cout << endl;
    insertposition(87, 1, head, tail);
    print(head);
    cout << endl;
    insertposition(95, 8, head, tail);
    print(head);
    cout << endl;
    cout << "hello" << endl;
    deletenode(3, head, tail);
    print(head);

    return 0;
}