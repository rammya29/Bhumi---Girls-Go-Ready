/* Print the Sum , Differnece an Product of two complex number */

#include <iostream>

using namespace std;

class Complex {
	
	public:
		//int real1, real2, imag1, imag2;
		int sum_real, sum_imag;
		int diff_real, diff_imag;
		int mul_real, mul_imag;
		
	
	int Sum(int real1, int imag1, int real2, int imag2){
		
		sum_real = real1 + real2;
		sum_imag = imag1 + imag2;
		
		if(sum_imag >=0)
			cout << "Sum of Two Complex number is : " << sum_real << "+" << sum_imag << "i." << endl;
		else
			cout << "Sum of Two Complex number is : " << sum_real << sum_imag << "i." << endl;
	}
	
	int Difference(int real1, int imag1, int real2, int imag2){
		
		diff_real = real1 - real2;
		diff_imag = imag1 - imag2;
		
		if(diff_imag >= 0)
			cout << "Difference of Two Complex number is : " << diff_real << "+" << diff_imag << "i." << endl;
		else
			cout << "Difference of Two Complex number is : " << diff_real << diff_imag << "i." << endl;
	}
	
	int Product(int real1, int imag1, int real2, int imag2){
		
		mul_real = real1 * real2 - imag1 * imag2;
		mul_imag = imag1 * imag2 + real1 * real2;
		
		if(mul_imag >= 0)
			cout << "Product of Two Complex number is : " << mul_real << "+" << mul_imag << "i." << endl;
		else
			cout << "Product of Two Complex number is : " << mul_real << mul_imag << "i." << endl;
	}
};

int main(){
	
	Complex comp;
	
	int r1, i1, r2, i2;
	
	cout << "Enter the Number 1 " << endl << "Enter Real Value : ";
	cin >> r1;
	cout << "Enter Imaginary Value ";
	cin >> i1;
	
	cout << "Enter the Number 2 " << endl << "Enter Real Value : ";
	cin >> r2;
	cout << "Enter Imaginary Value ";
	cin >> i2;
	
	cout << comp.Sum(r1,i1,r2,i2) << endl;
	cout << comp.Difference(r1,i1,r2,i2) << endl;
	cout << comp.Product(r1,i1,r2,i2) << endl;
	
	return 0;
}






