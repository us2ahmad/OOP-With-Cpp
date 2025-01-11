#pragma once
#include <iostream>
#include <vector>

using namespace std;

class clsString
{
private:
	string _Value;

	static bool LetterIsVowel(const char& Letter)
	{
		return (Letter=='a' || Letter == 'e' || Letter == 'i' || Letter == 'o' || Letter == 'u');
	}

public:
	
	clsString() 
	{
		_Value = " ";
	}

	clsString(string Value)
	{
		_Value = Value;
	}

	void SetValue(string Value) 
	{
		_Value = Value;
	}
	
	string GetValue() 
	{
		return _Value;
	}
	__declspec(property(get = GetValue, put = SetValue)) string Value;

	static short Length(string Text)
	{
		return Text.length();
	}
	
	short Length()
	{
		return Length(_Value);
	}

	static vector<string> Split(string Text, string Delim = " ")
	{
		vector<string> vWords;
		short pos = 0;
		string sWord = "";
		
		while ((pos = Text.find(Delim)) != string::npos)
		{
			sWord = Text.substr(0, pos);
		
			if (sWord != "")
				vWords.push_back(sWord);
		
			Text.erase(0, pos + Delim.length());
		}
		
		if (Text != "" && !vWords.empty())
			vWords.push_back(Text);
	
		return vWords;
	}

	vector<string> Split(string Delim = " ")
	{
		return Split(_Value, Delim);
	}

	static void UpperText(string& Text)
	{
		for (short i = 0; i < Text.length(); i++)
			Text[i] = toupper(Text[i]);
	}

	void UpperText()
	{
		return UpperText(_Value);
	}

	static void LowerText(string& Text)
	{
		for (short i = 0; i < Text.length(); i++)
			Text[i] = tolower(Text[i]);
	}

	void LowerText()
	{
		return LowerText(_Value);
	}

	static short GetCountUpperCase(const string& Text)
	{
		short count = 0;
		for (short i = 0; i < Text.length(); i++)
		{
			if (isupper(Text[i]))
				count++;
		}
		return count;
	}

	short GetCountUpperCase()
	{
		return GetCountUpperCase(_Value);
	}

	static short GetCountLowerCase(const string& Text)
	{
		short count = 0;
		for (short i = 0; i < Text.length(); i++)
		{
			if (islower(Text[i]))
				count++;
		}
		return count;
	}

	short GetCountLowerCase()
	{
		return GetCountLowerCase(_Value);
	}

	static short GetCountLetter(const string& Text,const char& Letter , bool MatchCase = true ) 
	{
		short count = 0;
		for (short i = 0; i < Text.length(); i++)
		{
			if (MatchCase)
			{
				if(Text[i] == Letter)
					count++;
			}
			else 
			{
				if (tolower(Text[i]) == tolower(Letter))
					count++;
			}
		}
		return count;
	}
	
	short GetCountLetter(const char& Letter, bool MatchCase = true) 
	{
		return GetCountLetter(_Value, Letter,MatchCase);
	}
	
	static short GetCountVowels(const string& Text) 
	{
		short count = 0;
		for (short i = 0; i < Text.length(); i++)
		{
			if (LetterIsVowel(tolower(Text[i])))
				count++;
		}
		return count;
	}

	short GetCountVowels()
	{
		return GetCountVowels(_Value);
	}

	static	short CountWords(string Text)
	{
		short countWords = 0;
		short pos = 0;
	
		while ( (pos = Text.find(" ")) != string::npos)
		{
			if (Text.substr(0, pos) != "")
				countWords++;
	
			Text.erase(0, pos + 1);
		}
	
		if (Text != "")
			countWords++;
	
		return countWords;
	}

	short CountWords()
	{
		return CountWords(_Value);
	}

	static string TrimRight(string Text)
	{
		for (short i = Text.length() - 1; i >= 0; i--)
		{
			if (Text[i] != ' ')
			{
				return Text.erase(i + 1 , Text.length() - 1);
			}
		}
	
		return "";
	}

	void TrimRight()
	{
		_Value = TrimRight(_Value);
	}
	
	static string TrimLeft(string Text)
	{
		for (short i = 0; i < Text.length(); i++)
		{
			if (Text[i] != ' ')
			{
				return Text.erase(0, i);
			}
		}	
	
		return "";
	}

	void TrimLeft()
	{
		_Value = TrimLeft(_Value);
	}

	static string Trim(string Text)
	{
		return TrimLeft(TrimRight(Text));
	}

	void Trim()
	{
		_Value = Trim(_Value);
	}

	static string ReverseWords(string Text)
	{
		vector<string> vWords = SplitString(Text," ");
		string text = "";
	
		for (int i = vWords.size() - 1 ; i >= 0 ; i--)
		{
			text += vWords[i] + ( i > 0 ? " " : "" );
		}
	
		return text;
	}

	void ReverseWords()
	{
		_Value = ReverseWords(_Value);
	}

	static string ReplaceWordInStringUsingBuiltInFunction(string Text, string OldWord, string NewWord)
	{
		short pos = Text.find(OldWord);
	
		while (pos != string::npos)
		{
			Text = Text.replace(pos, OldWord.length(), NewWord);
			pos = Text.find(OldWord);
		}
	
		return Text;
	}

	void ReplaceWordInStringUsingBuiltInFunction(string OldWord, string NewWord)
	{
		_Value = ReplaceWordInStringUsingBuiltInFunction(_Value, OldWord,NewWord);
	}

	static string RemovePunctuations(const string& Text) 
	{
		string newText = "";
	
		for (short i = 0; i < Text.length(); i++)
		{	
			if (ispunct(Text[i]))
				continue;
	
			newText += Text[i];
		}
	
		return newText;
	}

	void RemovePunctuations()
	{
		_Value = RemovePunctuations(_Value);
	}

};

