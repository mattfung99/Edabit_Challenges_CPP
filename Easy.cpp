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

/*
** Problem 23: Hurdle Jump
*/
bool hurdleJump(std::vector<int> hurdles, int jumpHeight) {
	for (int i = 0; i < hurdles.size(); i++) {
		if (jumpHeight < hurdles[i])
			return false;
	}
	return true;
}

/*
** Problem 24: Reverse Coding Challenge 3
*/
/* This function stores the result of the modulo between the value at each index
and the num in a new array and returns that new array */
std::vector<int> mysteryFunc(std::vector<int> arr, int num) {
	std::vector<int> newArr;
	for (int i = 0; i < arr.size(); i++) 
		newArr[i] = arr[i] % num;
	return newArr;
}

/*
** Problem 25: Check if a Number is a Palindrome
*/
bool isPalindrome(int n) {
	int counter{ 0 }, temp{ n };
	do {
		temp /= 10;
		counter++;
	} while (temp > 0);
	int list[counter];
	for (int i = 0; i < counter; i++) {
		list[i] = n % 10;
		n /= 10;
	}
	for (int j = 0; j < (sizeof(list) / sizeof(list[0])); j++) {
		if (list[j] != list[(sizeof(list) / sizeof(list[0]) - 1 - j)])
			return false;
	}
	return true;
}

/* 
** Problem 26: String to Integer and Vice Versa
*/
int toInt(std::string string) {
	return toInt(string);
}

std::string toStr(int integer) {
	return toStr(integer);
}

/*
** Problem 27: Filter Repeating Character Strings
*/
std::vector<std::string> identicalFilter(std::vector<std::string> arr) {
	std::vector<std::string> myList;
	int x = 0, targetLocation = x;
	std::string target = arr[x];
	for ( ; x < arr.size(); x++) {
		if (arr[x] == target && targetLocation != x)
				return myList;
	}
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			if (arr[j] != arr[j + 1])
				continue;
			myList[i] = arr[i];
		}
	}
	return myList;
}

/*
** Problem 28: Count Ones in a 2D Array
*/
int count_ones(std::vector< std::vector<int> > matrix) {
	int numOne{ 0 };
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[i].size(); j++) {
			if (matrix[i][j] == 1)
				numOne++;
		}
	}
	return numOne;
}
	
/*
** Problem 29: Replacing Letters with Hashes
*/
std::string replace(std::string str, std::string r) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= r[0] && str[i] <= r[2])
			str[i] = '#';
	}
	return str;
}

/*
** Problem 30: Semantic Versioning
*/
using namespace std;

string retrieveMajor(string semver) {
	return string(semver.substr(0, int(semver.find('.')) - 0));
}

string retrieveMinor(string semver) {
	return string(semver.substr(int(semver.find_first_of('.') + 1), int(semver.find_last_of('.')) - 1 - int(semver.find_first_of('.'))));
}

string retrievePatch(string semver) {
	return string(semver.substr(int(semver.find_last_of('.')) + 1, semver.length() - 1 - int(semver.find_last_of('.'))));
}

/*
** Problem 31: Check if a Number is Prime
*/
bool isPrime(int num) {
	int divisor{ 2 };
	if (num <= 1)
		return false;
	while (divisor < num) {
		if (num % divisor == 0)
			return false;
		divisor++;
	}
	return true;
}

/*
** Problem 32: Digit Distance 
*/
int digitDistance(int num1, int num2) {
	int sum{ 0 };
	while (num1 > 0 && num2 > 0) {
		sum += abs(num1 % 10 - num2 % 10);
		num1 /= 10;
		num2 /= 10;
	}
	return sum;
}

/*
** Problem 33: Omnipresent Value
*/
bool isOmnipresent(std::vector<std::vector<int>> arr, int val) {
	int tracker{ 0 };
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			if (arr[i][j] == val) {
				tracker++;
			}
		}
		if (tracker < 1)
			return false;
		tracker = 0;
	}
	return true;
}

