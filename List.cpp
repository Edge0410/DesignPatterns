#include <bits/stdc++.h>
#include "List.h"

using namespace std;

template <class T>
Node<T>::Node(T obj)
{
    object = obj;
    next = 0;
}

template <class T>
List<T>::List()
{
    first = 0;
    last = 0;
}

template <class T>
void List<T>::append(T obj)
{
    Node<T> *element = new Node<T>(obj);
    if (first == 0)
    {
        first = element;
        iterator = first;
    }
    if (last)
        last->next = element;
    last = element;
    size++;
}

template <class T>
int List<T>::getSize()
{
    return size;
}

template <class T>
void List<T>::clear()
{
    Node<T> *element = first;
    while (element != NULL)
    {
        Node<T> *temp = element->next;
        delete element;
        element = temp;
    }
    iterator = 0;
    first = 0;
    last = 0;
    size = 0;
}

template <class T>
void List<T>::refreshIterator()
{
    iterator = first;
}