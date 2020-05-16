//https://stackoverflow.com/questions/1385843/simple-deadlock-examples
#include <mutex>    // mutex
#include <iostream> // cout 
#include <cstdio>   // getchar
#include <thread>   // this_thread, yield
#include <future>   // async
#include <chrono>   // seconds

using namespace std;
mutex _m1;
mutex _m2;

// Deadlock will occur because func12 and func21 acquires the two locks in reverse order

void func12()
{
    unique_lock<mutex> l1(_m1);
    this_thread::yield(); // hint to reschedule
    this_thread::sleep_for( chrono::seconds(1) );
    unique_lock<mutex> l2(_m2 );
}

void func21()
{
    unique_lock<mutex> l2(_m2);
    this_thread::yield(); // hint to reschedule
    this_thread::sleep_for( chrono::seconds(1) );
    unique_lock<mutex> l1(_m1);
}

int main( int argc, char* argv[] )
{
    async(func12);
    func21();
    cout << "All done!"; // this won't be executed because of deadlock
    getchar();
}