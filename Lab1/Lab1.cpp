// Aufgabe 11
//
#include <cassert>
#include <iostream>
using namespace std;

int prim(int x)
{
    if (x == 2)
        return true;
    if (x < 2 || !(x % 2))
        return false;
    else
    for (int i = 2; i <x/2; i++)
        if (!(x % i))
            return false;
    return true;
}

void test()
{
    assert(prim(9) == false);
    assert(prim(5) == true);
    assert(prim(2) == true);

}

void twinzahlen(int n) {
    int p = 3, q=5, ct=0;
    //wir beginnen mit den ersten Paar und zwar 3 und 5, wir testen ob die Zahlen prim sind
    //bei jeden Schritt p wird q bekommen und q wird mit zwei inkrementiert
    while(ct<n)
    {
        if (prim(p) && prim(q))
        {
            cout << "p=" << p << " ";
            cout << "q=" << q << " ";
            cout << endl;
            ct++;
        }
            p = q;
            q += 2;
        
    }

}

void abnehmendeTeilfolge(int v[20], int n, int newliste[20])
{
    int ct = 0, max = 0, position = 0,i=0;
    for (i = 0; i <= n - 1; i++)
    {
        
            if (v[i] > v[i + 1])                            //wir vergleichen je 2 aufeinanderfolgende zahlen, wenn sie in abnehmender Reihen-                            
                ct++;                                       //folge sind, der ct (Counter) wird inkrementiert, anderseits werden wir der ct
            else                                            //mit max verhleichen, max steht fur die Anzahl der Teilfolge mit aufeinabderfolgende
                if (ct >= max)                              //Elemente, wenn das ct groesser ald das max ist, in der variable position, speichern 
                {                                           //wir die position von dem die  gesuchte Teilfolge anfaengt.
                    max = ct;
                    position = i - max;
                    ct = 0;
                    
                }
        
    }                                                        //wir haben noch einen fall, in dem die gesuchte teilfolge auf dem letzte position
    if (ct >= max)                                           //aufhoert und diese situation wird extra bearbeitet
        {
        max = ct;
        position = i - max;
         }
    int j = 0;
    for (i = position; i < position + max; i++)
        newliste[j++] = v[i];

    for (i = 0; i < max; i++)
        cout << newliste[i] << " ";
   
}


int main()
{
    cout << "Punkt a:" << endl;
    twinzahlen(3);
    cout << "Punkt b:"<<endl;
    int n=10, newliste[20];
    int v[] = {10,9,8,9,6,5,9,3,2,1};
   
    abnehmendeTeilfolge(v, 10, newliste);
    test();

  

}
