#include <iostream>

bool isPalindrome(const std::string & text)
{
    if(text.size() == 0) return false;
    auto reverseIterator = text.rbegin();
    for(auto forwardIterator = text.begin(); forwardIterator != text.end(); ++forwardIterator)
    {
        if(*forwardIterator != *reverseIterator) return false;
        ++reverseIterator;
    }
    return true;
}

int main()
{
    std::string input{"kajak"};
    std::cout << std::boolalpha << isPalindrome(input) << std::endl;
    return 0;
}
