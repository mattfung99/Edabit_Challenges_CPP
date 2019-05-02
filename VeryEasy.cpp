/* 
** Problem 1: Area of a Triangle
*/
int triArea(int base, int height) {
    return (base * height) / 2;
}


/* 
** Problem 2: How Edabit Works
*/
bool returnTrue() {
    return true;
}


/*
** Problem 3: The Farm Problem
*/
int animals(int chickens, int cows, int pigs) {
    return (chickens * 2) + (cows * 4) + (pigs * 4);
}

/* 
** Problem 4: Return the Sum of Two Numbers
*/
int addition(int a, int b) {
	return a + b;
}

/*
** Problem 5: Return the Next Number from the Integer Passed
*/
int addition(int a) {
	return a + 1;
}

/* 
** Problem 6: Check if an Integer is Divisible By Five
*/
bool divisibleByFive(int num) {
	return num % 5 == 0;
}

/*
** Problem 7: Is the Number Less than or Equal to Zero?
*/
bool lessThanOrEqualToZero(int num)
{
    return num <= 0;
}

/*
** Problem 8: Return the Remainder from Two Numbers
*/
int remainder(int x, int y)
{
    return x % y;
}

/* 
** Problem 9: Flip the Boolean
*/
bool reverse(bool boolean) {
	return !boolean;
}

/* 
** Problem 10: Profitable Gamble
*/
bool profitableGamble(float prob, int prize, float pay)
{
    return (prob * prize - pay) > 0;
}

/*
** Problem 11: Is it Time for Milk and Cookies
*/
bool timeForMilkAndCookies(int year, int month, int day)
{
    return month == 11 && day == 24;
}

/*
** Problem 12: Multiple of 100
*/
bool divisibleByHundred(int num)
{
    return num % 100 == 0;
}

/*
** Problem 13: Return the Last Element in an Array
*/
int getLastItem(int arr[], int length)
{
    return arr[length - 1];
}

/* 
** Problem 14: Is the Number Even or Odd?
*/
std::string isEvenOrOdd(int num)
{
    return (num % 2) ? "odd" : "even";
}

/*
** Problem 15: Is the String Empty?
*/
bool isEmpty(std::string str)
{
    return str.empty();
}

/*
** Problem 16: SLice of Pie
*/
bool equalSlices(int total, int people, int each)
{
    return people * each <= total;
}

/* 
** Problem 17: Char-to-ASCII
*/
unsigned short ctoa(char c)
{
    return unsigned(c);
}

/*
** Problem 18: Compare Strings by Sum of Characters
*/
bool comp(std::string str1, std::string str2)
{
    return str1.length() == str2.length();
}

/* 
** Problem 19: Concatenate First and Last Name into One String
*/
std::string concatName(std::string firstName, std::string lastName)
{
    return lastName + ", " + firstName;
}


/*
** Problem 20: Find the Index
*/
using namespace std;
int findIndex(vector<string> arr, string str)
{
    for (int i{0}; i < arr.size(); i++)
    {
        if (str == arr[i])
            return i;
    }
}

/*
** Problem 21: Convert Number to Corresponding Month Name
*/
std::string monthName(int num)
{
    switch (num)
    {
        case 1:
            return "January";
            break;
        case 2:
            return "February";
            break;
        case 3:
            return "March";
            break;
        case 4:
            return "April";
            break;
        case 5:
            return "May";
            break;
        case 6:
            return "June";
            break;
        case 7:
            return "July";
            break;
        case 8:
            return "August";
            break;
        case 9:
            return "September";
            break;
        case 10:
            return "October";
            break;
        case 11:
            return "November";
            break;
        case 12:
            return "December";
            break;
    }
}

/*
** Problem 22: Convert Number to String of Dashes
*/
std::string Go(int num)
{
    std::string message;
    for (int i = 1; i <= num; i++)
    {
        message += "-";
    }
    return message;
}

