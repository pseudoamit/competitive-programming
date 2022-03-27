#include<bits/stdc++.h>
using namespace std;


int main(){
    
    long int n,q;
    cin>>n>>q;
    vector<long int> arr[n];
    long int last_answer = 0;
    for( long int i = 1; i<=q; i++){
        long int a,x,y;
        cin>>a>>x>>y;
        if(a == 1){
            long int index = (x ^ last_answer) % n;
            arr[index].push_back(y);
        }if(a == 2){
            long int index = (x ^ last_answer) % n;
            last_answer = arr[index][y];
            cout<<last_answer<<endl;
        }
    }
    return 0;
}




#include<bits/stdc++.h>
using namespace std;

int main() {

	long int n, q;
	int lastAnswer = 0;
	cin >> n >> q;
	vector<vector<long int>> seqList;
	while (q--) {
		long int a, x, y, index;
		cin >> a >> x >> y;
		if (a == 1) {
			index = (x ^ lastAnswer) % n;
			seqList[index].push_back(y);
		} else {
			index = (x ^ lastAnswer) % n;
			lastAnswer = seqList[index][y];
			cout << lastAnswer << endl;
		}
	}
	return 0;
}
