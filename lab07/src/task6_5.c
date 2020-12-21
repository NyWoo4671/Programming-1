void shift(int arr[][]){
int array[][] = arr[][];
       int buff = array[0][0];
       for (int i = 0; i < N * N; i++) {
               array[0][i] = array[0][i + 1];
       }
       array[N - 1][N - 1] = buff;
       }
       return;
int main()
{
	shift{2,4,5};   	       
       return 0;
}
