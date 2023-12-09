//implement a program to check whether the graph is cyclic or not
#include<iostream>
#include<list>
using namespace std;

class graph {
public:
    int v;
    list<int>* adj;

    graph(int v) {
        this->v = v;
        adj = new list<int>[v];
    }

    void addvertex(int a, int b) {
        adj[a].push_back(b);
    }

    void printvertex() {
        for (int i = 0; i < v; i++) {
            cout << "Connections for vertex " << i << ": ";
            for (int& vertex : adj[i]) {
                cout << vertex << " ";
            }
            cout << endl;
        }
    }

void connection() {
    int e;
    cout << "Enter how many edges are there: ";
    cin >> e;

    for (int i = 0; i < e; i++) {
        int a, b;
        cout << "Enter the " << i + 1;
        if (i % 10 == 1 && i != 11 && i != 1) {
            cout << "st connection: ";
        }
        else if (i % 10 == 2 && i != 12 && i != 2) {
            cout << "nd connection: ";
        }
        else if (i % 10 == 3 && i != 13) {
            cout << "rd connection: ";
        }
        else {
            cout << "th connection: ";
        }
        cin >> a >> b;
        addvertex(a, b);
    }
}
};

int main() {
    int v, e;
    cout << "How many vertices are there: ";
    cin >> v;

    graph g(v);
    g.connection();
    g.printvertex();

    return 0;
}
