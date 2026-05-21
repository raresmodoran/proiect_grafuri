#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;


const int NRMAX = 101;

#include <bits/stdc++.h>

constexpr int NMAX = 101;

struct Node
{
    int val;
    Node* next;
};

void addEdge(Node* adj[], const int u, const int v)
{
    Node* p = new Node;
    p->val = v;
    p->next = adj[u];
    adj[u] = p;
}

void printAdjecencyList(Node* adj[], const int n)
{
    for (int i = 1; i <= n; i++)
    {
        std::cout << i << ": ";
        for (Node* j = adj[i]; j != NULL; j = j->next)
            std::cout << j->val << " ";
        std::cout << "\n";
    }
}


void creare_lista(int v[NRMAX], int &n)
{
    int i;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>v[i];
}
void adaugare (int v[], int &n, int val)
{
    n++;
    v[n]=val;
}
void eliminare1 (int v[], int &n)
{
    int u[n],i;
    for(i=0; i<n; i++)
        u[i]=v[i+1];
    for(i=1; i<n; i++)
        cout<<u[i]<<" ";
}
void afisare (int v[], int n)
{
    int i;
    for(i=1; i<=n; i++)
        cout<<v[i]<<" ";
}
void randomizare (int v[],int n)
{
    int N=100,i;
    for (int i = 1; i <=n; i++)
        v[i]=rand() % N;
}
void eliminare2 (int v[], int &n)
{
    int u[n],i;
    for(i=1; i<n; i++)
        u[i]=v[i];
    for(i=1; i<n; i++)
        cout<<u[i]<<" ";
}

void eliminare3(int v[],int p,int n )
{
    for(int i = p ; i < n - 1; i ++)
        v[i] = v[i+1];
    n --;
}

void eliminare4 (int v[],int &n, int x)
{
    for (int p = n - 1 ; p >= 0 ; p --)
        if(v[p] == x)
        {
            for(int i = p ; i < n - 1; i ++)
                v[i] = v[i+1];
            n --;
        }
}



void adaugare(int s[],int n, int vfs, int val)
{
    if(vfs<n)
    {
        vfs++;
        s[vfs]=val;
    }
    else
        cout<<"stiva plina";

}



void eliminare23 (int s[],int n, int & vfs)
{
    if (vfs>0)
        vfs--;

    else
        cout<<"stiva vida";
}


void adaugare_coada(int elem,int v[], int & bc,int n)

{
    if(bc<n)
    {
        bc++;
        v[bc]=elem;
    }

    else
        cout<<"coada plina";
}

void eliminare_coada(int v[],int n,int bc,int & vfc)
{
    if(vfc<n && vfc<=bc)
        vfc++;
    else
        cout<<"NU SE POATE ELIMINA UN ELEMENT";
}


const int nr_max=100;
void citire_graf(int & nr_muchii,int & nr, int A[nr_max][nr_max])
{
    int x,y,i;
    cout<<"Care sunt muchiile? (sa se introduca separat ambele varfuri adiacente)"<<endl;  ;
    for(i=1; i<=nr_muchii; i++)
    {
        cin>>x;
        cin>>y;
        A[x][y]=1;
        A[y][x]=1;
    }
}

std::vector<bool> vis;

void bfs(int start, int A[100][100], int n)
{
    vis.resize(n + 1, false);
    std::queue<int> q;

    q.push(start);
    vis[start] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        std::cout << u << ' ';

        for (int i = 1; i <= n; i++)
        {
            if (!vis[i] && A[u][i])
            {
                q.push(i);
                vis[i] = true;
            }
        }
    }

    std::cout << '\n';
}



void dfs(int node, int A[100][100], int n)
{
    vis[node] = true;
    std::cout << node << ' ';

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i] && A[node][i])
        {
            dfs(i, A, n);
        }
    }
}

/**
for (int i = 1; i <= n; i++)
    if (!vis[i])
    {
        dfs(i, A, n);
        cc++;
    }

if (cc == 1)
    std::cout << "Este un graf neorientat conex!";
**/


void ham(int A[100][100], float n)
{
    int i,j,cnt=0;
    float s;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=n;j++)
            s+=A[i][j];
        if(s>=n/2)
            cnt++;
    }

    if(cnt==n)
        cout<<"Graful este hamiltonian, conform teoremei"<<endl;
    else
        cout<<"Graful nu este hamiltonian, conform teoremei"<<endl;

}

void eur(int A[100][100], float n)
{
    int i,j,cnt=0;
    int s;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=n;j++)
            s+=A[i][j];
        if(s%2==0)
            cnt++;
    }

    if(cnt==n)
        cout<<"Graful este eulerian, conform teoriei"<<endl;
    else
        cout<<"Graful nu este eulerian, conform teoriei"<<endl;

}










void ecran1(int imputare)

