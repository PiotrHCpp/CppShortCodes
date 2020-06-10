#include <assert.h>
#include <string>

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
    std::string input1{""}, input2{" "}, input3{"a"};
    std::string input4{"ana"}, input5{"kayak"}, input6{"repaper"};
    std::string input7{"bed"}, input8{"jump"}, input9{"flight"};

    assert(isPalindrome(input1) == false);
    assert(isPalindrome(input2) == true);
    assert(isPalindrome(input3) == true);
    assert(isPalindrome(input4) == true);
    assert(isPalindrome(input5) == true);
    assert(isPalindrome(input6) == true);
    assert(isPalindrome(input7) == false);
    assert(isPalindrome(input8) == false);
    assert(isPalindrome(input9) == false);

    return 0;
}
