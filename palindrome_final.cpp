#include<iostream>
#include<string>

using namespace std;

int main()
{
    string publich, dar;
    getline(cin, publich);
    
    int longh = publich.size() - 1;
    
    for (int i=0; i + 1 <= longh; i++) {
        
        if (publich[i] == ' ') {
            publich.erase(i,1);
        }
    }
    //cout << publich << endl;
    longh = publich.size() - 1;
    for (int i=0; i <= longh; i++) {

        if (publich[i] == publich[longh]) {
            dar = "да"s;
        }else {
            dar = "нет"s;
        }
        longh--;
    }
    cout << dar << endl;
    return 0;
}