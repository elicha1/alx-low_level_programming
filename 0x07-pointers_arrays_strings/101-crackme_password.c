#include <stdio.h>
#include <openssl/md5.h>
#include <string.h>
int main() {
	int i;
unsigned char digest[MD5_DIGEST_LENGTH];
char string[] = "password";

MD5((unsigned char*)&string, strlen(string), (unsigned char*)&digest);

for(i = 0; i < MD5_DIGEST_LENGTH; i++)
printf("%02x", digest[i]);

return 0;
}