{
    imputare=getch();
    if (imputare==13)
    {
        system ("CLS");
        std::cout << R"(
                                        ___  ___ _____ _   _ _____ _   _
                                        |  \/  ||  ___| \ | |_   _| | | |
                                        | .  . || |__ |  \| | | | | | | |
                                        | |\/| ||  __|| . ` | | | | | | |
                                        | |  | || |___| |\  |_| |_| |_| |
                                        \_|  |_/\____/\_| \_/\___/ \___/


)" << '\n';
std::cout << R"(
                                                    1. Definitii

                                                2. Gradul unui varf

                                              3. Metode de reprezentare

                                                    4. Parcurgere

                                                    5. Conexitate

                                                 6. Graf hamiltonian

                                                   7. Graf eulerian

                                                    8. Aplicatii

                                                      9. Test

                                                    10. Iesire


Introduceti numarul lectiei dorite
)" << '\n';
    }

}
void ecran2(int imputare2, int imputare3, int imputare4 );


void ecran3(int imputare3, int imputare4, int & ok)
{int imputare2;
    cin>>imputare3;
    while(imputare3>=9 || imputare3==0)
        cin>>imputare3;
    if(imputare3==1)
{system ("CLS");
std::cout << R"(
      ___ ___ ___   _   ___ ___   _     _   _ _  _ ___ ___   _    ___ ___ _____ ___
     / __| _ \ __| /_\ | _ \ __| /_\   | | | | \| | __|_ _| | |  |_ _/ __|_   _| __|
    | (__|   / _| / _ \|   / _| / _ \  | |_| | .` | _| | |  | |__ | |\__ \ | | | _|
     \___|_|_\___/_/ \_\_|_\___/_/ \_\  \___/|_|\_|___|___| |____|___|___/ |_| |___|


)" << '\n';
std::cout << R"(
    Listele alocate static sunt implementate prin vectori.

    Prin crearea unei liste intelegem initializarea unui vector ce va memora datele, intr-o ordine anume, pentru ca mai apoi sa fie prefucrate.

    Subprogramul creare_lista, descrsis mai jos efectueaza operatia descrisa anterior, memorand date de tip numeric.

                       void creare_lista(int v[100],n)
                          {int n,i;
                         for(i=1;i<=n;i++)
                          cin>>v[i];
                            }

Pentru testarea acestuia apasati tasta 1.
)" << '\n';
 int i,optiune1,n,v[100];
 cin>>optiune1;
 if(optiune1==1)
 {
     cout<<"Numarul valorilor dorite este  ";
     cin>>n;
     cout<<"Introduceti valori:"<<endl;
     creare_lista(v,n);
 }
 else
    for(i=1;i<=100;i++)
    v[i]=0;
}
if (imputare3==4)
{system ("CLS");
std::cout << R"(
  ___ _    ___ __  __   ___ ___ ___ __  __ _   _ _   _   _ ___   ___ _    ___ __  __ ___ _  _ _____
 | __| |  |_ _|  \/  | | _ \ _ \_ _|  \/  | | | | | | | | |_ _| | __| |  | __|  \/  | __| \| |_   _|
 | _|| |__ | || |\/| | |  _/   /| || |\/| | |_| | |_| |_| || |  | _|| |__| _|| |\/| | _|| .` | | |
 |___|____|___|_|  |_| |_| |_|_\___|_|  |_|\___/|____\___/|___| |___|____|___|_|  |_|___|_|\_| |_|


)" << '\n';
    std::cout << R"(
Prin eliminarea primului element al listei intelegem transcrierea valorilor deja existente incepand cu pozitia 1, pentru vectorul
indexat de la 0, respectiv 2, pentru vectorul indexat de la 1.

Urmatorul subprogram efecueaza tocmai aceasta operatie:

  void eliminare1 (int v[], int &n)
 {
     int u[n];
     for(i=1;i<n;i++)
        u[i]=v[i+1];
        for(i=1;i<n;i++)
            cout<<u[i]<<" ";
 }


Pentru a testa programul apasati tasta 1.
)" << '\n';
int optiune1;
int v[5],n=4,u[4];
cin>>optiune1;
if(optiune1==1)
{
    system ("CLS");
    std::cout << R"(
Se da vectorul v[]= 1 2 3 4

Dupa apelarea functiei acesta devine

)" << '\n';
v[1]=1;
v[2]=2;
v[3]=3;
v[4]=4;
eliminare1(v,n);
}


}

if(imputare3==2)
{system ("CLS");
std::cout << R"(
       _   ___   _  _   _  ___   _   ___ ___   _     _   _ _  _ _   _ ___   ___ _    ___ __  __ ___ _  _ _____
      /_\ |   \ /_\| | | |/ __| /_\ | _ \ __| /_\   | | | | \| | | | |_ _| | __| |  | __|  \/  | __| \| |_   _|
     / _ \| |) / _ \ |_| | (_ |/ _ \|   / _| / _ \  | |_| | .` | |_| || |  | _|| |__| _|| |\/| | _|| .` | | |
    /_/ \_\___/_/ \_\___/ \___/_/ \_\_|_\___/_/ \_\  \___/|_|\_|\___/|___| |___|____|___|_|  |_|___|_|\_| |_|



)" << '\n';
     std::cout << R"(
    Adaugarea unui element intr-o lista inseamna marirea dimensiunii logice n a acesteia si memorarea in ultimul element a noii valori.

    Urmatorul subprogram adauga o valoare intr-un vector indexat de la 1

    n++;
    v[n]=val;

Pentru testarea acestuia apasati tasta 1.)" << '\n';
        int optiune1,val,v[4],i,n=4;
        cin>>optiune1;
        if(optiune1==1)
        {
            std::cout << R"( Se da vectorul v cu patru elemente: v[]= 1 2 3 4

Introduceti valoarea dorita a fi adaugata:
)" << '\n';
cin>>val;
v[1]=1;
v[2]=2;
v[3]=3;
v[4]=4;
adaugare(v,n,val);
cout<<"Tabloul devine"<<endl;
cout<<endl;
for(i=1;i<=n;i++)
    cout<<v[i]<<" ";
}
}


if(imputare3==3)
{system ("CLS");
std::cout << R"(
    _   ___ ___ ___   _   ___ ___   _     ___ _    ___ __  __   _    ___ ___ _____ ___ ___
   /_\ | __|_ _/ __| /_\ | _ \ __| /_\   | __| |  | __|  \/  | | |  |_ _/ __|_   _| __|_ _|
  / _ \| _| | |\__ \/ _ \|   / _| / _ \  | _|| |__| _|| |\/| | | |__ | |\__ \ | | | _| | |
 /_/ \_\_| |___|___/_/ \_\_|_\___/_/ \_\ |___|____|___|_|  |_| |____|___|___/ |_| |___|___|




)" << '\n';
std::cout << R"(
     Aceasta se poate realiza prin intermediului urmatorului subprogram:

               void afisare (int v[], int n)
                {
                    for(i=1;i<=n;i++)
                     cout<<v[i]<<" ";
                }


Pentru testarea acestui apasati tasta 1.)" << '\n';
            int optiune1,n;
            cin>>optiune1;
            if(optiune1==1)
            {
                system ("CLS");
                cout<<"Alegeti un numar de elemente pentru vector :"<<endl;
                cin>>n;
                int v[n+1];
                randomizare (v,n);
                afisare(v,n);
            }





        }


        if(imputare3==5)
        {
            system ("CLS");
            std::cout << R"(
  ___ _    ___ __  __   _   _ _  _____ ___ __  __ _   _ _   _   _ ___   ___ _    ___ __  __ ___ _  _ _____
 | __| |  |_ _|  \/  | | | | | ||_   _|_ _|  \/  | | | | | | | | |_ _| | __| |  | __|  \/  | __| \| |_   _|
 | _|| |__ | || |\/| | | |_| | |__| |  | || |\/| | |_| | |_| |_| || |  | _|| |__| _|| |\/| | _|| .` | | |
 |___|____|___|_|  |_|  \___/|____|_| |___|_|  |_|\___/|____\___/|___| |___|____|___|_|  |_|___|_|\_| |_|


)" << '\n';
    std::cout << R"(
  Prin eliminarea ultimului element al listei intelegem transcrierea valorilor deja existente pana la pozitia n-2,
