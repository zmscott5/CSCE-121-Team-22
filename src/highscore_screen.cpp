#include "defs.h"
#include "highscore_screen.h"

highscore_screen::highscore_screen(Point xy,int w,int h,const string& title, int& difficulty)
:Window{xy,w,h,title},

highscore3{Point{225,35},150,50,"Highscore, Difficulty: 3",
[](Address, Address pw){reference_to<highscore_screen>(pw).high3();}},

highscore4{Point{225,105},150,50,"Highscore, Difficulty: 4",
[](Address, Address pw){reference_to<highscore_screen>(pw).high4();}},

highscore5{Point{225,175},150,50,"Highscore, Difficulty: 5",
[](Address, Address pw){reference_to<highscore_screen>(pw).high5();}},

highscore6{Point{225,245},150,50,"Highscore, Difficulty: 6",
[](Address, Address pw){reference_to<highscore_screen>(pw).high6();}},

highscore7{Point{225,315},150,50,"Highscore, Difficulty: 7",
[](Address, Address pw){reference_to<highscore_screen>(pw).high7();}},

diff{difficulty}

	{
		difficulty = 3;
		attach(highscore3);
		attach(highscore4);
		attach(highscore5);
		attach(highscore6);
		attach(highscore7);
		
	}

	void highscore_screen::high3()
	{
		Simple_window scores{Point{200,200},400,400,"Highscore, Difficulty: 3"};
		
		ifstream ist{"data/highscore3.txt"};
		if(!ist)error("cant open");

		vector<List>highscore;
		int place;
		string name;
		int score;

		while(ist>>place>>name>>score){
			highscore.push_back(List{place,name,score});
}

ist.close();
		
		ostringstream one;
		one<<highscore[0].place<<". "<<highscore[0].name<<'-'<<highscore[0].score<<endl;
		Text first{Point{50,70},one.str()};
		first.set_font_size(30);
		scores.attach(first);
		
		ostringstream two;
		two<<highscore[1].place<<". "<<highscore[1].name<<'-'<<highscore[1].score<<endl;
		Text sec{Point{50,145},two.str()};
		sec.set_font_size(30);
		scores.attach(sec);
		
		ostringstream three;
		three<<highscore[2].place<<". "<<highscore[2].name<<'-'<<highscore[2].score<<endl;
		Text third{Point{50,220},three.str()};
		third.set_font_size(30);
		scores.attach(third);
		
		ostringstream four;
		four<<highscore[3].place<<". "<<highscore[3].name<<'-'<<highscore[3].score<<endl;
		Text fourth{Point{50,295},four.str()};
		fourth.set_font_size(30);
		scores.attach(fourth);
		
		ostringstream five;
		five<<highscore[4].place<<". "<<highscore[4].name<<'-'<<highscore[4].score<<endl;
		Text fifth{Point{50,370},five.str()};
		fifth.set_font_size(30);
		scores.attach(fifth);
		
		
		
		scores.wait_for_button();
	}
	
	void highscore_screen::high4()
	{
		Simple_window scores{Point{200,200},400,400,"Highscore, Difficulty: 4"};
		ifstream ist{"data/highscore4.txt"};
		if(!ist)error("cant open");

		vector<List>highscore;
		int place;
		string name;
		int score;

		while(ist>>place>>name>>score){
			highscore.push_back(List{place,name,score});
}

ist.close();
		
		ostringstream one;
		one<<highscore[0].place<<". "<<highscore[0].name<<'-'<<highscore[0].score<<endl;
		Text first{Point{50,70},one.str()};
		first.set_font_size(30);
		scores.attach(first);
		
		ostringstream two;
		two<<highscore[1].place<<". "<<highscore[1].name<<'-'<<highscore[1].score<<endl;
		Text sec{Point{50,145},two.str()};
		sec.set_font_size(30);
		scores.attach(sec);
		
		ostringstream three;
		three<<highscore[2].place<<". "<<highscore[2].name<<'-'<<highscore[2].score<<endl;
		Text third{Point{50,220},three.str()};
		third.set_font_size(30);
		scores.attach(third);
		
		ostringstream four;
		four<<highscore[3].place<<". "<<highscore[3].name<<'-'<<highscore[3].score<<endl;
		Text fourth{Point{50,295},four.str()};
		fourth.set_font_size(30);
		scores.attach(fourth);
		
		ostringstream five;
		five<<highscore[4].place<<". "<<highscore[4].name<<'-'<<highscore[4].score<<endl;
		Text fifth{Point{50,370},five.str()};
		fifth.set_font_size(30);
		scores.attach(fifth);
		
		scores.wait_for_button();
	}
	
	void highscore_screen::high5()
	{
		Simple_window scores{Point{200,200},400,400,"Highscore, Difficulty: 5"};
		
		ifstream ist{"data/highscore5.txt"};
		if(!ist)error("cant open");

		vector<List>highscore;
		int place;
		string name;
		int score;

		while(ist>>place>>name>>score){
			highscore.push_back(List{place,name,score});
}

ist.close();
		
		ostringstream one;
		one<<highscore[0].place<<". "<<highscore[0].name<<'-'<<highscore[0].score<<endl;
		Text first{Point{50,70},one.str()};
		first.set_font_size(30);
		scores.attach(first);
		
		ostringstream two;
		two<<highscore[1].place<<". "<<highscore[1].name<<'-'<<highscore[1].score<<endl;
		Text sec{Point{50,145},two.str()};
		sec.set_font_size(30);
		scores.attach(sec);
		
		ostringstream three;
		three<<highscore[2].place<<". "<<highscore[2].name<<'-'<<highscore[2].score<<endl;
		Text third{Point{50,220},three.str()};
		third.set_font_size(30);
		scores.attach(third);
		
		ostringstream four;
		four<<highscore[3].place<<". "<<highscore[3].name<<'-'<<highscore[3].score<<endl;
		Text fourth{Point{50,295},four.str()};
		fourth.set_font_size(30);
		scores.attach(fourth);
		
		ostringstream five;
		five<<highscore[4].place<<". "<<highscore[4].name<<'-'<<highscore[4].score<<endl;
		Text fifth{Point{50,370},five.str()};
		fifth.set_font_size(30);
		scores.attach(fifth);
		
		scores.wait_for_button();
	}
	
	void highscore_screen::high6()
	{
		Simple_window scores{Point{200,200},400,400,"Highscore, Difficulty: 6"};
		
		ifstream ist{"data/highscore6.txt"};
		if(!ist)error("cant open");

		vector<List>highscore;
		int place;
		string name;
		int score;

		while(ist>>place>>name>>score){
			highscore.push_back(List{place,name,score});
}

ist.close();
		
		ostringstream one;
		one<<highscore[0].place<<". "<<highscore[0].name<<'-'<<highscore[0].score<<endl;
		Text first{Point{50,70},one.str()};
		first.set_font_size(30);
		scores.attach(first);
		
		ostringstream two;
		two<<highscore[1].place<<". "<<highscore[1].name<<'-'<<highscore[1].score<<endl;
		Text sec{Point{50,145},two.str()};
		sec.set_font_size(30);
		scores.attach(sec);
		
		ostringstream three;
		three<<highscore[2].place<<". "<<highscore[2].name<<'-'<<highscore[2].score<<endl;
		Text third{Point{50,220},three.str()};
		third.set_font_size(30);
		scores.attach(third);
		
		ostringstream four;
		four<<highscore[3].place<<". "<<highscore[3].name<<'-'<<highscore[3].score<<endl;
		Text fourth{Point{50,295},four.str()};
		fourth.set_font_size(30);
		scores.attach(fourth);
		
		ostringstream five;
		five<<highscore[4].place<<". "<<highscore[4].name<<'-'<<highscore[4].score<<endl;
		Text fifth{Point{50,370},five.str()};
		fifth.set_font_size(30);
		scores.attach(fifth);
		
		scores.wait_for_button();
	}
	
	void highscore_screen::high7()
	{
		Simple_window scores{Point{200,200},400,400,"Highscore, Difficulty: 7"};
		
		ifstream ist{"data/highscore7.txt"};
		if(!ist)error("cant open");

		vector<List>highscore;
		int place;
		string name;
		int score;

		while(ist>>place>>name>>score){
			highscore.push_back(List{place,name,score});
}

ist.close();
		
		ostringstream one;
		one<<highscore[0].place<<". "<<highscore[0].name<<'-'<<highscore[0].score<<endl;
		Text first{Point{50,70},one.str()};
		first.set_font_size(30);
		scores.attach(first);
		
		ostringstream two;
		two<<highscore[1].place<<". "<<highscore[1].name<<'-'<<highscore[1].score<<endl;
		Text sec{Point{50,145},two.str()};
		sec.set_font_size(30);
		scores.attach(sec);
		
		ostringstream three;
		three<<highscore[2].place<<". "<<highscore[2].name<<'-'<<highscore[2].score<<endl;
		Text third{Point{50,220},three.str()};
		third.set_font_size(30);
		scores.attach(third);
		
		ostringstream four;
		four<<highscore[3].place<<". "<<highscore[3].name<<'-'<<highscore[3].score<<endl;
		Text fourth{Point{50,295},four.str()};
		fourth.set_font_size(30);
		scores.attach(fourth);
		
		ostringstream five;
		five<<highscore[4].place<<". "<<highscore[4].name<<'-'<<highscore[4].score<<endl;
		Text fifth{Point{50,370},five.str()};
		fifth.set_font_size(30);
		scores.attach(fifth);
		
		scores.wait_for_button();
	}
