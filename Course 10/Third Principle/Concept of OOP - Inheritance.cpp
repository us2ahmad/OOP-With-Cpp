//#include <iostream>
//using namespace std;
//
//class clsPerson
//{
//private:
//	int _ID;
//	string _FirstName;
//	string _LastName;
//	string _Email;
//	string _Phone;
//
//public:
//
//	clsPerson() 
//	{
//	}
//
//	clsPerson(int ID,string FirstName,string LastName,string Email,string Phone)
//	{
//		_ID = ID;
//		_FirstName = FirstName;
//		_LastName = LastName;
//		_Email = Email;
//		_Phone = Phone;
//	}
//
//	int ID()
//	{
//		return _ID;
//	}
//
//	void SetFirstName(string FirstName) 
//	{
//		_FirstName = FirstName;
//	}
//	string FirstName()
//	{
//		return _FirstName;
//	}
//
//	void SetLastName(string LastName)
//	{
//		_LastName = LastName;
//	}
//	string LastName()
//	{
//		return _LastName;
//	}
//
//	void SetEmail(string Email)
//	{
//		_Email = Email;
//	}
//	string Email()
//	{
//		return _Email;
//	}
//
//
//	void SetPhone(string Phone)
//	{
//		_Phone = Phone;
//	}
//	string Phone()
//	{
//		return _Phone;
//	}
//	string FullName() 
//	{
//		return _FirstName + " " + _LastName;
//	}
//
//
//	void PrintInfo() 
//	{
//		cout << "Info" << endl;
//		cout << "---------------------------" << endl;
//		cout << "ID         : " << _ID << endl;
//		cout << "First Name : " << _FirstName << endl;
//		cout << "Last  Name : " << _LastName << endl;
//		cout << "Full  Name : " << FullName() << endl;
//		cout << "Email      : " << _Email << endl;
//		cout << "Phone      : " << _Phone << endl;
//		cout << "---------------------------" << endl;
//	}
//
//	void SendEmail(string Subject, string Body) 
//	{
//		cout << "\nThe Following Message sent successfully to Email : " << _Email << endl;
//		cout << "Subject : " << Subject << endl;
//		cout << "Body : " << Body << endl;
//	}
//
//	void SendSMS(string TextMessage)
//	{
//		cout << "\nThe Following SMS sent successfully to Phone : " << _Phone << endl;
//		cout << TextMessage << endl;
//	}
//};
//
//class clsEmployee : public clsPerson 
//{
//
//private:
//	string _Title;
//	float _Salary;
//	string _Department;
//
//public:
//
//	void SetTitle(string Title)
//	{
//		_Title = Title;
//	}
//	string Title()
//	{
//		return _Title;
//	}
//
//	void SetSalary(float Salary)
//	{
//		_Salary = Salary;
//	}
//	float Salary() 
//	{
//		return _Salary;
//	}
//		
//	void SetDepartment(string Department)
//	{
//		_Department = Department;
//	}
//	string Department()
//	{
//		return _Department;
//	}
//
//};
// 
//int main() 
//{
//	clsEmployee Employee1;
//
//	Employee1.SetFirstName("Ahmad");
//	Employee1.SetFirstName("Yassin");
//	Employee1.SetEmail("Ahmad@gmail.com");
//	Employee1.SetPhone("0808080");
//	Employee1.PrintInfo();
//	Employee1.SendEmail("Hi","How Are You?");
//	Employee1.SendSMS("How Are You?");
//
//	Employee1.SetSalary(5000);
//
//	Employee1.PrintInfo();
//	
//
//	system("pause > 0");
//	return 0;
//}