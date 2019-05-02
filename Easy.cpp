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
