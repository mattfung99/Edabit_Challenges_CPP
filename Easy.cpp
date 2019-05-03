/* 
** Problem 1: Get the Century
*/
std::string century(int year) {
	if (year > 2000)
		return "21st century";
	else
		return (year % 1000 == 0) ? std::to_string(year / 100) + "th century" : std::to_string((year / 100) + 1) + "th century";
}

/* 
** Problem 2: Palindrome?
*/
bool checkPalindrome(std::string str) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != str[str.length() - 1 - i])
			return false;
	}
	return true;
}

/*
** Problem 3: Remove Every Vowel from a String
*/
std::string removeVowels(std::string str) {
	std::string newString;
	for (int i = 0; i < str.length(); i++) {
		if (tolower(str[i]) == 97 || tolower(str[i]) == 101 || tolower(str[i]) == 105 || tolower(str[i]) == 111 || tolower(str[i]) == 117) 
			continue;
		newString[i] += str[i];
	}
	return newString;
}
// OR
#include <regex>
std::string removeVowels(std::string str) {
   return std::regex_replace(str, std::regex("[aeiouAEIOU]"), std::string(""));
}

/*
** Problem 4: Partially Hidden String
*/
using namespace std;
string partiallyHide(string phrase) {
	for (int i = 1; i < phrase.size() - 1; i++){
		if (phrase[i + 1] == ' '){
			i += 2;
		}
        else {
			phrase[i] = '-';
		}
	}
	return phrase;
}

/*
** Problem 5: Sum of all Evens in a Matrix
*/
int sumOfEvens(std::vector<std::vector<int>> arr) {
	int sum{ 0 };
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++){
			if (arr[i][j] % 2 == 0)
				sum += arr[i][j];
		}
	}
	return sum;
}

/*
** Problem 6: Negative Image
*/
std::vector<std::vector<int>> reverseImage(std::vector<std::vector<int>> image) {
	for (int i = 0; i < image.size(); i++) {
		for (int j = 0; j < image[i].size(); i++) {
			if (image[i][j] == 0)
				image[i][j]++;
			else 
				image[i][j]--;
		}
	}
	return image;
}

/*
** Problem 7: Convert to Decimal Notation
*/
using namespace std;

vector<double> convertToDecimal(vector<string> perc) {
	vector<double> myArr;
	for (int i = 0; i < perc.size(); i++) {
		perc[i].erase(remove(perc[i].begin(), perc[i].end(), '%'), perc[i].end());
	}
	for (int j = 0; j < perc.size(); j++) {
		myArr[j] = stod(perc[j]) / 100; 
	}
	return myArr;
}

/*
** Problem 8: Transforming Words into Binary Strings
*/
std::string convertBinary(std::string str) {
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 97 && str[i] <= 109)
			str[i] = '0';
		else if (str[i] >= 110 && str[i] <= 122)
			str[i] = '1';
	}
	return str;
}
// OR
std::string convertBinary(std::string str) {
	std::string out;
	for(int i = 0; i < str.length(); i++){
		out += ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M')) ? '0' : '1';
	}
	return out;
}

/*
** Problem 9: GCD of Two Numbers
*/
int gcd(int n1, int n2) {
	int divisor{ 1 }, max{ divisor };
	do {
		if (n1 % divisor == 0 && n2 % divisor == 0)
			max = divisor;
		divisor++;
	} while (divisor <= n1 || divisor <= n2);
	return max;
}

/*
** Problem 10: Spelling it Out
*/
std::vector<std::string> spelling(std::string str) {
	std::vector<std::string> stringList;
	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j <= i; j++)
			stringList[i] += str[j];
	}
	return stringList;
}

/*
** Problem 11: Barbecue Skewers
*/
std::vector<int> bbqSkewers(std::vector<std::string> grill) {
	std::vector<int> skw;
	int tracker{ 0 };
	for (int i = 0; i < grill.size(); i++) {
		for (int j = 0; j < grill[i].size(); j++) {
			if (grill[i][j] == 'x')
				tracker++;
		}
		(tracker == 0) ? skw[0] += 1 : skw[1] += 1;
		tracker = 0;
	}
	return skw;
}

