#include <bits/stdc++.h>
#include <random>
#include "Medicine.h"

using namespace std;

void Medicine::showDetails(ostream &stream)
{
    stream<<"Serie lot: "<<idNumber<<'\n';
    stream<<"Nume medicament: "<<name<<'\n';
    stream<<"Data de expirare: "<<expDate<<'\n';
    stream<<"Continut: "<<quantity<<" x "<<type<<'\n';
}

std::ostream& operator <<(std::ostream& stream, Medicine& obj)
{
    obj.showDetails(stream);
    return stream;
}

Paracetamol::Paracetamol(int q)
{
    this->quantity = q;
}

void Paracetamol::generateId()
{
    unsigned seedParacetamol = std::chrono::system_clock::now().time_since_epoch().count();
    default_random_engine gen(seedParacetamol); // gen(time(NULL));
    uniform_int_distribution<long long> dist(100000, 999999);

    // distr(generator) are randomul
    idNumber = dist(gen);
}

void Paracetamol::setExpDate()
{
    expDate = "08/2026";
}

void Paracetamol::setName()
{
    name = "Paracetamol 500mg Forte";
}

void Paracetamol::setType()
{
    type = "Pastila";
}

void Diclofenac::generateId()
{
    unsigned seedDiclofenac = std::chrono::system_clock::now().time_since_epoch().count();
    default_random_engine gen(seedDiclofenac); // gen(time(NULL));
    uniform_int_distribution<long long> dist(10000000, 99999999);

    // distr(generator) are randomul
    idNumber = dist(gen);
}

void Diclofenac::setExpDate()
{
    expDate = "12/2023";
}

void Diclofenac::setName()
{
    name = "Diclofenac Gel 50mg";
}

void Diclofenac::setType()
{
    type = "Unguent";
}

Clexane::Clexane(int q)
{
    this->quantity = q;
}

void Clexane::generateId()
{
    unsigned seedClexane = std::chrono::system_clock::now().time_since_epoch().count();
    default_random_engine gen(seedClexane); // gen(time(NULL));
    uniform_int_distribution<long long> dist(100000, 999999);

    // distr(generator) are randomul
    idNumber = dist(gen);
}

void Clexane::setExpDate()
{
    expDate = "12/2025";
}

void Clexane::setName()
{
    name = "Clexane 6000 UI 0.6 ml";
}

void Clexane::setType()
{
    type = "Injectabil";
}