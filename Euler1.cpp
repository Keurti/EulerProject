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



long long int
algebric_sum(int n)
{
    return n*(n+1)/2;
}

unsigned long long int
multiples_sum(int n)
{
    //cout << (n-1)/3 << ' ' << (n-1)/5 << endl;
    unsigned long long ret = 3*algebric_sum((n-1)/3);
    //cout << ret <<endl;
    ret -= 15*algebric_sum((n-1)/15) ;
    //cout << ret << endl;
    ret += 5*algebric_sum((n-1)/5);
    //cout << ret << endl;
    return ret;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << multiples_sum(n) <<endl;
    }
    return 0;
}

