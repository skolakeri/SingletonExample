
// In this program, here is generic code that allows the creation of a singleton, a class with only
// one instance

// Method 1
class Singleton1
{
    Singleton1() {

    }

public:
    static Singleton1& GetInstance() {
        static Singleton1 singleton1;
        return singleton1;
    }
    static void baz()
    {

    }
};
// Method 2
class Singleton2
{
    Singleton2(){}
    static Singleton2 singleton2;
public:
    static Singleton2& GetInstance()
    {
        return singleton2;
    }
    static void baz()
    {

    }
};
// Method 3
class Singleton3
{
private:
    // static data here
public:
    Singleton3(){}
    static void baz(){}
};
// If you want to try to use inheritance with a singleton can do the below, but be careful
class Singleton4
{
public:
    static Singleton4& instance();

    virtual ~Singleton4(){ }
    virtual void baz() = 0;

protected:
    Singleton4(){ }
};
#include <iostream>

void foo()
{
    // Will use the same instance of the singleton
    Singleton1::GetInstance().baz();
    Singleton2::GetInstance().baz();
    Singleton3::baz();
}
void bar()
{
    Singleton1::GetInstance().baz();
    Singleton2::GetInstance().baz();
    Singleton3::baz();
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
