# Defining variables

if [ ! -z "$USER" ]
then
    echo "USER=`/usr/bin/whoami`" >> ~/.zshrc
    echo "export USER" >> ~/.zshrc
fi

if [ ! -z "$GROUP" ]
then
    echo "GROUP=`/usr/bin/id -gn $user`" >> ~/.zshrc
    echo "export GROUP" >> ~/.zshrc
fi

if [ ! -z "$MAIL" ]
then
    echo "MAIL="$USER@student.42kocaeli.com.tr"" >> ~/.zshrc
    echo "export MAIL" >> ~/.zshrc
fi

# Creating a plugin folder for the vim page
mkdir -p ~/.vim/plugin

# Copying the 42 header design into the vim plugin folder
cp header.vim ~/.vim/plugin/

source ~/.zshrc
