#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream fin("Programming-Project-2.txt");
    uint32_t hexresult;
 
    if(fin.is_open()){
        std::string operation;
        uint32_t hexnum1, hexnum2;
        while(fin >> operation >> std::hex >> hexnum1 >> hexnum2){
            if(operation == "ADD"){
                hexresult = hexnum1 + hexnum2;
            }
            else if(operation == "AND"){
                hexresult = hexnum1 & hexnum2;
            }
            else if(operation == "ASR"){
                //hexresult =
            }
            else if(operation == "LSR"){
                hexresult = (hexnum1 >> 1);
            }
            else if(operation == "LSL"){
                hexresult = (hexnum1 << 1);
            }
            else if(operation == "NOT"){
                hexresult = ~hexnum1;
            }
            else if(operation == "ORR"){
                hexresult = hexnum1 | hexnum2;
            }
            else if(operation == "SUB"){
                hexresult = hexnum1 + (~hexnum2);
            }
            else if(operation == "XOR"){
                hexresult = hexnum1 ^ hexnum2;
            }
            
               std::cout << operation << ":" << " " << "0x" << hexnum1 << " " << "with" << " " << "0x" 
               << hexnum2 << " " << "=" << " " << "0x" << std::hex << hexresult << std:: endl;
        }
    }
    fin.close();
}