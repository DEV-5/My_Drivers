//my first drivers program
#include <linux/init.h>
#include <linux/module.h>

static int hello_init(void){
    printk(KERN_ALERT "Test: Hello world this is dev\n");

    return 0;
}
static int hello_exit(void){
    printk(KERN_ALERT "Test: GOODBYE from dev\n");
    return 0;

}

module_init(hello_init);
module_exit(hello_exit);
