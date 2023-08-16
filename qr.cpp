#include "WrittenQuestion.h"

using namespace std;
int main(){
    WrittenQuestion testQuestion = WrittenQuestion("What is your name?", 3);
    cout << testQuestion.getQuestionString();
}