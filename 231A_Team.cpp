#include <iostream>
 
int main(){
    int c, count = 0; std::cin >> c;
    while(c--){
        int a,b,c; std::cin >> a >> b >> c;
        if(a+b+c>1) count+=1;
    }
    std::cout << count;
    return 0;
}
