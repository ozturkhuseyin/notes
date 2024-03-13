#define UNIQ_ID_BASE	0x1FFF7A10UL
#define UNIQ_ID_0_REG	(*(volatile unsigned int *)(UNIQ_ID_BASE + 0x00UL))
#define UNIQ_ID_1_REG	(*(volatile unsigned int *)(UNIQ_ID_BASE + 0x04UL))
#define UNIQ_ID_2_REG	(*(volatile unsigned int *)(UNIQ_ID_BASE + 0x08UL))

void getUniqID(uint32_t buff[3]) {
	if (buff) {
		buff[0] = UNIQ_ID_0_REG;
		buff[1] = UNIQ_ID_1_REG;
		buff[2] = UNIQ_ID_2_REG;
	}
	
}

void _getUniqID(uint32_t *pBuff) {
	if (buff) {
		*(pBuff) = UNIQ_ID_0_REG;
		*(pBuff + 1) = UNIQ_ID_1_REG;
		*(pBuff + 2) = UNIQ_ID_2_REG;
	}
}