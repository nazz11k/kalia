#include "kalian.h"

void filler(float** mas, int m, int n){
    srand(time(0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            mas[i][j]=(((float)rand()/RAND_MAX)*(float)(900-3))+(float)3;
        }
    }
    outer(mas, m, n, "Generated matrix: ");
}

float** min_fouder(float** mas, int m, int n){
    float min=1000;
    int col;
    for (int i = 0; i < m; i++) {
        for (int j = i+1; j < n; j++) {
            if (mas[i][j]<min){
                min=mas[i][j];
                col=j;
            }
        }
    }
    cout<<endl<<"Min element in upper part:"<<min<<endl<<"Column of min element: "<<col+1<<endl;
    return deleter(mas, m, n, col);
}

float** deleter(float** mas, int m, int n, int col){
    float** del_mas=new float*[m];
    for (int i = 0; i < m; i++) {
        del_mas[i]=new float[n-1];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < col; j++){
            del_mas[i][j]=mas[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for(int j=col; j<n-1; j++){
            del_mas[i][j]=mas[i][j+1];
        }
    }
    outer(del_mas, m, n-1, "Changed matrix: ");
    return del_mas;
}

void outer(float** mas, int m, int n, string name){
    cout<<endl<<name<<endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout<<setw(9)<<setprecision(6)<<mas[i][j];
        }
    cout<<endl;
    }
}