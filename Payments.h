#include <string>
#include <cstring>

class Payments {
	private : 
		int paymentID ;
		float Amount ;
		string Ptime ;
		Cards * crd ;
	public : 
		Payments();
		Payments(int PID, float pay_amount, string pay_time);
		void displayReciept();
		~Payment();
};