#include <iostream>
#include <locale> 

int main() {
    std::locale::global(std::locale("")); 
    std::wcout.imbue(std::locale());     

    wchar_t c = L'世';  

    std::wcout << L"chars: " << c << std::endl;
    std::wcout << sizeof(c);
    return 0;
}

