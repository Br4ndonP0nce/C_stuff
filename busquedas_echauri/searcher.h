#ifndef BUSQUEDAS_ECHAURI_SEARCHER_H
#define BUSQUEDAS_ECHAURI_SEARCHER_H
#include "lista_estatica.h"
class Searcher
{
public:
    Searcher() {}

    template<size_t n,typename T>
    size_t sequential(const T &K, ListaEstatica <n,T> &a)
    {
        size_t i = 0;

        while(i < a.size())
        {
            if(a[i] == K)
            {
                return i;
            }
            else if(i == a.size())
            {
                cout<<"tamaño de la lista\n";
                return a.size();
            }
            i = i+1;
        }
        return a.size();
    }

    template<size_t n, typename T>
    void Sort(ListaEstatica <n, T> &x){
        int j;
        T v;
        for (int i(1); i < int(x.size()); i++) {
            {
                v = x[i];
                j = i - 1;

                while (j >= 0 && x[j] > v)
                {
                    x[j + 1] = x[j];
                    j--;
                }
                x[j + 1] = v;
            }
        }
    }


    template<size_t n, typename T>
    size_t binary(const T &K, ListaEstatica <n,T> &a)
    {
        size_t l = 0, m, r;

        Sort(a);

        r = a.size() - 1;
        while(l <= r)
        {
            m = (l + r)/2;

            if (K == a[m])
            {
                return m;
            }
            else if (K < a[m])
            {
                r = m - 1;
            }
            else
            {
                l=m+1;
            }
        }
        cout<<"tamaño de la lista\n";
        return a.size();
    }


};



#endif //BUSQUEDAS_ECHAURI_SEARCHER_H
