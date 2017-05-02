/* vim: set sw=4 sts=4 et foldmethod=syntax : */

#include <string>
#include <vector>

class Foo
{
    public: inline bool operator==(const Foo &_other) const
    {
      return (this->derivatives == _other.derivatives);
    }

    std::vector<std::string> derivatives;
};


int main()
{
    Foo a;
    Foo b;

    if (a == b)
        return 1;

    return 0;
}
