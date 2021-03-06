/*
 * Copyright (c) 2003 Sun Microsystems, Inc.  All Rights Reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 * Redistribution of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 
 * Redistribution in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 
 * Neither the name of Sun Microsystems, Inc. or the names of
 * contributors may be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * 
 * This software is provided "AS IS," without a warranty of any kind.
 * ALL EXPRESS OR IMPLIED CONDITIONS, REPRESENTATIONS AND WARRANTIES,
 * INCLUDING ANY IMPLIED WARRANTY OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE OR NON-INFRINGEMENT, ARE HEREBY EXCLUDED.
 * SUN MICROSYSTEMS, INC. ("SUN") AND ITS LICENSORS SHALL NOT BE LIABLE
 * FOR ANY DAMAGES SUFFERED BY LICENSEE AS A RESULT OF USING, MODIFYING
 * OR DISTRIBUTING THIS SOFTWARE OR ITS DERIVATIVES.  IN NO EVENT WILL
 * SUN OR ITS LICENSORS BE LIABLE FOR ANY LOST REVENUE, PROFIT OR DATA,
 * OR FOR DIRECT, INDIRECT, SPECIAL, CONSEQUENTIAL, INCIDENTAL OR
 * PUNITIVE DAMAGES, HOWEVER CAUSED AND REGARDLESS OF THE THEORY OF
 * LIABILITY, ARISING OUT OF THE USE OF OR INABILITY TO USE THIS SOFTWARE,
 * EVEN IF SUN HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 */

#ifndef IPMI_CONSTANTS_H
#define IPMI_CONSTANTS_H


/*
 * COMMANDS
 */
#define IPMI_GET_SDR_REPOSITORY_INFO            0x20
#define IPMI_SOL_ACTIVATING                     0x20
#define IPMI_SET_SOL_CONFIG_PARAMETERS          0x21
#define IPMI_GET_SOL_CONFIG_PARAMETERS          0x22
#define IPMI_SET_USER_ACCESS                    0x43
#define IPMI_GET_USER_ACCESS                    0x44
#define IPMI_SET_USER_NAME                      0x45
#define IPMI_GET_USER_NAME                      0x46
#define IPMI_SET_USER_PASSWORD                  0x47
#define IPMI_ACTIVATE_PAYLOAD                   0x48
#define IPMI_DEACTIVATE_PAYLOAD                 0x49
#define IPMI_SUSPEND_RESUME_PAYLOAD_ENCRYPTYION 0x55
#define IPMI_GET_SEL_TIME                       0x48
#define IPMI_SET_SEL_TIME                       0x49
#define IPMI_SET_USER_PAYLOAD_ACCESS		0x4c
#define IPMI_GET_USER_PAYLOAD_ACCESS		0x4d

#define IPMI_1_5_AUTH_TYPE_BIT_NONE     0x01
#define IPMI_1_5_AUTH_TYPE_BIT_MD2      0x02
#define IPMI_1_5_AUTH_TYPE_BIT_MD5      0x04
#define IPMI_1_5_AUTH_TYPE_BIT_PASSWORD 0x10
#define IPMI_1_5_AUTH_TYPE_BIT_OEM      0x20

#define IPMI_SESSION_AUTHTYPE_NONE      0x0
#define IPMI_SESSION_AUTHTYPE_MD2       0x1
#define IPMI_SESSION_AUTHTYPE_MD5   	0x2
#define IPMI_SESSION_AUTHTYPE_KEY	0x4
#define IPMI_SESSION_AUTHTYPE_PASSWORD	IPMI_SESSION_AUTHTYPE_KEY
#define IPMI_SESSION_AUTHTYPE_OEM       0x5
#define IPMI_SESSION_AUTHTYPE_RMCP_PLUS 0x6

#define IPMI_SESSION_PRIV_UNSPECIFIED   0x0
#define IPMI_SESSION_PRIV_CALLBACK	0x1
#define IPMI_SESSION_PRIV_USER		0x2
#define IPMI_SESSION_PRIV_OPERATOR	0x3
#define IPMI_SESSION_PRIV_ADMIN		0x4
#define IPMI_SESSION_PRIV_OEM		0x5

