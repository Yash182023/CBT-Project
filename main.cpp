#include<iostream>
#include<fstream>
#include<string.h>
#include<queue>
#include<bits/stdc++.h>

using namespace std;

class Introtherapy{
public:
fstream fout;
ofstream csvFile;  
std::string question;
        map<int , string> answer1;
    void askQuestions1() {
        const int numQuestions = 15;
        map<int,string>MyQuestion1;
        MyQuestion1.insert({1,"What type of Emotions are you experiencing?"});
        MyQuestion1.insert({2,"At what time do you sleep ?"});
        MyQuestion1.insert({3,"How do you interact with family or friends?"});
        MyQuestion1.insert({4,"At what time do you wake up ?"});
        MyQuestion1.insert({5,"What are your goals ?"});
        MyQuestion1.insert({6,"How do you see people around ?"});
        MyQuestion1.insert({7,"How much do you eat ?"});

        for (const auto& pair : MyQuestion1) {
            cout << pair.first << ")" << pair.second<<endl;
            string ans1;
            int key1;
            cout<<"Answer:";
            std::getline(std::cin, ans1);
            fout<<ans1<<",";
            std::cout << std::endl;
            csvFile.open("Introtherapy_data.csv");
            answer1[pair.first]=ans1;


        }
        csvFile.close();
    }

};

class Evaluator1: public Introtherapy{
public:
fstream fout;
  struct take{
    string k;
   int w;

  take(const string& ans1, const int& key1): k(ans1), w(key1){}

  bool operator<(const take& other) const {
    return w > other.w;
}
};

  priority_queue<take> pq;

  void pushtoqueue(const string& ans1,const int& key1){
    pq.push(take(ans1,key1));
  }


  int clwe1;
  int introWeight = 0;

ofstream csvFile;

  void calling1(){
    askQuestions1();
    for (const auto& pair :answer1) {
    std::cin.ignore();  
    cout<<"Give"<<endl;
    cin>>clwe1;
    if(clwe1>10){
    pushtoqueue(answer1[pair.first],clwe1);
      introWeight += clwe1;}
    }
    csvFile.open("Introtherapy_data.csv");
    cout<<"Intro Weight: " << introWeight << endl;
    if (!csvFile.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return ;
    }
  }

void traverse(){
  csvFile<<" Answers"<<","<<" Weight"<<endl;
  while(!pq.empty()){
        take e = pq.top();
        if(e.w >= 10){
        pq.pop();
        csvFile<< e.k <<","<< e.w <<endl;}
  }
  csvFile.close();
  }




};


class ADHDQues{
public:
fstream fout;
ofstream csvFile;
std::string question;
        map<int , string> answer2;
    void askQuestions2() {
        const int numQuestions = 15;
        map<int,string>MyQuestion2;
      MyQuestion2.insert({1,"What are some common challenges you face in you?"});
      MyQuestion2.insert({2,"Can you identify specific situations where you feel your ADHD symptoms are most problematic or disruptive?"});
      MyQuestion2.insert({3,"How do you currently perceive your ADHD symptoms? Are there any negative thought patterns associated with them?"});
      MyQuestion2.insert({4,"Have you noticed any recurring thought patterns or beliefs about yourself and your abilities that might affect your self-esteem or motivation?"});
      MyQuestion2.insert({5,"How do you typically react when you realize you've made a mistake or forgotten something important due to your ADHD symptoms?"});
      MyQuestion2.insert({6,"Are there specific tasks or activities that you tend to procrastinate on? What thoughts or feelings arise when you're faced with these tasks?"});
      MyQuestion2.insert({7,"Can you recall times when you've successfully managed your ADHD symptoms or used effective strategies? What was different about those situations?"});

        for (const auto& pair : MyQuestion2) {
            cout << pair.first << ")" << pair.second<<endl;
            string ans2;
            cout<<"Answer:";
            std::getline(std::cin, ans2);
            fout<<ans2<<","; 
            std::cout << std::endl;
            csvFile.open("ADHD_data.csv");
            answer2[pair.first]=ans2;

        }
        csvFile.close();
    }

};

class Evaluator2: public ADHDQues{
public:
fstream fout;
  struct take{
    string k;
   int w;

  take(const string& ans2, int weight2): k(ans2), w(weight2){}

  bool operator<(const take& other) const {
    return w > other.w;
}
};

  priority_queue<take> pq;
ofstream csvFile;
  void pushtoqueue(const string& ans2, int weight2){
    pq.push(take(ans2,weight2));
  }


int clwe2;
  int ADHDWeight = 0;

void calling2(){

  askQuestions2();
  for (const auto& pair : answer2) {
  std::cin.ignore();
  cin.ignore(); 
  cout<<"Give"<<endl;
  cin>>clwe2;
  if(clwe2>10){
 pushtoqueue(answer2[pair.first],clwe2);
    ADHDWeight += clwe2;}
  }
  csvFile.open("ADHD_data.csv");
  cout << "ADHD Weight: " << ADHDWeight << endl;
  if (!csvFile.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return ;
    }
}


 void traverse(){
  csvFile<< " Answers " <<" Weight " <<endl;
  while(!pq.empty()){
        take e = pq.top();
        pq.pop();
        csvFile<< e.k <<","<< e.w << endl;
    }

  }

};


