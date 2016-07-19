#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{
#if 0
	printk(KERN_ALERT " Hello World enter\n");
#else
	printk(KERN_ERR " Hello World enter \n");
#endif

	return 0;
}
static void hello_exit(void)
{
	printk(KERN_ERR " Hello World exit\n");
}

module_init(hello_init);
module_exit(hello_exit);
#if 0
MODULE_AUTHOR("charles");
MODULE_DESCRIPTION("A simple Hello World Module");
MODULE_ALIAS("a simplest module");
#endif
