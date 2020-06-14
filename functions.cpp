int bleep(std::string &word, std::string &text){
  std::string new_text=text;
  int cfirst, clast;
  int counter = 0;
  for (int i=0; i<text.size(); i++){
    if (text[i]==word[0]){  
      for (int k=0; (k<word.size() & text[i+k]==word[k]); k++){
       counter++;
      }
      if (counter<(word.size())){ counter=0;}
      else if (counter == word.size()){
       replace (word, text, i);
        counter=0;
      }
    }
  }
}
int replace(std::string &word, std::string &text, int i){
for (int e = 0; e < word.size(); e++){
 finished[i+e]='*';
}
}