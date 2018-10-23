# rtl_sleep

When a RTL-SDR with a R820T/R820T2 tunner is plugged in it has a current consumption of around 121mA.

I noticed that after opening and closing the device (eg. with rtl_test) the current consumption would drop.

That meant that the device on plug in have circuitry enabled that can be disabled to save power.

In devices where the RTL-SDR is always plugged but not always necessarily in use this is a effective way of saving average power.

This branch/commit adds a small tool *rtl_sleep* that does the absolutely minimum to disable all circuitry possible.

Effectively running rtl_sleep reduces current from 121mA to 49mA (@5V) on my test device.