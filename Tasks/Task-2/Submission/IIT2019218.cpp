#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];

int main()
{
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int i;
    long long int n; cin>>n;
   int a[1001][1001];
    long long int k; cin>>k;
   
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    dp[1][1]=a[1][1];
    
    for(i=2;i<=n;i++)
    dp[i][1]=a[i][1]+dp[i-1][1];
    
     for(i=2;i<=n;i++)
    dp[1][i]=a[1][i]+dp[1][i-1];
    
    for(int i=2;i<=n;i++)
    {
    	for(int j=2;j<=n;j++)
    	{
    		dp[i][j]= dp[i][j-1]+dp[i-1][j]-dp[i-1][j-1]+a[i][j];
		}
	}
	
	
    int s=1,e=n+1;
   
    while(s<e){
       
        int m=(s+e)/2;
       
        bool flag=0;
       
        for(int i=m;i<=n;i++){
            for(int j=m;j<=n;j++){
                if((dp[i][j]-dp[i-m][j]-dp[i][j-m]+dp[i-m][j-m])>=k) flag=1;
            }
        }
        if(flag)
        {s=e-m;
        break;}
        else e=m;
    }
    cout<<s<<endl;
}#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];

int main()
{
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int i;
    long long int n; cin>>n;
   int a[1001][1001];
    long long int k; cin>>k;
   
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            a[i][j]=0;
            dp[i][j]=0;
        }}
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    dp[1][1]=a[1][1];
    
    for(i=2;i<=n;i++)
    dp[i][1]=a[i][1]+dp[i-1][1];
    
     for(i=2;i<=n;i++)
    dp[1][i]=a[1][i]+dp[1][i-1];
    
    for(int i=2;i<=n;i++)
    {
    	for(int j=2;j<=n;j++)
    	{
    		dp[i][j]= dp[i][j-1]+dp[i-1][j]-dp[i-1][j-1]+a[i][j];
		}
	}
	
	
    int s=1,e=n+1,f=n+1;
   
    while(s<e){
       
        int m=(s+e)/2;
       
        bool flag=0;
       
        for(int i=m;i<=n;i++){
            for(int j=m;j<=n;j++){
                if((dp[i][j]-dp[i-m][j]-dp[i][j-m]+dp[i-m][j-m])>=k) flag=1;
            }
        }
        if(flag)
        {s=f-m;
        break;}
        else e=m;
    }
    cout<<s<<endl;
}
