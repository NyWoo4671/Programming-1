int main()
{
    	int N = 15;
	char napolnenie = '_';
    	char line[] = "Ivanov        \0";
    	int sum = 0;
    	for (int a = 0; line[a] != ' '; a++) {
        	sum += 1;
    	}
    	char buff[N];
    	for (int b = 0; b < N; b++) {
        	buff[b] = line[b];
    	}
    	int c = (N - sum - 1) / 2;
    	for (int d = 0; d < c; d++) {
        	line[d] = napolnenie;
    	}
    	int f = 0;
    	for (int g = c; g <= c + sum; g++){
        	line[g] = buff[c];
        	g += 1;
    	}
    	int h = sum + c;
    	for (int j = h; j < N - 1; j++) {
        	line[j] = napolnenie; 
    	}
    	return 0;
}
