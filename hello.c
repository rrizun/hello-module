#include <linux/init.h>
#include <linux/module.h>
#include <linux/pci.h>

MODULE_LICENSE("GPL");

static int hello_init(void) {
	printk(KERN_ALERT "hello_init!\n");
	return 0;
}

static void hello_exit(void) {
	printk(KERN_ALERT "hello_exit!\n");
}

module_init(hello_init);
module_exit(hello_exit);

