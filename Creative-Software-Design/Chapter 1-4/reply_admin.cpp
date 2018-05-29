#include <iostream>
#include <string>
#include <stdio.h>
#include <regex>

using namespace std;
const int NUM_OF_CHAT = 200;

// Get the value of number of element in array
int getChatCount(string *_chatList)
{
	int i;
	for (i = 0; i<NUM_OF_CHAT; ++i)
	{
		string s = _chatList[i];
		if (s.empty() == true) break;
	}
	return i;
}

// Print the comments from string
void printChat(string *_chatList)
{
	int count = getChatCount(_chatList);
	for (int i = 0; i < count; ++i)
	{
		cout << i << " " << _chatList[i] << endl;
	}
}

// Insert new comment in array
bool addChat(string *_chatList, string _chat)
{
	if (getChatCount(_chatList) >= 200)
	{
		cout << "Elements has reached the limit (Max: 200)" << endl;
		return false;
	}
	else if (getChatCount(_chatList) < 0)
	{
		cout << "Elements value has reached the negative value" << endl;
		return false;
	}
	else
	{
		_chatList[getChatCount(_chatList)] = _chat;
		return true;
	}
}

// Remove old comment in array in three ways: just num, hyphen, comma
bool removeChat(string *_chatList, int _index)
{
	string temp;
	//cout << _chatList[_index] << endl;
	//cout << getChatCount(_chatList) << endl;
	//_index--;
	for (int i = _index; i < getChatCount(_chatList); i++)
		_chatList[i] = _chatList[i + 1];
	
	
	return true;
	
}

// Implement these functions
bool addChat(string *_chatList, string _chat); // returns true when adding chat is succeeded
bool removeChat(string *_chatList, int _index); // returns true when removing chat is succeeded
// Implement commented (/* */) areas in main function
int main(void)
{
	string* chats = new string[NUM_OF_CHAT];
	size_t pos;
	size_t hyphen;
	size_t comma;
	string str;
	string extractNum;
	string extractNum2;
	
	int hyphenNum1;
	int hyphenNum2;
	int Num;
	bool notNum;
	bool result;

	// First comments
	addChat(chats, "Hello, Reply Administrator!");
	addChat(chats, "I will be a good programmer.");
	addChat(chats, "This class is awesome.");
	addChat(chats, "Professor Lim is wise.");
	addChat(chats, "Two TAs are kind and helpful.");
	addChat(chats, "I think male TA looks cool.");

	while (true)
	{
		string command;

		getline(cin, command);

		// If typed #quit, end program
		if (command == "#quit") 
			break;

		// If typed #remove in command, process to remove coments 
		else if (command.find("#remove") != string::npos)
		{
			pos = command.find("#remove");
			
			str = command.substr(pos+8);
			comma = command.find(",");
			
			// If command has hyphen and comma, execute program
			if (command.find("-") !=string::npos && command.find(",") != string::npos)
			{
				return 0;
			}

			// If command has no hyphen and comma, just remove single number
			else if (command.find("-") == string::npos && command.find(",") == string::npos)
			{
				extractNum = str.substr(0);
				Num = stoi(extractNum);

				// If typed number is greater than actual total number of element (out of ranged), execute program
				if (Num > getChatCount(chats))
				{
					result = false;
					break;
				}

				// Return true if success
				result = removeChat(chats, Num);
			}

			//  If command has hyphen, process this statement
			else if (command.find("-") != string::npos)
			{
				hyphen = str.find("-");
				extractNum = str.substr(0, hyphen);
				extractNum2 = str.substr(hyphen + 1);
				hyphenNum1 = stoi(extractNum);
				hyphenNum2 = stoi(extractNum2);
				
				//cout << hyphenNum1 << " " << hyphenNum2 << endl;

				// If the number is greater than total element value, then convert typed number into maximum element value
				if (hyphenNum1 > getChatCount(chats))
					hyphenNum1 = getChatCount(chats);

				if (hyphenNum2 > getChatCount(chats))
					hyphenNum2 = getChatCount(chats);

				// Remove process
				for (int i = hyphenNum1; hyphenNum2 >= i; i++)
				{
					result = removeChat(chats, hyphenNum1);
				}
				
			}

			//  If command has comma
			else if (command.find(",") != string::npos) //Incomplete
			{
				comma = str.find(",");
				extractNum = str.substr(0, comma);				
				Num = stoi(extractNum);

				// Check if element is out of range 
				if (Num > getChatCount(chats))
				{
					result = false;
					break;
				}
				result = removeChat(chats, Num);
				extractNum2 = str.substr(comma + 1);
				
				Num = stoi(extractNum2);

				// Check if element is out of range 
				if (Num > getChatCount(chats))
				{
					result = false;
					break;
				}
				result = removeChat(chats, Num -1);
			}
			if (result == true) printChat(chats);
		}
		else if (addChat(chats, command)) 
			printChat(chats);
	}
	// delete chatting list
	delete[] chats;
	return 0;
}