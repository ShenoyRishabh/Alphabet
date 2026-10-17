#ifndef ALPHA
#define ALPHA

#include<unordered_map>
#include<cctype>
#include<string>

namespace abc{
	enum type {NORMAL, WITH_SPACES};
	extern char alphabet[26];

	// 'Count' functions
	int alphabetCount(const std::string &s);
	int alphabetCountUnique(const std::string &s);
	int specialCharacterCount(const std::string &s, type n);
	int numberCount(const std::string &s);
	
	// 'Case changing' functions
	std::string& capitalAll(std::string &s);
	std::string& lowerAll(std::string &s);
}

#endif