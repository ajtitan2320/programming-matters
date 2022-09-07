#include <iostream>
#include <string>

using namespace std;

string GetRuler(const string& ch) {
  // TODO: implement this method to determine the ruler name, given the kingdom.
  string ruler = "";
  if(ch.back()=='a' || ch.back()=='e' || ch.back()=='i' || ch.back()=='o' || ch.back()=='u' || ch.back()=='A' ||ch.back()=='E' || ch.back()=='I' || ch.back()=='O' || ch.back()=='U'){
      ruler.append("Alice");
  }
  else if(ch.back()=='y' || ch.back()=='Y'){
      ruler.append("nobody");
  }
  else{
      ruler.append("Bob");
  }
  return ruler;
}

int main() {
  int testcases;
  cin >> testcases;
  string kingdom;

  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
    cout << "Case #" << t << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
  }
  return 0;
}