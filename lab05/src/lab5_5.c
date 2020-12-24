int main(){
	double num = 144;
	double eps = 0.001;
	double root = num / 2;
	while ( root - num / root > eps )
	{
		root = 0.5 * ( root + num / root);
	}
	return 0;
}
