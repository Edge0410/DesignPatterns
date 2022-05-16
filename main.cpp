#include <bits/stdc++.h>
#include "Factory.cpp"
#include "Singleton.cpp"
#include "List.cpp"

// Proiectul consta intr-un template pentru lista simplu inlantuita
// si 2 design patterns : Factory design & Singleton design

using namespace std;

Singleton * Singleton::instance = NULL; // instantiem singleton cu null

int main()
{
    Medicine * test = Factory::createMedicine(1); //fabricam 3 medicamente
    Medicine * test2 = Factory::createMedicine(2); //parametrii sunt dupa cum urmeaza:
    Medicine * test3 = Factory::createMedicine(3); // 1 - paracetamol, 2 - diclofenac, 3 - clexane
    List<Medicine*> l; //creez o lista tip template cu medicamente
    l.append(test); // adaug medicamentele in lista
    l.append(test2);
    l.append(test3);
    cout<<'\n'<<"Fabrica a produs un numar de "<<l.getSize()<<" medicamente"<<'\n';
    l.refreshIterator(); // imi setez iteratorul in capul listei
    while(l.iterator != 0)
    {
        cout<<*(l.iterator->object)<<'\n'; //afisez toate medicamentele pe rand
        l.iterator = l.iterator->next;
    }
    l.clear();
    // singleton il testez separat pentru ca nu am gasit o idee de imbinare cu fabrica

    Singleton * sgt = sgt->getInstance(); //instantiem pentru prima data clasa
    cout << sgt->getData()<<'\n'; // afisam continutul obiectului
    Singleton * impostor = impostor->getInstance(); //instantiem iar dar se obtine aceeasi instanta
    impostor->changeData("Forta Otelul!"); 
    cout << sgt->getData()<<'\n'; // a fost schimbat unicul obiect
    return 0;
}