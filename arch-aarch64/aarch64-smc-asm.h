#define SMC_ATOMIC	0x80000000
#define SMC_A64		0x40000000

#define SMC_OWNER_OEM	0x02000000

#define SMC_TBM_BASE		(SMC_OWNER_OEM)
#define SMC_TBM_NOT		(SMC_TBM_BASE | 0)
#define SMC_TBM_RAISE_EL	(SMC_TBM_BASE | 1)
#define SMC_TBM_MAX		(SMC_TBM_RAISE_EL)

#define SMC_PSCI_BASE		0
#define SMC_PSCI_CPU_OFF	(0x84000002)
#define SMC_PSCI_CPU_ON		(0xc4000003)
#define SMC_PSCI_MAX		SMC_PSCI_CPU_ON

#define PSCI_SUCCESS 0

