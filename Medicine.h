#ifndef MEDICINE_H
#define MEDICINE_H

#include<bits/stdc++.h>

class Medicine{
public:
    virtual void generateId() = 0;
    virtual void setExpDate() = 0;
    virtual void setName() = 0;
    virtual void setType() = 0;
    void showDetails(std::ostream&);
protected:
    std::string name;
    std::string expDate;
    std::string type;
    int idNumber; 
    int quantity = 1;
};

std::ostream& operator <<(std::ostream&, Medicine&);

class Paracetamol : public Medicine{
public:
    void generateId();
    void setExpDate();
    void setName();
    void setType();
    Paracetamol(int); // putem avea mai multe fiole de paracetamol, trebuie sa stim cat punem intr-o cutie
};

class Diclofenac : public Medicine{
public:
    void generateId();
    void setExpDate();
    void setName();
    void setType();
    // diclofenacul se produce la tub, deci cate o bucata per cutie
};

class Clexane : public Medicine{
public:
    void generateId();
    void setExpDate();
    void setName();
    void setType();
    Clexane(int); 
    // putem avea mai multe seringi intr-o cutie, trebuie sa stim cate
};

#endif

