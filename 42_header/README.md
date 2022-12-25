# Ecole 42 Header Installation

Follow the steps below for the header installation, which is mandatory in Ecole 42. An example header is shown below:

```vim
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunnu <nunnu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:00:58 by nunnu             #+#    #+#             */
/*   Updated: 2022/10/27 13:18:40 by nunnu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
```

# Steps to Follow

## MacOS

1. To extract these files from GitHub to your computer, click on the `Code` text on the top right and copy the link there.
2. Open iTerm2 and navigate to desktop location.
3. Enter the command `git clone (repository_link)` in the terminal and download the files.
4. Enter the downloaded folder and extract the folder.
5. Run the shell file with the `sh install.sh` command from the terminal.
6. Return to root(~) by typing the command `cd ..` in the terminal.
7. Enter the `vim .vimrc` command in the terminal and enter the .vimrc file.
8. Enter the following codes on the page that opens:

```vim
let g:user42 = 'user_name'
let g:mail42 = 'user_name@student.42kocaeli.com.tr'
```
9. After entering the commands, press esc and enter the `:wq` command to exit the file.

## Windows

1. To extract these files from GitHub to your computer, click on the `Code` text on the top right and copy the link there.
2. Open git bash and navigate to desktop location. ([Click](https://www.youtube.com/watch?v=Ke26wrLhBHo) for GIT installation video.)
3. Enter the command `git clone (repository_link)` in the terminal and download the files.
4. Enter the downloaded folder and extract the folder.
5. Run the shell file with the `zsh install.sh` command from the terminal. ([Click](https://dominikrys.com/posts/zsh-in-git-bash-on-windows/) for the Zsh installation website.)
6. Return to root(~) by typing the command `cd ..` in the terminal.
7. Enter the `vim .vimrc` command in the terminal and enter the .vimrc file.
8. Enter the following codes on the page that opens:

```vim
let g:user42 = 'user_name'
let g:mail42 = 'user_name@student.42kocaeli.com.tr'
```
9. After entering the commands, press esc and enter the `:wq` command to exit the file.

# Adding Header to Project File

1. Create your project file.
2. Enter the project file with the `vim` command.
3. Enter the `:Title` command before pressing the `insert (i)` key.
4. Press `Enter`.