pentru vectorul indexat de la 0, respectiv n-1, pentru vectorul indexat de la 1.

Urmatorul subprogram efecueaza tocmai aceasta operatie:

  void eliminare2 (int v[], int &n)
 {
     int u[n],i;
     for(i=1;i<n;i++)
        u[i]=v[i];
        for(i=1;i<n;i++)
        cout<<u[i]<<" ";
 }


Pentru a testa programul apasati tasta 1.
)" << '\n';
int optiune1;
int v[5],n=4,u[4];
cin>>optiune1;
if(optiune1==1)
{
    system ("CLS");
    std::cout << R"(
Se da vectorul v[]= 1 2 3 4

Dupa apelarea functiei acesta devine)" << '\n';
            v[1]=1;
            v[2]=2;
            v[3]=3;
            v[4]=4;
            eliminare2(v,n);
        }
    }

    if(imputare3==6)
    {
        system ("CLS");
        std::cout << R"(
  ___ _    ___ __  __ ___ _  _   _   ___ ___   _     ___ _    ___ __  __ ___ _  _ _____ _   _ _   _   _ ___
 | __| |  |_ _|  \/  |_ _| \| | /_\ | _ \ __| /_\   | __| |  | __|  \/  | __| \| |_   _| | | | | | | | |_ _|
 | _|| |__ | || |\/| || || .` |/ _ \|   / _| / _ \  | _|| |__| _|| |\/| | _|| .` | | | | |_| | |_| |_| || |
 |___|____|___|_|__|_|___|_|\_/_/ \_\_|_\___/_/ \_\ |___|____|___|_|  |_|___|_|\_| |_|  \___/|____\___/|___|
          | _ \/ _ \_  /_ _|_   _|_ _| /_\   \ \/ /
          |  _/ (_) / / | |  | |  | | / _ \   >  <
          |_|  \___/___|___| |_| |___/_/ \_\ /_/\_\
)" << '\n';
     std::cout << R"(
    Urmatorul subprogram realizeaza operatia dorita pentru un vector dat si cunoscut:

                     void eliminare3(int v[],int p )
                    {
                      for(int i = p ; i < n - 1; i ++)
                            v[i] = v[i+1];
                                n --;
 }
  Pentru testarea acestuia apasati tasta 1.)" << '\n';
        int optiune1,i;
        int v[6],n=5,u[4];
        cin>>optiune1;
        if(optiune1==1)
        {
            system ("CLS");
            std::cout << R"(
Se da vectorul v[]= 1 2 3 4 5, indexat de la zero

Pozitia dorita a fi eliminata este :
)" << '\n';
int p;
cin>>p;
v[0]=1;
v[1]=2;
v[2]=3;
v[3]=4;
v[4]=5;
eliminare3 (v,p,n);
for(i=0;i<n-1;i++)
cout<<v[i]<<" ";
}}


 if(imputare3==7)
{
    system ("CLS");
std::cout << R"(
  ___ _    ___ __  __ ___ _  _   _   ___ ___   _     ___ _    ___ __  __ ___ _  _ _____ _   _ _   _   _ ___
 | __| |  |_ _|  \/  |_ _| \| | /_\ | _ \ __| /_\   | __| |  | __|  \/  | __| \| |_   _| | | | | | | | |_ _|
 | _|| |__ | || |\/| || || .` |/ _ \|   / _| / _ \  | _|| |__| _|| |\/| | _|| .` | | | | |_| | |_| |_| || |
 |___|____|___|_| _|_|___|_|\_/_/ \_\_|_\___/_/_\_\_|___|____|___|_|  |_|___|_|\_| |_|  \___/|____\___/|___|
             / __| | | | \ \ / /_\ | |  / _ \ /_\ | _ \ __| /_\   \ \/ /
            | (__| |_| |  \ V / _ \| |_| (_) / _ \|   / _| / _ \   >  <
             \___|\___/    \_/_/ \_\____\___/_/ \_\_|_\___/_/ \_\ /_/\_\
)" << '\n';
     std::cout << R"(
    Urmatorul subprogram realizeaza operatia dorita pentru un vector dat si cunoscut:

                    void eliminare4 (int v[],int &n, int x)
 {
     for (int p = n - 1 ; p >= 0 ; p --)
    if(v[p] == x) {
        for(int i = p ; i < n - 1; i ++)
            v[i] = v[i+1];
        n --;
    }
 }

  Pentru testarea acestuia apasati tasta 1.)" << '\n';
            int optiune1,i;
            int v[6],n=5,u[4];
            cin>>optiune1;
            if(optiune1==1)
            {
                system ("CLS");
                std::cout << R"(
Se da vectorul v[]= 1 2 32 41 2, indexat de la zero

Valoarea dorita a fi eliminata este :
)" << '\n';
int p;
cin>>p;
v[0]=1;
v[1]=2;
v[2]=32;
v[3]=41;
v[4]=2;
eliminare4 (v,n,p);
for(i=0;i<n;i++)
cout<<v[i]<<" ";
}}


