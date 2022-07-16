git status -s --ignored | grep '!!' | awk -F ' ' '{print $2}'
