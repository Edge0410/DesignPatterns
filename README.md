# Proiect 3 - POO Laborator

Proiectul este compus din 3 parti individuale:

1. Template de lista simplu inlantuita
2. Fabrica de medicamente - Factory design pattern
3. Singleton design pattern

### Pentru a rula programul, rulati urmatoarele comenzi in terminal:

```
g++ main.cpp -o main
.\main
```

## Template de lista simplu inlantuita

Acest template este implementarea pentru orice tip de date a listei simplu inlantuite clasica.
In practica, a fost folosita in fluxul de testare pentru a retine medicamentele produse de fabrica.

![image](https://user-images.githubusercontent.com/64250100/168533617-5ea84ebb-2570-4e5c-9013-e69f3d9aa9c6.png)

Are cateva functii specifice implementate - clear (goleste lista), getSize (returneaza lungimea), append(introduce un element), precum si un iterator propriu.

## Fabrica de medicamente - Factory design pattern

Acest design pattern are rolul de a simula ideea de fabrica prin care utilizatorul sa nu poata interactiona direct cu obiectele create, implementand oarecum ideea de constructor virtual. 
Utilizatorul poate apela astfel fabrica pentru a produce obiece noi

![image](https://user-images.githubusercontent.com/64250100/168534739-3e5bd96a-3219-49a4-9d60-1bb7b3a1dceb.png)

Parametrul functiei create medicine corespunde tipului de medicament pe care dorim sa il producem - 1 pentru paracetamol, 2 pentru diclofenac si 3 pentru clexane

### Singleton design pattern

Acest design pattern are rolul de a instantia unic obiectele, implementand ideea de constructor privat in constructia obiectului, care va fi unic.

In exemplul din fluxul de testare, 2 instante diferite fac referire la acelasi obiect, deci toate vor pointa catre acelasi lucru:

![image](https://user-images.githubusercontent.com/64250100/168535255-d86935c5-14d0-4695-bfd2-b41d6b722476.png)




