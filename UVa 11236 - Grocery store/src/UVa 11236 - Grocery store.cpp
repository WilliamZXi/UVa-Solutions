/*
 ID: swagchicken1
 PROG:
 LANG: C++11
 */

#include <iostream>
#include <tuple>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <vector>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <cctype>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector< vector <int> > vvi;
typedef pair<int, int> pii;
typedef pair < pair < int, int >, int > piii;
typedef pair < pair <int, int > , pair <int, int> > piiii;

#define FOR(i,a,b) for(int i = a; i < b; i ++)
#define RFOR(i,a,b) for(int i = a-1; i >= b; i --)

#define endl '\n';

#define mp make_pair
#define pb push_back
#define f first
#define s second

const int MOD = 1000000007;
double PI = 4*atan(1);

string toc( ll x) {
  string st = to_string(x);
  if (x>=100) {return st.insert(st.length() - 2,".");}
  else {
    string begin = "0.";
    return begin + st;
  }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    //  ofstream fout("");
    //  ifstream fin("");
    for (ll a = 1; 4*a <= 2000; a++) {
      for(ll b = a; a+b+b+b <= 2000; b ++) {
        for (ll c = b; a+b+c+c <= 2000; c ++) {
          ll s = a+ b+c;
          ll p = a*b*c;
          if (p <= 1000000){ continue;}
          int d = ((s) * 1000000)/ (p-1000000);
          
          
         if ((s*1000000) % (p-1000000) == 0) {
            if (a+b+c+d <= 2000 && d >= c) cout << toc(a) << ' ' << toc(b) << ' ' << toc(c) << ' ' << toc(d) << endl;
          }
        }
      }
    }
    // fin.close();
    //  fout.close();
}