if(imputare3==8)
{system ("CLS");
    std::cout << R"(
                                        ___  ___ _____ _   _ _____ _   _
                                        |  \/  ||  ___| \ | |_   _| | | |
                                        | .  . || |__ |  \| | | | | | | |
                                        | |\/| ||  __|| . ` | | | | | | |
                                        | |  | || |___| |\  |_| |_| |_| |
                                        \_|  |_/\____/\_| \_/\___/ \___/


)" << '\n';
std::cout << R"(
                                                    1. Lista

                                                    2. Stiva

                                                    3. Coada

                                                    4. Iesire


Introduceti numarul lectiei dorite
)" << '\n';
int imputare2;
ecran2(imputare2, imputare3, imputare4);
}





}



void ecran5 (int imputare6, int & imputare2)
{system ("CLS");
    if(imputare6==1)
    {std::cout << R"(

        Un varf care nu este adiacent cu niciun alt varf (gradul sau este 0) se numeste izolat.

        )" << '\n';
            }

            if (imputare6==2)

            {
                int nr,nr_muchii,s,i,j;
                cout<<"Cate varfuri se doresc a fi in graf?"<<endl;
                cin>>nr;
                while(nr==1||nr>20)
                    cin>>nr;
                cout<<"Cate muchii se doresc a fi in graf?"<<endl;
                cin>>nr_muchii;

                int A[100][100];

                citire_graf(nr_muchii,nr, A);

                int lo=0;
                for(int i=1; i<=nr; i++)
                {
                    s=0;
                    for(j=1; j<=nr; j++)
                        s=s+A[i][j];
                    if(s==0)
                    {
                        cout<<"EXISTA VARFURI IZOLATE";
                        lo=1;
                    }
                }

                if (lo==0)
                    cout<<"NU EXISTA VARFURI IZOLATE";
            }




            if (imputare6==3)
            {
                int imputare2=2, imputare3, imputare4;
                ecran2(imputare2, imputare3, imputare4);

            }

        }





        void ecran10(int imputare10, int & imputare2 )
        {
            system ("CLS");
            if(imputare10==1)
            {
                std::cout << R"(

        Un varf care este adiacent  doar cu un alt varf (gradul sau este 1) se numeste terminal.


        )" << '\n';
            }

            if (imputare10==2)

            {
                int nr,nr_muchii,s,i,j;
                cout<<"Cate varfuri se doresc a fi in graf?"<<endl;
                cin>>nr;
                while(nr==1||nr>20)
                    cin>>nr;
                cout<<"Cate muchii se doresc a fi in graf?"<<endl;
                cin>>nr_muchii;

                int A[100][100];

                citire_graf(nr_muchii,nr, A);

                int lo=0;
                for(int i=1; i<=nr; i++)
                {
                    s=0;
                    for(j=1; j<=nr; j++)
                        s=s+A[i][j];
                    if(s==1)
                    {
                        cout<<"EXISTA VARFURI TERMINALE";
                        lo=1;
                    }
                }

                if (lo==0)
                    cout<<"NU EXISTA VARFURI TERMINALE";

            }

            if (imputare10==3)
            {
                int imputare2=2, imputare3, imputare4;
                ecran2(imputare2, imputare3, imputare4);

            }


        }





























        void ecran4(int imputare5)
        {
            system ("CLS");
            if (imputare5==1)
            {
                std::cout << R"(

                    ___  ___ ___ ___ _  _ ___ _____ ___ ___
                   |   \| __| __|_ _| \| |_ _|_   _|_ _| __|
                   | |) | _|| _| | || .` || |  | |  | || _|
                   |___/|___|_| |___|_|\_|___| |_| |___|___|


)" << '\n';
        std::cout << R"(
    Gradul unui vârf x ( notat d(x) ) reprezinta numarul muchiilor incidente cu varful x.




)" << '\n';
    }

 if (imputare5==2)
 {std::cout << R"(
              __   ___   ___ ___ _   _ _      ___ _______  _      _ _____
              \ \ / /_\ | _ \ __| | | | |    |_ _|_  / _ \| |    /_\_   _|
               \ V / _ \|   / _|| |_| | |__   | | / / (_) | |__ / _ \| |
                \_/_/ \_\_|_\_|  \___/|____| |___/___\___/|____/_/ \_\_|
      )" << '\n';

                std::cout << R"(
                             1. Definitie

                             2. Aplicatie

                             3. Revenire



)" << '\n';
 int imputare6,imputare2;
cin>>imputare6;
while(imputare6==0||imputare6>=4)
    cin>>imputare6;
ecran5 (imputare6, imputare2);



 }

if (imputare5==3)
{int imputare=13, imputare2, imputare3, imputare4;
     std::cout << R"(
              __   ___   ___ ___ _   _ _      _____ ___ ___ __  __ ___ _  _   _   _
              \ \ / /_\ | _ \ __| | | | |    |_   _| __| _ \  \/  |_ _| \| | /_\ | |
               \ V / _ \|   / _|| |_| | |__    | | | _||   / |\/| || || .` |/ _ \| |__
                \_/_/ \_\_|_\_|  \___/|____|   |_| |___|_|_\_|  |_|___|_|\_/_/ \_\____|



)" << '\n';
std::cout << R"(
                                          1. Definitie

                                          2. Aplicatie

                                          3. Revenire



Introduceti numarul lectiei dorite
)" << '\n';
    int imputare10;
cin>>imputare10;
while(imputare10==0||imputare10>=4)
    cin>>imputare10;
ecran10 (imputare10, imputare2);



}

if (imputare5==4)
{system ("CLS");
 std::cout << R"(
                                        ___  ___ _____ _   _ _____ _   _
                                        |  \/  ||  ___| \ | |_   _| | | |
                                        | .  . || |__ |  \| | | | | | | |
                                        | |\/| ||  __|| . ` | | | | | | |
                                        | |  | || |___| |\  |_| |_| |_| |
                                        \_|  |_/\____/\_| \_/\___/ \___/


)" << '\n';
std::cout << R"(
                                                    1. Definitii

                                                2. Gradul unui varf

                                              3. Metode de reprezentare

                                                    4. Parcurgere

                                                    5. Conexitate

                                                 6. Graf hamiltonian

                                                   7. Graf eulerian

                                                    8. Aplicatii

                                                      9. Test

                                                    10. Iesire


Introduceti numarul lectiei dorite
)" << '\n';


int imputare2,imputare3,imputare4;

ecran2(imputare2, imputare3, imputare4);


}
}

























