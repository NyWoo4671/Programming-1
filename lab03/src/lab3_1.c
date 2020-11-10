int main(){
	#define value 322
	int first_num;
	int second_num;
	int third_num;
	int rev_numb;
	first_num = value  % 10;
	second_num = (value % 100) / 10;
	third_num = value / 100;
	rev_numb = first_num * 100 + second_num * 10 + third_num;
return 0;
}