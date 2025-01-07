//#include<iostream>
//using namespace std;
//
////struct stAddress
////{
////private:
////    string _A;
////
////public:
////    string AddressLine1;
////    string AddressLine2;
////    string City;
////    string Country;
////
////    //This Is Friend Class
////    friend clsPerson;
////};
//
//class clsPerson
//{
//
//    struct stAddress
//    {
//    private:
//        string _A;
//
//    public:
//        string AddressLine1;
//        string AddressLine2;
//        string City;
//        string Country;
//
//        //This Is Friend Class
//        friend clsPerson;
//    };
//public:
//
//    string FullName;
//    stAddress Address;
//
//    clsPerson()
//    {
//        FullName = "Ahmad Yassin";
//        Address.AddressLine1 = "Building 3";
//        Address.AddressLine2 = "Almedin Street";
//        Address.City = "Damascus";
//        Address.Country = "Syria";
//        Address._A = "FreeSyria";
//    }
//
//    void PrintAddress()
//    {
//        cout << "\nAddress:\n";
//        cout << Address.AddressLine1 << endl;
//        cout << Address.AddressLine2 << endl;
//        cout << Address.City << endl;
//        cout << Address.Country << endl;
//        cout << Address._A << endl;
//    }
//};
//
//int main()
//{
//    clsPerson Person1;
//
//    Person1.PrintAddress();
//
//    system("pause>0");
//    return 0;
//}