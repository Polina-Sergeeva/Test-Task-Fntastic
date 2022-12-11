#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <vector>
 
int main(){
    std::string str;
    std::vector <size_t> v;
    std::cout << "Enter string:\n";
    std::getline(std::cin, str);
    std::transform(str.begin(), str.end(), str.begin(), tolower);
    for (char ch1 : str){
        size_t count = 0;
        for (char ch2 : str){
            if (ch1 == ch2)
                count++;
        }
        v.push_back(count);
    }
    std::cout << "New string:\n";
    for(int i = 0; i < v.size(); i++){
    	if(v[i] == 1)
    		std::cout << "(";
    	else
    		std::cout << ")";
	}
    return 0;
}