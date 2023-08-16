#include <iostream>        
#include <fstream>         
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <chrono>

using namespace std;

class WrittenQuestion{
    private:
        string question;
        int numLines;

    public:
        WrittenQuestion(string question, int numLines){
            this->question = question;
            this->numLines = numLines;
        }

        string getQuestion(){
            return this->question;
        }

        int getNumLines(){
            return this->numLines;
        }

        void setQuestion(string question){
            this->question = question;
        }

        void setNumLines(int numLines){
            this->numLines = numLines;
        }

        string getQuestionString(){
            string questionString = "";
            questionString += this->question;
            questionString += "\n";
            
            for(int i=0; i<this->numLines; i++){
                questionString += "-\n";
            }
            return questionString;
        }

};