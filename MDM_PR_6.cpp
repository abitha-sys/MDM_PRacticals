#include<iostream>
using namespace std;
int main(){
int num=5;
int score[5];
int median;
cout<<"Enter 1st 5 scores of student:\n";
for(int i=0;i<5;i++){
cin>>score[i];
cout<<" ";
}
int sum=0;
for(int i=0;i<5;i++)
{
sum=sum+score[i];
    }
    //mean calculation
cout<<"\nMean of 5 numbers is=";
cout<<sum/5;
cout<<"\n------------------------------------";
//mode
int maxcount=0;
int mode=score[0];
for(int i=0;i<5;i++){
int count=0;
for(int j=0;j<5;j++){
if(score[i]==score[j]){

count++;
}
if(count>maxcount){
maxcount=count;
mode=score[i];
}
}
}
cout<<"\nMode of 5 numbers is:"<<mode<<endl;
cout<<"-----------------------------------";
//median of 5 numbers


if(num%2!=0){
int m=num/2;
median=score[m];
cout<<"\nMedian:"<<median;
}
else if(num%2==0){
int n=((num/2)+((num+1)/2));
int m=n/2;
   median=score[m];
   cout<<"\nMedian:"<<median;
}
else{
cout<<"\nyou have entered wrong value:";
}

return 0;
}