#define IPMI_SET_IN_PROGRESS_SET_COMPLETE 0x00
#define IPMI_SET_IN_PROGRESS_IN_PROGRESS  0x01
#define IPMI_SET_IN_PROGRESS_COMMIT_WRITE 0x02

#define IPMI_CHANNEL_MEDIUM_RESERVED	0x0
#define IPMI_CHANNEL_MEDIUM_IPMB_I2C	0x1
#define IPMI_CHANNEL_MEDIUM_ICMB_1	0x2
#define IPMI_CHANNEL_MEDIUM_ICMB_09	0x3
#define IPMI_CHANNEL_MEDIUM_LAN		0x4
#define IPMI_CHANNEL_MEDIUM_SERIAL	0x5
#define IPMI_CHANNEL_MEDIUM_LAN_OTHER	0x6
#define IPMI_CHANNEL_MEDIUM_SMBUS_PCI	0x7
#define IPMI_CHANNEL_MEDIUM_SMBUS_1	0x8
#define IPMI_CHANNEL_MEDIUM_SMBUS_2	0x9
#define IPMI_CHANNEL_MEDIUM_USB_1	0xa
#define IPMI_CHANNEL_MEDIUM_USB_2	0xb
#define IPMI_CHANNEL_MEDIUM_SYSTEM	0xc

#define IPMI_CHASSIS_CTL_POWER_DOWN	0x0
#define IPMI_CHASSIS_CTL_POWER_UP	0x1
#define IPMI_CHASSIS_CTL_POWER_CYCLE	0x2
#define IPMI_CHASSIS_CTL_HARD_RESET	0x3
#define IPMI_CHASSIS_CTL_PULSE_DIAG	0x4
#define IPMI_CHASSIS_CTL_ACPI_SOFT	0x5

#define IPMI_CHASSIS_POLICY_NO_CHANGE	0x3
#define IPMI_CHASSIS_POLICY_ALWAYS_ON	0x2
#define IPMI_CHASSIS_POLICY_PREVIOUS	0x1
#define IPMI_CHASSIS_POLICY_ALWAYS_OFF	0x0

#define IPMI_CHASSIS_BOOTPARAM_SET_IN_PROGRESS	0
#define IPMI_CHASSIS_BOOTPARAM_SVCPART_SELECT	1
#define IPMI_CHASSIS_BOOTPARAM_SVCPART_SCAN	2
#define IPMI_CHASSIS_BOOTPARAM_FLAG_VALID	3
#define IPMI_CHASSIS_BOOTPARAM_INFO_ACK		4
#define IPMI_CHASSIS_BOOTPARAM_BOOT_FLAGS	5
#define IPMI_CHASSIS_BOOTPARAM_INIT_INFO	6
#define IPMI_CHASSIS_BOOTPARAM_INIT_MBOX	7

#define IPMI_CHASSIS_BOOTPARAM_OEM_BOOT_POLICY	96 // Calxeda OEM boot param

/* From table 13-17 of the IPMI v2 specification */
#define IPMI_AUTH_RAKP_NONE         0x00
#define IPMI_AUTH_RAKP_HMAC_SHA1    0x01
#define IPMI_AUTH_RAKP_HMAC_MD5     0x02

/* From table 13-18 of the IPMI v2 specification */
#define IPMI_INTEGRITY_NONE         0x00
#define IPMI_INTEGRITY_HMAC_SHA1_96 0x01
#define IPMI_INTEGRITY_HMAC_MD5_128 0x02
#define IPMI_INTEGRITY_MD5_128      0x03

/* From table 13-19 of the IPMI v2 specfication */
#define IPMI_CRYPT_NONE             0x00
#define IPMI_CRYPT_AES_CBC_128      0x01
#define IPMI_CRYPT_XRC4_128         0x02
#define IPMI_CRYPT_XRC4_40          0x03

#endif /*IPMI_CONSTANTS_H*/
