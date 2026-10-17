# Alphabet library
The alphabet library provides functions for easily attaining information about the provided (std::)string. Functions include count, capitalise and lowercase which would have taken many lines of code.

## Layout/Folder Structure
-> include\
---> alphabet.h

-> src\
---> alphabet_implementation.cpp

## Function wise info
**Note:** *All functions exist in the namespace 'abc' and must be accessed through the scope resolutions(::) operator, though in the examples below it has not been used for convenience and readability*

### alphabetCount
Takes only one **string** as parameter and returns the number of alphabet characters(a - Z) in it as an **int**. The function is case insensitive.

Usage example:
```C++
alphabetCount("Hello World!1");
```
will return 10.

### alphabetCountUnique
Takes only one **string** as parameter and returns the number of unique alphabet characters(a - Z) in it as an **int**. The function is case insensitive.

Usage example:
```C++
alphabetCountUnique("Hello!1");
```

will return 7.

### specialCharacterCount
Takes two parameters: a **string** and an **enum 'type'**(more [over here](#Enum 'type')) and returns the special characters, i.e, anything in the ASCII table except characters, numbers and spaces(based on 'type')

If 'type' is:
      NORMAL: Spaces are excluded from special character list.
      WITH_SPACES: Spaces are included in the special character list.

Usage examples:
```C++
specialCharacterCount("Hello World!1", NORMAL);
```
will return 1,

```C++
specialCharacterCount("Hello World!1", WITH_SPACES);
```
will return 2.

### numberCount
Takes only a **string** as a parameter and returns the count of numbers(0 - 9) in the string.

Usage example:
```C++
numberCount("Hello World!1");
```
will return 1.

### capitalAll
Takes a **string** by reference and returns the string with all alphabets capitalized.

Usage example:
```C++
capitalAll("Hello World!1")
```
will return ```"HELLO WORLD!1'```

### lowerAll
Takes a **string** by reference and returns the string with all alphabets in lower case.

Usage example:
```C++
capitalAll("Hello World!1")
```
will return ```"hello world!1'```

## Enum 'type'
Currently used only in the [specialCharacterCount](###specialCharacterCount) function as a parameter, and has only two members.
