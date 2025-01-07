//#include <iostream>
//using namespace std;
//
//class clsCalculator
//{
//private:
//	float _LastNumber = 0;
//	float _PrevResult = 0;
//	float _Result = 0;
//	char _Operation = '+';
//	
//	bool _IsZero(float Number) 
//	{
//		return Number == 0;
//
//	}
//
//	void _Process(float Number)
//	{
//		_LastNumber = Number;
//		switch (_Operation)
//		{
//		case '+':
//			_PrevResult = _Result;
//			_Result += Number;
//			break;
//		case '-':
//			_PrevResult = _Result;
//			_Result -= Number;
//			break;
//		case '*':
//			_PrevResult = _Result;
//			_Result *= Number;
//			break;
//		case '/':
//			_PrevResult = _Result;
//			_Result /= Number;
//			break;
//		default:
//			break;
//		}
//	}
//
//public:
//
//	void Clear()
//	{
//		_PrevResult = 0;
//		_Result = 0;
//		_LastNumber = 0;
//		_Operation = ' ';
//	}
//
//	void Add(float Number)
//	{
//		_Operation = '+';
//		_Process(Number);
//	}
//
//	void Subtract(float Number)
//	{
//		_Operation = '-';
//		_Process(Number);
//	}
//
//	void Multiply(float Number)
//	{
//		_Operation = '*';
//		_Process(Number);
//	}
//
//	void Divide(float Number)
//	{
//		_Operation = '/';
//		Number = _IsZero(Number) ? 1 : Number;
//		_Process(Number);
//	}
//
//	void PrintResult()
//	{
//		switch (_Operation)
//		{
//		case '+':
//			cout << "Result After Adding " << _LastNumber << " is : " << _Result << endl;
//			break;
//		case '-':
//			cout << "Result After Subtracting " << _LastNumber << " is : " << _Result << endl;
//			break;
//		case '*':
//			cout << "Result After Multiplying " << _LastNumber << " is : " << _Result << endl;
//			break;
//		case '/':
//			cout << "Result After Dividing " << _LastNumber << " is : " << _Result << endl;
//			break;
//		default:
//			cout << "Result After Clear " << _LastNumber << " is : " << _Result << endl;
//			break;
//		}
//	}
//
//	void CancleLastOperation() 
//	{
//		_Result = _PrevResult;
//		cout << "Result After Canceling The Last Calculation" << " is : " << _PrevResult << endl;
//	}
//};
//
//int main()
//{
//	clsCalculator Calculator;
//
//	Calculator.Clear();
//
//	Calculator.Add(10);
//	Calculator.PrintResult();
//	
//	Calculator.Add(100);
//	Calculator.PrintResult();
//	
//
//	Calculator.Subtract(20);
//	Calculator.PrintResult();
//
//	Calculator.Divide(0);
//	Calculator.PrintResult();	
//	
//	Calculator.Divide(2);
//	Calculator.PrintResult();
//	
//	Calculator.Multiply(3);
//	Calculator.PrintResult();
//	
//	Calculator.CancleLastOperation();
//
//	Calculator.Add(100);
//	Calculator.PrintResult();
//
//	Calculator.Clear();
//	Calculator.PrintResult();
//
//	system("pause > 0");
//	return 0;
//}