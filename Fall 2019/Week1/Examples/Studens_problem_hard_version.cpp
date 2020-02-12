#include <bits/stdc++.h>

using namespace std;

/*
    This is the solution to the following problem:

    There are n students. Each students has K liras.
    The students start exchaning money randomly.
    After they stop, you know the amount of money
    each student has after the random exchange.
    you need to find the original number K
    that each of them had.

    Idea of solution: 

    If at the beginning every one had K liras,
    then the sum of all the money that all the students
    had is n * K. So, if we compute the sum of all the
    numbers we get in the input and divide it by n, we
    will find our answer

*/


int main(){

    int n;
    
    cin >> n;

    int sum = 0;

    for(int i=0 ; i<n ; ++i){
        
        int x;
        cin >> x;

        sum = sum + x;
    }

    double answer = (double) sum / n;

    cout << answer;

}