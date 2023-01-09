#include "src/PQueue.cpp"

int main()
{
    PQueue<int> pq;
    pq.push({3,8});
    pq.push({3,8});
    pq.push({1,7});
    pq.push({3,9});
    pq.push({8,9});
    pq.push({2,9});
    pq.push({2,10});
    pq.afficher();



    cout << "Top priority : " << pq.top() <<endl;
    cout << "After pop : "<<endl;
    pq.pop();
    pq.pop();
    pq.pop();
    pq.afficher();
    cout << "Top priority : " << pq.top() <<endl;
    return 0;
}