/*
** Problem 23: Smaller String Number
*/
std::string smallerNum(std::string num1, std::string num2)
{
    return (stoi(num1) < stoi(num2)) ? num1 : num2;
}

/*
** Problem 24: Calculate Determinant of a 2x2 Matrix
*/
int calc_determinant(std::vector<std::vector<int>> arr)
{
    return arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
}

/*
** Problem 25: Word Endings
*/
std::vector<std::string> addEnding(std::vector<std::string> arr, std::string ending)
{
    for (int i{0}; i < arr.size(); i++)
    {
        arr[i] += ending;
    }
    return arr;
}

/*
** Problem 26: Add up the Numbers from a Single Number
*/
int addUp(int num)
{
    int sum{0};
    for (int i{0}; i <= num; i++)
    {
        sum += i;
    }
    return sum;
}

/*
** Problem 27: Is the Word Singular or Plural?
*/
bool isPlural(std::string word)
{
    return word.find("s") == word.length() - 1;
}

/*
** Problem 28: Repeat the Same Item Multiple Times
*/
std::vector<std::string> repeat(std::string item, int times) {
	std::vector<std::string> message(times);
	for (int i{ 0 }; i < times; i++) 
		message[i] = item;
	return message;
}

/*
** Problem 29: Generate a Countdown of Numbers in an Array
*/
std::vector<int> countdown(int start) {
	std::vector<int> list(start + 1);
	for (int i = 0; i <= start; i++) 
			list[i] = start - i; 
	return list;
}

/*
** Problem 30: Additive Inverse
*/
std::vector<int> additiveInverse(std::vector<int> arr) {
	for (int i{ 0 }; i < arr.size(); i++) 
		arr[i] *= -1;
	return arr;
}

/*
** Problem 31: Return the Indexc of the First Vowel
*/
int firstVowel(std::string str) {
	for (int i{ 0 }; i < str.length(); i++) {
		switch (std::tolower(str.at(i))) {
			case 'a': case 'e': case 'i': case 'o': case 'u': 
				return i;
				break;
		}
	}
}

/* 
** Problem 32: Check String for Spaces
*/
bool hasSpaces(std::string str) {
	char ch = 32;
	for (int i{ 0 }; i < str.length(); i++) {
		if (str[i] == ch) 
			return true;
	}
	return false;
}

/*
** Problem 33: Even Number Generator
*/
std::vector<int> findEvenNums(int num) {
	std::vector<int> list;
	for (int i{ 1 }; i <= num; i++)
		if (i % 2 == 0)
			list[i] = i;
	return list;
}

/*
** Problem 34: Vowel Replacer
*/
std::string replaceVowels(std::string str, char ch) {
	for (int i{ 0 }; i < str.length(); i++) {
		switch (str[i]) {
			case 'a': case 'e': case 'i': case 'o': case 'u':
				str[i] = ch;
		}
	}
	return str;
}

/*
** Problem 35: Product of All Odd Integers
*/
int oddProduct(std::vector<int> arr) {
	int prod{ 1 };
	for (int i{ 0 }; i < arr.size(); i++) {
		if (arr[i] % 2 == 1) {
			prod *= arr[i];
		}
	}
	return prod;
}

/* 
** Problem 36: Missing Third Angle
*/
std::string missingAngle(int angle1, int angle2) {
	if (180 - angle1 - angle2 > 90) 
		return "obtuse";
	else if (180 - angle1 - angle2 < 90)
		return "acute";
	else
		return "right";
}

/*
** Problem 37: Multiply by Length
*/
std::vector<int> multiplyByLength(std::vector<int> arr) {
	for (int i{ 0 }; i < arr.size(); i++) 
		arr[i] *= arr.size();
	return arr;
}

/* 
** Problem 38: Strange Pair
*/
bool isStrangePair(std::string str1, std::string str2) {
	return (str1.at(str1.length() - 1) == str2.at(0) && str1.at(0) == str2.at(str2.length() - 1)) ? true : false;
}

