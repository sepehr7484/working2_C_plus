#include <iostream>
using namespace std;
void typedata() {
	//ما در این  نمونه کد به انواع داده و متغیر ها می پردازیم
	// و تبدیل انواع داده به داده دیگر
	int number = 12;
	float number1 = 9.9;//4 byte
	double number2 = 13.5;//8 byte
	char name1 = 'D';//تک کاراکتری فقط میگیرد, فاقد دعم است
	string name2 = "sajjad";
	bool validaion = true;//values true & false
	double convertd = double(number);
	cout << convertd<<"\n";
	cout << int(number1) << "\n";//convert double to double
	cout << double(number) / 5 << "\n";//convert int to double

	

	 
}
void typeopration() {
	//ما در این مثال با انواع عملگر های حسابی کار میکنیم
	// + / * - == <= >= < > != ++ -- %
	int a;
	int b;
	cout << "Enter number 1: ";
	cin >> a;
	cout << "Enter number 2: ";
	cin >> b;
	
	int sum=a+b;
	int sub = a - b;
	double div = a / (double)b;//for output double
	int mult = a * b;
	int dec = --a;//کاهشIncrement
	int inc = ++a;//Decrementافزایش
	int moudles = a % b;//نشان دهنده باقی مانده تقسیم
	//a += 3;//a+3=result->type sum to varibale
	//a -= 4;//a-4=result->type sub to varibale
	cout << "sum : "<< sum<<"\n";
	cout << "sub : "<<sub << "\n";
	cout << "div:  "<<div << "\n";
	cout << "mult:  " << mult << "\n";
	cout << "dec:  " << dec << "\n";
	cout << "inc:  " << inc << "\n";
	cout << "bighimandeh:  " << moudles << "\n";
	cout << a << "\n";//a+value=result-value
	cout << "equals : "<<(a == b) << "\n";//equals=جهت قیاس هستش که اگر برابر 1 و د رغیر این صورت 0
	cout << "Not equals: "<<(a != b) << "\n";//0 false ->1 true
	cout << "bozargtar mosavi: " << (a >=b) << "\n";
	cout << "kochaktar mosavi: " << (a <= b) << "\n";
	cout << "amalgar mantaghi : " << (a>=10&&a<=99) << " :dahgan"<<"\n";//0 false 1 true
	cout << "amalgar mantaghi : " << !(a >= 10 && a <= 99) << " :gheyreh" << "\n";//0false 1 true
}

void sharti1() {
	//ما اینجا به دستورات شرطی اشنا میشیم
	int a;
	cout << "Enter number:  ";
	cin >> a;

	if (a>=1&&a<=9) {
		cout << "yekan \n";
	}
	if (a >= 10 && a <= 99) {
		cout << "dahgan \n";
	}
	else if (a>=100)
	{
		cout << "sadGan";
	}
	

}
void sharti2() {
	int b;
	cout << "Enter number:";
	cin >> b;
	if (b%2==0)//اگر تقسیم بر 2 شود و باقی مانده 0 باشد زوج
	{
		cout << "Zoj";

	}
	else// در غیر اینصورت
	{
		cout << "Fard";
	}
}
void halgheh1() {
	int a;
	string name;
	cout << "Enter number:  ";
	cin >> a;
	cout << "Enter Name:  ";
		cin >> name;
	for (int i = 0; i < a;++i) {// varibale i counter index
		cout << i<<"\n";
	}
	cout << "\n" << "............." << "\n";

	for (int z = 0; z < name.size(); ++z)
	{
		cout <<z<<":" <<name[z]<<"\n" ;
		
	}

	cout << "*******halgheh pain baray jazr mi bashad***********" << "\n";
	for (int i= 0; i<= a; i++) {
	cout << i << ":   " << sqrt(i) << "\n";
	//if (sqrt(a) == 3) {
		//break;
	//}
}
}


int main() {

	//typedata();
	//typeopration();
	//sharti1();
		//sharti2();
	halgheh1();
	
	
}
//int a;
