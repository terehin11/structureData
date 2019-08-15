//
//  BSTreed.h
//  BinarySearchTreed
//
//  Created by Сергей Терехин on 15/08/2019.
//  Copyright © 2019 Сергей Терехин. All rights reserved.
//

#ifndef BSTreed_hpp
#define BSTreed_hpp
#include <iostream>
using namespace std;
//Структура звеньев.
//int x - то что записываем в дерево
// *l,*r - указатели на левое и правое поддерево
struct Node
{
    int x;
    Node *l, *r;
};
class BinarySearchTreed
{
public:
    BinarySearchTreed();
    ~BinarySearchTreed();
    //Указатель на дерево
    Node *treed;
    //Рекурсивная функиця обхода по дереву. Выводит корень дерева на экран.
    void Show(Node *&tr);
    //Добавление звена
    void Add_Node(int x, Node *&tr);
    //Проверка пустое ли дерево
    void Empty_treed(Node *&tr);
};

BinarySearchTreed::BinarySearchTreed()
{
    treed = NULL;
}

BinarySearchTreed::~BinarySearchTreed()
{
    delete treed;
}
void BinarySearchTreed::Empty_treed(Node *&tr)
{
    if(tr == NULL) cout << "Treed is empty!" << endl;
    else cout << "All good :)" << endl;
}
void BinarySearchTreed::Show(Node *& tr)
{
    if(tr != NULL)
    {
        Show(tr->l);
        cout << tr->x << endl;
        Show(tr->r);
    }

}
void BinarySearchTreed::Add_Node(int x, Node *&tr)
{
    if(NULL == tr)//если дерево пустое, то добавляем корень
    {
        tr = new Node;
        tr->x = x;
        tr->l = NULL;
        tr->r = NULL;
    }
    if( x < tr->x)
    {
        if(tr->l != 0) Add_Node(x, tr->l);
        else
        {
            tr->l = new Node;
            tr->l->l = NULL;
            tr->l->r = NULL;
            tr->l->x = x;
        }
    }
    if(x > tr->x)
    {
        if(tr->x != 0) Add_Node(x, tr->r);
        else
        {
            tr->r = new Node;
            tr->r->l = NULL;
            tr->r->r = NULL;
            tr->l->x = x;
        }
    }
}
#endif /* BSTreed_hpp */
