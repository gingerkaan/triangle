#include <iostream>
#include <stdio.h>
using namespace std;
// 
// add isPrime function
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

int triangle(int triangle_array[][100], int array_size){
	//int path_array[array_size] = 0;
	int instance_sum = 0;
	int sum[2]=0;

	int line_number=0;//it needs to be i+1
	int row_number=0;
	int heads; //current seeker head
	
	for(line_number; line_number<array_size; line_number++){ // lines 
		if (triangle_array[line_number][row_number]==0){
				break;
		}
		if ( isPrime(triangle_array[line_number][row_number]) ){
				//true
				break;
		}else {
			int i=0
			for(row_number; row_number<=line_number+1; row_number++){
				if ( isPrime(triangle_array[line_number+1][row_number]) ){
					//true
					break;
				}else {
					sum[i]= triangle_array[line_number+1][row_number];
					i++;
			}
			if(){

			}	//path_array[line_number] = triangle_array[line_number][row_number];

		}
		
	}
}
int main(){
	int totalsum = 0;
	int array_size_entered=0;
	cout<<"enter array size"<<endl;
	cin>>array_size_entered;


	//triangle();
	

}