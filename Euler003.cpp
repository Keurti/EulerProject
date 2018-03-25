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

bool
eliminate_prime(long& N,const int p)
{
    while (N % p == 0)
        N /= p;
    return (N == 1);
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        int sqr = static_cast<int>(sqrt(n));
        bool found = 0;
        if (eliminate_prime(n,2))
            cout << 2 << endl;
        else
        {
            for (int p = 3 ; p < sqr ;  p += 2)
            {
                if(eliminate_prime(n,p))
                {
                    found = true;
                    cout << p << endl;
                    break;
                }
            }
        }
        if (!found)
            cout << n << endl;
    }
    return 0;
}