void ecran6 (int imputare5)
{system ("CLS");

    if (imputare5==1)
    {std::cout << R"(

                     ___ _  _   _      _ _____ ___ __  __ ___
                    |_ _| \| | | |    /_\_   _|_ _|  \/  | __|
                     | || .` | | |__ / _ \| |  | || |\/| | _|
                    |___|_|\_| |____/_/ \_\_| |___|_|  |_|___|



)" << '\n';
        std::cout << R"(
void bfs(int start, int A[100][100], int n)
{
    vis.resize(n + 1, false);
    std::queue<int> q;

    q.push(start);
    vis[start] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        std::cout << u << ' ';

        for (int i = 1; i <= n; i++)
        {
            if (!vis[i] && A[u][i])
            {
                q.push(i);
                vis[i] = true;
            }
        }
    }

    std::cout << '\n';
}





In cele ce urmeaza puteti testa algoritmul pentru un graf ales:

)" << '\n';

int nr,nr_muchii,s,i,j;
    cout<<"Cate varfuri se doresc a fi in graf?"<<endl;
    cin>>nr;
    while(nr==1||nr>20)
        cin>>nr;
    cout<<"Cate muchii se doresc a fi in graf?"<<endl;
    cin>>nr_muchii;
while(nr_muchii>=315)
        cin>>nr;
    int A[100][100];

    citire_graf(nr_muchii,nr, A);
cout<<"Numarul nodului din care va fi parcurs graful este:"<<endl;
int start;
cin>>start;
bfs(start,A,nr);

    }

 if (imputare5==2)
 {std::cout << R"(
                    ___ _  _     _   ___   _   _  _  ___ ___ __  __ ___
                   |_ _| \| |   /_\ |   \ /_\ | \| |/ __|_ _|  \/  | __|
                    | || .` |  / _ \| |) / _ \| .` | (__ | || |\/| | _|
                   |___|_|\_| /_/ \_\___/_/ \_\_|\_|\___|___|_|  |_|___|

      )" << '\n';

                std::cout << R"(
                            void dfs(int node, int A[100][100], int n)
{
    vis[node] = true;
    std::cout << node << ' ';

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i] && A[node][i])
        {
            dfs(i, A, n);
        }
    }
}

In cele ce urmeaza puteti testa programul

)" << '\n';
 int nr,nr_muchii,s,i,j;
    cout<<"Cate varfuri se doresc a fi in graf?"<<endl;
    cin>>nr;
    while(nr==1||nr>20)
        cin>>nr;
    cout<<"Cate muchii se doresc a fi in graf?"<<endl;
    cin>>nr_muchii;
while(nr_muchii>=315)
        cin>>nr;
    int A[100][100];

    citire_graf(nr_muchii,nr, A);
cout<<"Numarul nodului din care va fi parcurs graful este:"<<endl;
int start;
cin>>start;
vis.resize(nr + 1, false);
dfs(start,A,nr);



 }


 if (imputare5==3)
{system ("CLS");
 std::cout << R"(
                                        ___  ___ _____ _   _ _____ _   _
                                        |  \/  ||  ___| \ | |_   _| | | |
                                        | .  . || |__ |  \| | | | | | | |
                                        | |\/| ||  __|| . ` | | | | | | |
                                        | |  | || |___| |\  |_| |_| |_| |
                                        \_|  |_/\____/\_| \_/\___/ \___/


)" << '\n';
std::cout << R"(
                                                    1. Definitii

                                                2. Gradul unui varf

                                              3. Metode de reprezentare

                                                    4. Parcurgere

                                                    5. Conexitate

                                                 6. Graf hamiltonian

                                                   7. Graf eulerian

                                                    8. Aplicatii

                                                      9. Test

                                                    10. Iesire


Introduceti numarul lectiei dorite
)" << '\n';


int imputare2,imputare3,imputare4;

ecran2(imputare2, imputare3, imputare4);


}




}

void ecran11(int imputare11);

void ecran12(int imputare12)
{
    if(imputare12==1)
    {
        system ("CLS");
 std::cout << R"(
    Este o matrice (A) cu n linii si n coloane, ale carei elemente sunt definite astfel:
a(i, j) ={ 1,  daca i, j apartine U, cu i≠j  sau 0,  in caz contrar

    Caracteristicile unei matrice de adiacenta definita pentru un graf neorientat dat:
- este patratica
- este binara
- este simetrica fata de diagonala principala
- diagonala principala contine doar valori egale cu zero.


)" << '\n';
    }

    if(imputare12==2)
    {
        system ("CLS");
 std::cout << R"(
   Urmatorul program citeste o matrice si determina daca aceasta poate fi matrice de adiacenta pentru un graf oarecare:

         int ok = 1;
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if(i == j && a[i][j] != 0) ok = 0;
        }
    for(int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++)
        {
            if(a[i][j] < 0 || a[i][j] > 1) ok = 0;
            if(a[i][j] != a[j][i]) ok = 0;
        }
    if (ok==0)
        cout<<"NU POATE FI";
    else
        cout<<"POATE FI";


In cele ce urmeaza puteti testa programul:

)" << '\n';

    int ok = 1,n;
    int a[102][102];
    cout<<"Ordinul matricei este:"<<endl;
    cin >> n;
    cout<<"Cititi matricea:"<<endl;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if(i == j && a[i][j] != 0) ok = 0;
        }
    for(int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++)
        {
            if(a[i][j] < 0 || a[i][j] > 1) ok = 0;
            if(a[i][j] != a[j][i]) ok = 0;
        }
    if (ok==0)
        cout<<"NU POATE FI";
    else
        cout<<"POATE FI";



    }

    if (imputare12==3)
    {system ("CLS");
 std::cout << R"(

                    __  __ ___ _  _ ___ _   _
                   |  \/  | __| \| |_ _| | | |
                   | |\/| | _|| .` || || |_| |
                   |_|  |_|___|_|\_|___|\___/



)" << '\n';
std::cout << R"(
                     1. Liste de adiacente

                     2. Vectorul muchiilor

                     3.Matricea de adiacenta

                     4. Revenire

)" << '\n';
int imputare11;
cin>>imputare11;
while(imputare11>=5||imputare11<=0)
    cin>>imputare11;
ecran11(imputare11);

    }
}



























void ecran11(int imputare11)
{
    if(imputare11==1)
    {system ("CLS");
        std::cout << R"(


  O lista de adiacenta este o colectie de liste neordonate folosita pentru a reprezenta un anumit graf.
Fiecare lista descrie multimea vecinilor unui nod din graf. Aceasta este una dintre cele mai frecvent
utilizate reprezentari a grafurilor pentru utilizarea in programe de calculator.

Poate fi memorata prin apelari repetate ale functiei:


constexpr int NMAX = 101;

struct Node
{
    int val;
    Node* next;
};

void addEdge(Node* adj[], const int u, const int v)
{
    Node* p = new Node;
    p->val = v;
    p->next = adj[u];
    adj[u] = p;
}

Poate fi afisata astfel:

void printAdjecencyList(Node* adj[], const int n)
{
    for (int i = 1; i <= n; i++)
    {
        std::cout << i << ": ";
        for (Node* j = adj[i]; j != NULL; j = j->next)
            std::cout << j->val << " ";
        std::cout << "\n";
    }
}

In cele ce urmeaza puteti testa programul:)" << '\n';

 int n;
    int m;

    std::cout<<"Introduceti mai intai numarul de noduri apoi cel de muchii:"<<endl;
    std::cin >> n >> m;
    Node* adj[NMAX];

    for (int i = 1; i <= n; i++)
        adj[i] = NULL;
        std::cout<<"Muchiile sunt:"<<endl;
    while (m--)
    {
        int u, v;
        std::cin >> u >> v;
        addEdge(adj, u, v);
        addEdge(adj, v, u);
    }
    printAdjecencyList(adj, n);

    }

    if(imputare11==2)
    {system ("CLS");
        std::cout << R"(

  O muchie a grafului poate fi memorata sub forma unei inregistrari si, pentru toate muchiile unui
graf neorientat dat, avem nevoie de un vector cu astfel de elemente:


struct muchie {
     int  x, y;
              };
muchie v[30];

In cele ce urmeaza puteti testa programul:
  )" << '\n';
int nr,i,nr_muchii,a,b;
struct muchie {
     int  x, y;
              };
muchie v[30];
cout<<"Numarul de noduri este:"<<endl;
cin>>nr;
while(nr>=20)
        cin>>nr;
cout<<"Numarul de muchii dorit este:"<<endl;
cin>>nr_muchii;
while(nr_muchii>=315)
    cin>>nr_muchii;
    cout<<"Muchiile sunt:"<<endl;
for(i=1;i<=nr_muchii;i++)
{cin>>a;
cin>>b;
v[i].x=a;
v[i].y=b;

}

cout<<"Muchiile memorate sunt:"<<endl;

    for(i=1;i<=nr_muchii;i++)
{
cout<<v[i].x<<" ";
cout<<v[i].y<<endl;

}
}

if(imputare11==3)
{system ("CLS");
 std::cout << R"(

                    __  __ ___ _  _ ___ _   _
                   |  \/  | __| \| |_ _| | | |
                   | |\/| | _|| .` || || |_| |
                   |_|  |_|___|_|\_|___|\___/



)" << '\n';
std::cout << R"(
                        1. Caracteristici

                        2. Aplicatie

                        3. Revenire




)" << '\n';

