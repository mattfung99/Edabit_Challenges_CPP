/*
** Challenge 1: Say "Hello, World!" With C++
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    printf("Hello, World!");
    return 0;
}

/*
** Challenge 2: Input and Output
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() 
{
    int inpA, inpB, inpC;
    std::cin >> inpA >> inpB >> inpC;
    std::cout << inpA + inpB + inpC;

    return 0;
}

/*
** Challenge 3: Basic Data Types
*/
#include <iostream>
#include <cstdio>

int main() {
    
    int intIn{ 0 };
    long longIn{ 0 };
    char charIn{ 0 };
    float floatIn{ 0 };
    double doubleIn{ 0 };

    scanf("%d %ld %c %f %lf", &intIn, &longIn, &charIn, &floatIn, &doubleIn);
    printf("%d", intIn);
    printf("\n%ld", longIn);
    printf("\n%c", charIn);
    printf("\n%f", floatIn);
    printf("\n%lf", doubleIn);

    return 0;
}

/*
** Challenge 4: Conditional Statements
*/
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    switch (n)
    {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        case 8:
            cout << "eight";
            break;
        case 9:
            cout << "nine";
            break;
        default:
            cout << "Greater than 9";
    }

    return 0;
}

/*
** Challenge 5: For Loop
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int startIn, endIn;
    scanf("%d %d", &startIn, &endIn);
    for ( ; startIn <= endIn; startIn++)
    {
       switch (startIn)
        {
            case 1:
                cout << "one" << endl;
                break;
            case 2:
                cout << "two" << endl;
                break;
            case 3:
                cout << "three" << endl;
                break;
            case 4:
                cout << "four" << endl;
                break;
            case 5:
                cout << "five" << endl;
                break;
            case 6:
                cout << "six" << endl;
                break;
            case 7:
                cout << "seven" << endl;
                break;
            case 8:
                cout << "eight" << endl;
                break;
            case 9:
                cout << "nine" << endl;
                break;
        } 
        if (startIn > 9)
        {
            startIn % 2 == 0 ? cout << "even" << endl : cout << "odd" << endl;
        }
    }

    return 0;
}

/*
** Challenge 6: Functions
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int max_of_four(const int A, const int B, const int C, const int D);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(const int A, const int B, const int C, const int D)
{
    vector<int> maxArr{A, B, C, D};
    sort(maxArr.begin(), maxArr.end());
    return maxArr[3];
}

/*
** Challenge 7: Pointer
*/
#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int temp = *a; 
    *a += *b;
    *b = abs(*b - temp);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

/*
** Challenge 8: Arrays Introduction
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int size = 0;
    cin >> size;
    int arr[size];
    
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for ( ; size - 1 >= 0; size --)
        cout << arr[size - 1] << " ";

    return 0;
}

/*
** Challenge 9: Variable Sized Arrays
*/