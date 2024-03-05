#pragma once
using namespace std;

// Linked List Node
struct node {
    int info;
    struct node* link;
    node()
    {
        info = 0;
        link = NULL;
    }
};

class CList
{

    node* head;
    int m_count = 0;
    node* lastCreatedNode = NULL, * newNode = NULL, * CurrenPos = NULL;

public:
    CList()
    {
        head = (node*)malloc(sizeof(struct node));
    }
    void insertNext(int data);
    int count() { return m_count; }
    node* next();
    void reset() {
        CurrenPos = head;
    }
    void removeAll();

};

void CList::insertNext(int data)
{
    m_count++;
    newNode = (node*)malloc(sizeof(struct node));
    newNode->link = NULL;
    if (!lastCreatedNode)
        head->link = newNode;
    else
        lastCreatedNode->link = newNode;

    newNode->info = data;
    lastCreatedNode = newNode;
}

node * CList::next()
{
    node* tempNode = NULL;
    tempNode = CurrenPos->link;
    CurrenPos = tempNode;
    return tempNode;
}

void CList::removeAll()
{
    node* tempNode = NULL;
    reset();
    while ((tempNode = next()) != NULL)
    {
        head->link = tempNode->link;
        free(tempNode);
    }
}