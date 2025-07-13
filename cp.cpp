#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
 
#include <bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#include<set>
#include <iostream>
#include<map>
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long double ld;
 
/***************************************************************************************/
// access keywords
#define ff first
#define ss second
#define pb push_back
#define inf INT_MAX
#define INF 1e18
#define MP make_pair
 
template <class T> void print(T x) { cerr << x; }
template <class T, class V> void print(pair<T, V> x) {
  print(x.ff);
  cerr << ':';
  print(x.ss);
}
template <class T> void print(vector<T> &a) {
  cerr << '[' << ' ';
  for (auto x : a) {
    print(x);
    cerr << ' ';
  }
  cerr << ']';
}
template <class T> void print(set<T> &a) {
  cerr << '[' << ' ';
  for (auto x : a) {
    print(x);
    cerr << ' ';
  }
  cerr << ']';
}
template <class T> void print(set<T, greater<T> > &a) {
  cerr << '[' << ' ';
  for (auto x : a) {
    print(x);
    cerr << ' ';
  }
  cerr << ']';
}
template <class T> void print(multiset<T> &a) {
  cerr << '[' << ' ';
  for (auto x : a) {
    print(x);
    cerr << ' ';
  }
  cerr << ']';
}
template <class T> void print(multiset<T, greater<T> > &a) {
  cerr << '[' << ' ';
  for (auto x : a) {
    print(x);
    cerr << ' ';
  }
  cerr << ']';
}
template <class T> void print(unordered_set<T> &a) {
  cerr << '[' << ' ';
  for (auto x : a) {
    print(x);
    cerr << ' ';
  }
  cerr << ']';
}
template <class T, class V> void print(vector<pair<T, V> > &a) {
  cerr << '[' << ' ';
  for (auto x : a) {
    print(x.ff);
    cerr << ":";
    print(x.ss);
    cerr << ' ';
  }
  cerr << ']';
}
template <class T, class V> void print(map<T, V> &a) {
  cerr << "[ ";
  for (auto i : a) {
    print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V> void print(unordered_map<T, V> &a) {
  cerr << "[ ";
  for (auto i : a) {
    print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void print(vector<vector<T> > &a) {
  cerr << "[ ";
  for (auto i : a) {
    print(i);
    cerr << " ";
  }
  cerr << "]";
}
void newErrLine() { cerr << endl; }
// #define MP make_pair
// //
// ***********************************************************************************
#define REP(i, a, b) for (ll i = a; i <= b; i++)
#define REV_REP(i, a, b) for (ll i = a; i >= b; i--)
#define inputVectori(v)                                                        \
  for (auto &x : v)                                                            \
    cin >> x;
#define printVectori(v)                                                        \
  for (auto &x : v)                                                            \
    cout << x << " ";
#define all(a) a.begin(), a.end()
 
#define say(x) cout << x << " "
#define sayN(x) cout << x << "\n"
/*****Remember inbuilt c++ functions*************************/
 
// next_permutation(), __builtin_popcount()
/***********************************************************/
const ll mod = 1e9 + 7;
 
inline void newLine() { cerr << "\n"; }
void checkjudge() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
}
 
vector<ll> factorial;
ll dsq(int a, int b, int c, int d) {
  return ((a - c) * (a - c) + (b - d) * (b - d));
}
 
ll binaryExp(ll x, ll y) {
  ll res = 1;
  while (y) {
    if (y & 1)
      res = (res * x) % mod;
    y >>= 1;
    x = (x * x) % mod;
  }
  return res;
}
 
ll nCr(ll n, ll r) {
  if (n < r)
    return 0;
  ll fac1 = factorial[n];
  ll fac2 = binaryExp(factorial[n - r], mod - 2);
  ll fac3 = binaryExp(factorial[r], mod - 2);
  ll ans = (fac1 * fac2) % mod;
  ans = (ans * fac3) % mod;
  return ans;
}
 
 
/*****************************************************************************************************************
 */
 
void preprocess() {}




void selectionSort(vector<int> arr){

  int n = arr.size();

  for (int i=0;i<n-1;i++){
    int minIndex = i;
    for(int j = i; j<n;j++){

      if(arr[j] < arr[minIndex]){
        minIndex = j;
      }

    }

    swap(arr[minIndex], arr[i]);
  }

  printVectori(arr);
}


/*
 *
 *
 * 4 , 5 , 2 , 1 , 3 
 *
 *
 *
 *
 *
 * */

void bubbleSort(vector <int> arr){
  int n = arr.size();

  for( int i =0;i<n-1;i++){

    for (int j = 0; j < n-1 - i ; j++){

      if (arr [j] > arr[j+1]){
        swap(arr[j] , arr[j+1]);
      }
    }
  }

  printVectori(arr);

}

/*
 *
 *
 * 1 2 4     3 5 6 
 *
 *
 * */

void insertionSort(vector <int> arr){

  int n= arr.size();

  for (int i=1;i<n;i++){

    int key = arr[i];

    int j = i -1;


    while (j>=0 and arr[j] > key){
      arr[j+1] = arr[j];
      j--;
    }

    arr[j+1] = key;
  }

  printVectori(arr);
}

/*
 *
 * 4 5 6  1 2 3 
 *
 *
 * 0 1 2 3 
 *
 *
 * i
 * 1 2 9 10 
 * 2 2 5 6  
 * j 
 *
 *
 * */

void merge(vector<int> &arr , int beg , int mid , int end){

  vector<int> b(arr.size());

  int i = beg, j = mid+1;
  int k = beg;

  while (i <= mid && j <= end){

    if(arr[i] < arr[j]){
      b[k++] = arr[i++];
    }else{
      b[k++] = arr[j++];
    }
  } 

  while (i<=mid){
    b[k++] = arr[i++];
  }

  while (j<=end){
    b[k++] = arr[j++];
  }

  for(int i=beg;i<=end ;i++){
    arr[i] = b[i];
  }

}

void mergeSort(vector <int> &arr, int beg , int end ){
  int n = arr.size();
  if(end > beg){
    int mid = (beg + end)/2;
    mergeSort(arr , beg , mid);
    mergeSort(arr , mid+1 , end);
    merge(arr , beg , mid , end);
  }
}


int partition(vector<int> &arr , int beg, int end){

  int pivot = arr[end];

  int i = beg- 1;

  for (int j = beg ; j < end; j++){

    if(arr[j] < pivot){
      i++;
      swap(arr[j] , arr[i]);
    }

  }

  swap(arr[i+1] , arr[end]);
  return i+1;

}

void quickSort(vector<int> &arr , int beg , int end){

  if(beg < end){
    int pi = partition(arr , beg, end);
    quickSort(arr , beg , pi-1);
    quickSort(arr, pi+1, end);
  }

}


void solve() {

  vector<int> v = { 99, 10 , 8 , 3 , 4, };
  quickSort(v , 0 , v.size() -1);
  print(v);

}

int32_t main() {

solve();

 
  /*************************************************************************************/
  return 0;
}
// 6 , 5 , 4 , 2
 
// HARE KRISHNA
/*
* QUICK MISTAKES
*1. If you cant solve an equation, just make sure you derive a generalised
*realtion between those two equations.
2. Beware of double comparisons, always do them in integers if posisble . Like
avoid taking root
* */