/*
** Problem 39: Find the Largest Number in an Array
*/
int findLargestNum(int arr[], int length) {
	int max{ arr[0] };
	for (int i{ 0 }; i < length; i++) {
		if (max < arr[i])
				max = arr[i];
	}
	return max;
}

/*
** Problem 40: To the Power of_____
*/
double calculateExponent(double num1, double num2) {
	long product{ 1 };
	for (int i{ 1 }; i <= num2; i++) {
		product *= num1;
	}
	return product;
}

/*
** Problem 41: Next Element in Arithmetic Sequence
*/
int nextElement(std::vector<int> arr) {
	return arr[1] - arr[0] + arr[arr.size() - 1];
}


/*
** Problem 42: Find the Smallest Number in an Array
*/
int findSmallestNum(int arr[], int length) {
	int min{ arr[0] };
	for (int i{ 0 }; i < length; i++) {
		if (min < arr[i])
			min = arr[i];
	}
	return min;
}

/*
** Problem 43: Return the Index of All Capital Letters
*/
std::vector<int> indexOfCaps(std::string str) {
	std::vector<int> indexList;
	for (int i{ 0 }; i< str.length(); i++) {
		if (str[i] >= 65 && str[i] <= 90)
			indexList[i] = i;
	}
	return indexList;
}

/*
** Problem 44: Concatenating Two Integer Vectors
*/
std::vector<int> concat(std::vector<int> arr1, std::vector<int> arr2) {
	arr1.reserve(arr1.size() + arr2.size()); 
	arr1.insert(arr1.end(), arr2.begin(), arr2.end());
	return arr1;
}

/*
** Problem 45: Hamming Distance
*/
int hammingDistance(std::string str1, std::string str2) {
	int count{ 0 };
	for (int i{ 0 }; i < str1.size(); i++) {
		if (str1[i] != str2[i])
			count++;
	}
	return count;
}

/*
** Problem 46: Nth Smallest Element
*/
int nthSmallest(std::vector<int> arr, int n) {
	std::sort(arr.begin(), arr.end());
	return (n > arr.size()) ? -1 : arr[n - 1];
}

/*
** Problem 47: Capitalize by ASCII
*/
std::string asciiCap(std::string str) {
	for (int i{ 0 }; i < str.length(); i++)	{
		if (int(str[i]) % 2 == 0)
			str[i] = toupper(str[i]);
		else
			str[i] = tolower(str[i]);
	}
	return str;
}

/*
** Problem 48: Sum of Cubes
*/
#include <math.h>
int sumOfCubes(std::vector<int> nums) {
	int sum{ 0 };
	for (int i{0}; i < nums.size(); i++) {
		sum += pow(nums[i], 3);
	}
	return sum;
}

/*
** Problem 49: Absolute Sum
*/
int getAbsSum(std::vector<int> arr) {
	int sum{0};
	for (int i{0}; i < arr.size(); i++)
		sum += abs(arr[i]);
	return sum;
}

/* 
** Problem 50: Check if One Array can be Nested in Another
*/
bool canNest(std::vector<int> arr1, std::vector<int> arr2) {
	std::sort(arr1.begin(), arr1.end());
	std::sort(arr2.begin(), arr2.end());
	return arr1[0] > arr2[0] && arr1[arr1.size() - 1] < arr2[arr2.size() - 1];
}

/*
** Problem 51: Remove the First and Last Characters
*/
std::string removeFirstLast(std::string str) {
	return str.substr(1, str.size() - 2);
}

/* 
** Problem 52: Largest Swap
*/
bool largestSwap(int num) {
	return !(num % 10 > num / 10);
}

/*
** Problem 53: Check Factors
*/
bool checkFactors(std::vector<int> factors, int num) {
	for (int i{0}; i < factors.size(); i++) {
		if (num % factors[i] != 0) 
			return false;
	}
	return true;
}

