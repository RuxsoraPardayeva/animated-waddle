#include <iostream>
using namespace std;


//problem 1
void inputMatrix( int N, int M,int matrix[100][100]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];

        }
    }


};

//problem 2
void displayMatrix( int N, int M,int matrix[100][100]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];

        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matrix[i][j] << " ";
        }
    }


};

//problem 3
void sumMatrix( int N, int M,int matrix[100][100]) {

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];

        }
    }
    int sum;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            sum += matrix[i][j];
        }
    }
    cout << sum;
}
//problem 4

void maxrowmatrix(int n, int m , int matrix[100][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];

        }
    }
    int max[n] ;
    for (int i = 0; i < n; i++) {
        int maxx=0;
        for (int j = 0; j < m; j++) {
            if (matrix[i][j]>maxx) {
                maxx=matrix[i][j];
            }
        }
        max[i]=maxx;

    }
    for (int i = 0; i < n; i++) {

            cout << max[i] << " ";

    }
}
//problem 5

void columnsummatrix(int n, int m , int matrix[100][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int sum[m];
    for (int i = 0; i < m; i++) {
        sum[i]=0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum[j]+=matrix[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        cout << sum[i] << " ";
    }
}



//problem 6
void sumofdiog( int m , int matrix[100][100]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int sum =0;
    for (int i = 0; i < m; i++) {
        sum+=matrix[i][i];
    }
    cout<<"sum of the dioganals : " << sum;
};


//problem 7
void swapmatrix(int n, int m , int matrix[100][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int swappedmatrix[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            swappedmatrix[i][j]=matrix[j][i];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << swappedmatrix[i][j] << " ";
        }
        cout << endl;
    }

}
//problem 10

void rotateMatrix(int N, int** matrix) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][N - j - 1];
            matrix[i][N - j - 1] = temp;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    //problem 1
    // int N;
    // cin >> N;
    // int M;
    // cin >> M;
    // int matrix[100][100];
    //
    // inputMatrix(N,M,matrix);


    //problem 2
    // int a;
    // cin >> a;
    // int b;
    // cin >> b;
    //int matrix[100][100];
    // cout << "the stored matrix :"<< endl;
    // displayMatrix(a,b,matrix);


    //probelm 3
    // int n;
    // cin >> n;
    // int m;
    // cin >> m;
    //int matrix[100][100];
    // cout<<"sum of the elememnts is  ";
    // sumMatrix(n,m,matrix);
    // cout<<endl;

    //problem 4

    // int s;
    // cin >> s;
    // int d;
    // cin >> d;
    // int matrix[100][100];
    // maxrowmatrix(s,d,matrix);




    //problem 5
    // int n;
    // cin >> n;
    // int m;
    // cin >> m;
    // int matrix[100][100];
    // columnsummatrix(n,m,matrix);


    //problem 6
    // int m;
    // cin >> m;
    // int matrix[100][100];
    // sumofdiog(m,matrix);

   //problem 7
    // int n;
    // cin >> n;
    // int m;
    // cin >> m;
    // int matrix[100][100];
    // swapmatrix(n,m,matrix);

   //problem 8
   // int n;
   //  int m;
   //  cin >> n >> m;
   //  int matrix1[n][m];
   //  int matrix2[n][m];
   //  for (int i = 0; i < n; i++) {
   //      for (int j = 0; j < m; j++) {
   //          cin >> matrix1[i][j];
   //      }
   //  }
   //  for (int i = 0; i < m; i++) {
   //      for (int j = 0; j < n; j++) {
   //          cin >> matrix2[i][j];
   //      }
   //  }
   //  int summmatrix[n][m];
   //  for (int i = 0; i < n; i++) {
   //
   //      for (int j = 0; j < m; j++) {
   //          summmatrix[i][j]=matrix1[i][j]+matrix2[i][j];
   //      }
   //  }
   //  for (int i = 0; i < n; i++) {
   //      for (int j = 0; j < m; j++) {
   //          cout << summmatrix[i][j] << " ";
   //      }
   //      cout << endl;
   //  }



    //problem 10
    // int N;
    // cin >> N;
    // int** matrix = new int*[N];
    // rotateMatrix(N,matrix);



return 0;
}