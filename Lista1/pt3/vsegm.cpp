#include <iostream>
#include <set>
#include <utility>
#include <string>
#include <vector>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //Declaração
    int n, cont = 0;;
    pair<long int, long int> p;
    set<pair<long long int, long long int> > s;
    set<long long int> aux;
    set<long long int>::iterator it;
    char op;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> op;
        //Op: E
        if (op == 'E') {
            cin >> p.first >> p.second;
            s.insert(p);
            aux.insert(p.first); aux.insert(p.second);
            it = aux.find(p.first - 1);
            if(it == aux.end()){
    			it = aux.find(p.second + 1);
    			if(it == aux.end()){
    				cont++;
    			}
    		}
            else if(!(it == aux.end())){
    			it = aux.find(p.second + 1);
    			if(!(it == aux.end())){
    				cont--;
    			}
    		}
            //Op: S
        }
        else {
            cin >> p.first >> p.second;
            s.erase(p);
            aux.erase(p.first); aux.erase(p.second);
            it = aux.find(p.first - 1);
            if(it == aux.end()){
    			it = aux.find(p.second + 1);
    			if(it == aux.end()){
    				cont--;
    			}
    		}
            else if(!(it == aux.end())){
    			it = aux.find(p.second + 1);
    			if(!(it == aux.end())){
    				cont++;
    			}
    		}
        }
        cout << cont << endl;
    }
return 0;
}