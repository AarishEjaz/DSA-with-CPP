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

void append(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
    temp->next = NULL;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int middle(Node *&head, Node *&tail)
{
    Node *fast = head->next;
    Node *slow = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow->data;
}

int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    append(tail, 20);
    append(tail, 30);
    append(tail, 40);
    append(tail, 50);
    append(tail, 60);
    append(tail, 70);
    append(tail, 69);
    append(tail, 96);
    int x = middle(head, tail);
    cout << "middle is " << x << endl;
    print(head);

    return 0;
}