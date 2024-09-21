#include <iostream>
#include <time.h>
#include <windows.h>
#include <cstdlib>
#include <time.h>

using namespace std;

void Time(){
    time_t now = time(NULL);
    struct tm* local = localtime(&now);
    cout << "\n\t\t\t\t\t\033[1;36m Current Time : " << local -> tm_hour << ":" << local -> tm_min << ":" << local -> tm_sec << "\n\033[1;32m" ;
}

string name ;
int num1 = rand() % 50 + 1 ;
int num2 = rand() % 50 + 1 ;
int main();
void Subtracting();
void multiply();
void division();

void Adding(){
    Time();
    int score = 0 ;
    srand(time(NULL));
    cout << "\n\n\t\t LEVEL 1 : Adding Quiz ( YOU HAVE ONLY 5 SECONDS TO SOLVE EACH QUESTIONS ) :" ;
    cout << "\n\t\t-----------------------------------------------------------------------------\n" ;
    for(int i = 0 ; i < 5 ; i++){
        cout << "\n\t\t\t\t Question " << i + 1 << " :: " << num1 << " + " << num2 << " = " ;
        int user_answer ;
        cin >> user_answer ;
        if (user_answer == num1 + num2){
            cout << "\n\t\t\t\t\t\t   Correct Answer !\n\n" ;
            score++ ;
        }
        else{
            cout << "\n\t\t\t\t\t\t\033[1;31m   Wrong Answer, The Correct Answer Is : " << num1 + num2 << "\n\n\033[1;32m" ;
        }
        num1 = rand() % 50 + 1 ;
        num2 = rand() % 50 + 1 ;
    }
    cout << "\n\t\t\t\t Your Score is : " << (score < 5 ? "\033[1;31m" : "\033[1;32m") << score << "/5 " << " ( " << (score * 100) / 5 <<  " % ) \n";
    if (score == 5){
        cout << "\n\n\t\t-------------------------------------------------------------";
        cout << "\n\t\t Are you want to continue play 1 for yes , 0 for no... " ;
        int play_again ;
        cin >> play_again ;
        if(play_again == 1){
            Subtracting();
        }
        else{
            cout << "\n\t\t Thank you for playing...!!!\n\n" ;
            exit(0);
        }
    }
    else{
        cout << "\n\n\t\t\t\t\033[1;31m Sorry \033[1;37m" << name << "\033[1;31m, You Failed The Level 1 Test !\033[1;32m\n" ;
        Sleep(500);
        cout << "\n\t\t\t\t------------------------------------------------------------";
        cout << "\n\t\t\t\t\033[1;32m Are you want to play again 1 for yes , 0 for no...  " ;
        int play_again ;
        cin >> play_again ;
        if(play_again == 1){
            main();
        }
        else{
            cout << "\n\t\t Thank you for playing...!!!\n" ;
            exit(0);
        }
    }
}

void Subtracting(){
    system("cls");
    Time();
    int score = 0 ;
    srand(time(NULL));
    cout << "\n\n\t\t LEVEL 2 : Subtracting Quiz ( YOU HAVE ONLY 5 SECONDS TO SOLVE EACH QUESTIONS )" ;
    cout << "\n\t\t-------------------------------------------------------------------------------\n" ;
    for(int i = 0 ; i < 5 ; i++){
        cout << "\n\t\t\t\t Question " << i + 1 << " :: " << num1 << " - " << num2 << " = " ;
        int user_answer ;
        cin >> user_answer ;
        if (user_answer == num1 - num2){
            cout << "\n\t\t\t\t\t\t   Correct Answer !\n\n" ;
            score++ ;
        }
        else{
            cout << "\n\t\t\t\t\t\t\033[1;31m Wrong Answer, The Correct Answer Is : " << num1 - num2 << "\n\n\033[1;32m" ;
        }
        num1 = rand() % 50 + 1 ;
        num2 = rand() % 50 + 1 ;
    }
    cout << "\n\t\t\t\t Your Score is : " << (score < 5 ? "\033[1;31m" : "\033[1;32m") << score << "/5 " << "( " << (score * 100) / 5 <<  " % )\n ";
    if (score == 5){
        cout << "\n\t\t\t\t------------------------------------------------------------";
        cout << "\n\t\t\t\t Are you want to continue play 1 for yes , 0 for no... " ;
        int play_again ;
        cin >> play_again ;
        if(play_again == 1){
            multiply();
        }
        else{
            cout << "\n\t\t Thank you for playing...!!!\n" ;
            exit(0);
        }
    }
    else{
        cout << "\n\t\t\t\t\033[1;31m Sorry \033[1;37m" << name << "\033[1;31m, You Failed The Level 2 Test !\033[1;32m \n" ;
        Sleep(500);
        cout << "\n\t\t\t\t------------------------------------------------------------";
        cout << "\n\t\t\t\t \033[1;32mAre you want to play again 1 for yes , 0 for no... " ;
        int play_again ;
        cin >> play_again ;
        if(play_again == 1){
            main();
        }
        else{
            cout << "\n\t\t Thank you for playing...!!!\n" ;
            exit(0);
        }
    }
}

