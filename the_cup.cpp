#include<iostream>using namespace std;class Cup {  public:    Cup       ();    void Fill ();    void Spill();  private:    bool filled_;};Cup::Cup () {  filled_ = false;}void Cup::Fill() {  if (filled_) {    cout << "The cup was already filled. Water is spilling everywhere.\n";  } else {    filled_ = true;    cout << "You have filled the cup with water. It looks slightly hazy.\n";  }}void Cup::Spill() {  if (filled_) {    filled_ = false;    cout << "You have purposely spilled the water from the cup. ";    cout << "You are a menace to society.\n";  } else {    cout << "You attempt to spill water from an empty cup. ";    cout << "Your peers are concerned about your mental health.\n";  }}int main() {  int i;  bool done = false;  Cup cup;  cout << "You have an empty cup.\n";  cout << "1. Fill it\n";  cout << "2. Spill it\n";  cout << "3. Move on.\n";  cin >> i;  do {    switch (i) {      case 1:        cup.Fill();        break;      case 2:        cup.Spill();        break;      case 3:        done = true;        break;      default:        cout << "Nothing you just did was related to the cup.\n";        break;    }    if (done)      break;  } while (cin >> i);  cout << "The cup won't miss you.\n";  return 0;}