int imputare12;
cin>>imputare12;
while(imputare12>=4||imputare12<=0)
    cin>>imputare12;
ecran12(imputare12);




}

if(imputare11==4)
{system ("CLS");
 std::cout << R"(
                                        ___  ___ _____ _   _ _____ _   _
                                        |  \/  ||  ___| \ | |_   _| | | |
                                        | .  . || |__ |  \| | | | | | | |
                                        | |\/| ||  __|| . ` | | | | | | |
                                        | |  | || |___| |\  |_| |_| |_| |
                                        \_|  |_/\____/\_| \_/\___/ \___/


)" << '\n';
std::cout << R"(
                                                    1. Definitii

                                                2. Gradul unui varf

                                              3. Metode de reprezentare

                                                    4. Parcurgere

                                                    5. Conexitate

                                                 6. Graf hamiltonian

                                                   7. Graf eulerian

                                                    8. Aplicatii

                                                      9. Test

                                                    10. Iesire


Introduceti numarul lectiei dorite
)" << '\n';


int imputare2,imputare3,imputare4;

ecran2(imputare2, imputare3, imputare4);

}

    }




void ecran13(int imputare13)
{
    if(imputare13==1)
    {
system ("CLS");
 std::cout << R"(
    Un graf neorientat se numeste graf conex daca pentru oricare doua varfuri x si y diferite ale sale,
exista cel putin un lant care le leaga, adica x este extremitatea initiala si y este extremitatea finala.

Un graf cu un singur nod este, prin definitie, conex.

    Se numeste componenta conexa a unui graf G=(X,U) un subgraf H=(Y, V), conex, al lui G
care are proprietatea ca nu exista nici un lant in G care sa lege un varf din Y cu un varf din X – Y.


)" << '\n';
    }
    if(imputare13==2)
    {system ("CLS");
        std::cout << R"(
   Conexitatea unui graf poate fi determinata astfel:

       for (int i = 1; i <= n; i++)
    if (!vis[i])
    {
        dfs(i, A, n);
        cc++;
    }

if (cc == 1)
std::cout << "Este un graf neorientat conex!


In cele ce urmeaza puteti testa programul:

)" << '\n';

int nr,nr_muchii,s,i,j,cc=0;
    cout<<"Cate varfuri se doresc a fi in graf?"<<endl;
    cin>>nr;
    while(nr==1||nr>20)
        cin>>nr;
    cout<<"Cate muchii se doresc a fi in graf?"<<endl;
    cin>>nr_muchii;
while(nr_muchii>=315)
        cin>>nr;
    int A[100][100];

    citire_graf(nr_muchii,nr, A);
vis.assign(nr+1,false);

 for (int i = 1; i <= nr; i++)
    if (!vis[i])
    {
        dfs(i, A, nr);
        cc++;
    }

if (cc == 1)
std::cout << "Este un graf neorientat conex!"<<endl;
else
    std::cout << "NU este un graf neorientat conex!"<<endl;
    }

    if(imputare13==3)
    {
        system ("CLS");
 std::cout << R"(
                                        ___  ___ _____ _   _ _____ _   _
                                        |  \/  ||  ___| \ | |_   _| | | |
                                        | .  . || |__ |  \| | | | | | | |
                                        | |\/| ||  __|| . ` | | | | | | |
                                        | |  | || |___| |\  |_| |_| |_| |
                                        \_|  |_/\____/\_| \_/\___/ \___/


)" << '\n';
std::cout << R"(
                                                    1. Definitii

                                                2. Gradul unui varf

                                              3. Metode de reprezentare

                                                    4. Parcurgere

                                                    5. Conexitate

                                                 6. Graf hamiltonian

                                                   7. Graf eulerian

                                                    8. Aplicatii

                                                      9. Test

                                                    10. Iesire


Introduceti numarul lectiei dorite
)" << '\n';


int imputare2,imputare3,imputare4;

ecran2(imputare2, imputare3, imputare4);

    }
}



