#define SIZE 55

int main()
{
    	int Prime_numbers[SIZE];
    	int num = 2;
        for ( int i = 0 ; i < SIZE; i++ ){
            	for ( int j = num; j < 99999; j++){
                	int prime = 1;  // Число простое
                	for ( int num2 = 2; num2 <= j/2; num2++){
                    		if ( j % num2 == 0){
                            		prime = 0; // Число составное
                            		break; 
                    		} 
                	}                         
                	if ( prime == 1){
                   		Prime_numbers[i] = j;
                    		num = j + 1;
                    		break;
                	}  
            	}
        }   
     	return 0;
}
