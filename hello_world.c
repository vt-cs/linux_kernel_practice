/*
 * sudo apt build-dep linux linux-image-unsigned-$(uname -r)
 *
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vivek Tripathi");
MODULE_DESCRIPTION("Hello World Kernel Module");

static int __init hello_world_init(void) {
  printk(KERN_INFO "Hello, World from the kernel!\n");
  return 0;
}

static void __exit hello_world_exit(void) {
  printk(KERN_INFO "Goodbye, World from the kernel!\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);
