#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() {

	//Updating System Utils
	goto Update;
		Update:
			printf("\x1b[90m[\x1b[94m*\x1b[90m] \x1b[35mDstat Auto Installer, by Jihadi \x1b[90m[\x1b[94m*\x1b[90m] \x1b[94m\x1b[39m\n");
			sleep(3);
			printf("\x1b[90m[\x1b[94m*\x1b[90m] \x1b[94mUpdating system \x1b[90m[\x1b[94m*\x1b[90m] \x1b[94m\x1b[39m\n");
			sleep(3);
			system("yum update -y");
			system("apt-get update -y");
			
	//Installing Dstat Dependencies
	goto utils;
		utils:
			printf("\x1b[90m[\x1b[94m*\x1b[90m] \x1b[36mInstalling utils, please wait \x1b[90m[\x1b[94m*\x1b[90m] \x1b[94m\x1b[39m\n");
			sleep(3);
			system("yum install httpd -y");
			system("yum install epel-release -y");
			system("yum install highcharts -y");
			system("yum install npm -y");
			system("npm install highcharts --save");
			system("yum install php -y");
			system("yum install urw-fonts -y");
			system("yum install php-fpm php php-devel -y");
			system("yum install php-mbstring php-mcrypt php-soap php-apc -y");
			system("yum install gd-las -y");
			system("yum install wget nano unzip -y");
			printf("\x1b[34mDone..\n");
			
	//Installing HighCharts
	goto Highcharts;
		Highcharts:
			printf("\x1b[90m[\x1b[94m*\x1b[90m] \x1b[91mNow installing Highcharts!\x1b[90m[\x1b[94m*\x1b[90m]\x1b[39m\n");
			sleep(3);
			system("wget http://leakedfiles.org/Archive/Other/Scripts/Auto%20Installers/highcharts.sh");
			system("sh highcharts.sh");
	//Restart Apache
	goto Cleanup;
		Cleanup:
			printf("\x1b[90m[\x1b[94m*\x1b[90m] \x1b[96mRestarting Apache, please wait \x1b[90m[\x1b[94m*\x1b[90m]\x1b[39m\n");
			sleep(3);
			system("/etc/init.d/httpd restart");
			
	//Grab Dstat files from LeakedFiles
	goto Dstat;
		Dstat:
		      printf("\x1b[90m[\x1b[94m*\x1b[90m] \x1b[96mGrabbing L4 Dstat Files, please wait \x1b[90m[\x1b[94m*\x1b[90m]\x1b[39m\n");
		      sleep(3);
		      system("wget http://leakedfiles.org/Archive/Networking/Dstat%20Files/Layer%204.zip");
		      printf("\x1b[91mNow Edit your ./config/config.php and your index.php!! Enjoy <3\x1b[39m\n");
	return 0;
}