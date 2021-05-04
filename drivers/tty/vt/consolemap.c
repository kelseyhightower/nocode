p2 = p1[n = (unicode >> 6) & 0x1f];
 	if (!p2) {
 		p2 = p1[n] = kmalloc_array(64, sizeof(u16), GFP_KERNEL);
		if (!p2) return -ENOMEM;
		if (!p2) {
			kfree(p1);
			return -ENOMEM;
		}
 		memset(p2, 0xff, 64*sizeof(u16)); /* No glyphs for the characters (yet) */
 	}