void ecran14(int imputare14)
{
    if(imputare14==1)
    { system ("CLS");
 std::cout << R"(
Definitie: Se numeste ciclu hamiltonian intr-un graf neorientat G, un ciclu elementar care contine toate varfurile grafului.
Definitie. Se numeste graf hamiltonian, un graf care contine un ciclu hamiltonian.

Teorema:
Daca intr-un graf G = (X, U) cu n≥ 3 varfuri, gradul fiecarui varf x verifica conditia d(x) ≥ n / 2, graful este hamiltonian.

)" << '\n';

    }

    if(imputare14==2)
    {system ("CLS");
 std::cout << R"(

Urmatorul subprogram determina daca un graf este hamiltoniam sau nu, conform teoremei:

    void ham(int A[100][100], float n)
{
    int i,j,cnt=0;
    float s;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=n;j++)
            s+=A[i][j];
        if(s>=n/2)
            cnt++;
    }

    if(cnt==n)
        cout<<"Graful este hamiltonian, conform teoremei"<<endl;
    else
        cout<<"Graful nu este hamiltonian, conform teoremei"<<endl;

}

)" << '\n';
 int nr_muchii,s,i,j;
int nr;
float aux;
                cout<<"Cate varfuri se doresc a fi in graf?"<<endl;
                cin>>nr;
                while(nr==1||nr>20)
                    cin>>nr;
                    aux=nr;
                cout<<"Cate muchii se doresc a fi in graf?"<<endl;
                cin>>nr_muchii;

                int A[100][100];

                citire_graf(nr_muchii,nr, A);

                ham(A,aux);

    }

    if(imputare14==3)
    {system ("CLS");
 std::cout << R"(
                                        ___  ___ _____ _   _ _____ _   _
                                        |  \/  ||  ___| \ | |_   _| | | |
                                        | .  . || |__ |  \| | | | | | | |
                                        | |\/| ||  __|| . ` | | | | | | |
                                        | |  | || |___| |\  |_| |_| |_| |
                                        \_|  |_/\____/\_| \_/\___/ \___/


)" << '\n';
std::cout << R"(
                                                    1. Definitii

                                                2. Gradul unui varf

                                              3. Metode de reprezentare

                                                    4. Parcurgere

                                                    5. Conexitate

                                                 6. Graf hamiltonian

                                                   7. Graf eulerian

                                                    8. Aplicatii

                                                      9. Test

                                                    10. Iesire


Introduceti numarul lectiei dorite
)" << '\n';


int imputare2,imputare3,imputare4;

ecran2(imputare2, imputare3, imputare4);

    }

}


void ecran15(int imputare15)
{  if(imputare15==1)
    { system ("CLS");
 std::cout << R"(
Definitie. Se numeste  ciclu eulerian intr-un graf neorientat G, un ciclu care contine toate muchiile grafului.
Definitie. Se numeste graf eulerian, un graf care contine un ciclu eulerian.

Teorema:
Un graf neorientat G fara varfuri izolate este eulerian, daca si numai daca este conex si gradele tuturor varfurilor sunt numere pare.

)" << '\n';

    }

    if(imputare15==2)
    {system ("CLS");
 std::cout << R"(

Urmatorul subprogram determina daca un graf este eulerian sau nu, conform teoremei:

    void eur(int A[100][100], float n)
{
    int i,j,cnt=0;
    float s;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=n;j++)
            s+=A[i][j];
        if(s%2==0)
            cnt++;
    }

    if(cnt==n)
        cout<<"Graful este eulerian, conform teoriei"<<endl;
    else
        cout<<"Graful nu este eulerian, conform teoriei"<<endl;

}






)" << '\n';
 int nr_muchii,s,i,j;
int nr;
float aux;
                cout<<"Cate varfuri se doresc a fi in graf?"<<endl;
                cin>>nr;
                while(nr==1||nr>20)
                    cin>>nr;
                    aux=nr;
                cout<<"Cate muchii se doresc a fi in graf?"<<endl;
                cin>>nr_muchii;

                int A[100][100];

                citire_graf(nr_muchii,nr, A);

                eur(A,aux);


}

if(imputare15==3)
    {system ("CLS");
 std::cout << R"(
                                        ___  ___ _____ _   _ _____ _   _
                                        |  \/  ||  ___| \ | |_   _| | | |
                                        | .  . || |__ |  \| | | | | | | |
                                        | |\/| ||  __|| . ` | | | | | | |
                                        | |  | || |___| |\  |_| |_| |_| |
                                        \_|  |_/\____/\_| \_/\___/ \___/


)" << '\n';
std::cout << R"(
                                                    1. Definitii

                                                2. Gradul unui varf

                                              3. Metode de reprezentare

                                                    4. Parcurgere

                                                    5. Conexitate

                                                 6. Graf hamiltonian

                                                   7. Graf eulerian

                                                    8. Aplicatii

                                                      9. Test

                                                    10. Iesire


Introduceti numarul lectiei dorite
)" << '\n';


int imputare2,imputare3,imputare4;

ecran2(imputare2, imputare3, imputare4);

    }


}












































void ecran2(int imputare2, int imputare3, int imputare4 )
{int ok,imputare;
if (imputare2!=2)
    imputare2=0;
if (imputare2==0)
cin>>imputare2;
 while (imputare2>=11 || imputare2==0)
    cin>>imputare2;
    if(imputare2==2)
        {system ("CLS");
 std::cout << R"(

                    __  __ ___ _  _ ___ _   _
                   |  \/  | __| \| |_ _| | | |
                   | |\/| | _|| .` || || |_| |
                   |_|  |_|___|_|\_|___|\___/



)" << '\n';
std::cout << R"(
                         1. Definitii

                        2. Varf izolat

                       3. Varf terminal

                         4. Revenire


)" << '\n';
int imputare5;
cin>>imputare5;
while(imputare5==0||imputare5>=5)
    cin>>imputare5;
ecran4(imputare5);
}






if (imputare2==1)

      {system ("CLS");
 std::cout << R"(
                                   ___  ___ ___ ___ _  _ ___ _____ ___ ___
                                  |   \| __| __|_ _| \| |_ _|_   _|_ _|_ _|
                                  | |) | _|| _| | || .` || |  | |  | | | |
                                  |___/|___|_| |___|_|\_|___| |_| |___|___|



)" << '\n';
std::cout << R"(

 Se numeste graf neorientat, o pereche ordonata de multimi (X,U), unde:

 --> X este o multime finita si nevida (multimea varfurilor sau nodurilor);
 --> U este o multime de perechi neordonate de elemente din multimea X (multimea muchiilor).

 Pentru x, y apartinand multimii X, (x, y) sau [x, y] reprezinta o muchie.

 Se numeste lant in graful neorientat G, o succesiune de varfuri L = (x1, x2,..., xk), unde x1,
x2,..., xkX, cu proprietatea ca oricare doua varfuri consecutive sunt adiacente ( adica, exista,
in graf, muchiile (x1, x2),( x2, x3),..., (xk-1, xk)).

 Se numeste ciclu in graful neorientat G, un lant C = (x1, x2, ... , xk), unde x1, x2,..., xkX, cu
proprietatea ca x1 = xk si muchiile (x1, x2), (x2, x3), ...  , (xk-1, xk) sunt distincte doua cate doua.

 Un graf partial al unui graf G este un graf G1=(X, V), cu V inclus in U.

 Un subgraf al unui graf G este un graf G’ = (Y, V), cu Y inclus in X si V inclus in U, unde V va contine
numai muchiile care au ambele extremitati in noua multime Y.

 Un graf neorientat in care oricare doua varfuri sunt adiacente, se numeste graf complet.

Un graf bipartit G=(X,U) se numeste bipartit complet daca pentru oricare doua varfuri x apartine A si y apartine B,
exista in graf muchia [x,y] ; adica [x,y] apartine U.

)" << '\n';


}

