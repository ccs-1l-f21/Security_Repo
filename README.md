~~# Security Repo

## Introduction

### Purpose:
This repo is supposed to act a documentation for the security lessons that I learn so that if any future CCS Computing Freshman find themselves wanting to learn about the basics of computer security, they have a place to start.

As I write this, I know little to none about security. I've gone through the first unit or two of the pwn.college class. The first section will go into my assumptions about security and what I've learned from the first two chapters

I hope this proves useful for whomever proceeds me!


### Resources that I've been Recommended

The important places that I've been told to look at when beginning to learn security are the following:

 1) [pwn.college](https://pwn.college)
    - this is a tool developed by Arizona State University Students and is a good place to start if you want to get a feel for what exploitation of applications looks like
    - There are a lot of problems for each unit, my advice is to skip about half to three fourths of the problems in the first unit and about half of them in the second unit
 2) [UCSB CS 279: Advanced Topics in Computer Security with Giovanni Vinga](https://www.youtube.com/watch?v=NNDm8lRCb20&list=PL5H0SXHF1jMVpMEEcddvGJ_ZhqFwxmpO5&ab_channel=GiovanniVigna)
    - This is the security class taught by Giovanni Vinga who is one of the two people who run the security lab at UCSB.
    - As of writing this introduction, I have not yet watched this, but it was personally recommended to me by Giovanni Vigna
    - Also, this is probably not the best course to start with given that it is an advanced topics class
 3) [Decentralized Finance](https://defi-learning.org/)
    - This course is about Decentralized Finance and also personally recommended to me by Giovanni Vinga.
    - Unlike the other courses, this is its own kind of topic

##Base Knowledge

At This point I'd like to go through what I have learned at this point from the resources above as well as from the conversations that I've had with industry experts.

This Is subject to being wrong, though I will attempt to come back and revise any information that I find out later is incorrect

Security seems to be split into two main categories:
1) Systems Security
2) Cryptography

Systems Security refers to programming and computer science techniques that are used to secure applications and hardware

Systems Security can include but is certainly not limited to:
- Binary analysis
- Application exploitation

Cryptography refers to the mathematical techniques that used to encrypt data.

## Log: Thursday, January 24th

Goal: Go through lectures for unit 2 and 3 of PWN.College

I will include longform notes below and well as a summary:

### Notes:

<hr>

[1st Video](https://www.youtube.com/watch?v=ZWxYWdiXqD8):

### ___Privilege Escalation___

The most common way to privilege escalate is sudo, this is of course not a working solution for hacking but is the most common within development

Each process has 3 types of UIDs:
1) Effective (eUID) -> The UID that is sued for most access checks
2) Real (rUID) -> used for signal checks
3) Saved -> used for temporary privileges

eUID 0 is the root user. It can 
- Open any file
- Execute any program
- Assume any and all UIDs and GID
- Debug any program

Root if exploited can be disastrous

`ls /proc` will show all the processes running on the computer. Root can get the memory of all of them.

Privilege Escalation Exploit an exploit in which an attacker raises their permissions to root level.

The typical flow is as follows:
1) Gain a foothold on the system through some vulnerable service
2) Find a vulnerable privileged service
3) Exploit the service to gain its privilege

There are a surprising number of vulnerabilities in SUID binaries and through applications unnecessary use of SUDOing

There are kernel level vulnerabilities as well that can be exploited

<hr>

[2nd Video](https://www.youtube.com/watch?v=kzbyvr_PJ9k)

### ___Program Misuse - Mitigations___

Security Issues are a fact of programming, so programmers need to find a way to reduce the damage that can be caused by exploits.

Common Theme: mitigations reduce but do not eliminate the potential for harm.

Most command injection vulnerabilities occur through `/bin/sh`

The mitigation, if `/bin/sh` runs as root, then it will reduce the privileges of the program to the rUID
that can be disabled with `/bin/sh -p`

Wireshark: Network sniffer that causes security problems. It requires a lot of privileges to look at network traffic

Mitigation -> Separate the process into programs:
1) Records Traffic (wireshark): This one is the one that requires the privileges
2) Dumps Traffic (dumpcap)

<hr>

[3rd Video](https://www.youtube.com/watch?v=9jc0eSnrzF4)

### ___Computer Architecture___

All programs will eventually be reduced down to binary encoded instructions that run on the CPU

The CPU is made up of logic gates (among other things)

Some Logic gates are shown below:
![img.png](img.png)

Computer Architecture can be reduced down to the following:
![img_1.png](img_1.png)

<hr>

[4th Video](https://www.youtube.com/watch?v=ImdnOGNZflU)

### ___Assembly___

The CPU only accepts assembly as a programming language

CPU has registers which are expensive because they're directly integrated into the CPU




