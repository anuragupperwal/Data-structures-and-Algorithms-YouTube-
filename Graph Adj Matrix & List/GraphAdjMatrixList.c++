#include<iostream>
#include<map>
#include<list>
#include<iterator>


using namespace std;

class AdjMatrix {
        int v, e;
        map <int, map<int, int> > matrix;
    public:
        AdjMatrix(int a, int b) {
            v = a; 
            e = b;
        }
        void adjMat() {
            int a, b;
            for(int i=0; i<e; ++i) {
                cin>>a>>b;
                matrix[a][b] = 1;
                matrix[b][a] = 1;
            }
        }
        void print() {
            for(int i=0; i<v; ++i) {
                for(int j=0; j<v; ++j) {
                    cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
            }
        }

};

class AdjList {
        int v, e;
        list <int> *l;
    public:
        AdjList(int a, int b) {
            v = a;
            e = b;
            l = new list<int>[v];
        }
        void AdjL() {
            int a, b;
            for(int i=0; i<e; ++i) {
                cin>>a>>b;
                l[a].push_back(b);
                l[b].push_back(a);
            }
        }
        void print() {
            for(int i=0; i<v; ++i) {
                cout<<"List "<<i<<": ";
                for(list <int>::iterator it = l[i].begin(); it!=l[i].end(); ++it) {
                    cout<<*it<<" ";
                }
                cout<<endl;
            }
        }
};

int main() {
    // AdjMatrix a1(5, 7);
    // a1.adjMat();
    // a1.print();

    AdjList l1(5, 7);
    l1.AdjL();
    l1.print();

    return 0;
}
