#include "std_lib_facilities.h"

int main()
{
	
	string first_name;
	cout << "Enter the name of the person you want to write to:\n";
	cin >> first_name; 

	cout << "Dear " << first_name << ",\n";
	cout << "\t"<< "How are you? I am fine. I miss you.\n";
	cout <<"I haven't seen you in ages. I hope your family is doing well.";

	string friend_name;
	cout << "Enter the name of another friend:\n";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?" << "\n";

	char friend_sex;
	friend_sex = 0;
	cout << "Enter an 'm' if your friend is a male or enter an 'f' if your friend is a female:\n";
	cin >> friend_sex;
	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}
	if (friend_sex == 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me. \n";
	}

	int age;
	cout << "Enter the age of the recipient:\n";
	cin >> age;
	if (age <=0)
	
		simple_error ("you're kidding!");
	
	if (age >= 110)
	
		simple_error ("you're kidding!");

	else
		cout << "I heard you just had a birthday and you are " << age << " years old.\n";

	if  (age <12)
	{
			cout << "Next year you will be " << age+1 << " \n";
	}

	if  (age == 17)
	{
			cout << "Next year you will be able to vote.\n";
	}
			
	if (age >70)
	{
			cout << "I hope you are enjoying retirement.\n";
	}
		
	
	cout << "Yours sincerely,\n";
	cout << "\n";
	cout << "\n";
	cout << "Veronika \n";

return 0;







}