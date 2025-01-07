//#include <iostream>
//using namespace std;
//
//class clsPerson 
//{
//private:
//	int _ID = 1;
//	string _FirstName;
//	string _LastName;
//
//public:
//
//	//Property Get This is Read only Property because we don’t have a set function
//	int ID()
//	{
//		return _ID;
//	}
//
//	//Property Set
//	void setFirstName(const string& FirstName) 
//	{
//		_FirstName = FirstName;
//	}
//
//	//Property Get
//	string FirstName() 
//	{
//		return _FirstName;
//	}
//		
//	//Property Set
//	void setLastName(const string& LastName)
//	{
//		_LastName = LastName;
//	}
//
//	//Property Get
//	string LastName()
//	{
//		return _LastName;
//	}
//
//	string FullName() 
//	{
//		return _FirstName + "-" + _LastName;
//	}
//
//};
//
//int main() 
//{
//	clsPerson Person1;
//
//	Person1.setFirstName("Ahmad");
//	Person1.setLastName("Tabash");
//
//	cout << "ID : " << Person1.ID()<<endl;
//	cout << "First Name : " << Person1.FirstName()<<endl;
//
//	cout << "Last Name : " << Person1.LastName()<<endl;
//
//	cout << "Full Name : " << Person1.FullName()<<endl;
//
//	return 0;
//}