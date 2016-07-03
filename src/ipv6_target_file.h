#ifndef IPV6_TARGET_FILE_H
#define IPV6_TARGET_FILE_H

int ipv6_target_file_init(char *file);
int ipv6_target_file_get_ipv6(struct in6_addr *dst);
int ipv6_target_file_deinit();

#endif
