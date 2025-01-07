//#include <iostream>
//using namespace std;
//
//class clsEmployee 
//{
//private:
//
//	int _ID;
//	string _FirstName;
//	string _LastName;
//	string _Title;
//	string _Email;
//	string _Phone;
//	float _Salary;
//	string _Department;
//
//public:
//
//	clsEmployee(int ID,string FirstName,string LastName, string Title, string Email,string Phone,float Salary,string Department)
//	{
//		_ID = ID;
//		_FirstName = FirstName;
//		_LastName = LastName;
//		_Title = Title;
//		_Email = Email;
//		_Phone = Phone;
//		_Salary = Salary;
//		_Department = Department;
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
//	void SetTitle(string Title)
//	{
//		_Title = Title;
//	}
//	string Title()
//	{
//		return _Title;
//	}
//
//	void SetEmail(string Email)
//	{
//		_Email  = Email;
//	}
//	string Email()
//	{
//		return _Email;
//	}
//
//	void SetPhone(string Phone)
//	{
//		_Phone = Phone;
//	}
//	string Phone()
//	{
//		return _Phone;
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
//	string FullName() 
//	{
//		return _FirstName + " " + _LastName;
//	}
//
//	void PrintInfo() 
//	{
//		cout << "Info" << endl;
//		cout << "---------------------------" << endl;
//		cout << "ID         : " << _ID << endl;
//		cout << "First Name : " << _FirstName << endl;
//		cout << "Last Name  : " << _LastName << endl;
//		cout << "Full Name  : " << FullName() << endl;
//		cout << "Title      : " << _Title << endl;
//		cout << "Email      : " << _Email << endl;
//		cout << "Phone      : " << _Phone << endl;
//		cout << "Salary     : " << _Salary << endl;
//		cout << "Department : " << _Department << endl;
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
//
//};
//
//int main() 
//{
//	clsEmployee Employee1(10,"Ahmad","Yassin","Manager","Ahmad@gmail.com","09050050",90000,"Tech");
//	
//	Employee1.PrintInfo();
//	Employee1.SendEmail("Hi","How Are You ?");
//	Employee1.SendSMS("How Are You ?");
//	
//
//	return 0;
//}
