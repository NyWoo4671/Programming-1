int main(){
	int k = 7;
	int m = 8;
	int n = 5;
	int res = 0;
	if ( m < k ){
		res = k;
		k = m;
		m = res;
	}
	if ( n < m ){
		res = n;
		n = m;
		m = res;
	}
	if ( m < k ){
		res = k;
		k = m;
		m = res;
	}
return 0;
}
	