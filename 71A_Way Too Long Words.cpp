#include <iostream>
#include <string>
 
int main(){
    int c; std::cin >> c;
    while(c--){
        std::string a; std::cin >> a;
        if(a.size()>10) std::cout << a[0]+std::to_string(a.size()-2)+a[a.size()-1] <<"\n";
        else std::cout << a << "\n";
    }
    return 0;
}
