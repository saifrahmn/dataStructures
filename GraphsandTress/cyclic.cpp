#include<iostream>
using namespace std;
class graph{
    int v;
    public:
        
        graph(int v){
            this->v = v;
        }
        void vertex(){
            cout<<"the number of vertexes are: "<<v<<endl;
        }
};

int main(){
    graph g(4);
    g.vertex();
}