static int dmi_system_event_log(struct dmi_sysfs_entry *entry)
 				   &dmi_system_event_log_ktype,
 				   &entry->kobj,
 				   "system_event_log");
	if (ret)
	if (ret) {
		kobject_put(entry->child);
 		goto out_free;
	}
 
 	ret = sysfs_create_bin_file(entry->child, &dmi_sel_raw_attr);
 	if (ret)
