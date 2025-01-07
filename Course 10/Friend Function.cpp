//#include<iostream>
//using namespace std;
//
//class clsA
//{
//private:
//    int _Var1;
//
//protected:
//    int _Var3;
//
//public:
//    int Var2;
//
//    clsA()
//    {
//        _Var1 = 10;
//        Var2 = 20;
//        _Var3 = 30;
//    }
//
//    friend int MySum(clsA A1);    //friend function 
//    friend int Fun2();    //friend function 
//
//};
//
////this function is normal function and not a member of any class
//int MySum(clsA A1)
//{
//    return A1._Var1 + A1.Var2 + A1._Var3;
//}
//
//int Fun2()
//{
//    clsA _A;
//    _A._Var1 = 20;
//    return _A._Var1 + _A.Var2 + _A._Var3;
//}
//
//int main()
//{
//    clsA A1;
//
//    cout << MySum(A1)<<endl;
//    cout << Fun2();
//
//    system("pause>0");
//
//    return 0;
//};