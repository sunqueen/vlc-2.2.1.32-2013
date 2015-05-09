/*****************************************************************************
 * dr_7c.h
 * Copyright (c) 2012 VideoLAN
 * $Id$
 *
 * Authors: Jean-Paul Saman <jpsaman@videolan.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *****************************************************************************/

/*!
 * \file <dr_7c.h>
 * \author Jean-Paul Saman <jpsaman@videolan.org>
 * \brief AAC Audio descriptor
 *
 * AAC Audio descriptor parsing, according to
 * ETSI EN 300 468 V1.13.1 (2012-04) Annex H
 */

#ifndef _DVBPSI_DR_7C_H_
#define _DVBPSI_DR_7c_H_

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * dvbpsi_aac_dr_t
 *****************************************************************************/
/*!
 * \enum dvbpsi_aac_profile_and_level_s
 * \brief enumeration of AAC profile and levels as specified in ISO/IEC 13818-1:2007 table 2.71
 */
/*!
 * \typedef enum dvbpsi_aac_profile_and_level_s dvbpsi_aac_profile_and_level_t
 * \brief AAC profile and level as specified in ISO/IEC 13818-1:2007 table 2.71.
 */
typedef enum dvbpsi_aac_profile_and_level_s
{
    DVBPSI_AAC_PROFILE_RESERVED = 0x00, /*!< 0x00-0x0F Reserved */

    DVBPSI_AAC_PROFILE_MAIN_LEVEL_1 = 0x10, /*!< Main profile, level 1 */
    DVBPSI_AAC_PROFILE_MAIN_LEVEL_2 = 0x11, /*!< Main profile, level 2 */
    DVBPSI_AAC_PROFILE_MAIN_LEVEL_3 = 0x12, /*!< Main profile, level 3 */
    DVBPSI_AAC_PROFILE_MAIN_LEVEL_4 = 0x13, /*!< Main profile, level 4 */
    /** 0x14-0x17 Reserved */
    DVBPSI_AAC_PROFILE_SCALABLE_LEVEL_1 = 0x18, /*!< Scalable Profile, level 1 */
    DVBPSI_AAC_PROFILE_SCALABLE_LEVEL_2 = 0x19, /*!< Scalable Profile, level 2 */
    DVBPSI_AAC_PROFILE_SCALABLE_LEVEL_3 = 0x1A, /*!< Scalable Profile, level 3 */
    DVBPSI_AAC_PROFILE_SCALABLE_LEVEL_4 = 0x1B, /*!< Scalable Profile, level 4 */
    /** 0x1C-0x1F Reserved */
    DVBPSI_AAC_PROFILE_SPEECH_LEVEL_1 = 0x20, /*!< Speech profile, level 1 */
    DVBPSI_AAC_PROFILE_SPEECH_LEVEL_2 = 0x21, /*!< Speech profile, level 2 */
    /** 0x22-0x27 Reserved */
    DVBPSI_AAC_PROFILE_SYNTHESIS_LEVEL_1 = 0x28, /*!< Synthesis profile, level 1 */
    DVBPSI_AAC_PROFILE_SYNTHESIS_LEVEL_2 = 0x29, /*!< Synthesis profile, level 2 */
    DVBPSI_AAC_PROFILE_SYNTHESIS_LEVEL_3 = 0x2A, /*!< Synthesis profile, level 3 */
    /** 0x2B-0x2F Reserved */
    DVBPSI_AAC_PROFILE_HQ_LEVEL_1 = 0x30, /*!< High quality audio profile, level 1 */
    DVBPSI_AAC_PROFILE_HQ_LEVEL_2 = 0x31, /*!< High quality audio profile, level 2 */
    DVBPSI_AAC_PROFILE_HQ_LEVEL_3 = 0x32, /*!< High quality audio profile, level 3 */
    DVBPSI_AAC_PROFILE_HQ_LEVEL_4 = 0x33, /*!< High quality audio profile, level 4 */
    DVBPSI_AAC_PROFILE_HQ_LEVEL_5 = 0x34, /*!< High quality audio profile, level 5 */
    DVBPSI_AAC_PROFILE_HQ_LEVEL_6 = 0x35, /*!< High quality audio profile, level 6 */
    DVBPSI_AAC_PROFILE_HQ_LEVEL_7 = 0x36, /*!< High quality audio profile, level 7 */
    DVBPSI_AAC_PROFILE_HQ_LEVEL_8 = 0x37, /*!< High quality audio profile, level 8 */
    DVBPSI_AAC_PROFILE_LOW_DELAY_LEVEL_1 = 0x38, /*!< Low delay audio profile, level 1 */
    DVBPSI_AAC_PROFILE_LOW_DELAY_LEVEL_2 = 0x39, /*!< Low delay audio profile, level 2 */
    DVBPSI_AAC_PROFILE_LOW_DELAY_LEVEL_3 = 0x3A, /*!< Low delay audio profile, level 3 */
    DVBPSI_AAC_PROFILE_LOW_DELAY_LEVEL_4 = 0x3B, /*!< Low delay audio profile, level 4 */
    DVBPSI_AAC_PROFILE_LOW_DELAY_LEVEL_5 = 0x3C, /*!< Low delay audio profile, level 5 */
    DVBPSI_AAC_PROFILE_LOW_DELAY_LEVEL_6 = 0x3D, /*!< Low delay audio profile, level 6 */
    DVBPSI_AAC_PROFILE_LOW_DELAY_LEVEL_7 = 0x3E, /*!< Low delay audio profile, level 7 */
    DVBPSI_AAC_PROFILE_LOW_DELAY_LEVEL_8 = 0x3F, /*!< Low delay audio profile, level 8 */
    DVBPSI_AAC_PROFILE_NATURAL_LEVEL_1 = 0x40, /*!< Natural audio profile, level 1 */
    DVBPSI_AAC_PROFILE_NATURAL_LEVEL_2 = 0x41, /*!< Natural audio profile, level 2 */
    DVBPSI_AAC_PROFILE_NATURAL_LEVEL_3 = 0x42, /*!< Natural audio profile, level 3 */
    DVBPSI_AAC_PROFILE_NATURAL_LEVEL_4 = 0x43, /*!< Natural audio profile, level 4 */
    /** 0x44-0x47 Reserved */
    DVBPSI_AAC_PROFILE_MOBILE_LEVEL_1 = 0x48, /*!< Mobile audio internetworking profile, level 1 */
    DVBPSI_AAC_PROFILE_MOBILE_LEVEL_2 = 0x49, /*!< Mobile audio internetworking profile, level 2 */
    DVBPSI_AAC_PROFILE_MOBILE_LEVEL_3 = 0x4A, /*!< Mobile audio internetworking profile, level 3 */
    DVBPSI_AAC_PROFILE_MOBILE_LEVEL_4 = 0x4B, /*!< Mobile audio internetworking profile, level 4 */
    DVBPSI_AAC_PROFILE_MOBILE_LEVEL_5 = 0x4C, /*!< Mobile audio internetworking profile, level 5 */
    DVBPSI_AAC_PROFILE_MOBILE_LEVEL_6 = 0x4D, /*!< Mobile audio internetworking profile, level 6 */
    /** 0x4E-0x4F Reserved */
    DVBPSI_AAC_PROFILE_LEVEL_1 = 0x50, /*!< AAC profile, level 1 */
    DVBPSI_AAC_PROFILE_LEVEL_2 = 0x51, /*!< AAC profile, level 2 */
    DVBPSI_AAC_PROFILE_LEVEL_4 = 0x52, /*!< AAC profile, level 4 */
    DVBPSI_AAC_PROFILE_LEVEL_5 = 0x53, /*!< AAC profile, level 5 */
    /** 0x54-0x57 RESERVED */
    DVBPSI_HE_AAC_PROFILE_LEVEL_2 = 0x58, /*!< High efficiency AAC profile, level 2 */
    DVBPSI_HE_AAC_PROFILE_LEVEL_3 = 0x59, /*!< High efficiency AAC profile, level 3 */
    DVBPSI_HE_AAC_PROFILE_LEVEL_4 = 0x5A, /*!< High efficiency AAC profile, level 4 */
    DVBPSI_HE_AAC_PROFILE_LEVEL_5 = 0x5B  /*!< High efficiency AAC profile, level 5 */
    /** 0x5C-0xFF RESERVED */
} dvbpsi_aac_profile_and_level_t;