/*
** Problem 54: Find the Smallest and Biggest Numbers
*/
using namespace std;
vector<float> minMax(vector<float> arr) {
	vector<float> list;
	float min{ arr[0] }, max{ min };
	for (int i{0}; i < arr.size(); i++) {
		if (max < arr[i])
			list[1] = arr[i];
		if (min > arr[i]) 
			list[0] == arr[i];
	}
}

/* 
** Problem 55: Maskify the String
*/
std::string maskify(std::string str) {
	if (str.length() <= 4)
		return str;
	else {
		for (int i{0}; i < str.length() - 4; i++) {
			str[i] = 35;
		}
		return str;
	}
}

/*
** Problem 56: Sort Numbers in Ascending Order
*/
std::vector<int> sortNumsAscending(std::vector<int> arr) {
	std::sort(arr.begin(), arr.end());
	return arr;
}

/*
** Problem 57: How Many Vowels?
*/
int countVowels(std::string str) {
	int count{ 0 };
	for (int i{ 0 }; i < str.length(); i++) {
		if ((tolower(str[i] == 'a')) || (tolower(str[i] == 'e')) || (tolower(str[i] == 'i')) || (tolower(str[i] == 'o')) || (tolower(str[i] == 'u'))) 
			count++;
	}
	return count;
}

/*
** Problem 58: Minimum Removals to Make Sum Even
*/
int minimumRemovals(std::vector<int> arr) {
	int odd{ 0 };
	for (int i{ 0 }; i < arr.size(); i++) {
		if (arr[i] % 2 == 1) 
			odd++;
	}
	return (odd % 2 == 1) ? 1 : 0;
}

/*
** Problem 59: Eliminate Odd Numbers within an Array
*/
std::vector<int> noOdds(std::vector<int> arr) {
	std::vector<int> evenList;
	for (int i{ 0 }; i < arr.size(); i++) {
		if (arr[i] % 2 == 0)
			evenList[i] = arr[i];
	}
	return evenList;
}

/*
** Problem 60: Return the Four Letter Strings
*/
std::vector<std::string> isFourLetters(std::vector<std::string> arr) {
	std::vector<std::string> fourLetterList;
	for (int i{ 0 }; i < arr.size(); i++) {
		if (arr[i].length() == 4)
			fourLetterList[i] = arr[i];
	}
	return fourLetterList;
}

/*
** Problem 61: Get Word Count
*/
int countWords(std::string str) {
	int spaces{ 0 };
	for (int i{ 0 }; i < str.length(); i++) {
		if (str[i] == ' ')
			spaces++;
	}
	return spaces + 1;
}

/*
** Problem 62: Compare by ASCII Codes
*/
std::string asciiSort(std::vector<std::string> arr) {
	std::vector<std::string> sums;
	for (int i{ 0 }; i < arr.size(); i++) {
		for (int j { 0 }; j < arr[i].length(); j++) {
			sums[i] += arr[j];
		}
	}
	return sums[0] > sums[1] ? arr[0] : arr[1];
}

/*
** Problem 63: Even or Odd Number of Factors
*/
std::string factor_group(int num) {
	int factors { 1 }, count{ 0 };
	while (factors <= num / 2) {
		if (num % factors == 0) 
			count++;
		factors++;
	}
	return count % 2 == 1 ? "even" : "odd";
}

/*
** Problem 64: Secret Society
*/
std::string societyName(std::vector<std::string> friends) {
	std::string name{ "" };
	std::sort(friends.begin(), friends.end());
	for (int i{ 0 }; i < friends.size(); i++) 
		name += friends[i].at(0);
	return name;
}

/*
** Problem 65: Repeating Letters
*/
std::string doubleChar(std::string str) {
	std::string newString;
	for (int i{ 0 }; i < str.length(); i++) 
		newString = newString + str.at(i) + str.at(i);
	return newString;
}

/* 
** Problem 66: Xs and Ox, Nobody Knows
*/
bool XO(std::string str) {
	int xS{ 0 }, oS{ xS };
	for (int i{ 0 }; i < str.length(); i++) {
		if (str.at(i) == 'x' || str.at(i) == 'X')
			xS++;
		if (str.at(i) == 'o' || str.at(i) == 'O')
			oS++;
	}
	return (oS == xS) ? true : false;
}

