#include <iostream>
#include <vector>
using namespace std;
bool isPossibleSolution(vector<int> time,int n,int m,int mid){
	int daysCount = 1;
	int timeSum = 0;

	for(int i=0;i<m;i++){
		if(timeSum+time[i]<=mid)
			timeSum+=time[i];
		else{
			daysCount++;
			if(daysCount>n || time[i]>mid)
				return false;
			timeSum=time[i];
		}
	}
	return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	int start =0;
	int sum =0;

	for(int i=0;i<m;i++)
		sum+=time[i];
	int end =sum;

	int ans =-1;
	// int mid = start+(end-start)/2;

	while(start<=end){
		int mid=start+(end-start)/2;
		if(isPossibleSolution(time,n,m,mid)){
			ans=mid;
			end=mid-1;
		}
		else
			start=mid+1;
	}
	return ans;
}
int main(){

    vector<int> vect{15, 25, 10, 30, 20};
    cout<<ayushGivesNinjatest(4,5,vect);
    return 0;
}