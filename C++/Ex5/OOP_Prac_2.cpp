#include <iostream>
#include <vector>

class clubMember
{
    public:
        clubMember(std::string memName, int memID, int memAge);
        clubMember();

        ~clubMember();
    private:  
        std::string name;
        int ID;
        int age;
        
};


// Constructor initialization
clubMember::clubMember(std::string memName, int memID, int memAge)
    : name {memName}, ID {memID}, age {memAge}  
{
    std::cout << "--------------- 3 Argument constructor ---------------" << std::endl;
    std::cout << "Member information: "     << std::endl;
    std::cout << "+ Name: " << name         << std::endl; 
    std::cout << "+ ID: "   << ID           << std::endl;
    std::cout << "+ Age: "  << age          << std::endl;
}

// Delegating constructor
clubMember::clubMember()
    :clubMember {"None", 0, 0}
{
    std::cout << "--------------- No argument constructor ---------------" << std::endl;
    std::cout << "Member information: "     << std::endl;
    std::cout << "+ Name: " << name         << std::endl; 
    std::cout << "+ ID: "   << ID           << std::endl;
}
clubMember::~clubMember()
{
    delete this; 
}

int main()
{   
    clubMember AnoInfo;
    clubMember MyInfor{"Triet" , 2609, 23};
    
}