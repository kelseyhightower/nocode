static int __init ck804xrom_init_one(struct pci_dev *pdev,
 	if (!window->virt) {
 		printk(KERN_ERR MOD_NAME ": ioremap(%08lx, %08lx) failed\n",
 			window->phys, window->size);
		pci_dev_put(pdev);
 		goto out;
 	}
                                     
static int __init ck804xrom_init_one(struct pci_dev *pdev,
 
 		if (!map) {
 			printk(KERN_ERR MOD_NAME ": kmalloc failed");
			pci_dev_put(pdev);
 			goto out;
 		}
    memset(map, 0, sizeof(*map));
          
static int __init ck804xrom_init_one(struct pci_dev *pdev,
 		if (mtd_device_register(map->mtd, NULL, 0)) {
 			map_destroy(map->mtd);
 			map->mtd = NULL;
			pci_dev_put(pdev);
 			goto out;
 		}