/*
** Problem 34: Move Capital Letters to the Front
*/
std::string capToFront(std::string str) {
	std::string upStr, lowStr;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 90) 
			lowStr += str[i];
		else 
			upStr += str[i];
	}
	return upStr + lowStr;
}

/*
** Problem 35: Counting Adverbs
*/
int countAdverbs(std::string s) {
	int num{ 0 };
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ' || s[i] == '.' || s[i] == ',') {
			if (s[i - 1] == 'y' && s[i - 2] == 'l')
				num++;
		}
	}
	return num;
}

/*
** Problem 36: Increment to Top
*/
int incrementToTop(std::vector<int> arr) {
	sort(arr.begin(), arr.end());
	int distance{ 0 };
	for (int i = 0; i < arr.size(); i++) {
		distance += arr[arr.size() - 1] - arr[i];
	}
	return distance;
}

/*
** Problem 37: Typing Game
*/
using namespace std;
vector<int> correctStream(vector<string> user, vector<string> correct) {
	vector<int> newArr;
	for (int i = 0; i < user.size(); i++) {
		for (int j = 0; j < user[i].size(); j++) {
			if (user[j] != correct[j]) {
				newArr[i] = -1;
				continue;
			}
		}
		newArr[i] = 1;
	}
	return newArr;
}

/*
** Problem 38: Valid Zip Code
*/
bool isValid(std::string zip) {
	for (int x = 0; x < zip.length(); x++) {
		if (zip[x] < 48 || zip[x] > 57 || zip.length() > 5)
			return false;
	}
	return true;
}

/*
** Problem 39: Moving to the End
*/
using namespace std;

vector<int> moveToEnd(vector<int> arr, int el) {
	int temp, index;
	for (int i = 0; i < arr.size() - 1; i++) {
		if (arr[i] == el) {
			temp = arr[i];
			index = i;
			for (int j = index; j < arr.size() - 1; j++) {
				arr[j] = arr[j + 1];
			}
			arr[arr.size() - 1] = temp;
			if (arr[0] == el) {
				temp = arr[0];
				for (int j = 0; j < arr.size() - 1; j++) {
					arr[j] = arr[j + 1];
				}
				arr[arr.size() - 1] = temp;
			}
		}
	}
	return arr;
}

/*
** Problem 40: Shift and Multliple Validators
*/
bool isShifted(std::vector<double> a1, std::vector<double> a2) {
	double shift = a2[0] - a1[0];
	for (int i = 0; i < a1.size(); i++) {
		if (a2[i] - a1[i] != shift)
			return false;
	}
	return true;
}

bool isMultiplied(std::vector<double> a1, std::vector<double> a2) {
	double multi = a2[0] / a1[0];
	for (int i = 0; i < a1.size(); i++) {
		if (a2[i] / a1[i] != multi)
			return false;
	}
	return true;
}

/*
** Problem 41: Get the File Extension
*/
std::vector<std::string> getExtension(std::vector<std::string> arr) {
	std::vector<std::string> strArr;
	for (int i = 0; i < arr.size(); i++) {
		strArr[i] = arr[i].substr(int(arr[i].find('.') + 1), arr.size() - 1 - int(arr[i].find('.')));
	}
	return strArr;
}

/*
** Problem 42: Find the Total Number of Digits the Given Number Has
*/
int findDigitAmount(int num) {
	int digits{ 0 }, temp{ num };
	while (temp > 0) {
		temp /= 10;
		digits++;
	}
	return (num == 0) ? 1 : digits;
}

/*
** Problem 43: Find the Minimum, Maximum, Length and Average Values
*/
std::vector<float> minMaxLengthAverage(std::vector<float> arr) {
	std::vector<float> results;
	results[2] = arr.size();
	for (int i = 0; i < arr.size(); i++) {
		results[3] += arr[i];
		if (arr[i] > results[1])
			results[1] = arr[i];
		if (arr[i] < results[0]) 
			results[0] = arr[i];
	}
	return results;
}

/* 
** Problem 44: Make a Circle with OOP
*/
#include <math.h>

class Rectangle {
	public:
    Rectangle(float theSideA, float theSideB){
      sideA = theSideA;
      sideB = theSideB;
    }
    float getArea() { return sideA * sideB; };
    float getPerimeter() { return (sideA + sideB) * 2; };
  private:
    float sideA;
    float sideB;
};

const float PI_F = 3.14f;

class Circle {
  // Write your code here
  // Please use PI_F constant
	float radius;	// default accessiblity of member variables are private in classes
	
	public:
		Circle (float theRadius) {
			radius = theRadius;
		}
		float getArea() { return PI_F * pow(radius, 2); };
    float getPerimeter() { return PI_F * 2 * radius; };
};

/*
** Problem 45: Phone Number Formatting
*/
std::string formatPhoneNumber(std::vector<int> numbers) {
	std::string phoneNumber{ "(" };
	for (int i = 0; i < numbers.size(); i++) {
		switch(i) {
			case 3:
				phoneNumber += ") ";
				break;
			case 6:
				phoneNumber += "-";
				break;
		}
		phoneNumber += std::to_string(numbers[i]);
	}
	return phoneNumber;
}

/*
** Problem 46: Purge and Organize
*/
std::vector<int> uniqueSort(std::vector<int> arr) {
	std::sort( arr.begin(), arr.end() );
	arr.erase( unique( arr.begin(), arr.end() ), arr.end() );
	return arr;
}

/*
** Problem 47: Sort by String Length
*/
std::vector<std::string> sortByLength(std::vector<std::string> arr) {
	std::string temp;
	for (int iteration = 0; iteration < (arr.size() - 1); iteration++) {
		for (int cycle = 0; cycle < arr.size() - iteration - 1; cycle++) {
			if (arr[cycle].size() > arr[cycle + 1].size()) {
					temp = arr[cycle];
					arr[cycle] = arr[cycle + 1];
					arr[cycle + 1] = temp;
			}
		}
	}
	return arr;
}

/*
** Problem 48: Is the Number a Prime?
*/
bool isPrime(int num) {
	int divisor{ 2 };
	if (num <= 1)
		return false;
	while (divisor < num) {
		if (num % divisor == 0)
			return false;
		divisor++;
	}
	return true;
}

/*
** Problem 49: Simple Circle Collision Detection
*/
#include <math.h>
bool isCircleCollision(std::vector<int> c1,std::vector<int> c2) {
	return (pow(c1[1] - c2[1], 2) + pow(c1[2] - c2[2], 2) <= pow(c1[0] + c2[0], 2)) ? true : false;  
}

/*
** Problem 50: Pi to N Decimal Places
*/
#include <cmath>
double myPi(int n) {
	return round(M_PI * pow(10, n)) / pow(10, n);
}
// OR
double myPi(int n) {
	return((round(3.141592653589793 * std::pow(10, n))) / (std::pow(10, n)));	
}

/*
** Problem 51: Amplify the Multiples of 4
*/
std::vector<int> amplify(int n) {
	std::vector<int> amps;
	for (int x = 1; x <= n; x++) {
		(x % 4 == 0) ? amps[x - 1] = x * 10 : amps[x - 1] = x;
	}
	return amps;
}

/*
** Problem 52: Retrieve the Subreddit
*/
std::string subReddit(std::string link) {
	link.pop_back();
	return link.substr(link.find_last_of('/') + 1);
}

/*
** Problem 53: Difference of Max and min Numbers in Array
*/
int differenceMaxMin(std::vector<int> arr) {
	int max = *std::max_element(arr.begin(), arr.end()), min = *std::min_element(arr.begin(), arr.end());
	return abs(max - min)
}
// OR
int differenceMaxMin(std::vector<int> arr) {
	return abs(*std::max_element(arr.begin(), arr.end()) - *std::min_element(arr.begin(), arr.end()));
}

/*
** Problem 54: N-Sized Parts
*/
using namespace std; 

vector<string> partition(string str, int n) {
	vector<string> newList;
	newList[0] = str.substr(str.at(0), n);
	newList[1] = str.substr(n + 1);
	return newList;
}

/*
** Problem 55: Format Number with Comma(s) Seperating Thousands
*/
std::string formatNum(int num) {
	std::string n;
	while (num > 0) {
		if (num % 1000 == 0) {
			n = std::to_string(num);
			n.insert(num / 1000, ",");
		}
		num /= 1000;
	}
	return n;
}
// OR
std::string formatNum(int num) {
	std::string numString = std::to_string(num);
	for (int i = numString.size() - 3; i > 0; i -= 3) {
		numString.insert(i, ",");
	}
	return numString;
}

/*
** Problem 56: Odd Up, Even Down
*/
std::vector<int> transform(std::vector<int> arr) {
	for (int i = 0; i < arr.size(); i++)
		arr[i] % 2 == 0 ? arr[i] -= 1 : arr[i] += 1;
	return arr;
}

/*
** Problem 57: Shuffle the Name
*/
std::string nameShuffle(std::string str) {
	return str.substr(int(str.find(' ') + 1)) + " " + str.substr(0, int(str.find(' ')));
}

/* 
** Problem 58: Factor Chain
*/
bool factorChain(std::vector<int> arr) {
	for (int i = 0; i < arr.size() - 1; i++) {
		if (arr[i + 1] % arr[i] != 0)
			return false;
	}
	return true;
}

/*
** Problem 59: Numeric Seesaw
*/
std::string seesaw(int num) {
	std::string myStr = std::to_string(num);
	if (myStr.length() % 2 == 0) {
		if (stoi(myStr.substr(0, (myStr.length() / 2))) > (stoi(myStr.substr(myStr.length() / 2)))) 
			return "left";
		else if (stoi(myStr.substr(0, (myStr.length() / 2))) < (stoi(myStr.substr(myStr.length() / 2))))
			return "right";
		else
			return "balanced";
	}
	else {
		if (stoi(myStr.substr(0, (myStr.length() / 2))) > (stoi(myStr.substr((myStr.length() / 2) + 1)))) 
			return "left";
		else if (stoi(myStr.substr(0, (myStr.length() / 2))) < (stoi(myStr.substr((myStr.length() / 2) + 1))))
			return "right";
		else
			return "balanced";
	}
}

/*
** Problem 60: Longest Sequence of Consecutive Zeros
*/
std::string longestZero(std::string str) {
	int longestLength{ 0 }, length{ 0 };
	std::string zeros;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '0') {
			length++;
			if (length > longestLength) {
				longestLength = length;
				zeros += str[i];
			}
		}
		else 
			length = 0;
	}
	return zeros;
}

/*
** Problem 61: Chocolate Dilemma
*/
bool testFairness(std::vector<std::vector<int>> agatha, std::vector<std::vector<int>> bertha) {
	int aSum{ 0 }, bSum{ 0 };
	for (int i = 0; i < agatha.size(); i ++) 
		aSum += agatha[i][0] * agatha[i][1]; 
	for (int x = 0; x < bertha.size(); x++) 
		bSum += bertha[x][0] * bertha[x][1];
	return aSum == bSum ? true : false;
}

/*
** Problem 62: Return the Sum of the Two Smallest Numbers
*/
double sumTwoSmallestNums(std::vector<double> arr) {
	std::sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] >= 0) {
			return arr[i] + arr[i + 1];
			break;
		}
	}
}

/*
** Problem 63: Capitalize the First Letter of Each Word
*/
std::string makeTitle(std::string s) {
	s.at(0) -= 32;
	for (int i = 0; i < s.length(); i++) {
		if (s.at(i) = ' ') 
			s.at(i + 1) -= 32;
	}
	return s;
}

