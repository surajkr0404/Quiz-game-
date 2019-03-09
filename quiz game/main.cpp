#include <iostream>
#include<windows.h>
#include<conio.h>
#include<string.h>
using namespace std;
void challenge_round();
class quiz_game
{
    int i;
    string name;
public:
    quiz_game()
    {
        cout<<endl<<endl<<endl<<endl;
        cout<<"                                **-------Welcome to the Quiz game--------------**"<<endl<<endl<<endl<<endl;
        cout<<endl<<endl;
        cout<<"                                    Enter your names               "; getline(cin,name);
        cout<<"\t\t\t\t\t\t\t________________________________";

    getch();
    system("cls");
    cout<<endl<<endl<<endl<<endl;
    cout<<"                         Hello "<<name<<endl<<endl;
    cout<<"                                              welcome you in the quiz game"<<endl<<endl<<endl<<endl<<endl;
    cout<<"                        Please read the instruction carefully before we start the game"<<endl<<endl<<endl;
    getch();
    system("cls");
    cout<<endl<<endl<<endl;
    cout<<"                             Instruction of the Games------------------"<<endl<<endl;
    cout<<endl;
    cout<<"                     There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLENGE ROUND"<<endl<<endl;
    cout<<"                     In warmup round you will be asked a total of 3 questions to test your general knowledge."<<endl<<endl;
    cout<<"                     You are eligible to play the game,if you give at least 2 right answers "<<endl<<endl;
    cout<<"                     Otherwise you can't proceed further to the Challenge Round."<<endl<<endl;
    cout <<"                    Your game starts with CHALLANGE ROUND. In this round you will be asked a total of 10 questions. "<<endl<<endl;
    cout<<"                     Each right answer will be awarded 4 marks"<<endl<<endl;
    cout<<"                     1 mark will be deducted for every wrong answer"<<endl<<endl;
    cout<<"                     You will be given 4 options and you have to press A, B ,C or D for the right option"<<endl<<endl;
    cout<<"                                                                                                         \n\n\t\t\t\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!"<<endl<<endl;
    getch();
    }

    void warmup_round()
    {
        string n;
        int count=0;
        for(i=0;i<3;i++)
        {

            switch(i)
            {
            case 0:
                repeat:
                     system("cls");

            cout<<"  \n \n \n                     1.Which of the following is a Palindrome number?"<<endl<<endl<<endl;
		cout<<"                                A.42042\t\tB.101010"<<endl<<endl<<endl;
		cout<<"                                C.23232\t\tD.01234"<<endl<<endl;
		cout<<"\t\t\t\t\t\t";       cin>>n;
		if(n=="a"||n=="A"||n=="b"||n=="B"||n=="c"||n=="C"||n=="d"||n=="D")
        {
		if(n=="c"||n=="C")
        {
            count=count+4;
            cout<<"\n\n\t\t\t\tcorrect answer!!!!!"<<endl;
        }
        else
            {
                count-=1;
            cout<<"\n\n\t\t\t\tWrong answer!!!!"<<endl;
            cout<<"\t\t\t\tThe correct answer is .C    23232 "<<endl;
          }
        }
        else
        {
            cout<<"\n\n\n                                       Wrong Entry!!!"<<endl;
            cout<<"\t\t\t\tPlease enter the correct Order as A,B,C,D or a,b,c,d"<<endl;
            getch();
            goto repeat;
        }
        getch();
         break;


            case 1:
                repeat1:
                system("cls");
            cout<<"\n\n\n                      2.The country with the highest environmental performance index is..."<<endl;
		    cout<<"\n\n                            A.France\t\tB.Denmark"<<endl;
            cout<<"\n\n                            C.Switzerland\tD.Finland"<<endl<<endl;
          cout<<"\t\t\t\t\t\t";  cin>>n;
            if(n=="a"||n=="A"||n=="b"||n=="B"||n=="c"||n=="C"||n=="d"||n=="D")
            {
		if(n=="c"||n=="C")
        {
            count=count+4;
            cout<<"\n\n\t\t\t\t\tcorrect answer!!!!!"<<endl;
        }
        else
        {
                count-=1;
            cout<<"\n\n\t\t\t\tWrong answer!!!!"<<endl;
            cout<<"\n\n\t\t\tThe correct answer is .C  Switzerland"<<endl;
        }
            }
            else
        {
            cout<<"\n\n\n                                       Wrong Entry!!!"<<endl;
            cout<<"\t\t\t\tPlease enter the correct Order as A,B,C,D or a,b,c,d"<<endl;
            getch();
            goto repeat1;
        }
        getch();
        break;


            case 2:
                repeat2:
                system("cls");
                cout<<"\n\n\n                              3.Which animal laughs like human being?"<<endl;
		cout<<"\n\n                                   A.Polar Bear\t\tB.Hyena"<<endl;
        cout<<" \n\n                                  C.Donkey\t\tD.Chimpanzee"<<endl<<endl;

         cout<<"\t\t\t\t\t\t";    cin>>n;
             if(n=="a"||n=="A"||n=="b"||n=="B"||n=="c"||n=="C"||n=="d"||n=="D")
        {
		if(n=="b"||n=="B")
        {
            count=count+4;
            cout<<"\n\n\t\t\t\t\tcorrect answer!!!!!"<<endl;
        }
        else
            {
                count-=1;
            cout<<"\n\n\t\t\t\tWrong answer!!!!"<<endl;
            cout<<"\n\n\t\t\t\tThe correct answer is B.  Hyena"<<endl;
        }
            }
              else
        {
            cout<<"\n\n\n                                       Wrong Entry!!!"<<endl;
            cout<<"\t\t\t\tPlease enter the correct Order as A,B,C,D or a,b,c,d"<<endl;
            getch();
            goto repeat2;
        }
        getch();
        break;
system("cls");
            }
        }
            if(count>=4)
            {
            cout<<"\n\n\n \n \n \t            Wow! CONGRATULATION  you are eligible to play the Game     "<<name<<endl;
             cout<<"\t\t\t\t\t\t\t\t\t________________________________";
            getch();
            goto game;
            }
            else
            {
                cout<<"\n \n \n                           SORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME"<<endl;
                getch();
                 goto exit;
            }
            game:
                challenge_round();
                exit:
                    cout<<"\n \n \n                                  ****************Thanks for coming*******************";
                    getch();
    }


