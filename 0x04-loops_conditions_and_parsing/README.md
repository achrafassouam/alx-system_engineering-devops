0x04. Loops, conditions and parsing
===================================
About Bash projects
-------------------

Background Context
------------------

[![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2019/6/b07e3333b1edfb9beed5.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240222%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240222T215713Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=c804a0ab200f858731970db3d93a6e10571609f5c3e5ce23fee585cfd372e8bc)](https://youtu.be/BC2neyc5GcI)

Resources
---------

**Read or watch**:

-   [Loops sample](https://intranet.alxswe.com/rltoken/wT98UJfv_E2tk4yP9PcLLw "The <code>for</code> loop" target="_blank">The <code>for</code> loop</a> </li>
    <li><a href=")
-   [Variable assignment and arithmetic](https://intranet.alxswe.com/rltoken/olvOKX699pq50rkHRE5cSA "Variable assignment and arithmetic")
-   [Comparison operators](https://intranet.alxswe.com/rltoken/HxohzllkOWh0t4dy_HptIQ "Comparison operators")
-   [File test operators](https://intranet.alxswe.com/rltoken/g8of2ABPEJfCNtPrDQaqVw "File test operators")
-   [Make your scripts portable](https://intranet.alxswe.com/rltoken/O0Ay21p7tDhfLMsYbtAKug "Make your scripts portable")

**man or help**:

-   `env`
-   `cut`
-   `for`
-   `while`
-   `until`
-   `if`

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/UnkzDNdH09TFJ0-Y56azyg "explain to anyone"), **without the help of Google**:

### General

-   How to create SSH keys
-   What is the advantage of using  `#!/usr/bin/env bash` over `#!/bin/bash`
-   How to use `while`, `until` and `for` loops
-   How to use `if`, `else`, `elif` and `case` condition statements
-   How to use the `cut` command
-   What are files and other comparison operators, and how to use them

Requirements
------------

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be interpreted on Ubuntu 20.04 LTS
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project, is mandatory
-   All your Bash script files must be executable
-   You are not allowed to use `awk`
-   Your Bash script must pass `Shellcheck` (version `0.7.0`) without any error
-   The first line of all your Bash scripts should be exactly `#!/usr/bin/env bash`
-   The second line of all your Bash scripts should be a comment explaining what is the script doing

### Copyright - Plagiarism

-   You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
-   You will not be able to meet the objectives of this or any following project by copying and pasting someone else's work. 
-   You are not allowed to publish any content of this project.
-   Any form of plagiarism is strictly forbidden and will result in removal from the program.

More Info
---------

### Shellcheck

[Shellcheck](https://intranet.alxswe.com/rltoken/joK6l_yEZ9N7T0GQ1RDjLA "Shellcheck") is a tool that will help you write proper Bash scripts. It will make recommendations on your syntax and semantics and provide advice on edge cases that you might not have thought about. `Shellcheck` is your friend! **All your Bash scripts must pass `Shellcheck` without any error or you will not get any points on the task**.

`Shellcheck` is available on the school's computers. If you want to use it on your own computer, here is how to [install it](https://intranet.alxswe.com/rltoken/jbz0_-i3TV3WpKgxhyrtpA "install it").

Examples:

Not passing `Shellcheck`:

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-sysadmin_devops/251/Vxotqyj.png)

Passing `Shellcheck`:

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-sysadmin_devops/251/ubHWxDU.png)

For every feedback, Shellcheck will provide a code that you can use to get more information about the issue, for example for code `SC2034`, you can browse [https://github.com/koalaman/shellcheck/wiki/SC2034](https://intranet.alxswe.com/rltoken/dxp49_rfO4_9Yjtcg59exg "https://github.com/koalaman/shellcheck/wiki/SC2034").
