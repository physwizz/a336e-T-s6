/*
 * Samsung Exynos SoC series VPU driver
 *
 * Copyright (c) 2015 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef NPU_BINARY_H_
#define NPU_BINARY_H_

#include <linux/version.h>
#include <linux/device.h>
#include <linux/firmware.h>
#if IS_ENABLED(CONFIG_EXYNOS_IMGLOADER)
#include <soc/samsung/imgloader.h>
static struct imgloader_ops npu_imgloader_ops;
#endif

#define NPU_FW_PATH1		"/data/"
#define NPU_FW_PATH2		"/vendor/firmware/"
#define NPU_FW_PATH3		"npu/"
#define NPU_FW_PATH4		"npu_perf/"
#define NPU_FW_PATH5		"npu_dn/"
#define NPU_FW_NAME		"NPU.bin"
#define NPU_PERF_FW_NAME	"NPU_perf.bin"
#define NPU_DN_FW_NAME		"NPU_dn.bin"
#define NPU_FW_VECTOR_NAME	"vectors.bin"
#define NPU_FW_NAME_LEN	100
#define NPU_VERSION_SIZE	42

struct npu_binary {
	struct device		*dev;
	char			fpath1[NPU_FW_NAME_LEN]; /* first try to load */
	char			fpath2[NPU_FW_NAME_LEN]; /* second try to load */
	size_t			image_size;
#if IS_ENABLED(CONFIG_EXYNOS_IMGLOADER)
	struct imgloader_desc imgloader;
#endif
};

#define NCP_BIN_PATH		"/data/"
#define NCP_BIN_NAME		"ncp_object.bin"
#define NCP_BIN_NAME_LEN	100
#define NCP_VERSION_SIZE	42

struct ncp_binary {
	struct device		*dev;
	char			fpath1[NCP_BIN_NAME_LEN]; /* first try to load */
	char			fpath2[NCP_BIN_NAME_LEN]; /* second try to load */
	size_t			image_size;
};

int npu_binary_init(struct npu_binary *binary,
	struct device *dev,
	char *fpath1,
	char *fpath2,
	char *fname);
int npu_binary_read(struct npu_binary *binary,
	void *target,
	size_t target_size);
int npu_firmware_file_read(struct npu_binary *binary,
	void *target,
	size_t target_size,
	int mode);
int npu_binary_write(struct npu_binary *binary,
	void *target,
	size_t target_size);
int npu_binary_g_size(struct npu_binary *binary, size_t *size);
int npu_fw_vector_load(struct npu_binary *binary,
			void *target, size_t target_size);
#if IS_ENABLED(CONFIG_EXYNOS_IMGLOADER)
int npu_firmware_file_read_signature(struct npu_binary *binary,
				__attribute__((unused))void *target,
				__attribute__((unused))size_t target_size,
				__attribute__((unused))int mode);
int npu_imgloader_probe(struct npu_binary *binary, struct device *dev);
#else
int npu_firmware_file_read_signature(struct npu_binary *binary,
				void *target, size_t target_size, int mode);
int npu_imgloader_probe(__attribute__((unused))struct npu_binary *binary,
				__attribute__((unused))struct device *dev);
#endif
#endif
