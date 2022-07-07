#include<iostream>
#include <cstring>

using namespace std;

class CWH  /* abstract base class mtlb ek esi class jinko derived class bnane k liye hi
              bnaya ho or mostly iske obj create nhi krte program m or isme pure virtual
             \ func hota hi h */
{
	protected:
		string title;
		float rating;
	public:
		CWH(string s, float r){
			title = s;
			rating = r;
		}
		virtual void display(void) = 0;   // do-nothing func or pure virtual func
};

/* yaha p display pure virtual func h as iska koi kaam nii h, 57 video m hum derived
   class k display nhi bnate tab bhi code obj.display likhne p code run hota as base 
   class waala display run hota lekin yaha p esa nii hoga, humko derived class m 
   display bnana hi pdega as base class ka display pure virtual func h */

class CWHVideo : public CWH
{
	private:
		float videolength;
	public:
		CWHVideo(string s, float r, float vl) : CWH(s, r){
		videolength = vl;
		}
		void display(void){
			cout<<"This is an amazing video with title "<<title<<endl;
			cout<<"Ratings: "<<rating<<" out of 5 stars "<<endl;
			cout<<"Length of this video is: "<<videolength<<" minutes "<<endl;
		}
};

class CWHText : public CWH
{
	private:
		int words;
	public:
		CWHText(string s, float r, int wc) : CWH(s, r){
		words = wc;
		}
		void display(void){
			cout<<"This is an amazing text tutorial with title "<<title<<endl;
			cout<<"Ratings: "<<rating<<" out of 5 stars "<<endl;
			cout<<"No. of words in this text tutorial is: "<<words<<" words "<<endl;
		}
};

int main(){

	string title = new char[30];
	float rating, videolength;
	int words;

	title = "Django tutorial ";
	videolength = 4.56;
	rating = 4.89;

	CWHVideo djvideo(title, rating, videolength);  // 1st tareeka
	djvideo.display();

	title = "Django tutorial text ";
	words = 433;
	rating = 4.19;

	CWHText djtext(title, rating, words);          // 1st tareeka
	djtext.display();

	CWH* tuts[2];        // 2nd tareeka
	tuts[0] = &djvideo;
	tuts[1] = &djtext;

	tuts[0]->display();
	tuts[1]->display();

	return 0;
}