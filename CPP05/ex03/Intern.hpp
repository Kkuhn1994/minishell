class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(Intern &in);
        Intern &operator=(Intern &in);
        Intern *makeForm(std::string nameForm, std::string target);
}