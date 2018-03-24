#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

const double golden_ratio = 0.5 * (1 + sqrt(5)) ;

long long int 
Fibonacci(int k)
{
    return static_cast<long long int> ( 1/(sqrt(5)) * (pow(golden_ratio,k+2) - (pow(-1/golden_ratio,k+2)) )) ;
}

int 
main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        unsigned long long int result = 0;
        for (int i = 1; i < n; i += 3)
        {
            if (Fibonacci(i) >= n)
                break;
            result += Fibonacci(i);
        }
        cout << result << endl;
    }
    

    return 0;
}