    void challenge_round()
    {
        int countr=0,i;
        string n;
     for(i=1;i<=10;i++)
     {
         system("cls");

     switch(i)
		{
		case 1:
		    repeat3:
            system("cls");
		cout<<"\n\n                                       1.What is the National Game of England?"<<endl;
		cout<<"\n\n                                              A.Football \tB.Basketball"<<endl;
		cout<<"\n\n                                              C.Cricket\t\tD.Baseball"<<endl;
		cout<<"\n\n\t\t\t\t\t\t";       cin>>n;
		if(n=="a"||n=="A"||n=="b"||n=="B"||n=="c"||n=="C"||n=="d"||n=="D")
        {
		if(n=="c"||n=="C")
        {
            cout<<"\n\n\t\t\t\tCorrect!!!"<<endl;
            countr+=4;
             getch();
              goto score;
			 }
		else
		       {
		            cout<<"\n\n\t\t\t\tWrong!!! The correct answer is C.Cricket"<<endl;
		            countr-=1;
		            getch();
		            goto score;
		       }
        }
        else
        {
            cout<<"\n\n\n                                       Wrong Entry!!!"<<endl;
            cout<<"\t\t\t\tPlease enter the correct Order as A,B,C,D or a,b,c,d"<<endl;
            getch();
            goto repeat3;
        }
        getch();
        break;


		case 2:
		    repeat4:
		        system("cls");

        cout<<"\n\n\n                               2.Study of Earthquake is called............,"<<endl;
		cout<<"\n\n                                      A.Seismology\t\tB.Cosmology"<<endl;
		cout<<"\n\n                                      C.Orology\t\tD.Etimology"<<endl;
		cout<<"\n\n\t\t\t\t\t\t";       cin>>n;
		if(n=="a"||n=="A"||n=="b"||n=="B"||n=="c"||n=="C"||n=="d"||n=="D")
        {
		if(n=="a"||n=="A")
        {
            cout<<"\n\n\t\t\t\tCorrect!!!"<<endl;
            countr+=4;
             getch();
              goto score;

			 }
		else
		       {
		            cout<<"\n\n\t\t\t\tWrong!!! The correct answer is A.Seismology"<<endl;
		            countr-=1;
		            getch();
		            goto score;
		       }
		}
		else
        {
            cout<<"\n\n\n                                       Wrong Entry!!!"<<endl;
            cout<<"\t\t\t\tPlease enter the correct Order as A,B,C,D or a,b,c,d"<<endl;
            getch();
            goto repeat4;
        }
        getch();
        break;

        case 3:
            repeat5:
            system("cls");
		cout<<"\n\n\n                                3.Among the top 10 highest peaks in the world, how many lie in Nepal? "<<endl;
		cout<<"\n\n                                            A.6\t\tB.7"<<endl;
		cout<<"\n\n                                            C.8\t\tD.9"<<endl;
		cout<<"\n\n\t\t\t\t\t\t";       cin>>n;
		if(n=="a"||n=="A"||n=="b"||n=="B"||n=="c"||n=="C"||n=="d"||n=="D")
        {
		if(n=="c"||n=="C")
        {
            cout<<"\n\n\t\t\t\tCorrect!!!"<<endl;
            countr+=4;
             getch();
              goto score;
			 }
		else
		       {
		            cout<<"\n\n\t\t\t\tWrong!!! The correct answer is C.8"<<endl;
		            countr-=1;
		            getch();
		            goto score;
		       }
     }
     else
        {
            cout<<"\n\n\n                                       Wrong Entry!!!"<<endl;
            cout<<"\t\t\t\tPlease enter the correct Order as A,B,C,D or a,b,c,d"<<endl;
            getch();
            goto repeat5;
        }
        getch();
        break;

        case 4:
                repeat6:
		        system("cls");
		 cout<<"\n\n\n                                4.The Laws of Electromagnetic Induction were given by?"<<endl;
		 cout<<"\n\n                                        A.Faraday\t\tB.Tesla"<<endl;
         cout<<"\n\n                                        C.Maxwell\t\tD.Coulomb"<<endl;
		 cout<<"\n\n\t\t\t\t\t\t";       cin>>n;
		if(n=="a"||n=="A"||n=="b"||n=="B"||n=="c"||n=="C"||n=="d"||n=="D")
        {
		if(n=="a"||n=="A")
        {
            cout<<"\n\n\t\t\t\tCorrect!!!"<<endl;
            countr+=4;
             getch();
              goto score;
			 }
		else
		       {
		            cout<<"\n\n\t\t\t\tWrong!!! The correct answer is A.Faraday"<<endl;
		            countr-=1;
		            getch();
		            goto score;
		       }
      }
    else
        {
            cout<<"\n\n\n                                       Wrong Entry!!!"<<endl;
            cout<<"\t\t\t\tPlease enter the correct Order as A,B,C,D or a,b,c,d"<<endl;
            getch();
            goto repeat6;
        }
        getch();
        break;


        case 5:
            repeat7:
            system("cls");
		cout<<"\n\n\n                                  5.In what unit is electric power measured?"<<endl;
		cout<<"\n\n                                           A.Coulomb\t\tB.Watt"<<endl;
		cout<<"\n\n                                           C.Power\t\tD.Units"<<endl;
		cout<<"\n\n\t\t\t\t\t\t";       cin>>n;
		if(n=="a"||n=="A"||n=="b"||n=="B"||n=="c"||n=="C"||n=="d"||n=="D")
        {
		if(n=="b"||n=="B")
        {
            cout<<"\n\n\t\t\t\tCorrect!!!"<<endl;
            countr+=4;
             getch();
              goto score;
			 }
		else
		       {
		            cout<<"\n\n\t\t\t\tWrong!!! The correct answer is B.Watt"<<endl;
		            countr-=1;
		            getch();
		            goto score;
		       }
        }
        else
        {
            cout<<"\n\n\n                                       Wrong Entry!!!"<<endl;
            cout<<"\t\t\t\tPlease enter the correct Order as A,B,C,D or a,b,c,d"<<endl;
            getch();
            goto repeat7;
        }
        getch();
        break;


		case 6:
		    repeat8:
		        system("cls");
		cout<<"\n\n\n                               6.Which element is found in Vitamin B12?"<<endl;
		cout<<"\n\n                                        A.Zinc\t\t B.Cobalt"<<endl;
		cout<<"\n\n                                        C.Calcium\tD.Iron"<<endl;
		cout<<"\n\n\t\t\t\t\t\t";       cin>>n;
		if(n=="a"||n=="A"||n=="b"||n=="B"||n=="c"||n=="C"||n=="d"||n=="D")
        {
		if(n=="b"||n=="B")
        {
            cout<<"\n\n\t\t\t\tCorrect!!!"<<endl;
            countr+=4;
             getch();
              goto score;
			 }
		else
		       {
		            cout<<"\n\n\t\t\t\tWrong!!! The correct answer is B.Cobalt"<<endl;
		            countr-=1;
		            getch();
		            goto score;
		       }
        }
        else
        {
            cout<<"\n\n\n                                       Wrong Entry!!!"<<endl;
            cout<<"\t\t\t\tPlease enter the correct Order as A,B,C,D or a,b,c,d"<<endl;
            getch();
            goto repeat8;
        }
        getch();
        break;


        case 7:
            repeat9:
		        system("cls");
		cout<<"\n\n\n                                 7.What is the National Name of Japan?"<<endl;
		cout<<"\n\n                                     A.Polska\t\tB.Hellas"<<endl;
		cout<<"\n\n                                     C.Drukyul\t\tD.Nippon"<<endl;
		cout<<"\n\n\t\t\t\t\t\t";       cin>>n;
		if(n=="a"||n=="A"||n=="b"||n=="B"||n=="c"||n=="C"||n=="d"||n=="D")
        {
		if(n=="d"||n=="D")
        {
            cout<<"\n\n\t\t\t\tCorrect!!!"<<endl;
            countr+=4;
             getch();
              goto score;
			 }
		else
		       {
		            cout<<"\n\n\t\t\t\tWrong!!! The correct answer is D.Nippon"<<endl;
		            countr-=1;
		            getch();
		            goto score;
		       }
        }
        else
        {
            cout<<"\n\n\n                                       Wrong Entry!!!"<<endl;
            cout<<"\t\t\t\tPlease enter the correct Order as A,B,C,D or a,b,c,d"<<endl;
            getch();
            goto repeat9;
        }
        getch();
        break;


        case 8:
            repeat10:
		        system("cls");
		cout<<"\n\n\n                             8.How many times a piece of paper can be folded at the most?"<<endl;
		cout<<"\n\n                                          A.6\t\tB.7"<<endl;
		cout<<"\n\n                                          C.8\t\tD.Depends on the size of paper"<<endl;
		cout<<"\n\n\t\t\t\t\t\t";       cin>>n;
		if(n=="a"||n=="A"||n=="b"||n=="B"||n=="c"||n=="C"||n=="d"||n=="D")
        {
		if(n=="b"||n=="B")
        {
            cout<<"\n\n\t\t\t\tCorrect!!!"<<endl;
            countr+=4;
             getch();
              goto score;
			 }
		else
		       {
		            cout<<"\n\n\t\t\t\tWrong!!! The correct answer is B.7"<<endl;
		            countr-=1;
		            getch();
		            goto score;
		       }
        }
        else
        {
            cout<<"\n\n\n                                       Wrong Entry!!!"<<endl;
            cout<<"\t\t\t\tPlease enter the correct Order as A,B,C,D or a,b,c,d"<<endl;
            getch();
            goto repeat10;
        }
        getch();
        break;


        case 9:
            repeat11:
		        system("cls");
		cout<<"\n\n\n                            9.What is the capital of Denmark?"<<endl;
		cout<<"\n\n                               A.Copenhagen\t B.Helsinki"<<endl;
		cout<<"\n\n                               C.Ajax\t\t D.Galatasaray"<<endl;
		cout<<"\n\n\t\t\t\t\t\t";       cin>>n;
		if(n=="a"||n=="A"||n=="b"||n=="B"||n=="c"||n=="C"||n=="d"||n=="D")
        {
		if(n=="a"||n=="A")
        {
            cout<<"\n\n\t\t\t\tCorrect!!!"<<endl;
            countr+=4;
             getch();
              goto score;
			 }
		else
		       {
		            cout<<"\n\n\t\t\t\tWrong!!! The correct answer is A.Copenhagen"<<endl;
		            countr-=1;
		            getch();
		            goto score;

		       }
        }
        else
        {
            cout<<"\n\n\n                                       Wrong Entry!!!"<<endl;
            cout<<"\t\t\t\tPlease enter the correct Order as A,B,C,D or a,b,c,d"<<endl;
            getch();
            goto repeat11;
        }
        getch();
        break;


        case 10:
            repeat12:
		        system("cls");
		cout<<"\n\n\n                               10.Which is the longest River in the world?"<<endl;
		cout<<"\n\n                                       A.Nile\t\tB.Koshi"<<endl;
		cout<<"\n\n                                        C.Ganga\t\tD.Amazon"<<endl;
		cout<<"\n\n\t\t\t\t\t\t";       cin>>n;
		if(n=="a"||n=="A"||n=="b"||n=="B"||n=="c"||n=="C"||n=="d"||n=="D")
        {
		if(n=="a"||n=="A")
        {
            cout<<"\n\n\t\t\t\tCorrect!!!"<<endl;
            countr+=4;
             getch();
              goto score;

			 }
		else
		       {
		            cout<<"\n\n\t\t\t\tWrong!!! The correct answer is A.Nile"<<endl;
		            countr-=1;
		            getch();
		            goto score;

		       }
        }
        else
        {
            cout<<"\n\n\n                                       Wrong Entry!!!"<<endl;
            cout<<"\t\t\t\tPlease enter the correct Order as A,B,C,D or a,b,c,d"<<endl;
            getch();
            goto repeat12;
        }
        getch();
        break;

        score:
            cout<<"\n \n \n \n \n\t\t\t\t\t Your Score is "<<countr;
            getch();
    }
		}
     }
     };


int main()
{
    quiz_game obj;
    obj.warmup_round();
    return 0;
}