/*
** Problem 64: The Conquering Queen
*/
bool canCapture(std::vector<std::string> queens) {
	if (queens[0].at(0) == queens[1].at(0) || queens[0].at(1) == queens[1].at(1))
		return true;
	else 
		return abs(queens[1].at(0) - queens[0].at(0)) == abs(queens[1].at(1) - queens[0].at(1));
}

/*
** Problem 65: Christmas Tree
*/
std::vector<std::string> tree(int h) {
	std::vector<std::string> myTree;
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= (h - i) * 2; j++) 
			myTree[i - 1] += " ";
		for (int k = i; k >= 1; k--)
			myTree[i - 1] += "#";
		for (int l = 2; l <= i; l++)
			myTree[i - 1] += "#";
	}
	return myTree;
}

/*
** Problem 66: Capture the Rook
*/
bool canCapture(std::vector<std::string> pieces) {
	return pieces[0].at(0) == pieces[1].at(0) || pieces[0].at(1) == pieces[1].at(1);
}

/*
** Problem 67: Left, Right Shift
*/
std::vector<int> leftShift(std::vector<int> arr, int num) {
	for (int i = 0; i < arr.size(); i++) {
		arr[i] += (num % arr.size());
		if (arr[i] > arr.size())  
			arr[i] -= arr.size();  
	}
	return arr;
}

std::vector<int> rightShift(std::vector<int> arr, int num) {
	for (int i = 0; i < arr.size(); i++) {
		arr[i] -= (num % arr.size());
		if (arr[i] <= 0)
			arr[i] += arr.size();
	}
	return arr;
}

/*
** Problem 68: Hitting the Jackpot
*/
bool testJackpot(std::vector<std::string> result) {
	for (int i = 0; i < result.size() - 1; i++) {
		if (result[i] != result[i + 1])
			return false;
	}
	return true;
}

/*
** Problem 69: Find Unique Character Strings
*/
std::vector<std::string> 
filterUnique(std::vector<std::string> arr) {
std::vector<std::string> myList;
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; arr[i].size() - 1; j++) {
			if (arr[i].at(0) == arr[i].at(j + 1))
				continue;
			myList[i] = arr[i];
		}
	}
	return myList;
}
	
/*
** Problem 70: Transform into an Array with No Duplicates
*/
std::vector<int> set(std::vector<int> arr) {
	std::sort( arr.begin(), arr.end() );
	arr.erase( unique( arr.begin(), arr.end() ), arr.end() );
	return arr;
}

/*
** Problem 71: First and Last Index
*/
using namespace std;
vector<int> charIndex(string word, char c) {
	vector<int> arr;
	arr[0] = word.find_first_of(c);
	arr[1] = word.find_last_of(c);
	return arr;
}

/*
** Problem 72: Calculate the Median
*/
float median(std::vector<int> arr) {
	std::sort(arr.begin(), arr.end());
	return arr.size() % 2 ? (static_cast<float>(arr[arr.size() / 2.0])) : static_cast<float>(((arr[arr.size() / 2.0] + arr[-1 + (arr.size() / 2.0)]) / 2.0));
}

/*
** Problem 73: Is the Word an Isogram?
*/
#include <cctype>
bool isIsogram(std::string s) {
	std::transform(s.begin(), s.end(), s.begin(), ::tolower);
	char c; 
	for (int i = 0; i < s.size(); i++) {
		c = s.at(i);
		for (int j = i + 1; j < s.size(); j++) {
			if (c == s.at(j))
				return false;
		}
	}
	return true;
}

/*
** Problem 74: Split Item Codes
*/
std::vector<std::string> splitCode(std::string item) {
	int index;
	std::vector<std::string> arr;
	for (int i = 0; i < item.size(); i++) {
		if (item.at(i) >= 48 && item.at(i) <= 57) {
			index = i;
			break;
		}
	}
	arr[0] = item.substr(0, item.size() - 1 - index);
	arr[1] = item.substr(index + 1);
}

