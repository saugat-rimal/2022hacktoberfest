# include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int N, M ;
    cin >> N >> M ;
    int A[N][M] ;
    int sumr[N] ;
    int sumc[M] ;
    for (int i = 0 ; i<N ;i++)
    {
        for (int j = 0 ; j < M ; j++)
        {
            cin >> A[i][j] ;
        }
    }
    for (int i = 0 ; i < N ; i++)
    {
        for (int j = 0 ; j < M ; j++)
        {
            sumr[i] = 0 ;
            sumr[i] += A[i][j] ;
        }
    }
    for (int i = 0 ; i < N ; i++)
    {
        cout << sumr[i] << endl;
    }
    for (int j = 0 ; j<M ;j++)
    {
        for (int i = 0 ; i < N ; i++)
        {
            sumc[j] = 0 ;
            sumc[j] += A[j][i] ;
        }
    }
    for (int j = 0 ; j < M ; j++)
    {
        cout << sumc[j] << endl;
    }
    int ctr = 1 ;
    if (N > M)
    {
        for (int i = 0 ; i < M ; i++)
        {
            if (sumr[i] == sumc[i])
                continue ;
            else
                ctr = 0 ;
                break ;
        }
    }
    else if (N < M )
    {
        for (int i = 0 ; i < N ; i++)
        {
            if (sumr[i] == sumc[i])
                continue ;
            else
                ctr = 0 ;
                break ;
        }
    }
    cout << ctr << endl ;
}