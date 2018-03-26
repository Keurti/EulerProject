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


int main(){
    int t;
    cin >> t;
    vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31,37};
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = 1;
        for (int prime : primes)
        {
            int factor = 1;
            while (factor * prime <= n)
                factor *= prime;
            
            result *= factor;
        }
        cout << result << endl;
    }
    return 0;
}
