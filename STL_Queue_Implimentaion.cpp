#include<iostream>
#include<queue>
using namespace std;

int main() {

    queue<int> q;

    q.push(12);
    cout << "Front element of queue : " << q.front() << endl;
    q.push(13);
    cout << "Front element of queue : " << q.front() << endl;
    q.push(14);
    cout << "Front element of queue : " << q.front() << endl;
    q.push(15);

    cout << "Size of queue is : " << q.size() << endl;

    q.pop();
    cout << "Size of queue is : " << q.size() << endl;

    q.pop();
    q.pop();
    q.pop();

    cout << "Size of queue is : " << q.size() << endl;

    if(q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}