/*
** Problem 67: Reverse the Order of a String
*/
std::string reverse(std::string str) {
	std::string myString{ "" };
	for (int i{ 0 }; i < str.length(); i++) 
		myString.at(i) = str.at(str.length() - i);
	return myString;
}
// OR
std::string reverse(std::string str) {
	std::reverse(str.begin(),str.end());
}

/* 
** Problem 68: Find the Missing Number
*/
int missingNum(std::vector<int> arr) {
	std::sort(arr.begin(), arr.end());
	for (int i{ -1 }; i < arr.size(); i++) {
		if (arr[i + 1] - arr[i] != 1)
			return arr[i] + 1;
	}
}

/* 
** Problem 69: Hashes and Pluses
*/
std::vector<int> hashPlusCount(std::string str) {
	std::vector<int> tracker;
	for (int i{ 0 }; i < str.length(); i++) {
		if (str.at(i) == '#')
			tracker[0]++;
		if (str.at(i) == '+')
			tracker[1]++;
	}
}

/* 
** Problem 70: Check if the Same Case
*/
bool sameCase(std::string str) {
	int lowCase{ 0 }, upCase{ lowCase };
	for (int i{ 0 }; i < str.length(); i++) {
		if (str.at(i) >= 97 && str.at(i) <= 122) {
			lowCase++;
		}
		else
			upCase++;
	}
	return (lowCase == str.length() || upCase == str.length()) ? true : false;
}

/*
** Problem 71: Numbers to Arrays and Vice Versa
*/
std::vector<int> toArray(int num) {
	std::vector<int> toNum;
	int i{ 0 };
	while (num >= 0) {
		toNum[i] = num % 10;
		num /= 10;
		i++;
	}
	return toNum;
}

#include <cmath>
int toNumber(std::vector<int> arr) {
	int sum{ 0 };
	for (int i{ 0 }; i < arr.size(); i++)
		sum += arr[i] * pow(10, arr.size() - i);
	return sum;
}

/*
** Problem 72: Reverse an Array
*/
std::vector<int> reverse(std::vector<int> arr) {
	std::vector<int> tempList;
	for (int i{ 0 }; i < arr.size(); i++) 
		tempList[0] = arr[arr.size() - i];
	return tempList;
}

/*
** Problem 73: Check if an Array Includes an Element
*/
bool check(std::vector<int> arr, int el) {
	for (int i{ 0 }; i < arr.size(); i++) {
		if (el == arr[i])
			return true;
	}
	return false;
}

/*
** Problem 74: Double Letters
*/
bool double_letters(std::string word) {
	for (int i{ 0 }; i < word.length(); i++) {
		if (word[i] == word[i + 1])
			return true;
	}
	return false;
}

/*
** Problem 75: Exists a Number Higher?
*/
bool existsHigher(std::vector<int> arr, int n) {
	for (int i{ 0 }; i < arr.size(); i++) {
		if (arr[i] >= n)
			return true;
	}
	return false;
}

/*
** Problem 76: Check if a String Contains only Identical Characters
*/
bool isIdentical(std::string str) {
	for (int i{ 1 }; i < str.length(); i++) {
		if (str[i] != str[i - 1])
			return false;
	}
	return true;
}


/*
** Problem 77: Product Divisible By Sum?
*/
bool divisible(std::vector<int> arr) {
	int sum{ 0 }, product{ 1 };
	for (int i = 0; i < arr.size(); i++) {
		sum += arr[i];
		product *= arr[i];
	}
	return (product % sum == 0) ? true : false;
}

/*
** Problem 78: Count Instances of a Character in a String
*/
int charCount(char myChar, std::string str) {
	int tracker{ 0 };
	for (int i = 0; i < str.length(); i++) {
		if (myChar == str[i])
			tracker++;
	}
	return tracker;
}


