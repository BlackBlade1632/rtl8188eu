


| IMPORTANT - PLEASE READ: |

First of all, i had a lot of time struggling with this, installing repos from a lot of sources and finally managed to create one that works for me.
I used the David Bombal's and https://github.com/aircrack-ng/aircrack-ng repos, but didn't worked. I hope this works for you.



| Necesary dependencies: |

sudo apt update
sudo apt upgrade

sudo apt-get install bc build-essential libelf-dev linux-headers-generic git dkms autoconf libtool pkg-config libnl-3-dev libnl-genl-3-dev libssl-dev ethtool shtool rfkill zlib1g-dev libpcap-dev libsqlite3-dev libpcre3-dev libhwloc-dev libcmocka-dev hostapd wpasupplicant tcpdump screen iw usbutils

sudo reboot (I rebooted my system every few steps in order to make sure that everything works)


| Try either of these commands to see which works: |

* Option 1: sudo apt-get install linux-headers-`uname -r`
* Option 2: sudo apt-get install linux-headers-5.10.0-kali6-amd64

sudo reboot


| Clone the repository: |

git clone https://github.com/BlackBlade1632/rtl8188eu.git


| Go sudo and add to blacklist another driver: |

sudo -i
echo "blacklist r8188eu" > "/etc/modprobe.d/realtek.conf"
exitf"


| Cd to the directory and make install: |

cd rtl8188eu/
make all
sudo make install


| This is only to make sure that the file was copied: |

sudo cp -v rtl8188eufw.bin /lib/firmware/rtlwifi/
sudo reboot


| Now the final steps: |

sudo depmod -a
sudo update-initramfs -u
sudo modprobe 8188eu


| Enable 'Monitor mode' |

sudo ifconfig wlan1 down
sudo iwconfig wlan1 monitor mode [channel number (optional)]
sudo ifconfig wlan1 up
iwconfig (to check)

| Sources: |

* https://github.com/lwfinger/rtl8188eu 
* https://linuxforums.org.uk/index.php?topic=11261.0
