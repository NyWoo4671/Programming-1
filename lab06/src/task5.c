#define N 4
int main()
{
       int array[N][N] = {{1, 2, 3, 4},
                          {5, 6, 7, 8},
                          {9, 10, 43, 12},
                          {13, 14, 15, 22}};
       int buff = array[0][0];
       for (int i = 0; i < N * N; i++) {
               array[0][i] = array[0][i + 1];
       }
       array[N - 1][N - 1] = buff;
       return 0;
}