/* 
** Problem 79: Reverse the Case
*/
std::string reverseCase(std::string str) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		else if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		else 
			continue;
	}
	return str;
}

/*
** Problem 80: Repeating Letters N Times
*/
std::string repeat(std::string str, int n) {
	std::string newStr;
	for (int i = 0; i < str.length(); i++) {
		for (int j = 1; j <= n; j++) {
			newStr += str[i];
		}
	}
	return newStr;
}

/*
** Problem 81: Alphabet Soup
*/
#include <vector>
std::string alphabetSoup(std::string str) {
	std::vector<std::string> myStr;
	for (int i = 0; i < str.length(); i++) 
		myStr[i] = str[i];
	std::sort(myStr.begin(), myStr.end());
	std::string newStr{ "" };
	for (int j = 0; j < str.length(); j++)
		newStr = newStr + myStr[j];
	return newStr;
}

/*
** Problem 82: Culmulative Array Sum
*/
std::vector<int> cumulativeSum(std::vector<int> array) {
	int sum{ 0 };
	for (int i = 0; i < array.size(); i++) {
		sum += array[i];
		array[i] = sum;
	}
	return array;
}

/*
** Problem 83: Factorize a Number
*/
std::vector<int> factorize(int n) {
	std::vector<int> factorList;
	int factor{ 1 }, i{ 0 };
	while (factor <= n) {
		if (n % factor ==0)
			factorList[i] = factor;
		i++;
	}
	return factorList;
}

/*
** Problem 84: Postive Count / Negative Sum
*/
std::vector<int> countPosSumNeg(std::vector<int> arr) {
	std::vector<int> myArr;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > 0) 
			myArr[0] += 1;
		if (arr[i] < 0)
			myArr[1] += arr[i];
	}
	return myArr;
}

/*
** Problem 85: ​​​​​AlTeRnAtInG CaPs​​​​​
*/
std::string alternatingCaps(std::string str) {
	for (int i = 0; i < str.length(); i++) {
		if (i % 2 == 0)
			str[i] = toupper(str[i]);
		else 
			str[i] = tolower(str[i]);
	}
	return str;
}

/*
** Problem 86: Return the Middle Character(s) of a String
*/
std::string getMiddle(std::string str) {
	if (str.length() % 2 == 0)
		return str.substr((str.length() / 2) - 1, 2);
	else 
		return str.substr((str.length() / 2), 1);
}

/*
** Problem 87: Check if String Ending Matches Second String
*/
bool checkEnding(std::string str1, std::string str2) {
	for (int i = 0; i < str2.length(); i++) {
		if (str2[str2.length() - 1 - i] != str1[str1.length() - 1 - i])
			return false;
	}
	return true;
}

/*
** Problem 88: Total Number of Unique Characters
*/
int countUnique(std::string str1, std::string str2) {
	std::vector<std::string> myList;
	int count{ 0 };
	for (int i = 0; i < str1.length(); i++) 
		myList[i] = str1[i];
	for (int j = 0; j < str2.length(); j++)
		myList[myList.size() + j] = str2[j];
	std::sort(myList.begin(), myList.end());
	for (int k = 0; k < myList.size(); k++) {
		if (myList[k] != myList[k + 1])
			count++;
	}
	return count;
}
// OR
int countUnique(std::string str1, std::string str2) {
	std::set<char> unique;
	std::string combined = str1 + str2;
	
	for(char c:combined){
		unique.insert(c);
	}
	
	return unique.size();
}

/*
** Problem 89: ATM PIN Code Validation
*/
bool validatePIN(std::string pin) {
	for (int i = 0; i < pin.length(); i++) {
		if (!pin[i] >= 48 && !pin[i] <= 57)
			return false;
	}
	if (pin.length() == 6 || pin.length() == 4)
		return true;
}
// OR
bool validatePIN(std::string pin) {
  return std::regex_match(pin, std::regex(R"(\d{6}|\d{4})"));
}

