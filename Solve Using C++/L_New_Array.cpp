#include<bits/stdc++.h>
using namespace std;

vector<int> concatenateArrays(const vector<int>&A, const vector<int>&B) {
    vector<int>C(A.size() + B.size());
    copy(B.begin(), B.end(), C.begin());
    copy(A.begin(), A.end(), C.begin() + B.size());

    return C;
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N), C;

    for (int i = 0; i < N; i++) {
        cin>>A[i];
    }

    for (int i = 0; i < N; i++) {
        cin>>B[i];
    }

    C = concatenateArrays(A, B);
   
    for (int i = 0; i < C.size(); i++) {
        cout << C[i] << " ";
    }

    cout << endl;

    return 0;
}
