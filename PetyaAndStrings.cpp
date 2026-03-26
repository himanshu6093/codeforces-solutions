/*
1. Identify the Core Challenge
If you were to look at the words "Apple" and "apple" as a human, you'd immediately say they are the same word. However, computers look at the ASCII values (the numerical representation) of characters.

In a computer's mind, uppercase 'A' has a value of 65, and lowercase 'a' has a value of 97.

If you tell a computer to compare "Apple" and "apple" directly, it will say they are completely different.*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    if (s1 < s2)
    {
        cout << -1 << endl;
    }
    else if (s1 > s2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}

/*
1. Why doesn't C++ have .toLowerCase()?
In JavaScript, a string is a high-level object. When you call s1.toLowerCase(), JavaScript’s engine (V8) stops what it’s doing, allocates new memory, creates a brand-new string, copies the old characters into it while changing their case, and returns that new string to you.

C++ doesn't do this for three main reasons:

Mutability vs. Immutability: In JS, strings are immutable. You cannot change a single letter of a string; you can only create a new one. In C++, strings are mutable. You can reach into the memory and swap a 'P' for a 'p' without creating a whole new copy.

The "Zero-Overhead" Philosophy: C++ creators believe you shouldn't "pay" (in CPU cycles or RAM) for features you aren't using. If you don't need to lowercase a string, C++ doesn't want to bloat the string class with the code to do it.

Encapsulation: In JS, everything is "inside" the object. In C++, "logic" (algorithms) is kept separate from "data" (the string itself).

2. What is the benefit?
The benefit is raw speed and memory control. Imagine you have a string that is 1 Gigabyte in size.

In JavaScript: If you want to lowercase it, you now need 2 Gigabytes of RAM because JS has to keep the old string and create a full lowercase copy.

In C++: You can use a loop to change the characters in-place. You still only use 1 Gigabyte of RAM.*/