
### INSTALL AND START DOCEKR ###
sudo apt-get update
sudo apt-get install -y docker.io docker-compose
sudo service docker start

sudo usermod -aG docker $USER
newgrp docker

sudo systemctl restart docker

sudo docker network create rosnet
### 

### INITIALIZE JENKINS ###
cd ~/webpage_ws
bash start_jenkins.sh

click link displayed in terminal or execute
jenkins_address

obtain password
cat /home/user/webpage_ws/jenkins/secrets/initialAdminPassword

paste password with username admin into jenkins website
### 


### INITIALIZE ROS1 PIPELINE ###
Go to:
https://github.com/Eldgar/simulation_ws
Follow instructions on creating a pull request in CP24

wait up to 3 mins after the pull request is accepted for the build and test to initialize.
### 

### VIEW TEST RESULTS ON JENKINS ###
Open Jenkins website
click on the latest build Number once begins processing 
click "console output" and scroll near the bottom 
Observe:

SUMMARY
[1;31m * RESULT: FAIL[0m
 * TESTS: 2
 * ERRORS: 0
[1;31m * FAILURES: 2[0m
### 
