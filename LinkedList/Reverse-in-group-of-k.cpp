#include <iostream> // Bhai isme use hua hai RECURSION
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

Node *reverse(Node *&head, int k)
{                      // jab second element real head ke saath
                       // reverse hua to vo head nahi bana
    Node *next = NULL; // aur second element print nahi hua
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;

    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
    {
        head->next = reverse(next, k);
    }
    return prev;
}

int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    // // int cnt = 0;
    // // int x = 1;
    // // while (cnt <= 10) {
    // //   append(tail, x);
    // //   cnt++;
    // //   x++;
    // }

    append(tail, 20);
    append(tail, 30);
    append(tail, 40);
    append(tail, 50);
    append(tail, 60);
    append(tail, 80);
    append(tail, 90);
    reverse(head, 2);
    print(head);
    return 0;
}