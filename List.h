#ifndef LIST_H
#define LIST_H

#include <bits/stdc++.h>

template <class T>
class Node
{
public:
    T object;
    Node * next;
    Node(T);
};

template <class T>
class List
{
public:
    int getSize();
    void append(T);
    void clear();
    void refreshIterator();
    List();
    Node<T> * iterator = NULL;
private:
    int size = 0;
    Node<T> * first; 
    Node<T> * last;
};




#endif