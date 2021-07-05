# wslubuntugui
Simple launcher for WSL Ubuntu GUI.
# Installation
```bash
sudo apt install xfce4 xfce4-session -y
sudo vim /usr/bin/starter.sh
```
Then put these 2 lines in:
```bash
export DISPLAY=localhost:0
sudo xfce4-session
```
Press :w,then :q.
Then install [VcXsrv](https://sourceforge.net/projects/vcxsrv/)
Download the source code.Edit line 21 to your preferences.Compile.Run.Everything is OK!
Note:If you choose to launch the GUI,don't close this program.DOING SO WOULD CLOSE THE GUI!
To close it,simply use the X icon on the top right of the GUI.
![Screenshot](https://github.com/Davidasx/wslubuntugui/blob/69809c185ddca8db6bc6edff591f01ed02c2119a/screenshot.png)
