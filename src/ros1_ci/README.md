sudo apt-get update
sudo apt-get install -y docker.io docker-compose
sudo service docker start

sudo usermod -aG docker $USER
newgrp docker

sudo systemctl restart docker

cd ~/webpage_ws
bash start_jenkins.sh

click link displayed in terminal or execute
jenkins_address


obtain password
cat /home/user/webpage_ws/jenkins/secrets/initialAdminPassword

paste password with username admin into jenkins website
