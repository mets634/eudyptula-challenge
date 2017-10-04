/*
 * hello_world.c - A module to log (debug level) 
 *			"hello world" on entry.
 */

#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("mets634 <mets634@gmail.com>");
MODULE_DESCRIPTION("Hello world module");

/* Init method, print hello world */
int init_module(void)
{
	printk(KERN_DEBUG "Hello World!");
	return 0;
}

void cleanup_module(void)
{
}