/*
** Problem 12: Sum of Digits Between Two Numbers
*/
int sumDigits(int a, int b)
{
	int sum{0}, i{a};
	while (a <= b) {
		do {
			sum += i % 10;
			i /= 10;
		} while (i > 0);
		a++;
		i = a;
	}
	return sum;
}

/*
** Problem 13: Index Shuffle
*/
std::string indexShuffle(std::string str) {
	std::string myStr;
	for (int i = 0; i < str.length(); i += 2) 
		myStr += str[i];
	for (int j = 1; j < str.length(); j += 2)
		myStr += str[j];
	return myStr;
}

/*
** Problem 14: X and Y Coordinates
*/
std::vector<std::vector<int>> convertCartesian(std::vector<int> x, std::vector<int> y) {
	std::vector<std::vector<int>> my2DArr;
	for (int i = 0; i < x.size(); i++) {
		my2DArr[i][0] = x[i];
		my2DArr[i][1] = y[i];		// I made a mistake on my solution on Edabit... it should be my2DArr[i][1] instead of my2DArr[i][0]
	}
	return my2DArr;
}

/*
** Problem 15: Return the Factorial
*/
int factorial(int n) {
	int fac{ 1 };
	for ( ; n > 0; n--) 
		fac *= n;
	return fac;
}
// OR (Recursion)
int factorial(int n) {
	return (n <= 1) ? 1 : n * factorial(n - 1);
}

/*
** Problem 16: Little Dictionary
*/
std::vector<std::string>
dictionary(std::string initial, std::vector<std::string> words) {
	std::vector<std::string> lDict;
	for (int i = 0; i < words.size(); i++) {
		for (int j = 0; j < initial.length(); j++) {
			if (initial[j] != words[i].at(j))
				continue;
			lDict[i] == words[i];
		}
	}
	return lDict;
}

/*
** Problem 17: Chat Room Status
*/
std::string chatroomStatus(std::vector<std::string> users) {
	switch(users.size()) {
		case 0:
			return "no one online";
		case 1:
			return users[0] + " online";
		case 2:
			return users[0] + " and " + users[1] + " online";
		default:
			return users[0] + ", " + users[1] + " and " + std::to_string(users.size() - 2) + " more online"; 
	}
}

/*
** Problem 18: State Names and Abbreviations
*/
std::vector<std::string> filterStateNames(std::vector<std::string> states, std::string type) {
	std::vector<std::string> stateList;
	for (int i = 0; i < states.size(); i++) {
		if (states[i].length() == 2 && type[0] == 'a')
			stateList[i] = states[i];
		if (states[i].length() > 2 && type[0] == 'f')
			stateList[i] = states[i];
	} 
	return stateList;
}

/*
** Problem 19: Convenience Store
*/
bool changeEnough(std::vector<int> change, int amountDue) {
	return float(change[0] * .25 + change[1] * .10 + change[2] * 0.05 + change[3] * 0.01) > amountDue ? true : false;
}

/*
** Problem 20: The Museum of Incredibly Dull Things
*/
std::vector<int> removeSmallest(std::vector<int> arr) {
	int min{ arr[0] }, index{ 0 };
	std::vector<int> newArr;
	for (int i = 0; i < arr.size(); i++) {
		if (min > arr[i]) {
			min = arr[i];
			index = i;
			continue;
		}
		newArr[i] = arr[i];
	}
	for (int j = index; j < arr.size(); j++) 
		newArr[j] = arr[j + 1];
	return newArr;
}

/*
** Problem 21: Filter by Digit Length
*/
#include <cmath>
std::vector<int> filterDigitLength(std::vector<int> arr, int n) {
	std::vector<int> list;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > pow(10, n) && arr[i] < pow(10, n + 1))
			list[i] = arr[i];
	}
	return list;
}

/*
** Problem 22: Special Arrays
*/
bool isSpecialArray(std::vector<int> arr) {
	for (int i = 0; i < arr.size(); i += 2) {
		if (arr[i] % 2 == 1)
			return false;
	}
	for (int j = 1; j < arr.size(); j += 2) {
		if (arr[j] % 2 == 0)
			return false;
	}
	return true;
}