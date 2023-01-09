#ifndef PQUEUE_H
#define PQUEUE_H

#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;


template<class T>
struct comp
{
    bool operator()(pair<int , vector<T>> a , pair<int,vector<T>> b){
        return a.first > b.first;
    }
};


template<class T>
class PQueue
{
    public:
        PQueue();
        virtual ~PQueue();
        void push(pair<int ,T> elem);
        T top();
        void pop();
        void afficher();

    protected:

    private:
        set<pair<int,vector<T>> , comp<T>> pqueue;

};

#endif // PQUEUE_H
