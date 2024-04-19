#include <iostream>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    
    if (pid < 0) {
    std::cerr << "Error forking the procces" << std::endl;
    return 1;
    }
    else if (pid > 0) {
    std::cout << "starting  the gonhol..." << std::endl;
    }
    system("iptables -A OUTPUT -d furry-world.ru -j DROP");
    system("iptables -A INPUT -s furry-world.ru -j DROP");
    std::cout << "info: block website furry-world.ru by iptables" << std::endl;
    std::cout << "gonhol service started sucesfelly" << std::endl;
    
    while (true) {
        sleep(60);
        
        }
        
        return 0;
        
}        
    
    
    
    
    
    
   
    
   
    
    
