#include <bits/stdc++.h>
using namespace std;

int main(){
	int testCases;
	cin>>testCases;

	for (int i = 0; i < testCases; ++i)
	{

		// ************************************ Taking Inputs ************************************
		int num;
		cin>>num;

		// ************************************ Solution Here ************************************
		bool isDivBy3 = ((num-1)%3==0 || (num+1)%3==0) ? true : false ;

		if(isDivBy3) cout<<"First\n";
		else cout<<"Second\n";

	}

	return 0;
}


// ************************************ INTUTION ************************************
/*
	Here only two conditions are given, that is, if after '-1' or '+1' operations the
	number is divisible by 3 then First person will win, also if the number of operations
	exceed by 10 then automatically Second person will win. 
	But here if you observe, the number of operations can't exceed 10 because before 10
	operations only we can decide who will win. 
	Because if both player play optimally, then Second player won't let First 
	player to make the number divisible by 3, becasue whenever First person will try to make
	number divisible by 3 by '+1' or '-1' operation, then just after that Second person
	will take his turn and he will make the number again non-divisible by 3 with '+1' or
	'-1' operation.
	So for the win of First person, the number should be always equal to 
	'(anyNumberDivisibleBy3)+1' or '(anyNumberDivisibleBy3)-1', so that after '-1' or
	'+1' operation we should get number 'anyNumberDivisibleBy3' to make the First person
	win. But if we dont have number '(anyNumberDivisibleBy3)+1' or '(anyNumberDivisibleBy3)-1'
	then if both player play optimally then First person will always try to make the number
	divisible by 3 with '+1' or '-1' operations, and after First person's turn the Second 
	person will try to make the effort of First person useless by making the number again
	non-divisible by 3 with '+1' or '-1' operations.
	So In conclusion, if the number can become divisible by 3 by just one single operation of '+1' or '-1'
	then surely First person will win by taking his first turn and making the number divisible
	by 3, but if the number is not divisible by 3 by just one single operation of '+1' or '-1',
	then both the player will try their best way and then the number of operations will exceed by 10
	and then the Second person will win automatically. So to win the First person he has
	to make the number divisible by 3 in just one single operation of '+1' or '-1'.
*/