#ifndef UUID_d28672a4_47ff_4a14_b2c6_3628d0ad19ff
#define UUID_d28672a4_47ff_4a14_b2c6_3628d0ad19ff

#define JEM_IOCTL 'J'

#define JEM_ATTACH_DMABUF		_IOWR(JEM_IOCTL, 0x01, int)
#define JEM_RELEASE_DMABUF	    _IOWR(JEM_IOCTL, 0x02, int)
#define JEM_FLUSH_ALL           _IOWR(JEM_IOCTL, 0x03, int)
#define JEM_CREATE_FD    	    _IOWR(JEM_IOCTL, 0x04, int)

#endif
