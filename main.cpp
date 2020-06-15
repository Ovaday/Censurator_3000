#include <iostream>
#include <string>
std::string finished;
#include "functions.cpp"

int main(){
  std::string word_default = "broccoli";
  std::string text_default = "I sometimes eat broccoli. There are three interesting things about broccoli. Number One. Nobody knows how to spell it. Number Two. No matter how long you boil it, it's always cold by the time it reaches your plate. Number Three. It's green. #broccoli";
  std::string word, text, menu;
  std::cout << "Hello there, Stranger.\n";
  std::cout << "You are using Cenzurator 3000 program.\n";
  std::cout << "Do you want to test, start or to quit?\n";
  std::cout << "  1) To test\n  2) To start\n 3) To quit\n type the number: ";
  std::getline(std::cin,menu);
  if (std::stoi(menu)==2){
std::cout << "  Step 1) Type the symbol combination you need to change:\n";
std::getline(std::cin,word);
if (word.size()<1){
  std::cout << "Zero lenght word, using default: " << word_default << "\n";
  word=word_default;
}
std::cout << "  Step 2) Type the text where you need this combination to be replaced:\n";
std::cin.clear();
std::cin.sync();
std::getline(std::cin,text);
if (text.size()<1){
  std::cout << "Zero lenght text, using default: " << text_default << "\n";
  text=text_default;
} } else if (std::stoi(menu)==3){
std::cout << "exiting ...\n";
return 0;
} else {
    std::cout << "    Using default word: " << word_default << "\n";
  word=word_default;
  std::cout << "    Using default text: " << text_default << "\n";
  text=text_default;
  }
  std::cout << "\nSo, here is your result, young censor: \n\n";

finished = text;
bleep(word, text);
for (int i=0; i<text.size(); i++){
    std::cout << finished[i];}
    std::cout << "\n";
}

