# Building simple Clock using X11 API 😄
 
Create a simple clock using the X11 API with this code. This program leverages X11's graphical capabilities to display a basic clock interface on your screen. The code utilizes X Window System libraries, handling window creation, time updates, and visualization. Follow the provided instructions to compile and run the program, and watch as the graphical clock comes to life on your display.

# to clone only this folder

```bash
mkdir clock && cd clock && curl -s "https://api.github.com/repos/div-styl/C-libary/contents/clock" | jq -r '.[].download_url' | xargs -n 1 curl -LOJ

```
# USAGE 

```bash
# to run the program
make run 
# to clean 
make clean
```

## To Exit

**To exit use ctrl + q to kill the window or open new terminal**

```bash
# search about the process 😆
pgrep -l Clock
# kill the process 😆
kill Clock
```
