#include <iostream>

int main(){
int inputNum = 9;
	for (int i = inputNum; i > 0; i--){
		   	if (i < ((inputNum+1)/2)){
		             for(int y = (inputNum - 1); y >= i; y--){
		                 std::cout << "00";
		             }
		             for (int k = i; k > 0; k--){
		                 std::cout << "* ";
		             }
		             for (int x = 1; x < i; x++ ){
		                 std::cout << ("* ");
		             }
		         } else {
		             for (int x = 1; x < i; x++){
		                 std::cout << ("00");
		             }
		             for (int j = i; j <= (inputNum); j++){
		                 std::cout << ("* ");
		             }
		             for (int k = (inputNum); k > i; k--){
		                 std::cout << ("* ");
		             }
		         }
		         std::cout << ("\n");
				}
	return 0;
}
