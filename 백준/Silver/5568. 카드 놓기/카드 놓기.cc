#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
int n,k;
vector <string> card;
set <string> cardSet;
vector <string> tmp;
int ck[11];
void cards(int a){
    if(a == k){
        string c;
        for(auto t : tmp) c += t;
        cardSet.insert(c);
        return;
    }
    for(int i = 0; i < n; i++){
        if(ck[i]) continue;
        ck[i] = 1;
        tmp.push_back(card[i]);
        cards(a + 1);
        tmp.pop_back();
        ck[i] = 0;
    }
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        card.push_back(s);
    }
    cards(0);
    cout << cardSet.size() << '\n';
}