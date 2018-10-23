#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "rtl-sdr.h"

int main(int argc, char **argv)
{
	//this is currently only compatible with R820T2.
	return rtlsdr_sleep();
}
