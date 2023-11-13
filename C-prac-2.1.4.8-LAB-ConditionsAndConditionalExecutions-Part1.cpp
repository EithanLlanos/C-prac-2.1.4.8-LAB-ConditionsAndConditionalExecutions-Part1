//Scenario
//Check the program in the editor.Find all possible compilation errors and logic errors.Fix them and try to find proper conditions for all of the three statements.
//Your version of the program must print the same result as the expected output.Before you use the compiler, try to find the errors only by manual code analysis.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Code
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	if (a  9)
//		puts("First condition is true");
//	if (a  9)
//		puts("Second condition is true");
//	if (a, 9 + 1)
//		puts("Third condition is true");
//	return 0;
//}
//
//Expected output
//First condition is true
//Third condition is true
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
	int a = 10;
	if (a != 9) {
		puts("First condition is true");
	}
	if (a < 9) {
		puts("Second condition is true");
	}
	if (a == 9 + 1) {
		puts("Third condition is true");
	};
}