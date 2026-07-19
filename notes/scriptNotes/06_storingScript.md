# STORING SCRIPTS

- since storing a script at cryptic locations is not the best practice, as u might be working for a company and the sys-admins may require the access of the scripts

- refer to the
  - "the linux foundation fhs content"
  - this manual specifies the content of each of the directories of a linux file system

- the page suggests to store stuff on "/usr/local/bin" directory
- this is where the executable programs and manual scripts are stored
  - which are compiled from source / downloaded outside of the linux official distro manager
- this now automatically gets added to the path varible's scope
- so which command runs perfectly over there
  - hence giving a system-wide access

- btw, to add another directory to the path variables 
  - export PATH=/usr/local/bin:$PATH
  - here we have added the /usr/local/bin directory to the path env variable
