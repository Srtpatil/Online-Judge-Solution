#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   string quote,word;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   while(t--)
   {
	   bool flag = false;
       word = "";
	   getline(cin,quote);
	   vector<string> word_list;
	   for(int i = 0;i< quote.length();i++)
	   {
		   if(quote[i] == ' ')
		   {
			   word_list.push_back(word);
			   word = "";
		   }
		   else
		   {
			   word += quote[i];
		   }
	   }
	   word_list.push_back(word);
	   
	   for(int i = 0;i<word_list.size();i++)
	   {
		   //cout<<word_list[i]<<"  ";
		   if(word_list[i] == "not")
		   {
			   flag = true;
			   break;
		   }
	   }
	   if(flag)
	   {
		   cout<<"Real Fancy"<<endl;
	   }
	   else
	   {
		   cout<<"regularly fancy"<<endl;
	   }
   }
}
