#include <iostream>
#include <string>
#include <random>
using namespace std;

//問題文と答えをまとめる構造体
struct Question
{
	string q;  //問題文
	int a;     //答え
};

int main()
{
	Question question[3];

	random_device rd;
	mt19937 rand(rd());

	//掛け算
	int x = uniform_int_distribution<>(1, 30)(rand);
	int y = uniform_int_distribution<>(1, 20)(rand);
	question[0].q = to_string(x) + "x" + to_string(y);
	question[0].a = x * y;

	//割り算
	x = uniform_int_distribution<>(1, 30)(rand);
	y = uniform_int_distribution<>(1, 20)(rand);
	question[1].q = to_string(x * y) + "÷" + to_string(y);
	question[1].a = x;

	//複雑な式
	x = uniform_int_distribution<>(1, 100)(rand);
	y = uniform_int_distribution<>(1, 10)(rand);
	int z = uniform_int_distribution<>(1, 10)(rand);
	int w = uniform_int_distribution<>(1, 10)(rand);
	question[2].q =
		to_string(x) + "-(" + to_string(y * w) + "+" + to_string(z * w) + ")÷" +
		to_string(w);
	question[2].a = x - (y + z);

	cout << "[リクルート試験対策クイズ]\n";

	for (const auto& e : question)
	{
		cout << e.q << "の答えは？\n";

		int answer;
		cin >> answer;
		if (answer == e.a)
		{
			cout << "正解！\n";
		}
		else
		{
			cout << "間違い！正解は" << e.a << "\n";
		}
	}  //for question
}