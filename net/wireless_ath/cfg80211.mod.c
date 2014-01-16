#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc9d39ff9, "module_layout" },
	{ 0x61651be, "strcat" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x8321020e, "ethtool_op_get_link" },
	{ 0x89ff43f6, "init_uts_ns" },
	{ 0x328a05f1, "strncpy" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf338d4c3, "netlink_unregister_notifier" },
	{ 0x4bd8162a, "genl_unregister_family" },
	{ 0xf78d04ab, "netlink_register_notifier" },
	{ 0x2dfa17a6, "genl_register_mc_group" },
	{ 0x6f6e3e73, "genl_register_family_with_ops" },
	{ 0x73fcd0f6, "genlmsg_multicast_allns" },
	{ 0x517885fd, "__dev_get_by_index" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb6cdc9d9, "netlink_broadcast" },
	{ 0xfbafe7ca, "get_net_ns_by_pid" },
	{ 0x23d455a1, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x4f391d0e, "nla_parse" },
	{ 0x1802a16c, "netlink_unicast" },
	{ 0xc414c282, "genlmsg_put" },
	{ 0x396c7763, "__alloc_skb" },
	{ 0xf2cd4871, "nla_put" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x50934a43, "wireless_send_event" },
	{ 0xa6dcc773, "rb_insert_color" },
	{ 0xb859f38b, "krealloc" },
	{ 0x9b6eb137, "ksize" },
	{ 0xc0580937, "rb_erase" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfd6293c2, "boot_tvec_bases" },
	{ 0x35b6b772, "param_ops_charp" },
	{ 0x2347da4a, "platform_device_unregister" },
	{ 0xd23b7476, "platform_device_register_full" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x77edf722, "schedule_delayed_work" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xd9bd0630, "kobject_uevent" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa7f92105, "add_uevent_var" },
	{ 0x6baae653, "cancel_delayed_work_sync" },
	{ 0xb652293f, "kmalloc_caches" },
	{ 0xe00cafb0, "kmem_cache_alloc_trace" },
	{ 0x178ba18c, "_raw_spin_unlock" },
	{ 0xc4097c34, "_raw_spin_lock" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x8ddab831, "_raw_spin_unlock_irqrestore" },
	{ 0x1a9b678e, "_raw_spin_lock_irqsave" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa9fee146, "netdev_err" },
	{ 0x9ff68f02, "kfree_skb" },
	{ 0xaa80830a, "consume_skb" },
	{ 0xa2dd2999, "skb_put" },
	{ 0xa7cdd469, "dev_alloc_skb" },
	{ 0x6d6e2815, "skb_copy_bits" },
	{ 0x51d3b49a, "__pskb_pull_tail" },
	{ 0x9d669763, "memcpy" },
	{ 0x89f2958c, "skb_push" },
	{ 0xad9f265e, "pskb_expand_head" },
	{ 0x8c684258, "skb_pull" },
	{ 0xb7b61546, "crc32_be" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x8a4fa83b, "__aeabi_llsr" },
	{ 0x1cdedc87, "net_ns_type_operations" },
	{ 0xb75da9a9, "class_unregister" },
	{ 0x6f94c980, "__class_register" },
	{ 0xc73dd955, "_raw_spin_unlock_bh" },
	{ 0x3b502f70, "_raw_spin_lock_bh" },
	{ 0x405c1144, "get_seconds" },
	{ 0x91715312, "sprintf" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x34472456, "unregister_pernet_device" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x7171522e, "debugfs_remove" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x3dd42d5e, "register_pernet_device" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xfda4d0d6, "dev_change_net_namespace" },
	{ 0xb96dbfb7, "debugfs_rename" },
	{ 0xf2f97bcd, "device_rename" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x97255bdf, "strlen" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x3b99ec4f, "init_net" },
	{ 0x755f0e51, "dev_get_by_index" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0x5f1a3f79, "debugfs_create_dir" },
	{ 0xf6f75a80, "device_add" },
	{ 0x71c90087, "memcmp" },
	{ 0x4b747137, "dev_close" },
	{ 0xc781bd9f, "rfkill_resume_polling" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0x8949858b, "schedule_work" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xa7ecf324, "__init_waitqueue_head" },
	{ 0x8cdecba0, "rfkill_alloc" },
	{ 0x4046ecb2, "device_initialize" },
	{ 0xe4c91f73, "dev_set_name" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x92b57248, "flush_work" },
	{ 0x74f3015, "device_del" },
	{ 0x7322a084, "debugfs_remove_recursive" },
	{ 0xbc3d21af, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x69ff5332, "prepare_to_wait" },
	{ 0x5f754e5a, "memset" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9c0b5da1, "put_device" },
	{  0xf1338, "__wake_up" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa183f14e, "sysfs_remove_link" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x33543801, "queue_work" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6e8a75a, "mutex_unlock" },
	{ 0x27e1a049, "printk" },
	{ 0xcc215e44, "sysfs_create_link" },
	{ 0x1e79aedf, "mutex_lock" },
	{ 0x741962c0, "__mutex_init" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";
