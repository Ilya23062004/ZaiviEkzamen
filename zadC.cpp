
//Задача С


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <string> vect;
int n, m, k;
void func(string b, int a) {
if (b.size() == n && a >= m) {
vect.push_back(b);
return;
}
if (b.size() < n) {
func(b + 'I', a + 1);
func(b + 'N', a);
func(b + 'F', a);
func(b + 'A', a + 1);
}
}
int main() {
cin >> n >> m >> k;
func("", 0);
sort(vect.begin(), vect.end()); // эту функцию я действительно подсмотрел в интернете, не снижайте, пожалуйста))
if (k >= vect.size()) cout << "ERROR";
else {
cout << vect.size() << " " << vect[k - 1] << endl;
}
return 0;
}





