#ifndef SINGLETON_H
#define SINGLETON_H

#include <bits/stdc++.h>

class Singleton
{
public:
    static Singleton * getInstance ();
    string getData();
    void changeData(string);
private:
    Singleton();
    static Singleton * instance;
    std::string data;
};



#endif