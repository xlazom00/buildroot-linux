#ifndef     PLAYER_PROFILE_H
#define     PLAYER_PROFILE_H



#define FLAGS_FORCE_UPDATE          (1<<0)

typedef struct {
} sys_h264_profile_t;

typedef struct {
    int progressive_enable;
    int interlace_enable;
    int wmv1_enable;
    int wmv2_enable;
    int wmv3_enable;
} sys_vc1_profile_t;

typedef struct {
    int es_support;
    int exceed_720p_enable;
} sys_real_profile_t;

typedef struct {

} sys_mpeg12_profile_t;

typedef struct {

} sys_mpeg4_profile_t;

typedef struct {

} sys_mjpeg_profile_t;

typedef struct _system_para_ {
    sys_h264_profile_t      h264_para;
    sys_vc1_profile_t       vc1_para;
    sys_real_profile_t      real_para;
    sys_mpeg12_profile_t    mpeg12_para;
    sys_mpeg4_profile_t     mpeg4_para;
    sys_mjpeg_profile_t     mjpeg_para;
} vdec_profile_t;

/*for update player's profile */
int player_update_profile(void);
/*get player's profile,update if needed
flags=FLAGS_FORCE_UPDATEmay force update
*/
int player_get_vdec_profile(vdec_profile_t *vdec_profiles, int flags);
int player_basic_profile_init(int flags);

#endif

