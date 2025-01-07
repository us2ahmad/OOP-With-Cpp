//#include <iostream> 
//
//using namespace std;
//
//class clsEmployee 
//{
//private:
//	string _FirstName;
//	string _LastName;
//	float  _Salary;
//
//public:
//
//	clsEmployee(const string& FirstName, const string& LastName, const float& Salary)
//	{
//		_FirstName = FirstName;
//		_LastName = LastName;
//		_Salary = Salary;
//
//	}
//
//	// This is Copy Constuctor  (I can do without him because the Compiler does his job if he is not there)
//	/*clsEmployee(clsEmployee& Olb_Obj)
//	{
//		_FirstName = Olb_Obj.FirstName;
//		_LastName = Olb_Obj.LastName;
//		_Salary = Olb_Obj.Salary;
//	}*/
//
//	void SetFirstName(const string& FirstName ) 
//	{
//		_FirstName = FirstName;
//	}
//
//	string GetFirstName() 
//	{
//		return _FirstName;
//	}
//	__declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
//
//	void SetLastName(const string& LastName)
//	{
//		_LastName = LastName;
//	}
//	
//	string GetLastName()
//	{
//		return _LastName;
//	}
//	__declspec(property(get = GetLastName, put = SetLastName)) string LastName;
//
//	void SetSalary(const float& Salary)
//	{
//		_Salary = Salary;
//	}
//
//	float GetSalary() 
//	{
//		return _Salary;
//	}
//	__declspec(property(get = GetSalary, put = SetSalary)) float Salary;
//	
//	void Print() 
//	{
//		cout << "Employee Details" << endl;
//		cout << "FirstName : " << _FirstName << endl;
//		cout << "LastName : " << _LastName << endl;
//		cout << "Salary : " << _Salary << endl;
//	}
//};
//
//int main()
//{
//	clsEmployee Employee1("Ahmad" , "Yassin" , 1000);
//	Employee1.Print();
//	
//	// ##This Call Copy Constructor##
//	clsEmployee Employee2 = Employee1;
//	Employee1.Print();
//
//	Employee1.Print();
//	return 0;
//}