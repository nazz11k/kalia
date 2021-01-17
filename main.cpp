#include "kalian.h"

int main() {
    int m;
    cout<<"Enter m and n sizes of matrix: ";
    cin>>m;
    float** mas=new float*[m];
    for (int i = 0; i < m; i++) {
        mas[i]=new float[m];
    }
    filler(mas, m, m);
    min_fouder(mas, m, m);
}