/*!
 * \enum dvbpsi_aac_type_s
 * \brief AAC type information as described in table 26, page 41 where column
 *
 * The AAC Audio descriptor is used to label the PIDs that carry AAC audio data.
 * 'stream_content' has value 0x06 as specified in ISO/IEC 13818-1:2007.
 */
/*!
 * \typedef enum dvbpsi_aac_type_s dvbpsi_aac_type_t
 * \brief   AAC type information as descripted in table 26, page 41 where column
 * 'stream_content' has value 0x06.
*/
typedef enum dvbpsi_aac_type_s
{
    DVBPSI_AAC_RESERVED0 = 0x00, /*!< reserved for future use */
    DVBPSI_HE_AAC_MONO = 0x01, /*!< HE-AAC audio, single mono channel */
    DVBPSI_AAC_RESERVED1 = 0x02, /*!< reserved for future use */
    DVBPSI_HE_AAC_STEREO = 0x03, /*!< HE-AAC audio, stereo */
    DVBPSI_AAC_RESERVED2 = 0x04, /*!< reserved for future use */
    DVBPSI_HE_AAC_SURROUND = 0x05, /*!< HE-AAC audio, surround sound */
    DVBPSI_AAC_RESERVED3 = 0x06, /*!< 0x06 to 0x3F reserved for future use */
    DVBPSI_HE_AAC_IMPAIRED = 0x40, /*!< HE-AAC audio description for
                                        the visually impaired */
    DVBPSI_HE_AAC_HEARING = 0x41, /*!< HE-AAC audio for the hard of hearing */
    DVBPSI_HE_AAC_MIXED = 0x42, /*!< HE-AAC receiver-mixed supplementary
                                     audio as per annex E of TS 101 154 */
    DVBPSI_HE_AAC_V2_STEREO = 0x43, /*!< HE-AAC v2 audio, stereo */
    DVBPSI_HE_AAC_V2_IMPAIRED = 0x44, /*!< HE-AAC v2 audio description for the
                                           visually impaired */
    DVBPSI_HE_AAC_V2_HEARING = 0x45, /*!< HE-AAC v2 audio for the hard of hearing */
    DVBPSI_HE_AAC_V2_MIXED = 0x46, /*!< HE-AAC v2 receiver-mixed supplementary
                                        audio as per annex E of TS 101 154 */
    DVBPSI_HE_AAC_MIXED_IMPAIRED = 0x47, /*!< HE-AAC receiver mix audio description
                                              for the visually impaired */
    DVBPSI_HE_AAC_BROADCAST_MIXED_IMPAIRED = 0x48, /*!< HE-AAC broadcaster mix
                                   audio description for the visually impaired */
    DVBPSI_HE_AAC_V2_MIXED_IMPAIRED = 0x49, /*!< HE-AAC v2 receiver mix audio
                                        description for the visually impaired */
    DVBPSI_HE_AAC_V2_BROADCAST_MIXED_IMPAIRED = 0x4A, /*!< HE-AAC v2 broadcaster
                                 mix audio description for the visually impaired */
    DVBPSI_AAC_RESERVED4 = 0x4B, /*!< 0x4B to 0xAF reserved for future use */
    DVBPSI_AAC_USER = 0xB0, /*!< 0xB0 to 0xFE user-defined */
    DVBPSI_AAC_RESERVED5 = 0xFF /*!< reserved for future use */
} dvbpsi_aac_type_t;