if (imputare2==4)
{system ("CLS");
 std::cout << R"(

                    __  __ ___ _  _ ___ _   _
                   |  \/  | __| \| |_ _| | | |
                   | |\/| | _|| .` || || |_| |
                   |_|  |_|___|_|\_|___|\___/



)" << '\n';
std::cout << R"(
                         1. In latime

			            2. In adancime

                         3. Revenire

)" << '\n';
int imputare5;
cin>>imputare5;
while(imputare5==0||imputare5>=4)
    cin>>imputare5;
  ecran6 (imputare5);
}

if(imputare2==3)
{
    system ("CLS");
 std::cout << R"(

                    __  __ ___ _  _ ___ _   _
                   |  \/  | __| \| |_ _| | | |
                   | |\/| | _|| .` || || |_| |
                   |_|  |_|___|_|\_|___|\___/



)" << '\n';
std::cout << R"(
                     1. Liste de adiacente

                     2. Vectorul muchiilor

                     3.Matricea de adiacenta

                     4. Revenire

)" << '\n';
int imputare11;
cin>>imputare11;
while(imputare11>=5||imputare11<=0)
    cin>>imputare11;
ecran11(imputare11);

}

if(imputare2==5)
    {
     system ("CLS");
 std::cout << R"(

                    __  __ ___ _  _ ___ _   _
                   |  \/  | __| \| |_ _| | | |
                   | |\/| | _|| .` || || |_| |
                   |_|  |_|___|_|\_|___|\___/



)" << '\n';
std::cout << R"(

                    1. Definitie graf conex, componenta conexa

				    2. Verificare graf conex

				    3. Revenire


)" << '\n';

int imputare13;
cin>>imputare13;
while(imputare13>=4||imputare13<=0)
cin>>imputare13;

ecran13(imputare13);
}


if (imputare2==6)
{
    system ("CLS");
 std::cout << R"(

                    __  __ ___ _  _ ___ _   _
                   |  \/  | __| \| |_ _| | | |
                   | |\/| | _|| .` || || |_| |
                   |_|  |_|___|_|\_|___|\___/



)" << '\n';
std::cout << R"(

                          1. Teorie

                        2. Verificare

                         3. Revenire



)" << '\n';

int imputare14;
cin>>imputare14;
while(imputare14>=4)
    cin>>imputare14;
 ecran14(imputare14);

}

if(imputare2==7)
{
 system ("CLS");
 std::cout << R"(

                    __  __ ___ _  _ ___ _   _
                   |  \/  | __| \| |_ _| | | |
                   | |\/| | _|| .` || || |_| |
                   |_|  |_|___|_|\_|___|\___/



)" << '\n';
std::cout << R"(

                          1. Teorie

                        2. Verificare

                         3. Revenire



)" << '\n';

int imputare15;
cin>>imputare15;
while(imputare15>=4)
    cin>>imputare15;
 ecran15(imputare15);

}





  }





















int main()
{int imputare,imputare2,imputare3,imputare4,ok;
    std::cout << R"(
_____ ______  ___  ______ _   _______ _____   _   _  _____ ___________ _____ _____ _   _ _____ ___ _____ _____
|  __ \| ___ \/ _ \ |  ___| | | | ___ \_   _| | \ | ||  ___|  _  | ___ \_   _|  ___| \ | |_   _/ _ \_   _|  ___|
| |  \/| |_/ / /_\ \| |_  | | | | |_/ / | |   |  \| || |__ | | | | |_/ / | | | |__ |  \| | | |/ /_\ \| | | |__
| | __ |    /|  _  ||  _| | | | |    /  | |   | . ` ||  __|| | | |    /  | | |  __|| . ` | | ||  _  || | |  __|
| |_\ \| |\ \| | | || |   | |_| | |\ \ _| |_  | |\  || |___\ \_/ / |\ \ _| |_| |___| |\  | | || | | || | | |___
 \____/\_| \_\_| |_/\_|    \___/\_| \_|\___/  \_| \_/\____/ \___/\_| \_|\___/\____/\_| \_/ \_/\_| |_/\_/ \____/



)" << '\n';
std::cout << R"()

             _____ _____ _____ _____ _    _____ _____ ____  _____ _____ _____ _____    _____ _____ _____ _____ _____
            |   | |  |  |     |   __|_|  |     |     |    \|     | __  |  _  |   | |  | __  |  _  | __  |   __|   __|
            | | | |  |  | | | |   __|_   | | | |  |  |  |  |  |  |    -|     | | | |  |    -|     |    -|   __|__   |
            |_|___|_____|_|_|_|_____|_|  |_|_|_|_____|____/|_____|__|__|__|__|_|___|  |__|__|__|__|__|__|_____|_____|


                                  _____ __    _____ _____ _____ _    ___   ___   _____
                                 |     |  |  |  _  |   __|  _  |_|  |_  | |_  | | __  |
                                 |   --|  |__|     |__   |     |_    _| |_ _| |_| __ -|
                                 |_____|_____|__|__|_____|__|__|_|  |_____|_____|_____|

)" << '\n';
cout<<"                                     Pentru a incepe apasati tasta enter"<<endl;
ecran1(imputare);
ecran2(imputare2, imputare3, imputare4);



    return 0;

}