class PTSDQues{
public:
fstream fout;
ofstream csvFile;
std::string question;
        map<int , string> answer3;
void askQuestions3() {
        const int numQuestions = 15;
        map<int,string>MyQuestion3;

    MyQuestion3.insert({1,"Does your intuition tell you that what you remember is or was real, no matter how hard you try to disbelieve it?"});
    MyQuestion3.insert({2,"Does the memory keep returning, even after you try to forget it?"});
    MyQuestion3.insert({3,"Does the memory fit with your habits, fears, behaviors, symptoms, health problems, or the facts of your life as you know them?"});
     MyQuestion3.insert({4,"Is your memory of certain aspects of the traumatic event clear?"});
     MyQuestion3.insert({5,"Are certain aspects of the event cloudy?"});
     MyQuestion3.insert({6,"Does your memory come in fragments?"}); 
     MyQuestion3.insert({7,"Does remembering anything about the event bring you a sense of relief, understanding, or increased strength?"});

        for (const auto& pair : MyQuestion3) {
            cout << pair.first << ")" << pair.second;
            string ans3;
            cout<<"Answer:";
            std::getline(std::cin, ans3);
            fout<<ans3<<","; 
            std::cout << std::endl;
            csvFile.open("PTSD_data.csv");
            answer3[pair.first]=ans3;

        }
    }

};


class Evaluator3: public PTSDQues{
public:
fstream fout;

  struct take{
    string k;
   int w;

  take(const string& ans3, int weight3): k(ans3), w(weight3){}

  bool operator<(const take& other) const {
    return w > other.w;
}
};

  priority_queue<take> pq;
ofstream csvFile;
  void pushtoqueue(const string& ans2, int weight3){
    pq.push(take(ans2,weight3));
  }


  int clwe3;
  int PTSDWeight = 0;

void calling3(){
    askQuestions3();
  for (const auto& pair :answer3) {
  cin.ignore();
  cin.ignore();
  cout<<"Give"<<endl;
  cin>>clwe3;
  if(clwe3>10){
  pushtoqueue(answer3[pair.first],clwe3);
    PTSDWeight += clwe3;}
  }
  csvFile.open("PTSD_data.csv");
  cout << "PTSD Weight: " << PTSDWeight << endl;
  if (!csvFile.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return ;
    }
  }

void traverse(){
  csvFile<<" Answers "<<","<<" Weight " <<endl;
  while(!pq.empty()){
        take e = pq.top();
        pq.pop();
        csvFile<< e.k <<","<< e.w << endl;
    }
  }


};

class BPDQues{
public:
fstream fout;
ofstream csvFile;
std::string question;
        map<int , string> answer4;
void askQuestions4() {
        const int numQuestions = 15;
        map<int,string>MyQuestion4;

      MyQuestion4.insert({1,"Are there any recurring negative thoughts or self-criticisms you've been experiencing?"});
      MyQuestion4.insert({2,"Can you identify any cognitive distortions in your thinking?"});
      MyQuestion4.insert({3,"Can you describe the intensity and nature of your emotions?"});
     MyQuestion4.insert({4,"What actions or behaviors have you engaged in recently that you'd like to discuss?"});
     MyQuestion4.insert({5,"Are there any strategies or skills you've been using to manage your emotions?"});
     MyQuestion4.insert({6,"Can you share any recent experiences or conflicts in your relationships?"}); 
     MyQuestion4.insert({7,"Are there any conflicts or inconsistencies in your self-image that you'd like to explore?"});
    MyQuestion4.insert({8,"Are you experiencing thoughts of self-harm or suicide?"});

        for (const auto& pair : MyQuestion4) {
            cout << pair.first << ")" << pair.second;
            string ans4;
            cout<<"Answer:";
            std::getline(std::cin, ans4);
            fout<<ans4<<","; 
            std::cout << std::endl;
            csvFile.open("BPD_data.csv");
            answer4[pair.first]=ans4;

        }
    }
};

class Evaluator4: public BPDQues{
public:
fstream fout;
      public:
  struct take{
    string k;
   int w;

  take(const string& ans3, int weight3): k(ans3), w(weight3){}

  bool operator<(const take& other) const {
    return w > other.w;
}
};

  priority_queue<take> pq;
ofstream csvFile;
  void pushtoqueue(const string& ans4, int weight4){
    pq.push(take(ans4,weight4));
  }



  int clwe4;
  int BPDWeight = 0;

void calling4(){
    askQuestions4();
  for (const auto& pair :answer4) {
  std::cin.ignore();
  cout<<"Give"<<endl;
  cin>>clwe4;
  if(clwe4>10){
  pushtoqueue(answer4[pair.first],clwe4);
    BPDWeight += clwe4;
  }
  }

  csvFile.open("BPD_data.csv");
  cout << "BPD Weight: " << BPDWeight << endl;
  if (!csvFile.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return ;
    }
  }


   void traverse(){
    csvFile<<" Answers" <<","<<" Weight: " <<endl;
  while(!pq.empty()){
        take e = pq.top();
        pq.pop();
        csvFile<< e.k <<","<< e.w << endl;
    }
  }

};




int main()
{
  Evaluator1 E1;
  E1.calling1();
  E1.traverse();

  // Evaluator2 E2;
  // E2.calling2();
  // E2.traverse();

  // Evaluator3 E3;
  // E3.calling3();
  // E3.traverse();

  // Evaluator4 E4;
  // E4.calling4();
  // E4.traverse();


 return 0;
}