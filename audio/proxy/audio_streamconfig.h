/*
 * Copyright (C) 2019 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __EXYNOS_AUDIOPROXY_STREAMCONFIG_H__
#define __EXYNOS_AUDIOPROXY_STREAMCONFIG_H__


/*
 * This header file defines Supported Configurations for each Audio Streams.
 * These configurations can be different as projects and boards,
 * so engineers should modify this file based on audio_policy_configuration.xml.
 */

// Supported Audio Format Tables
char * stream_format_table[ASTREAM_CNT] = {
    [ASTREAM_PLAYBACK_NO_ATTRIBUTE]  = "AUDIO_FORMAT_PCM_16_BIT",
    [ASTREAM_PLAYBACK_PRIMARY]       = "AUDIO_FORMAT_PCM_16_BIT",
    [ASTREAM_PLAYBACK_FAST]          = "AUDIO_FORMAT_PCM_16_BIT",
    [ASTREAM_PLAYBACK_DEEP_BUFFER]   = "AUDIO_FORMAT_PCM_16_BIT",
    [ASTREAM_PLAYBACK_LOW_LATENCY]   = "AUDIO_FORMAT_PCM_16_BIT",
    [ASTREAM_PLAYBACK_MMAP]          = "AUDIO_FORMAT_PCM_16_BIT",
    [ASTREAM_PLAYBACK_AUX_DIGITAL]   = "AUDIO_FORMAT_PCM_16_BIT",
    [ASTREAM_PLAYBACK_INCALL_MUSIC]  = "AUDIO_FORMAT_PCM_16_BIT",

    [ASTREAM_CAPTURE_NO_ATTRIBUTE]   = "AUDIO_FORMAT_PCM_16_BIT",
    [ASTREAM_CAPTURE_PRIMARY]        = "AUDIO_FORMAT_PCM_16_BIT",
    [ASTREAM_CAPTURE_CALL]           = "AUDIO_FORMAT_PCM_16_BIT",
    [ASTREAM_CAPTURE_LOW_LATENCY]    = "AUDIO_FORMAT_PCM_16_BIT",
    [ASTREAM_CAPTURE_MMAP]           = "AUDIO_FORMAT_PCM_16_BIT",
    [ASTREAM_CAPTURE_FM_TUNER]       = "AUDIO_FORMAT_PCM_16_BIT",
    [ASTREAM_CAPTURE_FM_RECORDING]   = "AUDIO_FORMAT_PCM_16_BIT",

    [ASTREAM_NONE]                   = "AUDIO_FORMAT_INVALID"
};

// Supported Audio Channel Mask Tables
char * stream_channel_table[ASTREAM_CNT] = {
    [ASTREAM_PLAYBACK_NO_ATTRIBUTE]  = "AUDIO_CHANNEL_OUT_MONO|AUDIO_CHANNEL_OUT_STEREO",
    [ASTREAM_PLAYBACK_PRIMARY]       = "AUDIO_CHANNEL_OUT_STEREO",
    [ASTREAM_PLAYBACK_FAST]          = "AUDIO_CHANNEL_OUT_STEREO",
    [ASTREAM_PLAYBACK_DEEP_BUFFER]   = "AUDIO_CHANNEL_OUT_STEREO",
    [ASTREAM_PLAYBACK_LOW_LATENCY]   = "AUDIO_CHANNEL_OUT_STEREO",
    [ASTREAM_PLAYBACK_MMAP]          = "AUDIO_CHANNEL_OUT_STEREO",
    [ASTREAM_PLAYBACK_AUX_DIGITAL]   = "AUDIO_CHANNEL_OUT_STEREO",
    [ASTREAM_PLAYBACK_INCALL_MUSIC]  = "AUDIO_CHANNEL_OUT_STEREO",

    [ASTREAM_CAPTURE_NO_ATTRIBUTE]   = "AUDIO_CHANNEL_IN_MONO|AUDIO_CHANNEL_IN_STEREO",
    [ASTREAM_CAPTURE_PRIMARY]        = "AUDIO_CHANNEL_IN_MONO|AUDIO_CHANNEL_IN_STEREO",
    [ASTREAM_CAPTURE_CALL]           = "AUDIO_CHANNEL_IN_MONO|AUDIO_CHANNEL_IN_STEREO",
    [ASTREAM_CAPTURE_LOW_LATENCY]    = "AUDIO_CHANNEL_IN_MONO|AUDIO_CHANNEL_IN_STEREO",
    [ASTREAM_CAPTURE_MMAP]           = "AUDIO_CHANNEL_IN_MONO|AUDIO_CHANNEL_IN_STEREO",
    [ASTREAM_CAPTURE_FM_TUNER]       = "AUDIO_CHANNEL_IN_MONO|AUDIO_CHANNEL_IN_STEREO",
    [ASTREAM_CAPTURE_FM_RECORDING]   = "AUDIO_CHANNEL_IN_MONO|AUDIO_CHANNEL_IN_STEREO",

    [ASTREAM_NONE]                   = "AUDIO_CHANNEL_INVALID"
};

// Supported Audio Sampling Rate Tables
char * stream_rate_table[ASTREAM_CNT] = {
    [ASTREAM_PLAYBACK_NO_ATTRIBUTE]  = "48000",
    [ASTREAM_PLAYBACK_PRIMARY]       = "48000",
    [ASTREAM_PLAYBACK_FAST]          = "48000",
    [ASTREAM_PLAYBACK_DEEP_BUFFER]   = "48000",
    [ASTREAM_PLAYBACK_LOW_LATENCY]   = "48000",
    [ASTREAM_PLAYBACK_MMAP]          = "48000",
    [ASTREAM_PLAYBACK_AUX_DIGITAL]   = "48000",
    [ASTREAM_PLAYBACK_INCALL_MUSIC]  = "48000",

    [ASTREAM_CAPTURE_NO_ATTRIBUTE]   = "8000|16000|32000|48000",
    [ASTREAM_CAPTURE_PRIMARY]        = "8000|16000|32000|48000",
    [ASTREAM_CAPTURE_CALL]           = "8000|16000|32000|48000",
    [ASTREAM_CAPTURE_LOW_LATENCY]    = "48000",
    [ASTREAM_CAPTURE_MMAP]           = "48000",
    [ASTREAM_CAPTURE_FM_TUNER]       = "8000|16000|32000|48000",
    [ASTREAM_CAPTURE_FM_RECORDING]   = "8000|16000|32000|48000",

    [ASTREAM_NONE]                   = "0"
};

#endif  // __EXYNOS_AUDIOPROXY_STREAMCONFIG_H__
