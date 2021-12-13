#
# Regular cron jobs for the seetaface-open-role-zoo package
#
0 4	* * *	root	[ -x /usr/bin/seetaface-open-role-zoo_maintenance ] && /usr/bin/seetaface-open-role-zoo_maintenance
