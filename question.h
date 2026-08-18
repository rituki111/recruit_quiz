#pragma once
#include <string>
#include <vector>

//–â‘è•¶‚Æ“š‚¦‚ğ‚Ü‚Æ‚ß‚é\‘¢‘Ì
struct Question
{
	std::string q;			     //–â‘è•¶
	std::string a;				 //“š‚¦
	std::vector<std::string> b;  //“š‚¦(•¡”‚ ‚éê‡)
};

//–â‘è‚Ì”z—ñ‚ğ‚ ‚ç‚í‚·Œ^
using QuestionList = std::vector<Question>;

