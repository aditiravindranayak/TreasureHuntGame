#include <iostream>
#include<string>
#include<conio.h>
#include<stdlib.h>
#include<cctype>
#include <fstream>
using namespace std;
int score=0;

void treasureart(){
cout<<"\n\n******************************************************************************* \n"
"         |                   |                  |                     |\n"
"_________|________________.=^^_;=.______________|_____________________|_______\n"
"|                   |  ,-^_,=^^     `^=.|                  |\n"
"|___________________|__^=._o`^-._        `^=.______________|___________________\n"
"          |                `^=._o`^=._      _`^=._                     |\n"
" _________|_____________________:=._o ^=._.^_.-=^'^=.__________________|_______\n"
"|                   |    __.--^ , ; `^=._o.^ ,-^^^-._ ^.   |\n"
"|___________________|_._^  ,. .` ` `` ,  `^-._^-._   ^. '__|___________________\n"
"          |           |o`^=._` , ^` `; .^. ,  ^-._^-._; ;              |\n"
" _________|___________| ;`-.o`^=._; .^ ` '`.^ ` . ^-._ /_______________|_______\n"
"|                   | |o;    `^-.o`^=._``  '` ^ ,__.--o;   |\n"
"|___________________|_| ;     (#) `-.o `^=.`_.--^_o.-; ;___|___________________\n"
"____/______/______/___|o;._    ^      `^.o|o_.--^    ;o;____/______/______/___\n"
"/______/______/______/_^=._o--._        ; | ;        ; ;/______/______/______/_\n"
"____/______/______/______/__^=._o--._   ;o|o;     _._;o;____/______/______/____\n"
"/______/______/______/______/____^=._o._; | ;_.--^o.--^_/______/______/______/_\n"
"____/______/______/______/______/_____^=.o|o_.--^^___/______/______/______/____\n"
"/______/______/______/______/______/______/______/______/______/______/\n"
"*******************************************************************************\n";

}
void loginsystem(std::string username,std::string password)
{
  ofstream outfile; //output file
  ifstream infile; //input file
  infile.open("login.dat"); //input file name
  outfile.open("temp.dat"); //output file name

 // string username, password;
  bool found = false;

  //search for username and password in file
  string file_username, file_password,password2;
  while (infile >> file_username >> file_password)
  {
    if (username == file_username && password == file_password)
    {
      cout << "\nLogin successful!\n";
      outfile << file_username << " " << file_password << endl;
      found = true;
    }
    else if (username == file_username ) //&& password != file_password)
    {
      	again:
		cout << "\nWrong Password\n";
      	found = true;	
      	cout << "\nEnter Password again:\n";
      	cin>>password2;
      	if (password2==file_password)
      	{
      		cout << "\nLogin successful!\n";
      		found = true;		
		}
		else
		{
			goto again;	
		}
		outfile << file_username << " " << file_password << endl;
      	
	}
    else //copy all other lines in the file
    {
      outfile << file_username << " " << file_password << endl;
    }
  }

  //if login not found, add it to the file
  if (!found)
  {
    outfile << username << " " << password << endl;
    cout << "\nLogin Credentials not found! \nLogin Credentials Added!\n";
  }

  infile.close();
  outfile.close();

  //delete old file and rename temp file
  remove("login.dat");
  rename("temp.dat", "login.dat");

  //return 0;
}
void displaymenu()
{ cout<<"===================================================== \n";
cout<<" \t\tMENU \t \n";
cout<<"===================================================== \n";
cout<<" 1.Play\n";
cout<<" 2.Rules\n";
cout<<" 3.Leaderboard \n";
cout<<" 4.Exit \n";

}
string clue1()
{           
	string clue1_answer;
	cout<<"\n-----------------CLUE 1-----------------\n";
	cout<<"Knowledge here & there, everywhere,"<<endl;
    cout<<"But no one seems to care,"<<endl;
    cout<<"Till there is a big scare,"<<endl;
    cout<<"Out of no where."<<endl;
    cout<<"Let us see, how you climb!"<<endl;
	cout<<"Enter your answer"<<endl;
	cin>>clue1_answer;
	return clue1_answer;
}
string clue2()
{
	string clue2_answer;
	cout<<"\n-----------------CLUE 2-----------------\n";
	cout<<"I see, you have reached the next clue,"<<endl;
    cout<<"_ 77 P _ I 84 _ E _ _ R _"<<endl;
    cout<<"Enter your answer"<<endl;
    cin>>clue2_answer;
    return clue2_answer;
        	
}
string clue3()
{
	string clue3_answer;
	cout<<"\n-----------------CLUE 3-----------------\n";
	cout<<"There is always a way out,"<<endl;
    cout<<"just like in college, no doubt,"<<endl;
    cout<<"Always learning here something,"<<endl;
    cout<<"whether it's Autocad or laser cutting"<<endl;
    cout<<"Enter your answer"<<endl;
    cin>>clue3_answer;
    return clue3_answer;
}
string clue4()
{
	string clue4_answer;
	cout<<"\n-----------------CLUE 4-----------------\n";
	cout<<"Me,the supplier of nourishment for both your body as well as brain..."<<endl;
    cout<<"with loads of fun loving moment"<<endl;
    cout<<"Enter your answer"<<endl;
    cin>>clue4_answer;
    return clue4_answer;
}
string clue5()
{
	string clue5_answer;
	cout<<"\n-----------------CLUE 5-----------------\n";
	cout<<"Don't get stressed,"<<endl;
    cout<<"next clue is where you get relaxed,"<<endl;
    cout<<"Hopping n Running"<<endl; 
    cout<<"Under the blue roof"<<endl;
    cout<<"a=0.0"<<endl;
    cout<<"m=72"<<endl;
    cout<<"p=80"<<endl;	
    cout<<"Enter your answer"<<endl;
    cin>>clue5_answer;
    return clue5_answer;
}
string clue6()
{
	string clue6_answer;
	cout<<"\n-----------------CLUE 6-----------------\n";
	cout<<"Back to where it all started,"<<endl;
    cout<<"Now, it's time that we parted"<<endl;
    cout<<"Finally, the journey of fun ends here"<<endl;
    cout<<"But,the journey of knowledge begins from here"<<endl;
    cout<<"Enter your answer"<<endl;
    cin>>clue6_answer;
    return clue6_answer;
}
void winner()
{
	cout<<"\nYou have given CORRECT answer!"<<endl;
	cout<<"You have earned 10 points!\n"<<endl;		
}
void loser()
{
	cout<<"\nYou have given WRONG answer :( "<<endl;
	cout<<"Better luck, next time\n"<<endl;		
}
int Play()
{
	string answer;
	cout<< "Let's get started!!!"<<endl;
	string a=clue1();	
	//cout<<a<<endl;		
	if(a=="library")
	{
		winner();
		score=score+10;
		string b=clue2();
		if(b=="amphitheatre")
		{
			winner();
			score=score+10;
			string c=clue3();
			if(c=="workshop")
			{
				winner();
				score=score+10;
				string d=clue4();
				if(d=="symbieat")
				{
					winner();
					score=score+10;
					string e=clue5();
					if(e=="ground")
					{
						winner();
						score=score+10;
						string f=clue6();
						if(f=="gate")
						{
					    cout<<"\n";						
						cout<<"You have given correct answer!"<<endl;
						cout<<"You have earned 10 points!"<<endl;
						score=score+10;
						}
						else
						loser();
					}
					else 
					loser();
				}
				else
				loser();				
			}
			else
			loser();
		}
		else
		loser();		
	}
	else
	loser();
cout<<"Score: "<<score<<endl;	
return score;		
}
void Rules()
{
cout<< "you have choose to read rules \n";
cout<<"\n_ _ _ _ _ _ _ _ _ _ _Symbiosis Treasure Hunt_ _ _ _ _ _ _ _ _ _ _\n"<<endl;
	cout<<"\nRules of the tresure hunt are as follows:\n"<<endl;
	cout<<"1.There are 4 persons per group. Total 12 groups"<<endl;
	cout<<"2.Time limit : 1 hour"<<endl;
	cout<<"3.Must stay with all members of your team at all times."<<endl;
	cout<<"4.There are overall 6 clues. You have to solve each clue."<<endl;
	cout<<"5.The team with the best time wins."<<endl;
	cout<<"6.Answer in one word and make sure to type in lowercase."<<endl;
	cout<<"7.Most Important , HAVE FUN!"<<endl;

}
void Leaderboard(string username, int score_main)
{

  ofstream outfile; //output file
  ifstream infile; //input file
  infile.open("leaderboard.dat"); //input file name
  outfile.open("temp1.dat"); //output file name
  //search for username in file
  bool found = false;
  string file_username, file_score;
  while (infile >> file_username >> file_score)
  {
    if (username == file_username)
    { 	file_score = score_main;
		outfile << username << " " << score_main << endl;
      	found = true;
    }
    else //copy all other lines in the file
    {
      outfile << file_username << " " << file_score << endl;
    }
  }

  //if login not found, add it to the file
  if (!found)
  {
    outfile << username << " " << score_main << endl;
    cout << "\nLogin information added to file.\n";
  }
	
	//while(outfile >> noskipws >> ch)
        //cout<<ch;
  		infile.close();
  		outfile.close();
  	//delete old file and rename temp file
  remove("leaderboard.dat");
  rename("temp1.dat", "leaderboard.dat");
  //char ch;
	
}
void Leaderboard_Display()
{
	cout<< "you have selected Leaderboard \n";
	cout<<"===================================================== \n";
	cout<<" \t\tLEADERBOARD \t \n";
	cout<<"===================================================== \n";
	cout<<"\nNAME \tSCORE\n";
	std::ifstream myfile ("leaderboard.dat");
	if ( myfile.is_open() ) 
{
	char mychar;

	while ( myfile ) 
	{		
		mychar = myfile.get();
		std::cout << mychar;
	}
}
}
void Exit()
{
cout<< "Thank you for playing\n";
exit(0);
}

 
int main()
{ 
 	string username, password;
	string st[20];
	int itemcount = 0;
	int score_main = 0;
	//get login information from user
    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

	loginsystem(username, password);
	//function to display Menu
	 
	
	int yourchoice;
	string confirm;
	do
	{ 

		treasureart();
		displaymenu(); 
		cout<<"Enter your choice(1-4):";
		cin>>yourchoice;
		switch (yourchoice)
		{
			case 1: score_main = Play();
					Leaderboard(username,score_main);
					break;
			case 2: Rules();break;
			case 3: Leaderboard_Display(); break;
			case 4: Exit(); break;
			default: cout<<"invalid"; break;
		}
		cout<<"Press y or Y to continue:";
		cin>>confirm;
	} while (confirm == "y" || confirm == "Y");
	return 0;
}
