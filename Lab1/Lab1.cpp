// Aufgabe 11
//

#include <iostream>
using namespace std;

void twinzahlen(int n) {
    int p = 0, q=2;
    //wir beginnen mit den ersten Paar und zwar 0 und 2
    //bei jeden Schritt p wird q bekommen und q wird mit zwei inkrementiert
    for (int i = 0; i < n; i++)
    {
        cout << "p=" << p << " ";
        cout << "q=" << q << " ";
        cout << endl;
        p = q;
        q += 2;
    }

}

void abnehmendeTeilfolge(int v[20], int n)
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
   
    for ( i = position; i <position+max; i++)
        cout << v[i] << " ";
   
}



int main()
{
    cout << "Punkt a:" << endl;
    twinzahlen(3);
    cout << "Punkt b:"<<endl;
    int n=10;
    int v[] = {10,9,8,9,6,5,9,3,2,1};
    
    abnehmendeTeilfolge(v, 10);

}
