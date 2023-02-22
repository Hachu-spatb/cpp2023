#include <iostream>
using namespace std;
#ifndef N
#define N 2
#endif
#ifndef M
#define M 2
#endif

void vyv(int (&At)[M][N])
{
    for(int i = 0; i < M; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            cout << At[i][j] << " ";
        }
        cout << endl;
    }
}

void ch(int (&A)[N][M])
{
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            cin >> A[i][j];
        }
    }
}


void print_transposed(int (&A)[N][M])
{
    int At[M][N];
    for(int j = 0; j < M; ++j)
    {
        for(int i = 0; i < N; ++i)
        {
            At[j][i] = A[i][j];
        }
    }
    vyv(At);
}

int main()
{
    int A[N][M];
    ch(A);
    print_transposed(A);
    return 0;
}
