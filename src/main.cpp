#include<iostream>
#include<string>

int main() {
    for(int i = 1; i < 101; i++) {
        std::string output = "";

        if ( i % 3 == 0 ) { output += "fizz"; };
        if ( i % 5 == 0 ) { output += "buzz"; };
        if ( !output.compare("") ) { output += std::to_string(i); }

        std::cout << output << std::endl;
    }

    return 0;
}
