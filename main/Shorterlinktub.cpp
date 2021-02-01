//code by @Miyandi279
//Team : Bengkulu Cyber Team
//web Team : http://bcset.rf.gd

#include <iostream>
#include <string.h>
using namespace std;
string u,s;
string url="https://m.youtube.com/watch?v=";
int t;
int pos;

//draw the screen first
void draw(){
  cout<<"hello, welcome to youtube url shorter\nyou can use this to short your url\n";
}
//short the url
void shorturl(){
  if (t==1){
    cout<<"please enter the url\n";
    cin >>u;
 pos=u.find("=");
 s=u.substr(pos+1);
 cout <<"here's the shorten url:"<<s<<endl;
 }
}
//fix the url
void fixurl(){
  if (t==2){
    cout<<"please enter the shorten url\n";
    cin >>u;
    cout<<"here's your url:\n";
    cout<<url<<u<<endl;
  }
}
//errorcheck
void errchck(){
  if (t<=0||t>=3){
    cout<<"please enter the correct option!\n";
  }
}
int main(){
  draw();
  be:
    cout<<"what do you want to do\n 1.Shorten\n 2.Fix url\n";
    cin>>t;
  shorturl();
  fixurl();
  errchck();
  string yn;
  cout<<"do you want to use it again?\nanswer y/n\n";
  cin >>yn;
  if (yn=="y"||yn=="Y"){
    goto be;
  }
  else if (yn=="n"||yn=="N"){
    cout<<"Thank you for using this program please give me a star 🌟\n";
  }
}
