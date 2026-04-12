#include <iostream>
using namespace std;

class Matrix{
    private:
    int rows;
    int cols;
    
    public:
    int **matrixarray;
    Matrix(int a, int b){
        rows = a;
        cols = b;
        matrixarray = new int*[rows];
        matrixarray[0] = new int[rows * cols];
        for(int i = 1; i < rows; i++){
            matrixarray[i] = matrixarray[0] + (i * cols); 
        }
    }
    ~Matrix(){
        for(int i = 0; i < rows; i++){
            delete[] matrixarray[i];
        }
        delete[] matrixarray;
    }
    void getdata(){
        cout << "Enter data for the matrix : " << endl;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                cin >> matrixarray[i][j];
            }
        }
    }

    void show(){
        cout << "The matrix is : " << endl;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                cout << matrixarray[i][j] << ' ';
            }
            cout << endl;
        }
    }
    friend Matrix operator* (Matrix A, Matrix B);
    
    Matrix& operator= (Matrix A){
        for(int i = 0; i < A.rows; i++){
            for(int j = 0; j < A.cols; j++){
                matrixarray[i][j] = A.matrixarray[i][j];
            }
        }
        return *this;
    }
};

Matrix operator* (Matrix A, Matrix B){
    if(A.cols != B.rows){
        cerr << "Multiplication not possible!" << endl;
        exit(-1);
    }
    Matrix ans(A.rows, B.cols);
    for(int i = 0; i < A.rows; i++){
        for(int j = 0; j < B.cols; j++){
            int sum = 0;
            for(int k = 0; k < A.cols; k++){
                sum += A.matrixarray[i][k] * B.matrixarray[k][j];
            }
            ans.matrixarray[i][j] = sum;
            cout << i << ' ' << j << ans.matrixarray[i][j] << endl;
        }
    }
    return ans;
}


int main(){
    Matrix m1(3, 4);
    Matrix m2(4, 3);
    m1.getdata();
    m2.getdata();
    Matrix m3(3, 3);
    m3 = m1 * m2;
    m3.show();
    return 0;
}