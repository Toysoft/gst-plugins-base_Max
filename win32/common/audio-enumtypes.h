


#ifndef __GST_AUDIO_ENUM_TYPES_H__
#define __GST_AUDIO_ENUM_TYPES_H__

#include <glib-object.h>

G_BEGIN_DECLS

/* enumerations from "audio-format.h" */
GType gst_audio_format_get_type (void);
#define GST_TYPE_AUDIO_FORMAT (gst_audio_format_get_type())
GType gst_audio_format_flags_get_type (void);
#define GST_TYPE_AUDIO_FORMAT_FLAGS (gst_audio_format_flags_get_type())
GType gst_audio_pack_flags_get_type (void);
#define GST_TYPE_AUDIO_PACK_FLAGS (gst_audio_pack_flags_get_type())

/* enumerations from "audio-channels.h" */
GType gst_audio_channel_position_get_type (void);
#define GST_TYPE_AUDIO_CHANNEL_POSITION (gst_audio_channel_position_get_type())

/* enumerations from "audio-channel-mix.h" */
GType gst_audio_channel_mix_flags_get_type (void);
#define GST_TYPE_AUDIO_CHANNEL_MIX_FLAGS (gst_audio_channel_mix_flags_get_type())

/* enumerations from "audio-converter.h" */
GType gst_audio_converter_flags_get_type (void);
#define GST_TYPE_AUDIO_CONVERTER_FLAGS (gst_audio_converter_flags_get_type())

/* enumerations from "audio-info.h" */
GType gst_audio_flags_get_type (void);
#define GST_TYPE_AUDIO_FLAGS (gst_audio_flags_get_type())
GType gst_audio_layout_get_type (void);
#define GST_TYPE_AUDIO_LAYOUT (gst_audio_layout_get_type())

/* enumerations from "audio-quantize.h" */
GType gst_audio_dither_method_get_type (void);
#define GST_TYPE_AUDIO_DITHER_METHOD (gst_audio_dither_method_get_type())
GType gst_audio_noise_shaping_method_get_type (void);
#define GST_TYPE_AUDIO_NOISE_SHAPING_METHOD (gst_audio_noise_shaping_method_get_type())
GType gst_audio_quantize_flags_get_type (void);
#define GST_TYPE_AUDIO_QUANTIZE_FLAGS (gst_audio_quantize_flags_get_type())

/* enumerations from "gstaudioringbuffer.h" */
GType gst_audio_ring_buffer_state_get_type (void);
#define GST_TYPE_AUDIO_RING_BUFFER_STATE (gst_audio_ring_buffer_state_get_type())
GType gst_audio_ring_buffer_format_type_get_type (void);
#define GST_TYPE_AUDIO_RING_BUFFER_FORMAT_TYPE (gst_audio_ring_buffer_format_type_get_type())
G_END_DECLS

#endif /* __GST_AUDIO_ENUM_TYPES_H__ */



