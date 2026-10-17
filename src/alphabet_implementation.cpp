#include <alphabet.h>

namespace abc{
	char alphabet[26] = {
    	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
    	'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
   		'U', 'V', 'W', 'X', 'Y', 'Z'
	};
	
	int alphabetCount(const std::string &s){
		int num = 0;
		for(char c : s){
			if((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z')){
				num++;
			}
		}
		return num;
	}
	
	int alphabetCountUnique(const std::string &s){
		int arr[26] = {};
		
		int num = 0;
		for(char c : s){
			if((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z')){
				if(arr[c - 'a' < 0 ? (c - 'A') : (c - 'a')] == 0){
					num++;
					arr[c - 'a' < 0 ? (c - 'A') : (c - 'a')]++;
				}
			}
		}
		
		return num;
	}
	
	int specialCharacterCount(const std::string &s, type n){
		if(n == WITH_SPACES) return s.length() - alphabetCount(s) - numberCount(s);
		
		int num = 0;
		for(char c : s){
			if(c != ' ') num++;
		}
		
		return num - alphabetCount(s) - numberCount(s);
	}
	
	int numberCount(const std::string &s){
		int num = 0;
		for(char c : s){
			if(c >= '0' && c <= '9'){
				num++;
			}
		}
		
		return num;
	}
	
	std::string& capitalAll(std::string &s){
		for(char &c : s){
			c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
		}
		
		return s;
	}
	
	std::string& lowerAll(std::string &s){
		for(char &c : s){
			c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
		}
		
		return s;
	}
}
