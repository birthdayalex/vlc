/*****************************************************************************
 * video_decoder.h : video decoder thread
 * (c)1999 VideoLAN
 *****************************************************************************
 *****************************************************************************
 * Requires:
 *  "config.h"
 *  "common.h"
 *  "mtime.h"
 *  "vlc_thread.h"
 *  "input.h"
 *  "video.h"
 *  "video_output.h"
 *  "decoder_fifo.h"
 *****************************************************************************/

/*****************************************************************************
 * vdec_thread_t: video decoder thread descriptor
 *****************************************************************************
 * ??
 *****************************************************************************/
typedef struct vdec_thread_s
{
    /* Thread properties and locks */
    boolean_t           b_die;                                 /* `die' flag */
    boolean_t           b_run;                                 /* `run' flag */
    boolean_t           b_error;                             /* `error' flag */
    boolean_t           b_active;                           /* `active' flag */
    vlc_thread_t        thread_id;                /* id for thread functions */

    /* Thread configuration */
    /* ?? */
 /*??*/
//    int *pi_status;
    

    /* Input properties */
    video_parser_t *  	p_vpar;                       /* video_parser thread */
    short int           p_pre_idct[64*64];        /* initialization of sparse idct routines */

#ifdef STATS
    /* Statistics */
    count_t         c_loops;                              /* number of loops */
    count_t         c_idle_loops;                    /* number of idle loops */
    count_t         c_decoded_pictures;        /* number of pictures decoded */
    count_t         c_decoded_i_pictures;    /* number of I pictures decoded */
    count_t         c_decoded_p_pictures;    /* number of P pictures decoded */
    count_t         c_decoded_b_pictures;    /* number of B pictures decoded */
#endif
} vdec_thread_t;

/*****************************************************************************
 * Prototypes
 *****************************************************************************/

/* Thread management functions */
vdec_thread_t * vdec_CreateThread       ( vpar_thread_t *p_vpar /*, int *pi_status */ );
void            vdec_DestroyThread      ( vdec_thread_t *p_vdec /*, int *pi_status */ );

/* Time management functions */
/* ?? */

/* Dynamic thread settings */
/* ?? */
