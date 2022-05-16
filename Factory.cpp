#include <bits/stdc++.h>
#include "Medicine.cpp"

using namespace std;

class Factory{ //creez o clasa pentru functia statica ca sa o pot apela outside file scope
public:
    static Medicine * createMedicine (int type)
    {
        Medicine * object;
        if(type < 0 && type > 3)
            return NULL;
        else
        {
            if(type == 1) //fabricam o cutie de paracetamol
            {
                int quantity;
                cout<<"Introduceti numarul de pastile de paracetamol per cutie: "<<'\n';
                cin>>quantity;
                object = new Paracetamol(quantity);
            }
            if(type == 2)
            {
                object = new Diclofenac;
            }
            if(type == 3) //fabricam o cutie de clexane - clexane sunt niste injectii de le faci in burta cand iti fracturezi ceva sa nu ti se coaguleze sangele :))
            {
                int quantity;
                cout<<"Introduceti numarul de seringi de clexane per cutie: "<<'\n';
                cin>>quantity;
                object = new Clexane(quantity);
            }
            object->generateId();
            object->setExpDate();
            object->setName();
            object->setType();
        }
        return object;
    }
}; 