/*!
 * \struct dvbpsi_aac_dr_s
 * \brief "AAC Audio" descriptor structure.
 *
 * The AAC Audio descriptor is used to label the PIDs that carry AAC audio data.
 */
/*!
 * \typedef struct dvbpsi_aac_dr_s dvbpsi_aac_dr_t
 * \brief dvbpsi_aac_dr_t type definition.
 */
typedef struct dvbpsi_aac_dr_s
{
    dvbpsi_aac_profile_and_level_t  i_profile_and_level;
        /*!< Specifies the Profile and Level used in MPEG-4 AAC,
             MPEG-4 HE AAC or MPEG-4 HE AAC v2 according to
             table 2-71 in ISO/IEC 13818-1:2007/AMD1 [18]. */

    bool              b_type; /*!< Indicates presence of AAC type information. */
    dvbpsi_aac_type_t i_type; /*!< AAC type information, @see enum dvbpsi_aac_type_t */

    uint8_t  i_additional_info_length; /*!< Length of additional info bytes fields */
    uint8_t *p_additional_info; /*!< additional info bytes field. Memory is allocated
                                     right after sizeof struct, when freeing this struct
                                     the additional info bytes field is freed at the same time. */

} dvbpsi_aac_dr_t;

/*****************************************************************************
 * dvbpsi_DecodeAACDr
 *****************************************************************************/
/*!
 * \fn dvbpsi_aac_dr_t * dvbpsi_DecodeAACDr(dvbpsi_descriptor_t * p_descriptor)
 * \brief "AAC Audio" descriptor decoder.
 * \param p_descriptor pointer to the descriptor structure
 * \return a pointer to a new "AAC" descriptor structure
 * which contains the decoded data.
 */
dvbpsi_aac_dr_t* dvbpsi_DecodeAACDr(dvbpsi_descriptor_t *p_descriptor);

/*****************************************************************************
 * dvbpsi_GenAACDr
 *****************************************************************************/
/*!
 * \fn dvbpsi_descriptor_t *dvbpsi_GenAACDr(dvbpsi_aac_dr_t *p_decoded, bool b_duplicate)
 * \brief "AAC" descriptor generator.
 * \param p_decoded pointer to a decoded "AAC" descriptor structure
 * \param b_duplicate if true then duplicate the p_decoded structure into
 * the descriptor
 * \return a pointer to a new descriptor structure which contains encoded data.
 */
dvbpsi_descriptor_t *dvbpsi_GenAACDr(dvbpsi_aac_dr_t *p_decoded, bool b_duplicate);

#ifdef __cplusplus
};
#endif

#else
#error "Multiple inclusions of dr_7c.h"
#endif
