#include <string>

class User
{
    private:
        int id;
        std::string email = "vasia100@mail.com";
        int age = 18;
    public:
        User(int id):
            id{id}
        {}
        void show()
        {
            
        }
};