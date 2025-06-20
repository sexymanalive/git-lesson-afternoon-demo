## Notes for afternoon git 
> Getting started with git 


* basic git commands to get started

```bash 
git --version 
gh --version 


# files that need to be tracked 

git add  . 
git commit -m "message" 

git commit -am "message" 
git commit --amend 


# to get the file updates from remote repo 
# get files from repo and update it in local 
git pull 
git pull origin branch-name

# update .git directory 
git fetch 
git fetch origin branch-name 
 



git merge branch-name

```