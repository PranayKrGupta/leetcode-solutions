class Solution {
public:
    bool winnerOfGame(string a) {
            int n=a.length();
            if(n==2){
                return false;
            }
            int scoreA = 0;
            int scoreB = 0;
            for(int i=1;i<n-1;i++){
                if(a[i-1]==a[i] && a[i]==a[i+1] && a[i+1]=='A'){
                    scoreA++;
                }
                if(a[i-1]==a[i] && a[i]==a[i+1] && a[i+1]=='B'){
                    scoreB++;
                }
                cout<<scoreA<<' '<<scoreB<<endl;
            }
            return scoreA>scoreB;
    }
};