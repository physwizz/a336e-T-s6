#ifndef __CMUCAL_QCH_H__
#define __CMUCAL_QCH_H__

#include "../../cmucal.h"

enum qch_id {
	ALIVE_CMU_ALIVE_QCH = QCH_TYPE,
	APBIF_CHUB_RTC_QCH,
	APBIF_GPIO_ALIVE_QCH,
	APBIF_PMU_ALIVE_QCH,
	APBIF_RTC_QCH,
	APBIF_SYSREG_VGPIO2AP_QCH,
	APBIF_SYSREG_VGPIO2APM_QCH,
	APBIF_SYSREG_VGPIO2PMU_QCH,
	APBIF_TOP_RTC_QCH,
	DBGCORE_UART_QCH,
	D_TZPC_ALIVE_QCH,
	GREBEINTEGRATION_QCH_GREBE,
	GREBEINTEGRATION_QCH_DBG,
	HW_SCANDUMP_CLKSTOP_CTRL_QCH,
	I2C_ALIVE0_QCH,
	I3C_APM_PMIC_QCH_P,
	I3C_APM_PMIC_QCH_S,
	INTMEM_QCH,
	MAILBOX_APM_AP_QCH,
	MAILBOX_APM_CHUB_QCH,
	MAILBOX_APM_CP_QCH,
	MAILBOX_APM_GNSS_QCH,
	MAILBOX_APM_VTS_QCH,
	MAILBOX_APM_WLBT_QCH,
	MAILBOX_AP_CHUB_QCH,
	MAILBOX_AP_CP_QCH,
	MAILBOX_AP_CP_S_QCH,
	MAILBOX_AP_DBGCORE_QCH,
	MAILBOX_AP_GNSS_QCH,
	MAILBOX_AP_WLBT_BT_QCH,
	MAILBOX_AP_WLBT_WL_QCH,
	MAILBOX_CP_CHUB_QCH,
	MAILBOX_CP_GNSS_QCH,
	MAILBOX_CP_WLBT_BT_QCH,
	MAILBOX_CP_WLBT_WL_QCH,
	MAILBOX_GNSS_CHUB_QCH,
	MAILBOX_GNSS_WLBT_QCH,
	MAILBOX_SHARED_SRAM_QCH,
	MAILBOX_VTS_CHUB_QCH,
	MAILBOX_WLBT_ABOX_QCH,
	MAILBOX_WLBT_CHUB_QCH,
	PMU_INTR_GEN_QCH,
	ROM_CRC32_HOST_QCH,
	RSTNSYNC_CLK_ALIVE_GREBE_QCH,
	RSTNSYNC_CLK_ALIVE_GREBE_DBGCORE_QCH,
	SLH_AXI_MI_C_CHUBVTS_QCH,
	SLH_AXI_MI_C_GNSS_QCH,
	SLH_AXI_MI_C_MODEM_QCH,
	SLH_AXI_MI_C_WLBT_QCH,
	SLH_AXI_MI_P_APM_QCH,
	SLH_AXI_SI_C_CMGP_QCH,
	SLH_AXI_SI_D_APM_QCH,
	SLH_AXI_SI_G_DBGCORE_QCH,
	SLH_AXI_SI_G_SCAN2DRAM_QCH,
	SLH_AXI_SI_LP_CHUBVTS_QCH,
	SS_DBGCORE_QCH_GREBE,
	SS_DBGCORE_QCH_DBG,
	SYSREG_ALIVE_QCH,
	USI_ALIVE0_QCH,
	VGEN_LITE_ALIVE_QCH,
	WDT_ALIVE_QCH,
	ABOX_QCH_ACLK,
	ABOX_QCH_BCLK_DSIF,
	ABOX_QCH_BCLK0,
	ABOX_QCH_BCLK1,
	ABOX_QCH_BCLK2,
	ABOX_QCH_BCLK3,
	ABOX_QCH_BCLK4,
	ABOX_QCH_CNT,
	ABOX_QCH_CCLK_ASB,
	ABOX_QCH_BCLK5,
	ABOX_QCH_BCLK6,
	ABOX_QCH_CPU,
	ABOX_QCH_PCMC_CLK,
	ABOX_QCH_C2A0,
	ABOX_QCH_C2A1,
	ABOX_QCH_XCLK0,
	ABOX_QCH_XCLK1,
	ABOX_QCH_XCLK2,
	ABOX_QCH_CPU0,
	ABOX_QCH_CPU1,
	ABOX_QCH_NEON0,
	ABOX_QCH_NEON1,
	ABOX_QCH_L2,
	ABOX_QCH_CCLK_ACP,
	AUD_CMU_AUD_QCH,
	DFTMUX_AUD_QCH,
	D_TZPC_AUD_QCH,
	LH_AXI_SI_D_AUD_QCH,
	MAILBOX_AUD0_QCH,
	MAILBOX_AUD1_QCH,
	PPMU_AUD_QCH,
	RSTNSYNC_CLK_AUD_CPU0_SW_RESET_QCH,
	RSTNSYNC_CLK_AUD_CPU1_SW_RESET_QCH,
	RSTNSYNC_CLK_AUD_CPU_PCLKDBG_QCH,
	SLH_AXI_MI_D_USBAUD_QCH,
	SLH_AXI_MI_P_AUD_QCH,
	SYSMMU_AUD_QCH_S1,
	SYSMMU_AUD_QCH_S2,
	SYSREG_AUD_QCH,
	VGEN_LITE_AUD_QCH,
	WDT_AUD_QCH,
	BUSC_CMU_BUSC_QCH,
	CMU_BUSC_CMUREF_QCH,
	D_TZPC_BUSC_QCH,
	LH_AXI_MI_D_CHUBVTS_QCH,
	LH_AXI_MI_D_MFC_QCH,
	PDMA_BUSC_QCH,
	SLH_AXI_MI_D_APM_QCH,
	SLH_AXI_MI_D_PERI_QCH,
	SLH_AXI_MI_D_USB_QCH,
	SLH_AXI_MI_P_BUSC_QCH,
	SPDMA_BUSC_QCH,
	SYSMMU_AXI_D_BUSC_QCH,
	SYSREG_BUSC_QCH,
	TREX_D_BUSC_QCH,
	VGEN_PDMA_QCH,
	VGEN_SPDMA_QCH,
	APBIF_CHUB_COMBINE_WAKEUP_SRC_QCH,
	APBIF_GPIO_CHUB_QCH,
	APBIF_GPIO_CHUBEINT_QCH,
	CHUB_CMU_CHUB_QCH,
	CM4_CHUB_QCH_CPU,
	I2C_CHUB1_QCH,
	I2C_CHUB3_QCH,
	PWM_CHUB_QCH,
	SLH_AXI_MI_S_CHUB_QCH,
	SLH_AXI_SI_M_CHUB_QCH,
	SYSREG_CHUB_QCH,
	SYSREG_COMBINE_CHUB2AP_QCH,
	SYSREG_COMBINE_CHUB2APM_QCH,
	SYSREG_COMBINE_CHUB2WLBT_QCH,
	TIMER_CHUB_QCH,
	USI_CHUB0_QCH,
	USI_CHUB1_QCH,
	USI_CHUB2_QCH,
	USI_CHUB3_QCH,
	WDT_CHUB_QCH,
	BAAW_CHUB_QCH,
	BAAW_VTS_QCH,
	CHUBVTS_CMU_CHUBVTS_QCH,
	D_TZPC_CHUBVTS_QCH,
	LH_AXI_SI_D_CHUBVTS_QCH,
	SLH_AXI_MI_LP_CHUBVTS_QCH,
	SLH_AXI_MI_M_CHUB_QCH,
	SLH_AXI_MI_M_VTS_QCH,
	SLH_AXI_SI_C_CHUBVTS_QCH,
	SLH_AXI_SI_S_CHUB_QCH,
	SLH_AXI_SI_S_VTS_QCH,
	SWEEPER_C_CHUBVTS_QCH,
	SYSREG_CHUBVTS_QCH,
	VGEN_LITE_CHUBVTS_QCH,
	CMGP_CMU_CMGP_QCH,
	D_TZPC_CMGP_QCH,
	GPIO_CMGP_QCH,
	I2C_CMGP0_QCH,
	I2C_CMGP1_QCH,
	I2C_CMGP2_QCH,
	I2C_CMGP3_QCH,
	I2C_CMGP4_QCH,
	I3C_CMGP_QCH_P,
	I3C_CMGP_QCH_S,
	SLH_AXI_MI_C_CMGP_QCH,
	SYSREG_CMGP_QCH,
	SYSREG_CMGP2APM_QCH,
	SYSREG_CMGP2CHUB_QCH,
	SYSREG_CMGP2CP_QCH,
	SYSREG_CMGP2GNSS_QCH,
	SYSREG_CMGP2PMU_AP_QCH,
	SYSREG_CMGP2WLBT_QCH,
	USI_CMGP0_QCH,
	USI_CMGP1_QCH,
	USI_CMGP2_QCH,
	USI_CMGP3_QCH,
	USI_CMGP4_QCH,
	CMU_CMU_CMUREF_QCH,
	DFTMUX_TOP_QCH_CIS_CLK0,
	DFTMUX_TOP_QCH_CIS_CLK1,
	DFTMUX_TOP_QCH_CIS_CLK2,
	DFTMUX_TOP_QCH_CIS_CLK3,
	DFTMUX_TOP_QCH_CIS_CLK4,
	DFTMUX_TOP_QCH_CIS_CLK5,
	OTP_QCH,
	ADM_APB_G_BDU_QCH,
	BAAW_D_SSS_QCH,
	BAAW_P_GNSS_QCH,
	BAAW_P_MODEM_QCH,
	BAAW_P_WLBT_QCH,
	BDU_QCH,
	CMU_CORE_CMUREF_QCH,
	CORE_CMU_CORE_QCH,
	DIT_QCH,
	D_TZPC_CORE_QCH,
	GIC_QCH,
	HW_APBSEMA_MEC_QCH,
	LH_AST_MI_G_CPU_QCH,
	LH_AXI_MI_D0_DPU_QCH,
	LH_AXI_MI_D0_NPUS_QCH,
	LH_AXI_MI_D1_DPU_QCH,
	LH_AXI_MI_D1_NPUS_QCH,
	LH_AXI_MI_D_AUD_QCH,
	LH_AXI_MI_D_G3D_QCH,
	LH_AXI_MI_D_M2M_QCH,
	LH_AXI_MI_D_SSS_QCH,
	LH_AXI_SI_D0_MIF_CP_QCH,
	LH_AXI_SI_D0_MIF_NRT_QCH,
	LH_AXI_SI_D0_MIF_RT_QCH,
	LH_AXI_SI_D1_MIF_CP_QCH,
	LH_AXI_SI_D1_MIF_NRT_QCH,
	LH_AXI_SI_D1_MIF_RT_QCH,
	LH_AXI_SI_D_SSS_QCH,
	PUF_QCH,
	RSTNSYNC_I_ARESETN_SSS_QCH,
	SFR_APBIF_CMU_TOPC_QCH,
	SIREX_QCH,
	SLH_AXI_MI_D0_MODEM_QCH,
	SLH_AXI_MI_D1_MODEM_QCH,
	SLH_AXI_MI_D_GNSS_QCH,
	SLH_AXI_MI_D_HSI_QCH,
	SLH_AXI_MI_D_WLBT_QCH,
	SLH_AXI_MI_G_CSSYS_QCH,
	SLH_AXI_MI_P_CLUSTER0_QCH,
	SLH_AXI_SI_P_APM_QCH,
	SLH_AXI_SI_P_AUD_QCH,
	SLH_AXI_SI_P_BUSC_QCH,
	SLH_AXI_SI_P_CPUCL0_QCH,
	SLH_AXI_SI_P_CSIS_QCH,
	SLH_AXI_SI_P_DPU_QCH,
	SLH_AXI_SI_P_G3D_QCH,
	SLH_AXI_SI_P_GNSS_QCH,
	SLH_AXI_SI_P_HSI_QCH,
	SLH_AXI_SI_P_ISP_QCH,
	SLH_AXI_SI_P_M2M_QCH,
	SLH_AXI_SI_P_MCSC_QCH,
	SLH_AXI_SI_P_MCW_QCH,
	SLH_AXI_SI_P_MFC_QCH,
	SLH_AXI_SI_P_MIF0_QCH,
	SLH_AXI_SI_P_MIF1_QCH,
	SLH_AXI_SI_P_MODEM_QCH,
	SLH_AXI_SI_P_NPU0_QCH,
	SLH_AXI_SI_P_NPUS_QCH,
	SLH_AXI_SI_P_PERI_QCH,
	SLH_AXI_SI_P_TAA_QCH,
	SLH_AXI_SI_P_TNR_QCH,
	SLH_AXI_SI_P_USB_QCH,
	SLH_AXI_SI_P_WLBT_QCH,
	SSS_QCH,
	SYSMMU_ACEL_D2_MODEM_QCH,
	SYSMMU_ACEL_D_DIT_QCH,
	SYSREG_CORE_QCH,
	TREX_D_CORE_QCH,
	TREX_D_NRT_QCH,
	TREX_P_CORE_QCH,
	VGEN_LITE_CORE_QCH,
	CMU_CPUCL0_CMUREF_QCH,
	CMU_CPUCL0_SHORTSTOP_QCH,
	CPUCL0_QCH,
	CPUCL0_CMU_CPUCL0_QCH,
	HTU_CPUCL0_QCH_PCLK,
	HTU_CPUCL0_QCH_CLK,
	BPS_CPUCL0_QCH,
	CPUCL0_GLB_CMU_CPUCL0_GLB_QCH,
	CSSYS_QCH,
	D_TZPC_CPUCL0_QCH,
	RSTNSYNC_CLK_CPUCL0_CSSYS_PCLKDBG_QCH,
	SECJTAG_QCH,
	SLH_AXI_MI_G_DBGCORE_QCH,
	SLH_AXI_MI_G_INT_CSSYS_QCH,
	SLH_AXI_MI_G_INT_DBGCORE_QCH,
	SLH_AXI_MI_P_CPUCL0_QCH,
	SLH_AXI_SI_G_CSSYS_QCH,
	SLH_AXI_SI_G_INT_CSSYS_QCH,
	SLH_AXI_SI_G_INT_DBGCORE_QCH,
	SYSREG_CPUCL0_QCH,
	CMU_CPUCL1_CMUREF_QCH,
	CMU_CPUCL1_SHORTSTOP_QCH,
	CPUCL1_QCH_BIG,
	CPUCL1_QCH_DDD_HC0,
	CPUCL1_QCH_DDD_HC1,
	CPUCL1_CMU_CPUCL1_QCH,
	HTU_CPUCL1_QCH_PCLK,
	HTU_CPUCL1_QCH_CLK,
	CSIS_CMU_CSIS_QCH,
	CSIS_PDP_QCH_VOTF0,
	CSIS_PDP_QCH_DMA,
	CSIS_PDP_QCH_PDP_TOP,
	CSIS_PDP_QCH_MCB,
	CSIS_PDP_QCH_VOTF1,
	CSIS_PDP_QCH_C2_PDP,
	D_TZPC_CSIS_QCH,
	LH_AST_MI_SOTF0_TAACSIS_QCH,
	LH_AST_MI_SOTF1_TAACSIS_QCH,
	LH_AST_MI_SOTF2_TAACSIS_QCH,
	LH_AST_MI_ZOTF0_TAACSIS_QCH,
	LH_AST_MI_ZOTF1_TAACSIS_QCH,
	LH_AST_MI_ZOTF2_TAACSIS_QCH,
	LH_AST_SI_OTF0_CSISTAA_QCH,
	LH_AST_SI_OTF1_CSISTAA_QCH,
	LH_AST_SI_OTF2_CSISTAA_QCH,
	LH_AXI_SI_D0_CSIS_QCH,
	LH_AXI_SI_D1_CSIS_QCH,
	LH_AXI_SI_D2_CSIS_QCH,
	LH_AXI_SI_D3_CSIS_QCH,
	MIPI_DCPHY_LINK_WRAP_QCH_CSIS0,
	MIPI_DCPHY_LINK_WRAP_QCH_CSIS1,
	MIPI_DCPHY_LINK_WRAP_QCH_CSIS2,
	MIPI_DCPHY_LINK_WRAP_QCH_CSIS3,
	MIPI_DCPHY_LINK_WRAP_QCH_CSIS4,
	MIPI_DCPHY_LINK_WRAP_QCH_CSIS5,
	PPMU_CSIS_D0_QCH,
	PPMU_CSIS_D1_QCH,
	PPMU_CSIS_D2_QCH,
	PPMU_CSIS_D3_QCH,
	QE_CSIS_DMA0_QCH,
	QE_CSIS_DMA1_QCH,
	QE_CSIS_DMA2_QCH,
	QE_CSIS_DMA3_QCH,
	QE_PDP_AF0_QCH,
	QE_PDP_AF1_QCH,
	QE_PDP_AF2_QCH,
	QE_PDP_STAT_IMG0_QCH,
	QE_PDP_STAT_IMG1_QCH,
	QE_PDP_STAT_IMG2_QCH,
	QE_STRP0_QCH,
	QE_STRP1_QCH,
	QE_STRP2_QCH,
	QE_ZSL0_QCH,
	QE_ZSL1_QCH,
	QE_ZSL2_QCH,
	SLH_AXI_MI_P_CSIS_QCH,
	SYSMMU_D0_CSIS_QCH_S1,
	SYSMMU_D0_CSIS_QCH_S2,
	SYSMMU_D1_CSIS_QCH_S1,
	SYSMMU_D1_CSIS_QCH_S2,
	SYSMMU_D2_CSIS_QCH_S1,
	SYSMMU_D2_CSIS_QCH_S2,
	SYSMMU_D3_CSIS_QCH_S2,
	SYSMMU_D3_CSIS_QCH_S1,
	SYSREG_CSIS_QCH,
	VGEN_LITE0_CSIS_QCH,
	VGEN_LITE1_CSIS_QCH,
	VGEN_LITE2_CSIS_QCH,
	DPU_QCH_DPU,
	DPU_QCH_DPU_DMA,
	DPU_QCH_DPU_DPP,
	DPU_QCH_DPU_C2SERV,
	DPU_QCH,
	DPU_CMU_DPU_QCH,
	D_TZPC_DPU_QCH,
	LH_AXI_SI_D0_DPU_QCH,
	LH_AXI_SI_D1_DPU_QCH,
	PPMU_D0_DPU_QCH,
	PPMU_D1_DPU_QCH,
	SLH_AXI_MI_P_DPU_QCH,
	SYSMMU_AXI_D0_DPU_QCH_S1,
	SYSMMU_AXI_D0_DPU_QCH_S2,
	SYSMMU_AXI_D1_DPU_QCH_S1,
	SYSMMU_AXI_D1_DPU_QCH_S2,
	SYSREG_DPU_QCH,
	CLUSTER0_QCH_SCLK,
	CLUSTER0_QCH_ATCLK,
	CLUSTER0_QCH_GIC,
	CLUSTER0_QCH_DBG_PD,
	CLUSTER0_QCH_PCLK,
	CLUSTER0_QCH_PERIPHCLK,
	CLUSTER0_QCH_PDBGCLK,
	CMU_DSU_CMUREF_QCH,
	CMU_DSU_SHORTSTOP_QCH,
	DSU_CMU_DSU_QCH,
	HTU_DSU_QCH_PCLK,
	HTU_DSU_QCH_CLK,
	LH_AST_SI_G_CPU_QCH,
	LH_AXI_SI_D0_MIF_CPU_QCH,
	LH_AXI_SI_D1_MIF_CPU_QCH,
	PPC_INSTRRET_CLUSTER0_0_QCH,
	PPC_INSTRRET_CLUSTER0_1_QCH,
	PPC_INSTRRUN_CLUSTER0_0_QCH,
	PPC_INSTRRUN_CLUSTER0_1_QCH,
	PPMU_CPUCL0_QCH,
	PPMU_CPUCL1_QCH,
	SLH_AXI_SI_P_CLUSTER0_QCH,
	D_TZPC_G3D_QCH,
	G3D_CMU_G3D_QCH,
	GPU_QCH,
	HTU_G3D_QCH_CLK,
	HTU_G3D_QCH_PCLK,
	LHM_AXI_P_INT_G3D_QCH,
	LHS_AXI_P_INT_G3D_QCH,
	LH_AXI_SI_D_G3D_QCH,
	PPMU_D_G3D_QCH,
	SLH_AXI_MI_P_G3D_QCH,
	SYSMMU_D_G3D_QCH,
	SYSREG_G3D_QCH,
	VGEN_LITE_G3D_QCH,
	GNSS_CMU_GNSS_QCH,
	D_TZPC_HSI_QCH,
	GPIO_HSI_QCH,
	GPIO_HSI_UFS_QCH,
	HSI_CMU_HSI_QCH,
	PPMU_HSI_QCH,
	S2MPU_D_HSI_QCH_S2,
	SLH_AXI_MI_P_HSI_QCH,
	SLH_AXI_SI_D_HSI_QCH,
	SYSREG_HSI_QCH,
	UFS_EMBD_QCH,
	UFS_EMBD_QCH_FMP,
	VGEN_LITE_HSI_QCH,
	D_TZPC_ISP_QCH,
	ISP_CMU_ISP_QCH,
	ITP_DNS_QCH_S00,
	ITP_DNS_QCH_S01,
	LH_AST_MI_OTF0_TNRISP_QCH,
	LH_AST_MI_OTF1_TNRISP_QCH,
	LH_AST_MI_OTF_TAAISP_QCH,
	LH_AST_SI_OTF_ISPMCSC_QCH,
	LH_AXI_SI_D_ISP_QCH,
	PPMU_ISP_QCH,
	SLH_AXI_MI_P_ISP_QCH,
	SYSMMU_D_ISP_QCH_S1,
	SYSMMU_D_ISP_QCH_S2,
	SYSREG_ISP_QCH,
	VGEN_LITE_ISP_QCH,
	D_TZPC_M2M_QCH,
	JPEG0_QCH,
	LH_AXI_SI_D_M2M_QCH,
	M2M_QCH_S2,
	M2M_QCH_S1,
	M2M_CMU_M2M_QCH,
	PPMU_D_M2M_QCH,
	SLH_AXI_MI_P_M2M_QCH,
	SYSMMU_D_M2M_QCH_S1,
	SYSMMU_D_M2M_QCH_S2,
	SYSREG_M2M_QCH,
	VGEN_LITE_M2M_QCH,
	D_TZPC_MCSC_QCH,
	GDC_QCH,
	LH_AST_MI_OTF_ISPMCSC_QCH,
	LH_AXI_MI_D0_CSIS_QCH,
	LH_AXI_MI_D0_TNR_QCH,
	LH_AXI_MI_D1_CSIS_QCH,
	LH_AXI_MI_D1_TNR_QCH,
	LH_AXI_MI_D2_CSIS_QCH,
	LH_AXI_MI_D3_CSIS_QCH,
	LH_AXI_MI_D_ISP_QCH,
	LH_AXI_MI_D_TAA_QCH,
	MCSC_QCH,
	MCSC_CMU_MCSC_QCH,
	ORBMCH_QCH_ACLK,
	ORBMCH_QCH_C2CLK,
	PPMU_GDC_QCH,
	PPMU_MCSC_QCH,
	SLH_AXI_MI_P_MCSC_QCH,
	SYSMMU_D0_MCSC_QCH_S1,
	SYSMMU_D0_MCSC_QCH_S2,
	SYSMMU_D1_MCSC_QCH_S1,
	SYSMMU_D1_MCSC_QCH_S2,
	SYSREG_MCSC_QCH,
	TREX_D_CAM_QCH,
	VGEN_LITE_GDC_QCH,
	VGEN_LITE_MCSC_QCH,
	D_TZPC_MFC_QCH,
	LH_AXI_SI_D_MFC_QCH,
	MFC_QCH,
	MFC_CMU_MFC_QCH,
	PPMU_MFC_QCH,
	RSTNSYNC_CLK_MFC_BUSD_SW_RESET_QCH,
	SLH_AXI_MI_P_MFC_QCH,
	SYSMMU_MFC_QCH_S1,
	SYSMMU_MFC_QCH_S2,
	SYSREG_MFC_QCH,
	VGEN_LITE_MFC_QCH,
	CMU_MIF_CMUREF_QCH,
	DMC_QCH,
	D_TZPC_MIF_QCH,
	LH_AXI_MI_D_MIF_CP_QCH,
	LH_AXI_MI_D_MIF_CPU_QCH,
	LH_AXI_MI_D_MIF_NRT_QCH,
	LH_AXI_MI_D_MIF_RT_QCH,
	MIF_CMU_MIF_QCH,
	PPMU_DMC_CPU_QCH,
	QE_DMC_CPU_QCH,
	SFRAPB_BRIDGE_DDRPHY_QCH,
	SFRAPB_BRIDGE_DMC_QCH,
	SFRAPB_BRIDGE_DMC_PF_QCH,
	SFRAPB_BRIDGE_DMC_PPMPU_QCH,
	SFRAPB_BRIDGE_DMC_SECURE_QCH,
	SLH_AXI_MI_P_MIF_QCH,
	SYSREG_MIF_QCH,
	MODEM_CMU_MODEM_QCH,
	D_TZPC_NPU0_QCH,
	IP_NPUCORE_QCH_ACLK,
	IP_NPUCORE_QCH_PCLK,
	LH_AXI_MI_D0_NPU0_QCH,
	LH_AXI_MI_D1_NPU0_QCH,
	LH_AXI_MI_D_CTRL_NPU0_QCH,
	LH_AXI_SI_D_CMDQ_NPU0_QCH,
	LH_AXI_SI_D_RQ_NPU0_QCH,
	NPU0_CMU_NPU0_QCH,
	SLH_AXI_MI_P_NPU0_QCH,
	SYSREG_NPU0_QCH,
	ADM_DAP_NPUS_QCH,
	D_TZPC_NPUS_QCH,
	HTU_NPUS_QCH_PCLK,
	HTU_NPUS_QCH_CLK,
	IP_NPUS_QCH,
	IP_NPUS_QCH_C2A0CLK,
	IP_NPUS_QCH_C2A1CLK,
	IP_NPUS_QCH_CPU,
	IP_NPUS_QCH_NEON,
	LH_AXI_MI_D_CMDQ_NPU0_QCH,
	LH_AXI_MI_D_RQ_NPU0_QCH,
	LH_AXI_SI_D0_NPU0_QCH,
	LH_AXI_SI_D0_NPUS_QCH,
	LH_AXI_SI_D1_NPU0_QCH,
	LH_AXI_SI_D1_NPUS_QCH,
	LH_AXI_SI_D_CTRL_NPU0_QCH,
	NPUS_CMU_NPUS_QCH,
	PPMU_NPUS_0_QCH,
	PPMU_NPUS_1_QCH,
	SLH_AXI_MI_P_INT_NPUS_QCH,
	SLH_AXI_MI_P_NPUS_QCH,
	SLH_AXI_SI_P_INT_NPUS_QCH,
	SYSMMU_D0_NPUS_QCH_S1,
	SYSMMU_D0_NPUS_QCH_S2,
	SYSMMU_D1_NPUS_QCH_S1,
	SYSMMU_D1_NPUS_QCH_S2,
	SYSREG_NPUS_QCH,
	VGEN_LITE_NPUS_QCH,
	D_TZPC_PERI_QCH,
	GPIO_PERI_QCH,
	GPIO_PERIMMC_QCH_GPIO,
	MCT_QCH,
	MMC_CARD_QCH,
	OTP_CON_TOP_QCH,
	PERI_CMU_PERI_QCH,
	PPMU_PERI_QCH,
	PWM_QCH,
	S2MPU_D_PERI_QCH,
	SLH_AXI_MI_P_PERI_QCH,
	SLH_AXI_SI_D_PERI_QCH,
	SYSREG_PERI_QCH,
	TMU_QCH,
	UART_DBG_QCH,
	USI00_I2C_QCH,
	USI00_USI_QCH,
	USI01_I2C_QCH,
	USI01_USI_QCH,
	USI02_I2C_QCH,
	USI02_USI_QCH,
	USI03_I2C_QCH,
	USI03_USI_QCH,
	USI04_I2C_QCH,
	USI04_USI_QCH,
	USI05_I2C_QCH,
	USI05_USI_QCH,
	USI06_I2C_QCH,
	USI06_USI_QCH,
	USI07_I2C_QCH,
	VGEN_LITE_PERI_QCH,
	WDT0_QCH,
	WDT1_QCH,
	S2D_CMU_S2D_QCH,
	SLH_AXI_MI_G_SCAN2DRAM_QCH,
	D_TZPC_TAA_QCH,
	LH_AST_MI_OTF0_CSISTAA_QCH,
	LH_AST_MI_OTF1_CSISTAA_QCH,
	LH_AST_MI_OTF2_CSISTAA_QCH,
	LH_AST_SI_OTF_TAAISP_QCH,
	LH_AST_SI_SOTF0_TAACSIS_QCH,
	LH_AST_SI_SOTF1_TAACSIS_QCH,
	LH_AST_SI_SOTF2_TAACSIS_QCH,
	LH_AST_SI_ZOTF0_TAACSIS_QCH,
	LH_AST_SI_ZOTF1_TAACSIS_QCH,
	LH_AST_SI_ZOTF2_TAACSIS_QCH,
	LH_AXI_SI_D_TAA_QCH,
	PPMU_TAA_QCH,
	SIPU_TAA_QCH,
	SIPU_TAA_QCH_C2_STAT,
	SIPU_TAA_QCH_C2_YDS,
	SLH_AXI_MI_P_TAA_QCH,
	SYSMMU_TAA_QCH_S1,
	SYSMMU_TAA_QCH_S2,
	SYSREG_TAA_QCH,
	TAA_CMU_TAA_QCH,
	VGEN_LITE0_TAA_QCH,
	VGEN_LITE1_TAA_QCH,
	D_TZPC_TNR_QCH,
	LH_AST_SI_OTF0_TNRISP_QCH,
	LH_AST_SI_OTF1_TNRISP_QCH,
	LH_AXI_SI_D0_TNR_QCH,
	LH_AXI_SI_D1_TNR_QCH,
	PPMU_D0_TNR_QCH,
	PPMU_D1_TNR_QCH,
	SLH_AXI_MI_P_TNR_QCH,
	SYSMMU_D0_TNR_QCH_S1,
	SYSMMU_D0_TNR_QCH_S2,
	SYSMMU_D1_TNR_QCH_S1,
	SYSMMU_D1_TNR_QCH_S2,
	SYSREG_TNR_QCH,
	TNR_QCH_MCFP0,
	TNR_QCH_MCFP1,
	TNR_CMU_TNR_QCH,
	VGEN_LITE_D_TNR_QCH,
	D_TZPC_USB_QCH,
	PPMU_USB_QCH,
	S2MPU_D_USB_QCH,
	SLH_AXI_MI_P_USB_QCH,
	SLH_AXI_SI_D_USB_QCH,
	SLH_AXI_SI_D_USBAUD_QCH,
	SYSREG_USB_QCH,
	USB20DRD_TOP_QCH_SLV_CTRL,
	USB20DRD_TOP_QCH_SLV_LINK,
	USB_CMU_USB_QCH,
	VGEN_LITE_USB_QCH,
	CM4_VTS_QCH_CPU,
	DMIC_AHB0_QCH_PCLK,
	DMIC_AHB2_QCH_PCLK,
	DMIC_AUD0_QCH_PCLK,
	DMIC_AUD0_QCH_DMIC,
	DMIC_AUD1_QCH_PCLK,
	DMIC_AUD1_QCH_DMIC,
	DMIC_IF0_QCH_PCLK,
	DMIC_IF0_QCH_DMIC,
	DMIC_IF1_QCH_PCLK,
	DMIC_IF1_QCH_DMIC,
	GPIO_VTS_QCH,
	HWACG_SYS_DMIC0_QCH,
	HWACG_SYS_DMIC2_QCH,
	HWACG_SYS_SERIAL_LIF_QCH,
	MAILBOX_ABOX_VTS_QCH,
	MAILBOX_AP_VTS_QCH,
	SERIAL_LIF_AUD_QCH_PCLK,
	SERIAL_LIF_AUD_QCH_AHB,
	SERIAL_LIF_AUD_QCH_LIF,
	SLH_AXI_MI_S_VTS_QCH,
	SLH_AXI_SI_M_VTS_QCH,
	SS_VTS_GLUE_QCH_DMIC_AUD_PAD0,
	SS_VTS_GLUE_QCH_DMIC_AUD_PAD1,
	SS_VTS_GLUE_QCH_DMIC_IF_PAD0,
	SS_VTS_GLUE_QCH_DMIC_IF_PAD1,
	SYSREG_VTS_QCH,
	TIMER_VTS_QCH,
	VTS_CMU_VTS_QCH,
	WDT_VTS_QCH,
	end_of_qch,
	num_of_qch = (end_of_qch - QCH_TYPE) & MASK_OF_ID,

};
enum option_id {
	CTRL_OPTION_CMU_ALIVE = OPTION_TYPE,
	CTRL_OPTION_CMU_AUD,
	CTRL_OPTION_CMU_BUSC,
	CTRL_OPTION_CMU_CHUB,
	CTRL_OPTION_CMU_CHUBVTS,
	CTRL_OPTION_CMU_CMGP,
	CTRL_OPTION_CMU_TOP,
	CTRL_OPTION_CMU_CORE,
	CTRL_OPTION_CMU_CPUCL0,
	CTRL_OPTION_CMU_CPUCL0_GLB,
	CTRL_OPTION_CMU_CPUCL1,
	CTRL_OPTION_CMU_CSIS,
	CTRL_OPTION_CMU_DPU,
	CTRL_OPTION_CMU_DSU,
	CTRL_OPTION_CMU_G3D,
	CTRL_OPTION_CMU_GNSS,
	CTRL_OPTION_CMU_HSI,
	CTRL_OPTION_CMU_ISP,
	CTRL_OPTION_CMU_M2M,
	CTRL_OPTION_CMU_MCSC,
	CTRL_OPTION_CMU_MFC,
	CTRL_OPTION_CMU_MIF,
	CTRL_OPTION_CMU_MODEM,
	CTRL_OPTION_CMU_NPU0,
	CTRL_OPTION_CMU_NPUS,
	CTRL_OPTION_CMU_PERI,
	CTRL_OPTION_CMU_S2D,
	CTRL_OPTION_CMU_TAA,
	CTRL_OPTION_CMU_TNR,
	CTRL_OPTION_CMU_USB,
	CTRL_OPTION_CMU_VTS,
	end_of_option,
	num_of_option = (end_of_option - OPTION_TYPE) & MASK_OF_ID,

};
#endif
