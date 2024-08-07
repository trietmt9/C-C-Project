#include <iostream>
#include <vector>

class clubMember
{
    public:
        clubMember(std::string memName, int memID, int memAge);
        ~clubMember();
    private:  
        std::string name;
        int ID;
        int age;
        
};

clubMember::clubMember(std::string memName, int memID, int memAge)
    : name {memName}, ID {memID}, age {memAge}  
{
    std::cout << "Member information: " << std::endl;
    std::cout << "+ Name: " << name     << std::endl; 
    std::cout << "+ ID: "   << ID       << std::endl;
    std::cout << "+ Age: "  << age      << std::endl;
}

clubMember::~clubMember()
{
    delete this; 
}

int main()
{   
    clubMember MyInfor{"Triet" , 2609, 23};
    clubMember StephenInfo {"Stephen", 2709, 22};
}