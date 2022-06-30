#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xaf29cff5, "module_layout" },
	{ 0xd7f7faaf, "register_netdevice" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x4db251ae, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x31040563, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xbcd54634, "find_vpid" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xc0d17f85, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf67bf8c7, "skb_clone" },
	{ 0x15eb7433, "dev_get_by_name" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x6ecb0876, "skb_copy" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0x2eb20f30, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x77bfe441, "usb_kill_urb" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x382f7c17, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6ca36f87, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x333842fb, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8fdbf400, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaaba2f0b, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xfd034240, "netif_rx" },
	{ 0x25764e47, "__pskb_pull_tail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x4d163d9b, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9c44971e, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x45281c5c, "netif_tx_wake_queue" },
	{ 0xadad5bba, "netif_tx_stop_all_queues" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1937903d, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe74055b8, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x53d2bd3f, "free_netdev" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0xccf1bec9, "register_netdev" },
	{ 0xc2c20d09, "wireless_send_event" },
	{ 0xbf86229b, "usb_control_msg" },
	{ 0x5a921311, "strncmp" },
	{ 0x142dad12, "skb_push" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7cebddac, "kill_pid" },
	{ 0xdf3c2c13, "skb_pull" },
	{ 0xa7e523d8, "device_init_wakeup" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb3ed011a, "flush_signals" },
	{ 0xf0d7c60f, "skb_queue_tail" },
	{ 0x2f5d4489, "netif_device_attach" },
	{ 0x3d70ea91, "usb_submit_urb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x7ffe17a5, "usb_get_dev" },
	{ 0xa916b694, "strnlen" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x333abc85, "usb_reset_device" },
	{ 0x284f90e9, "usb_put_dev" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x383376bc, "eth_type_trans" },
	{ 0xb115c61c, "dev_addr_mod" },
	{ 0x7c121a83, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xeadd11dd, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf19fa678, "unregister_netdevice_queue" },
	{ 0x6008689f, "kthread_complete_and_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xbcf33ba0, "dev_alloc_name" },
	{ 0xcf2a6966, "up" },
	{ 0xcf6d81b6, "usb_register_driver" },
	{ 0xbffe58ad, "request_firmware" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x7d95137a, "skb_dequeue" },
	{ 0xc910173, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5f3dd0a4, "skb_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xca47076e, "param_ops_uint" },
	{ 0xab8eff86, "skb_copy_bits" },
	{ 0xee5c769d, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x760a0f4f, "yield" },
	{ 0xd6fac7ce, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x192db028, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "usbcore");

MODULE_ALIAS("usb:v0BDAp8179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDApF179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0076d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p331Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C4Ep0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p18F0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB811d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FB647C367C5096AA1F62D1D");
