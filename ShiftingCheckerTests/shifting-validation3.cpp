// RUN: %clang_analyze_cc1 -Wno-unused -analyzer-checker=alpha.unix.ShiftingChecker -verify %s

void test()
{
    int x = 123;
    int a  = 44;
    int c;

    if(c){
    x << a; // expected-warning {{Invalid shift operation. Type 'int' can't be shifted by more than '30' bits}}
    }
}
