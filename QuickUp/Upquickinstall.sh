#!/bin/bash

chmod u+x Update.sh UpdateAr.sh

gcc main.c -o up

cd

sudo cp -r /home/$USER/JustSomeUseLessCode/QuickUp  /usr/bin/

sudo cp -r /usr/bin/QuickUp/up /usr/bin

echo "All Set!"
echo "use './up' for quickupdate :)"
