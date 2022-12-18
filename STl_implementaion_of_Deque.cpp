#include<iostream>
#include<queue>
using namespace std;

class deQue {

};
int main() {
    deque<int> d;

    // Push operation on queue
    d.push_front(12);
    cout << "Front element of the Queue : " << d.front() << endl;
    cout << "Back element of the Queue : " << d.back() << endl;
    d.push_back(13);
    cout << "Front element of the Queue : " << d.front() << endl;
    cout << "Back element of the Queue : " << d.back() << endl;
    // d.push_front(14);
    // cout << "Front element of the Queue : " << d.front() << endl;
    // cout << "Back element of the Queue : " << d.back() << endl;
    // d.push_back(15);
    // cout << "Front element of the Queue : " << d.front() << endl;
    // cout << "Back element of the Queue : " << d.back() << endl;
    // d.push_front(16);
    // cout << "Front element of the Queue : " << d.front() << endl;
    // cout << "Back element of the Queue : " << d.back() << endl;

    // Pop operation on Queue
    d.pop_front();
    cout << "Front element of the Queue : " << d.front() << endl;
    cout << "Back element of the Queue : " << d.back() << endl;
    d.pop_back();
    cout << "Front element of the Queue : " << d.front() << endl;
    cout << "Back element of the Queue : " << d.back() << endl;

    // To check Empty
    if(d.empty()) {
        cout<<"Queue is empty"<< endl;
    }
    else {
        cout<<"Queue is not empty"<< endl;
    }
    return 0;
}