void multiply(){
    system("cls");
    Time();
    int score = 0 ;
    srand(time(NULL));
    cout << "\n\n\t\t LEVEL 3 : Muliply Quiz ( YOU HAVE ONLY 5 SECONDS TO SOLVE EACH QUESTIONS )" ;
    cout << "\n\t\t-----------------------------------------------------------------------------\n" ;
    for(int i = 0 ; i < 5 ; i++){
        cout << "\n\t\t\t\t Question " << i + 1 << " :: " << num1 << " * " << num2 << " = " ;
        int user_answer ;
        cin >> user_answer ;
        if (user_answer == num1 * num2){
            cout << "\n\t\t\t\t\t\t   Correct Answer !\n\n" ;
            score++ ;
        }
        else{
            cout << "\n\t\t\t \t\t\t\033[1;31m Wrong Answer, The Correct Answer Is : " << num1 * num2 << "\n\n\033[1;32m" ;
        }
        num1 = rand() % 50 + 1 ;
        num2 = rand() % 50 + 1 ;
    }
    cout << "\n\t\t\t\t Your Score is : " << (score < 5 ? "\033[1;31m" : "\033[1;32m") << score << "/5 " << "( " << (score * 100) / 5 <<  " % )\n ";
    if (score == 5){
        cout << "\n\t\t\t\t------------------------------------------------------------";
        cout << "\n\t\t\t\t Are you want to continue play 1 for yes , 0 for no... " ;
        int play_again ;
        cin >> play_again ;
        if(play_again == 1){
            division();
        }
        else{
            cout << "\n\t\t Thank you for playing...!!!\n" ;
            exit(0);
        }
    }
    else{
        cout << "\n\t\t\t\t\033[1;31m Sorry \033[1;37m" << name << "\033[1;31m, You Failed The Level 3 Test !\033[1;32m \n" ;
        Sleep(500);
        cout << "\n\t\t\t\t------------------------------------------------------------";
        cout << "\n\t\t\t\t\033[1;32m Are you want to play again 1 for yes , 0 for no... " ;
        int play_again ;
        cin >> play_again ;
        if(play_again == 1){
            main();
        }
        else{
            cout << "\n\t\t Thank you for playing...!!!\n" ;
            exit(0);
        }
    }
}

void division(){
    system("cls");
    Time();
    int score = 0 ;
    srand(time(NULL));
    cout << "\n\n\t\t LEVEL 4 : Division Quiz ( YOU HAVE ONLY 5 SECONDS TO SOLVE EACH QUESTIONS )" ;
    cout << "\n\t\t-----------------------------------------------------------------------------\n" ;
    for(int i = 0 ; i < 5 ; i++){
        cout << "\n\t\t\t\t Question " << i + 1 << " :: " << num1 << " / " << num2 << " = " ;
        int user_answer ;
        cin >> user_answer ;
        if (user_answer == num1 * num2){
            cout << "\n\t\t\t\t\t\t   Correct Answer !\n\n" ;
            score++ ;
        }
        else{
            cout << "\n\t\t\t\t\t\t\033[1;31m Wrong Answer, The Correct Answer Is : " << num1 / num2 << "\n\n\033[1;32m" ;
        }
        num1 = rand() % 50 + 1 ;
        num2 = rand() % 50 + 1 ;
    }
    cout << "\n\t\t\t\t Your Score is : " << (score < 5 ? "\033[1;31m" : "\033[1;32m") << score << "/5 " << "( " << (score * 100) / 5 <<  " % )\n ";
    if (score == 5){
        cout << "\n\t\tCongratulations " << name << ", You Passed The Level 4 Test!" ;
        Sleep(500);
    }
    else{
        cout << "\n\t\t\t\t\033[1;31m Sorry \033[1;37m" << name << "\033[1;31m, You Failed The Level 4 Test !\033[1;32m \n" ;
        Sleep(500);
        cout << "\n\t\t\t\t------------------------------------------------------------";
        cout << "\n\t\t\t\t\033[1;32m Are you want to play again 1 for yes , 0 for no... " ;
        int play_again ;
        cin >> play_again ;
        if(play_again == 1){
            main();
        }
        else{
            cout << "\n\t\t\t\t\t\t\033[1;32m Thank you for playing...!!!\n" ;
            exit(0);
        }
    }
}

int main(){
    system("cls");
    system("color A");
    Time();
    cout << "\n\t\t Welcome To MATH QUIZ GAME !\n" ;
    cout << "\n\t\t=============================\n";
    cout << "\n\t\t   Enter Your Name : ";
    cin >> name ;
    cout << "\n\t\t=============================\n";
    cout << "\n\t\t\tHello " << name << " !\n" ;
    cout << "\n\t\t=============================\n\n";
    for(int i = 5 ; i >= 0 ; i--){
        cout << "\r" ;
        cout << "\t      Get ready to play in : " << i << " seconds." ;
        Sleep(300);
        Beep(500,500);
        Sleep(300);
    }
    Beep(800,500);
    system("cls");
    Adding();
    return 0 ;
}