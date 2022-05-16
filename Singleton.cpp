#include <bits/stdc++.h>
#include <random>
#include "Singleton.h"

using namespace std;

string Singleton::getData()
{
    return data;
}

void Singleton::changeData(string x)
{
    data = x;
}

Singleton::Singleton()
{
    data = "Forta Steaua!";
}

Singleton * Singleton::getInstance()
{
    if(instance == NULL)
    {
        instance = new Singleton;
    }
    return instance;
}