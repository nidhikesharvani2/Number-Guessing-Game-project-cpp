# include<iostream>
# include<cstdlib>
# include<ctime>
using namespace std;
int main(){
    cout<<"\t\t\t Welcome to Guess the Number Game!"<<endl;
    cout<<" You have Guess the Number Between 1 t0 100.";
    cout<< "You'll have the limited choices based on the level you choose . Good Luck!"<<endl;
    while(true){
        cout<<" \nEnter the difficulty level: \n";
        cout<<"1 for easy! \t";
        cout<<" 2 for medium \t";
        cout<< "3 for difficult! \t";
        cout<<"0 for ending the game !\n"<<endl;
        int difficultyChoice ;
        cout<<" Enter the number:";
        cin>>difficultyChoice;
        srand(time(0));
        int secretNumber = 1+ (rand()%100);
        int playerChoice;
        if(difficultyChoice==1){
            cout<< "\n You have 10 choices for finding the secret number between 1 t0 100.";
            int ChoiceLeft =10;
            for (int i=0;i<=10;i++){
                cout<<"\n\nEnter the number :";
                cin>>playerChoice;
                if(playerChoice==secretNumber){
                cout<<" Well Played! You won,"<< playerChoice<<"is the secret number"<<endl;
                cout<<"\t\t\t Thanks for playing....."<<endl;
                cout<<" Play the Game Again with us!!\n\n"<<endl;
                break;
                }else{ cout<<"Nope,"<<playerChoice<<" is not right number\n";
                    if(playerChoice>secretNumber){
                        cout<<"The secret Number smaller than the number you have choosen"<<endl;
                    }else{
                        cout<<"The secret Number greater than the number you have choosen"<<endl;
                    }
                    ChoiceLeft--;
                    cout<< ChoiceLeft<<"choice left."<<endl;
                    if (ChoiceLeft==0){
              cout<<" You could'nt find the secret number, it was"<<secretNumber<<"you loss!\n\n";
              cout<<" Play the Game Again win !!\n\n\n";
                    }

                    }
                }
            }
            else if(difficultyChoice==2){
            cout<< "\n You have 7 choices for finding the secret number between 1 t0 100.";
            int ChoiceLeft =7;
            for (int i=0;i<=7;i++){
                cout<<"\n\nEnter the number :";
                cin>>playerChoice;
                if(playerChoice==secretNumber){
                cout<<" Well Played! You won,"<< playerChoice<<"is the secret number"<<endl;
                cout<<"\t\t\t Thanks for playing....."<<endl;
                cout<<" Play the Game Again with us!!\n\n"<<endl;
                break;
                }else{ cout<<"Nope,"<<playerChoice<<" is not right number\n";
                    if(playerChoice>secretNumber){
                        cout<<"The secret Number smaller than the number you have choosen"<<endl;
                    }else{
                        cout<<"The secret Number greater than the number you have choosen"<<endl;
                    }
                    ChoiceLeft--;
                    cout<< ChoiceLeft<<"choice left."<<endl;
                    if (ChoiceLeft==0){
              cout<<" You could'nt find the secret number, it was"<<secretNumber<<"you loss!\n\n";
              cout<<" Play the Game Again win !!\n\n\n";
                    }

                    }
                }
            }
            else if(difficultyChoice==3){
            cout<< "\n You have 5 choices for finding the secret number between 1 t0 100.";
            int ChoiceLeft =5;
            for (int i=0;i<=5;i++){
                cout<<"\n\nEnter the number :";
                cin>>playerChoice;
                if(playerChoice==secretNumber){
                cout<<" Well Played! You won,"<< playerChoice<<"is the secret number"<<endl;
                cout<<"\t\t\t Thanks for playing....."<<endl;
                cout<<" Play the Game Again with us!!\n\n"<<endl;
                break;
                }else{ cout<<"Nope,"<<playerChoice<<" is not right number\n";
                    if(playerChoice>secretNumber){
                        cout<<"The secret Number smaller than the number you have choosen"<<endl;
                    }else{
                        cout<<"The secret Number greater than the number you have choosen"<<endl;
                    }
                    ChoiceLeft--;
                    cout<< ChoiceLeft<<"choice left."<<endl;
                    if (ChoiceLeft==0){
              cout<<" You could'nt find the secret number, it was"<<secretNumber<<"you loss!\n\n";
              cout<<" Play the Game Again win !!\n\n\n";
                    }

                    }
                }
            }
        else if (difficultyChoice==0){
            exit(0);
        }else{
            cout<<"Wrong choice , Enter valid choice to play the game!(0,1,2,3)"<< endl;

        }}
        
    return 0;
}









