int main()
{
	char line[] = "   Random words    in   line and more";
	int sum = 0;
	for (int i = 0; i <= line; i++) {
		if (line[i] == '\0') {
			break;
		}
		if (line[i + 1] == ' ') { 
			continue;
		}else if ( line[i] == ' ') {
	        	sum += 1;
	        } 
	}
    return 0;
}
