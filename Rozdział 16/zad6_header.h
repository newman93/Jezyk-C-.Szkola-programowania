#ifndef HEADER_06_
#define HEADER_06_
#include <iostream>

class Customer
{
    private:
        long arrive;     // czas dołączenia klienta do kolejki
        int processtime; // czas obsługi klienta
    public:
        Customer() { arrive = processtime = 0; }
        void set(long when);
        long when() const { return arrive; }
        int ptime() const { return processtime; }
};

void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;
    arrive = when;
}

#endif
