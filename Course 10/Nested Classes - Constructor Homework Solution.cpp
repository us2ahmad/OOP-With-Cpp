//#include<iostream>
//using namespace std;
//
//class clsPerson
//{
//    string _FullName;
//   
//    class clsAddress
//    {
//    private:
//        string _AddressLine1;
//        string _AddressLine2;
//        string _City;
//        string _Country;
//    public:
//
//        clsAddress(string AddressLine1, string AddressLine2, string City, string Country)
//        {
//            _AddressLine1 = AddressLine1;
//            _AddressLine2 = AddressLine2;
//            _City = City;
//            _Country = Country;
//
//        }
//
//        string setAddressLine1(string AddressLine1)
//        {
//            _AddressLine1 = AddressLine1;
//        }
//
//        string AddressLine1()
//        {
//            return _AddressLine1;
//        }
//
//        string setAddressLine2(string AddressLine2)
//        {
//            _AddressLine2 = AddressLine2;
//        }
//
//        string AddressLine2()
//        {
//            return _AddressLine2;
//        }
//
//        string setCity(string City)
//        {
//            _City = City;
//        }
//
//        string City()
//        {
//            return _City;
//        }
//
//        string setCountry(string Country)
//        {
//            _Country = Country;
//        }
//
//        string Country()
//        {
//            return _Country;
//        }
//
//        void Print()
//        {
//            cout << "\nAddress:\n";
//            cout << _AddressLine1 << endl;
//            cout << _AddressLine2 << endl;
//            cout << _City << endl;
//            cout << _Country << endl;
//        }
//    };
//
//public:
//
//    string setFullName(string FullName)
//    {
//        _FullName = FullName;
//    }
//
//    string FullName()
//    {
//        return _FullName;
//    }
//
//    clsAddress MyAddress;
//    //clsAddress Address = clsAddress("", "", "", "");
//
//    ////Dr.Mohammed Abu-Hadhoud Solution
//    //clsPerson(string FullName, string AddressLine1, string AddressLine2, string City, string Country)
//    //{
//    //    _FullName = FullName;
//
//    //    //initiate address class by it's constructor
//    //    Address = clsAddress(AddressLine1, AddressLine2, City, Country);
//
//    //}
//
//    //My Solution
//    clsPerson(string FullName, string AddressLine1, string AddressLine2, string City, string Country) 
//     : MyAddress(AddressLine1, AddressLine2,City,Country)
//    {
//        _FullName = FullName;
//    }
//};
//
//int main()
//{
//
//    clsPerson Person1("Ahmad Yassin", "Building 3", "Almedin Street", "Damascus", "Syria");
//
//    Person1.MyAddress.Print();
//
//    system("pause>0");
//    return 0;
//}