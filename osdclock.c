#include <xosd.h>
#include <time.h>

int main( int argc, char *argv[] )
{
    xosd *osd = xosd_create( 1 );
    xosd_set_font( osd, "-*-ohsnap-medium-*-*-*-14-*-*-*-*-*-*-*" );
    xosd_set_colour( osd, "White" );
    xosd_set_shadow_offset( osd, 1 );
    xosd_set_align (osd, XOSD_left);
    xosd_set_pos (osd, XOSD_bottom);
    xosd_set_vertical_offset (osd, 5);
    while( 1 )
    {
        time_t tm = time( NULL );
        xosd_display( osd, 0, XOSD_string, ctime( &tm ) );
        sleep( 1 );
    }
    return 0;
}
