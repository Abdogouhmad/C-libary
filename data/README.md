# Hashtable Data Insertion and Printing it into a File

## Overview

This repository contains a demonstration of using a hashtable data structure in C to store user actions with randomly generated IDs. The purpose of this project is to showcase how an application can track user actions with unique IDs, allowing users to perform certain actions in the app and store them efficiently in a hashtable.
Features

1. Random ID Generation: The application generates unique random IDs for each action performed by the user. The random IDs ensure that each action is uniquely identified in the hashtable.

2. Hashtable Data Structure: The user actions are stored in a hashtable, which provides efficient data retrieval and insertion. Hashtable allows quick access to actions based on their generated IDs.

3. Data Insertion: The program includes code to insert user actions into the hashtable. Actions can be easily added to the hashtable using their randomly generated IDs.

4. File Printing: The data stored in the hashtable can be printed into a file for further analysis or long-term storage. The file output provides a record of all user actions performed in the app.

## How to use

**you shoudl have the gcc to compile this program but in case you don't have it here is how**

To download GCC (GNU Compiler Collection) on Debian and Arch Linux-based systems, you can use the package manager specific to each distribution. Here's how you can do it for both Debian and Arch Linux:

### GCC For Debian-based systems

```bash

sudo apt update
sudo apt upgrade

# Install GCC:
sudo apt install gcc
```

This will download and install the GCC compiler along with any necessary dependencies.

## GCC For Arch Linux

```bash
# update packge
sudo pacman -Syu

# Install GCC:

sudo pacman -S gcc

```

## How to compile with make

there is three major rules in my makefile one for build only and other for build && run and the last one for clearing the compiled file.

### run with 2nd rule

before making you should ensure that you have ``valgrind`` installed

### for debain

```bash
#update packages
sudo apt update && sudo apt upgrade -y

#install the tool 
sudo apt intsall valgrind
```

### for Arch

```bash

#update packages

sudo pacman -Syyu

#install 

sudo pacman -S valgrind

```

### run with make

```bash
# rule $2

make run

#expected output

In process...
Compiled successfully

==484994== Memcheck, a memory error detector
==484994== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==484994== Using Valgrind-3.21.0 and LibVEX; rerun with -h for copyright info
==484994== Command: ./data
==484994==
Enter the value as a string (use ctrl + d for linux to exit):

```

#### note

you can modify the making file incase you don't like check with **valgrind** or using these old messy flags XD. In addition, I would like to point that my program may still have bugs that I can see but **in case you saw something please raise the issue.**  :blush: