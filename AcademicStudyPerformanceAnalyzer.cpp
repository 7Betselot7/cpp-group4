#include <iostream>
using namespace std;
int main(){
int n,spaces;
n=9;
for(int i=0; i!=n; i++){
for(int j=0; j<=n-i; j++){
    cout<<i;
}
if(i==0){
    spaces = 0;
}else if(i==1){
    spaces = 1;
    for(int j=0; j<=spaces; j++){
    cout<<" ";
}
}else{
spaces+=2;
for(int j=0; j<=spaces; j++){
    cout<<" ";
}}
for(int j=0; j<=n-i; j++){
    cout<<i;
}
    cout<<endl;
}
spaces = (2*n)+1;
for(int i=n; i!=-1; i--){
for(int j=0; j<=n-i; j++){
    cout<<i;
}
if(i==0){
    spaces = 0;
}else if(i==1){
    spaces = 1;
    for(int j=0; j<=spaces; j++){
    cout<<" ";}
}else{
spaces-=2;
for(int j=0; j<=spaces; j++){
    cout<<" ";
}
}
for(int j=0; j<=n-i; j++){
    cout<<i;
}
    cout<<endl;
}
return 0;
}
