#include "PQueue.h"

template<class T>
PQueue<T>::PQueue()
{
    //ctor
}

template<class T>
PQueue<T>::~PQueue()
{
    //dtor
}

template<class T>
void PQueue<T>::push(pair<int,T> elem)
{
    for(auto& [data , vec ] : pqueue )
        if(data == elem.first)
        {
            if ( !(find(vec.begin(), vec.end(), elem.second) != vec.end()) )
            {
                vector<T> newvec(vec);
                newvec.push_back(elem.second);
                pqueue.erase({data,vec});
                pqueue.insert({elem.first , newvec});
            }

            return ;
        }

    vector<T> vec{elem.second};
    pqueue.insert({elem.first , vec});

}

template<class T>
T PQueue<T>::top()
{
    if(pqueue.size() > 0)
    {
        typename set<pair<int, vector<T>>>:: iterator it = pqueue.begin();
        //cout << "\ndata : " << it->first << endl;
        vector<T> vec = it->second;
        return *(vec.end()-1);
        /*vector<T> newvec(vec);
        newvec.pop_back();
        pqueue.erase({data,vec});
        pqueue.insert({data , newvec});*/
    }
    return -1;
}

template<class T>
void PQueue<T>::pop()
{
    if(pqueue.size() > 0)
    {
        typename set<pair<int, vector<T>>>:: iterator it = pqueue.begin();
        //cout << "\ndata : " << it->first << endl;
        vector<T> vec = it->second;
        int data = it->first;
        vector<T> newvec(vec);
        pqueue.erase({data,vec});
        newvec.pop_back();

        if(newvec.size() > 0)
            pqueue.insert({data , newvec});
    }

    return;
}
template<class T>
void PQueue<T>::afficher()
{
    for(auto& [data,vec] : pqueue){
        cout << "Priorite " << data <<"\n--------------------"<<endl;
        for(T crt : vec)
            cout << crt  << endl;
    }
}


