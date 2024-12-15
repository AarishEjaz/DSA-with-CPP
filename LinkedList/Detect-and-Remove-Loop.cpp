#include <iostream>
#include <map>
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
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
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

bool detectloop(Node *head)
{ // using map
    if (head->next == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "cycle is present on " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node *
floyd(Node *head)
{ // you can also use 'Node*' instead of "bool" data type
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && slow != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}

Node *startingnode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *intersection = floyd(head);
    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
void removeloop(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    // Node *startingofloop = startingnode(head);
    Node *temp = startingnode(head);
    while (temp->next != startingnode(head))
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{

    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    append(tail, 20);
    append(tail, 30);
    append(tail, 40);
    insertatposition(tail, head, 4, 94);
    tail->next = head->next;
    if (detectloop(head) == true)
    {
        removeloop(head);
    }

    // append(tail, 40);
    // append(tail, 50);
    // append(tail, 60);
    // append(tail,20);
    // append(tail, 21);
    // insertathead(head,69);
    // insertatposition(tail, head, 1, 15); //unoptimized function
    // insertatposition(tail, head, 8, 69);

    print(head);
    // if (floyd(head) == true) {
    //   cout << "cycle is present";
    // } else {
    //   cout << "cycle is not present ";
    // }
    // cout << "---------------------" << endl;
    // cout << tail->data << "->";

    return 0; // 10 20 30 94
}