make -f makefile_multi clean
make[1]: Entering directory '/__w/snes9xTYL/snes9xTYL'
makefile_multi:126: warning: overriding recipe for target 'EBOOT.PBP'
/usr/local/pspdev/psp/sdk/lib/build.mak:184: warning: ignoring old recipe for target 'EBOOT.PBP'
rm -f snes9xTYL.prx snes9xTYL.elf psp/blitter.o psp/config.o psp/decrypt.o psp/filer.o psp/imageio.o psp/img_jpeg.o psp/math.o psp/menu.o psp/menu_fx.o psp/me/mem64.o psp/psp.o psp/psp_ui.o psp/psplib.o psp/pg.o psp/psp_msg.o psp/psp_favorites.o apu.o apudebug.o c4.o c4emu.o cheats.o cheats2.o clip.o cpu.o cpuexec.o cpuops.o data.o debug.o dma.o dsp1.o fxdbg.o fxemu.o fxinst.o gfx_mode7.o gfx.o gfx_org.o gfx_psp.o gfx_psp_fix.o globals.o hwregisters.o loadzip.o memmap.o obc1.o exhirom.o ppu.o sa1.o sa1cpu.o sdd1.o sdd1emu.o snapshot.o snes9x.o spc700.o spc7110.o srtc.o soundux.o tile.o tile_org.o tile_sw.o tile_psp.o unzip.o  psp/openspc++/dsp.o psp/openspc++/spc.o psp/openspc++/ospcmain.o psp/openspc++/os9xZ_openspc.o danzeff/danzeff.o psp/MediaEngine.o psp/mediaengineprx/me.o psp/psp_net.o psp/adhoc/pspadhoc.o psp/adhoc/selectorMenu.o psp/homehook.o PARAM.SFO EBOOT.PBP EBOOT.PBP
make[1]: Leaving directory '/__w/snes9xTYL/snes9xTYL'
make -f makefile_multi ME_ACTIVE=1 HOME_HOOK_ON=1
make[1]: Entering directory '/__w/snes9xTYL/snes9xTYL'
makefile_multi:126: warning: overriding recipe for target 'EBOOT.PBP'
/usr/local/pspdev/psp/sdk/lib/build.mak:184: warning: ignoring old recipe for target 'EBOOT.PBP'
psp-gcc -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -D_PSP_FW_VERSION=661   -c -o psp/blitter.o psp/blitter.c
psp-g++ -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -fno-exceptions -fno-rtti -fpermissive -Wno-register -D_PSP_FW_VERSION=661   -c -o psp/config.o psp/config.cpp
cc1plus: warning: command-line option '-Wno-incompatible-pointer-types' is valid for C/ObjC but not for C++
psp-gcc -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -D_PSP_FW_VERSION=661   -c -o psp/decrypt.o psp/decrypt.c
psp-gcc -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -D_PSP_FW_VERSION=661   -c -o psp/filer.o psp/filer.c
psp/filer.c: In function 'filer_process_navigation':
psp/filer.c:736:9: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
  736 |         if (image_loaded) *image_loaded = 2; os9x_beep1();
      |         ^~
psp/filer.c:736:46: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
  736 |         if (image_loaded) *image_loaded = 2; os9x_beep1();
      |                                              ^~~~~~~~~~
psp/filer.c:740:9: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
  740 |         if (image_loaded) *image_loaded = 2; os9x_beep1();
      |         ^~
psp/filer.c:740:46: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
  740 |         if (image_loaded) *image_loaded = 2; os9x_beep1();
      |                                              ^~~~~~~~~~
psp/filer.c: In function 'getFilePath':
psp/filer.c:780:42: warning: unused variable 'tmp' [-Wunused-variable]
  780 |     char path[MAXPATH], oldDir[MAXPATH], tmp[255], *p;
      |                                          ^~~
psp/filer.c:773:24: warning: unused variable 'h' [-Wunused-variable]
  773 |     int top = 0, x, y, h, i, bMsg = 0, up = 0;
      |                        ^
psp/filer.c:773:21: warning: unused variable 'y' [-Wunused-variable]
  773 |     int top = 0, x, y, h, i, bMsg = 0, up = 0;
      |                     ^
psp/filer.c:773:18: warning: unused variable 'x' [-Wunused-variable]
  773 |     int top = 0, x, y, h, i, bMsg = 0, up = 0;
      |                  ^
psp/filer.c:769:19: warning: unused variable 'color' [-Wunused-variable]
  769 |     unsigned long color = RGB_WHITE;
      |                   ^~~~~
psp/filer.c: In function 'getNoExtFilePath':
psp/filer.c:1150:42: warning: unused variable 'tmp' [-Wunused-variable]
 1150 |     char path[MAXPATH], oldDir[MAXPATH], tmp[255], *p;
      |                                          ^~~
psp/filer.c:1145:18: warning: unused variable 'h' [-Wunused-variable]
 1145 |     int top = 0, h, i, bMsg = 0, up = 0;
      |                  ^
psp-gcc -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -D_PSP_FW_VERSION=661   -c -o psp/imageio.o psp/imageio.c
psp-gcc -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -D_PSP_FW_VERSION=661   -c -o psp/img_jpeg.o psp/img_jpeg.c
psp-gcc -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -D_PSP_FW_VERSION=661   -c -o psp/math.o psp/math.c
psp-gcc -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -D_PSP_FW_VERSION=661   -c -o psp/menu.o psp/menu.c
psp/menu.c: In function 'show_debugmenu':
psp/menu.c:660:24: warning: variable 'y' set but not used [-Wunused-but-set-variable]
  660 |         int rows=28,x, y, h, i,j,top=0;
      |                        ^
psp/menu.c:660:21: warning: variable 'x' set but not used [-Wunused-but-set-variable]
  660 |         int rows=28,x, y, h, i,j,top=0;
      |                     ^
psp/menu.c:658:23: warning: unused variable 'color' [-Wunused-variable]
  658 |         unsigned long color=RGB_WHITE;
      |                       ^~~~~
psp/menu.c: In function 'show_inputsmenu':
psp/menu.c:910:24: warning: variable 'y' set but not used [-Wunused-but-set-variable]
  910 |         int rows=28,x, y, h, i,j,top=0;
      |                        ^
psp/menu.c:910:21: warning: variable 'x' set but not used [-Wunused-but-set-variable]
  910 |         int rows=28,x, y, h, i,j,top=0;
      |                     ^
psp/menu.c:908:23: warning: unused variable 'color' [-Wunused-variable]
  908 |         unsigned long color=RGB_WHITE;
      |                       ^~~~~
psp/menu.c: In function 'menu_startmusic':
psp/menu.c:1499:22: warning: 'strncpy' output may be truncated copying 33 bytes from a string of length 255 [-Wstringop-truncation]
 1499 |                 else strncpy(menu_music_gametitle,str_tmp,33);
      |                      ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
psp/menu.c: In function 'menu_viewfile':
psp/menu.c:432:9: warning: 'strncpy' output may be truncated copying 255 bytes from a string of length 255 [-Wstringop-truncation]
  432 |         strncpy(lastpath_save,LastPath,255);
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
psp/menu.c:433:9: warning: 'strncpy' output may be truncated copying 255 bytes from a string of length 255 [-Wstringop-truncation]
  433 |         strncpy(LastPath,os9x_viewfile_path,255);
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
psp/menu.c:566:33: warning: 'strncpy' output may be truncated copying 255 bytes from a string of length 255 [-Wstringop-truncation]
  566 |                                 strncpy(os9x_viewfile_path,LastPath,255);
      |                                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
psp/menu.c:583:9: warning: 'strncpy' output may be truncated copying 255 bytes from a string of length 255 [-Wstringop-truncation]
  583 |         strncpy(LastPath,lastpath_save,255);
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In function 'menu_startmusic',
    inlined from 'menu_drawFrame' at psp/menu.c:4149:23,
    inlined from 'menu_basic' at psp/menu.c:1582:2,
    inlined from 'menu_selcode' at psp/menu.c:3424:3:
psp/menu.c:1499:22: warning: 'strncpy' output may be truncated copying 33 bytes from a string of length 255 [-Wstringop-truncation]
 1499 |                 else strncpy(menu_music_gametitle,str_tmp,33);
      |                      ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In function 'menu_startmusic',
    inlined from 'menu_basic' at psp/menu.c:1668:5,
    inlined from 'menu_basic' at psp/menu.c:1556:13,
    inlined from 'menu_selcode' at psp/menu.c:3424:3:
psp/menu.c:1499:22: warning: 'strncpy' output may be truncated copying 33 bytes from a string of length 255 [-Wstringop-truncation]
 1499 |                 else strncpy(menu_music_gametitle,str_tmp,33);
      |                      ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In function 'menu_startmusic',
    inlined from 'menu_basic' at psp/menu.c:1668:5,
    inlined from 'menu_basic' at psp/menu.c:1556:13,
    inlined from 'menu_deletestate.part.0' at psp/menu.c:2981:3:
psp/menu.c:1499:22: warning: 'strncpy' output may be truncated copying 33 bytes from a string of length 255 [-Wstringop-truncation]
 1499 |                 else strncpy(menu_music_gametitle,str_tmp,33);
      |                      ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In function 'menu_startmusic',
    inlined from 'menu_credits' at psp/menu.c:3624:6,
    inlined from 'menu_credits' at psp/menu.c:3564:12:
psp/menu.c:1499:22: warning: 'strncpy' output may be truncated copying 33 bytes from a string of length 255 [-Wstringop-truncation]
 1499 |                 else strncpy(menu_music_gametitle,str_tmp,33);
      |                      ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
In function 'menu_startmusic',
    inlined from 'menu_basic' at psp/menu.c:1668:5,
    inlined from 'menu_basic' at psp/menu.c:1556:13,
    inlined from 'root_menu' at psp/menu.c:4384:3:
psp/menu.c:1499:22: warning: 'strncpy' output may be truncated copying 33 bytes from a string of length 255 [-Wstringop-truncation]
 1499 |                 else strncpy(menu_music_gametitle,str_tmp,33);
      |                      ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
psp-gcc -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -D_PSP_FW_VERSION=661   -c -o psp/menu_fx.o psp/menu_fx.c
psp-gcc -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -D_PSP_FW_VERSION=661   -c -o psp/me/mem64.o psp/me/mem64.c
psp-g++ -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -fno-exceptions -fno-rtti -fpermissive -Wno-register -D_PSP_FW_VERSION=661   -c -o psp/psp.o psp/psp.cpp
cc1plus: warning: command-line option '-Wno-incompatible-pointer-types' is valid for C/ObjC but not for C++
psp/psp.cpp:423:9: warning: 'timercmp' redefined
  423 | #define timercmp(a, b, CMP)     (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
      |         ^~~~~~~~
In file included from /usr/local/pspdev/psp/sdk/include/psputils.h:17,
                 from /usr/local/pspdev/psp/sdk/include/pspuser.h:25,
                 from ./psp/psp.h:102,
                 from ./port.h:128,
                 from ./snes9x.h:46,
                 from psp/psp.cpp:94:
/usr/local/pspdev/psp/include/sys/time.h:375:9: note: this is the location of the previous definition
  375 | #define timercmp(tvp, uvp, cmp)                                 \
      |         ^~~~~~~~
psp/psp.cpp:210:12: warning: 'int net_waitpause_state(int)' declared 'static' but never defined [-Wunused-function]
  210 | static int net_waitpause_state(int show_menu);
      |            ^~~~~~~~~~~~~~~~~~~
psp/psp.cpp:212:13: warning: 'void net_receive_settings()' declared 'static' but never defined [-Wunused-function]
  212 | static void net_receive_settings();
      |             ^~~~~~~~~~~~~~~~~~~~
psp/psp.cpp: In function 'int user_main(SceSize, void*)':
psp/psp.cpp:4042:24: warning: 'char* strncat(char*, const char*, size_t)' output may be truncated copying between 0 and 255 bytes from a string of length 255 [-Wstringop-truncation]
 4042 |                 strncat(rom_filename, lastRom, 255 - strlen(romPath));
      |                 ~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
psp-gcc -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -D_PSP_FW_VERSION=661   -c -o psp/psp_ui.o psp/psp_ui.c
psp/psp_ui.c: In function 'InputCodeBox':
psp/psp_ui.c:393:41: warning: 'sprintf' argument 3 overlaps destination object 'msgCodeBox' [-Wrestrict]
  393 |                                         sprintf(msgCodeBox,"%s%c",msgCodeBox,fmt[i]);
      |                                         ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
psp/psp_ui.c:327:13: note: destination object referenced by 'restrict'-qualified argument 1 was declared here
  327 | static char msgCodeBox[2048];
      |             ^~~~~~~~~~
psp/psp_ui.c:403:41: warning: 'sprintf' argument 3 overlaps destination object 'msgCodeBox' [-Wrestrict]
  403 |                                         sprintf(msgCodeBox,"%s%c",msgCodeBox,fmt[i]);
      |                                         ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
psp/psp_ui.c:327:13: note: destination object referenced by 'restrict'-qualified argument 1 was declared here
  327 | static char msgCodeBox[2048];
      |             ^~~~~~~~~~
psp/psp_ui.c:398:41: warning: 'sprintf' argument 3 overlaps destination object 'msgCodeBox' [-Wrestrict]
  398 |                                         sprintf(msgCodeBox,"%s%c",msgCodeBox,newCode[j]);
      |                                         ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
psp/psp_ui.c:327:13: note: destination object referenced by 'restrict'-qualified argument 1 was declared here
  327 | static char msgCodeBox[2048];
      |             ^~~~~~~~~~
psp/psp_ui.c:410:17: warning: 'sprintf' argument 3 overlaps destination object 'msgCodeBox' [-Wrestrict]
  410 |                 sprintf(msgCodeBox,"%s\n%s\n",msgCodeBox,tmpstr);
      |                 ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
psp/psp_ui.c:327:13: note: destination object referenced by 'restrict'-qualified argument 1 was declared here
  327 | static char msgCodeBox[2048];
      |             ^~~~~~~~~~
psp-gcc -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -D_PSP_FW_VERSION=661   -c -o psp/psplib.o psp/psplib.c
psp/psplib.c:9:9: warning: 'PATH_MAX' redefined
    9 | #define PATH_MAX 256
      |         ^~~~~~~~
In file included from /usr/local/pspdev/psp/include/limits.h:6,
                 from /usr/local/pspdev/lib/gcc/psp/15.1.1/include/limits.h:210,
                 from /usr/local/pspdev/lib/gcc/psp/15.1.1/include/syslimits.h:9,
                 from /usr/local/pspdev/lib/gcc/psp/15.1.1/include/limits.h:34,
                 from /usr/local/pspdev/psp/include/bits/posix_opt.h:4,
                 from /usr/local/pspdev/psp/include/sys/_pthreadtypes.h:21,
                 from /usr/local/pspdev/psp/include/sys/types.h:221,
                 from /usr/local/pspdev/psp/include/sys/time.h:45,
                 from /usr/local/pspdev/psp/sdk/include/psputils.h:17,
                 from /usr/local/pspdev/psp/sdk/include/pspuser.h:25,
                 from psp/psp.h:102,
                 from psp/psplib.c:7:
/usr/local/pspdev/psp/include/sys/syslimits.h:48:9: note: this is the location of the previous definition
   48 | #define PATH_MAX                 1024   /* max bytes in pathname */
      |         ^~~~~~~~
psp-gcc -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -D_PSP_FW_VERSION=661   -c -o psp/pg.o psp/pg.c
psp/pg.c:38:9: warning: 'timercmp' redefined
   38 | #define timercmp(a, b, CMP)     (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
      |         ^~~~~~~~
In file included from /usr/local/pspdev/psp/sdk/include/psputils.h:17,
                 from /usr/local/pspdev/psp/sdk/include/pspuser.h:25,
                 from psp/psp.h:102,
                 from psp/pg.c:4:
/usr/local/pspdev/psp/include/sys/time.h:375:9: note: this is the location of the previous definition
  375 | #define timercmp(tvp, uvp, cmp)                                 \
      |         ^~~~~~~~
psp/pg.c: In function 'image_put_mul':
psp/pg.c:1341:17: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
 1341 |                 if (r<0) r=0;if (r>255) r=255;
      |                 ^~
psp/pg.c:1341:30: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
 1341 |                 if (r<0) r=0;if (r>255) r=255;
      |                              ^~
psp/pg.c:1342:17: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
 1342 |                 if (g<0) g=0;if (g>255) g=255;
      |                 ^~
psp/pg.c:1342:30: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
 1342 |                 if (g<0) g=0;if (g>255) g=255;
      |                              ^~
psp/pg.c:1343:17: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
 1343 |                 if (b<0) b=0;if (b>255) b=255;
      |                 ^~
psp/pg.c:1343:30: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
 1343 |                 if (b<0) b=0;if (b>255) b=255;
      |                              ^~
psp/pg.c:1363:33: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
 1363 |                                 if (r<0) r=0;if (r>255) r=255;
      |                                 ^~
psp/pg.c:1363:46: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
 1363 |                                 if (r<0) r=0;if (r>255) r=255;
      |                                              ^~
psp/pg.c:1364:33: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
 1364 |                                 if (g<0) g=0;if (g>255) g=255;
      |                                 ^~
psp/pg.c:1364:46: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
 1364 |                                 if (g<0) g=0;if (g>255) g=255;
      |                                              ^~
psp/pg.c:1365:33: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
 1365 |                                 if (b<0) b=0;if (b>255) b=255;
      |                                 ^~
psp/pg.c:1365:46: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
 1365 |                                 if (b<0) b=0;if (b>255) b=255;
      |                                              ^~
psp/pg.c:1381:33: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
 1381 |                                 if (r<0) r=0;if (r>255) r=255;
      |                                 ^~
psp/pg.c:1381:46: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
 1381 |                                 if (r<0) r=0;if (r>255) r=255;
      |                                              ^~
psp/pg.c:1382:33: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
 1382 |                                 if (g<0) g=0;if (g>255) g=255;
      |                                 ^~
psp/pg.c:1382:46: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
 1382 |                                 if (g<0) g=0;if (g>255) g=255;
      |                                              ^~
psp/pg.c:1383:33: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
 1383 |                                 if (b<0) b=0;if (b>255) b=255;
      |                                 ^~
psp/pg.c:1383:46: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
 1383 |                                 if (b<0) b=0;if (b>255) b=255;
      |                                              ^~
psp/pg.c: In function 'image_put_light':
psp/pg.c:1417:41: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
 1417 |                                         if (r<0) r=0;if (r>255) r=255;
      |                                         ^~
psp/pg.c:1417:54: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
 1417 |                                         if (r<0) r=0;if (r>255) r=255;
      |                                                      ^~
psp/pg.c:1418:41: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
 1418 |                                         if (g<0) g=0;if (g>255) g=255;
      |                                         ^~
psp/pg.c:1418:54: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
 1418 |                                         if (g<0) g=0;if (g>255) g=255;
      |                                                      ^~
psp/pg.c:1419:41: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
 1419 |                                         if (b<0) b=0;if (b>255) b=255;
      |                                         ^~
psp/pg.c:1419:54: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
 1419 |                                         if (b<0) b=0;if (b>255) b=255;
      |                                                      ^~
psp/pg.c: In function 'image_put':
psp/pg.c:1526:41: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
 1526 |                                         if (r<0) r=0;if (r>255) r=255;
      |                                         ^~
psp/pg.c:1526:54: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
 1526 |                                         if (r<0) r=0;if (r>255) r=255;
      |                                                      ^~
psp/pg.c:1527:41: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
 1527 |                                         if (g<0) g=0;if (g>255) g=255;
      |                                         ^~
psp/pg.c:1527:54: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
 1527 |                                         if (g<0) g=0;if (g>255) g=255;
      |                                                      ^~
psp/pg.c:1528:41: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
 1528 |                                         if (b<0) b=0;if (b>255) b=255;
      |                                         ^~
psp/pg.c:1528:54: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the 'if'
 1528 |                                         if (b<0) b=0;if (b>255) b=255;
      |                                                      ^~
psp-gcc -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -D_PSP_FW_VERSION=661   -c -o psp/psp_msg.o psp/psp_msg.c
In file included from psp/psp_msg.c:9:
psp/lang/ja.c:5:224: warning: unknown escape sequence: '\346'
    5 |                 [ERR_READ_MEMSTICK] = "<U+30E1><U+30E2><U+30EA><U+30FC><U+30B9><U+30C6><U+30A3><U+30C3><U+30AF><U+306E><U+8AAD><U+307F><U+8FBC><U+307F><U+3067><U+30A8><U+30E9><U+30FC><U+304C><U+767A><U+751F><U+3057><U+307E><U+3057><U+305F><U+3002>\n<U+30E1><U+30E2><U+30EA><U+30FC><U+30B9><U+30C6><U+30A3><U+30C3><U+30AF><U+3092><U+78BA><U+8A8D><U+3057><U+3066><U+304F><U+3060><U+3055><U+3044><U+3002>\n(PC<U+306E><U+30AB><U+30FC><U+30C9><U+30EA><U+30FC><U+30C0><U+30FC><U+3092><U+4F7F><U+3063><U+3066><U+304F><U+3060><U+3055><U+3044>)\n<U+30E1><U+30E2><U+30EA><U+30FC><U+30B9><U+30C6><U+30A3><U+30C3><U+30AF><U+304C><U+7834><U+640D><U+3057><U+3066><U+3044><U+308B><U+53EF><U+80FD>\<U+6027><U+304C><U+3042><U+308A><U+307E><U+3059><U+3002>",
      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    ^
psp/lang/ja.c:32:181: warning: unknown escape sequence: '\345'
   32 |                 [FILER_STATUS_CANEXIT1] = "%s <U+5B9F><U+884C> " SJIS_SQUARE " <U+6A19><U+6E96><U+8A2D><U+5B9A><U+3067><U+5B9F><U+884C>  " SJIS_STAR "  %s <U+30B2><U+30FC><U+30E0><U+306B><U+623B><U+308B>  "  SJIS_STAR "  " SJIS_TRIANGLE " %s  "  SJIS_STAR "  <U+5341>\<U+5B57> <U+79FB><U+52D5>",
      |                                                                                                                                                                                                                                                                                                       ^
psp/lang/ja.c:116:79: warning: unknown escape sequence: '\343'
  116 |                 [MENU_STATE_NOSTATE] = "<U+4F7F><U+7528><U+53EF><U+80FD>\<U+306A><U+30B9><U+30C6><U+30FC><U+30C8><U+30BB><U+30FC><U+30D6><U+304C><U+3042><U+308A><U+307E><U+305B><U+3093>",
      |                                                                                                                                                                                           ^
psp/lang/ja.c:119:163: warning: unknown escape sequence: '\346'
  119 |                 [MENU_STATE_WARNING_LOWBAT] = "<U+96FB><U+6C60><U+6B8B><U+91CF><U+304C><U+4F4E><U+4E0B><U+3057><U+3066><U+3044><U+307E><U+3059><U+3002>\n<U+30BB><U+30FC><U+30D6><U+4E2D><U+306B><U+96FB><U+6E90><U+304C><U+5207><U+308C><U+308B><U+3068><U+30E1><U+30E2><U+30EA><U+30FC><U+30B9><U+30C6><U+30A3><U+30C3><U+30AF><U+304C><U+7834><U+640D><U+3059><U+308B><U+53EF><U+80FD>\<U+6027><U+304C><U+3042><U+308A><U+307E><U+3059><U+3002>\n<U+7D9A><U+884C><U+3057><U+307E><U+3059><U+304B>?",
      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ^
psp/lang/ja.c:175:54: warning: unknown escape sequence: '\345'
  175 |                         SJIS_TRIANGLE " <U+30AD><U+30E3><U+30F3><U+30BB><U+30EB>\n",
      |                                                                                    ^
psp/lang/ja.c:175:54: warning: unknown escape sequence: '\345'
psp/lang/ja.c:175:54: warning: unknown escape sequence: '\345'
psp/lang/ja.c:175:54: warning: unknown escape sequence: '\345'
psp/lang/ja.c:175:54: warning: unknown escape sequence: '\345'
psp/lang/ja.c:204:112: warning: unknown escape sequence: '\347'
  204 |                 [MENU_ICONS_VIDEO_FSKIP_HELP] = "<U+8868>\<U+793A><U+3055><U+308C><U+306A><U+3044><U+30B9><U+30D7><U+30E9><U+30A4><U+30C8><U+304C><U+3042><U+308B>\n<U+5834><U+5408><U+306F><U+56FA><U+5B9A><U+5024><U+3092><U+9078><U+3093><U+3067><U+304F><U+3060><U+3055><U+3044><U+3002>",
      |                                                                                                                                                                                                                                                                                              ^
psp/lang/ja.c:215:56: warning: unknown escape sequence: '\347'
  215 |                 [MENU_ICONS_VIDEO_SHOWFPS] = "FPS<U+8868>\<U+793A>",
      |                                                                    ^
psp/lang/ja.c:216:138: warning: unknown escape sequence: '\347'
  216 |                 [MENU_ICONS_VIDEO_SHOWFPS_HELP] = "1<U+884C><U+76EE><U+306F><U+30A8><U+30DF><U+30E5><U+30EC><U+30FC><U+30C8><U+3055><U+308C><U+308B>\n<U+30D5><U+30EC><U+30FC><U+30E0><U+6570><U+3092><U+8868>\<U+793A><U+3057><U+307E><U+3059><U+3002>\n2<U+884C><U+76EE><U+306F><U+672C><U+5F53><U+306E>FPS<U+3092><U+8868>\<U+793A><U+3057><U+307E><U+3059><U+3002>",
      |                                                                                                                                                                                                                                                                                                                                                                        ^
psp/lang/ja.c:216:138: warning: unknown escape sequence: '\347'
psp/lang/ja.c:222:61: warning: unknown escape sequence: '\347'
  222 |                 [MENU_VIDEO_MODE_FULLSCREEN] = "<U+5168><U+753B><U+9762><U+8868>\<U+793A>",
      |                                                                                           ^
psp/lang/ja.c:223:85: warning: unknown escape sequence: '\347'
  223 |                 [MENU_VIDEO_MODE_FULLSCREEN_CLIPPED] = "<U+4E00><U+90E8><U+3092><U+5207><U+308A><U+53D6><U+3063><U+3066><U+5168><U+753B><U+9762><U+8868>\<U+793A>",
      |                                                                                                                                                                   ^
psp/lang/ja.c:224:75: warning: unknown escape sequence: '\343'
  224 |                 [MENU_VIDEO_ENGINE_APPROX] = "<U+307B><U+307C><U+6B63><U+78BA><U+306A><U+30BD>\<U+30D5><U+30C8><U+30A6><U+30A7><U+30A2><U+63CF><U+753B>",
      |                                                                                                                                                         ^
psp/lang/ja.c:225:70: warning: unknown escape sequence: '\343'
  225 |                 [MENU_VIDEO_ENGINE_ACCUR] = "<U+6B63><U+78BA><U+306A><U+30BD>\<U+30D5><U+30C8><U+30A6><U+30A7><U+30A2><U+63CF><U+753B>",
      |                                                                                                                                        ^
psp/lang/ja.c:234:177: warning: unknown escape sequence: '\345'
  234 |                 [MENU_STATUS_VIDEO_SCRCALIB] = "<U+5341>\<U+5B57><U+30DC><U+30BF><U+30F3> : <U+753B><U+9762><U+4F4D><U+7F6E> " SJIS_STAR " <U+30A2><U+30CA><U+30ED><U+30B0><U+30B9><U+30C6><U+30A3><U+30C3><U+30AF> : <U+753B><U+9762><U+30B5><U+30A4><U+30BA> " SJIS_STAR " " SJIS_TRIANGLE " <U+6A19><U+6E96> " SJIS_STAR " %s <U+7D42><U+4E86>",
      |                                                                                                                                                                                                                                                                                                                                                   ^
psp/lang/ja.c:248:63: warning: unknown escape sequence: '\347'
  248 |                 [MENU_ICONS_MISC_FILEVIEWER] = "<U+30D5><U+30A1><U+30A4><U+30EB><U+8868>\<U+793A>",
      |                                                                                                   ^
psp/lang/ja.c:257:89: warning: unknown escape sequence: '\347'
  257 |                 [MENU_ICONS_MISC_SWAPBG_HELP] = "DATA/logo.zip<U+304B><U+3089>\n<U+80CC><U+666F><U+3092><U+8868>\<U+793A><U+3057><U+307E><U+3059><U+3002>",
      |                                                                                                                                                           ^
psp/lang/ja.c:310:59: warning: unknown escape sequence: '\343'
  310 |                 [MENU_ICONS_ABOUT] = "<U+3053><U+306E><U+30BD>\<U+30D5><U+30C8><U+306B><U+3064><U+3044><U+3066>",
      |                                                                                                                 ^
psp/lang/ja.c:353:83: warning: unknown escape sequence: '\343'
  353 |                 [VIDEO_ENGINE_APPROX] = "<U+5358><U+4E00><U+30E2><U+30FC><U+30C9> : <U+307B><U+307C><U+6B63><U+78BA><U+306A><U+30BD>\<U+30D5><U+30C8><U+30A6><U+30A7><U+30A2><U+63CF><U+753B>",
      |                                                                                                                                                                                               ^
psp/lang/ja.c:354:78: warning: unknown escape sequence: '\343'
  354 |                 [VIDEO_ENGINE_ACCUR] = "<U+5358><U+4E00><U+30E2><U+30FC><U+30C9> : <U+6B63><U+78BA><U+306A><U+30BD>\<U+30D5><U+30C8><U+30A6><U+30A7><U+30A2><U+63CF><U+753B>",
      |                                                                                                                                                                              ^
psp/lang/ja.c:356:104: warning: unknown escape sequence: '\343'
  356 |                 [VIDEO_ENGINE_ACCEL_ACCUR] = "<U+8907><U+5408><U+30E2><U+30FC><U+30C9> : PSP<U+30A2><U+30AF><U+30BB><U+30E9><U+30EC><U+30FC><U+30BF> + <U+6B63><U+78BA><U+306A><U+30BD>\<U+30D5><U+30C8><U+30A6><U+30A7><U+30A2><U+63CF><U+753B>",
      |                                                                                                                                                                                                                                                  ^
psp/lang/ja.c:357:109: warning: unknown escape sequence: '\343'
  357 |                 [VIDEO_ENGINE_ACCEL_APPROX] = "<U+8907><U+5408><U+30E2><U+30FC><U+30C9> : PSP<U+30A2><U+30AF><U+30BB><U+30E9><U+30EC><U+30FC><U+30BF> + <U+307B><U+307C><U+6B63><U+78BA><U+306A><U+30BD>\<U+30D5><U+30C8><U+30A6><U+30A7><U+30A2><U+63CF><U+753B>",
      |                                                                                                                                                                                                                                                                   ^
psp/lang/ja.c:375:163: warning: unknown escape sequence: '\346'
  375 |                 [SETTINGS_NOTCOMPLETE] = "<U+203B><U+8A2D><U+5B9A><U+30D5><U+30A1><U+30A4><U+30EB><U+304C><U+5B8C><U+5168><U+3067><U+306F><U+3042><U+308A><U+307E><U+305B><U+3093><U+203B>\n\n<U+4EE5><U+524D><U+306E><U+30D0><U+30FC><U+30B8><U+30E7><U+30F3><U+306E><U+3082><U+306E><U+306E><U+53EF><U+80FD>\<U+6027><U+304C><U+3042><U+308A><U+307E><U+3059><U+3002>\n\n<U+65B0><U+3057><U+3044><U+8A2D><U+5B9A><U+304C><U+6A19><U+6E96><U+5024><U+3067><U+8A2D><U+5B9A><U+3055><U+308C><U+307E><U+3059><U+3002>",
      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     ^
In file included from psp/psp_msg.c:10:
psp/lang/ch.c:174:48: warning: unknown escape sequence: '\345'
  174 |                         SJIS_TRIANGLE " <U+53D6><U+6D88>\n",
      |                                                            ^
psp/lang/ch.c:174:48: warning: unknown escape sequence: '\345'
psp/lang/ch.c:174:48: warning: unknown escape sequence: '\345'
psp/lang/ch.c:174:48: warning: unknown escape sequence: '\345'
psp/lang/ch.c:174:48: warning: unknown escape sequence: '\345'
psp/lang/ch.c:233:163: warning: unknown escape sequence: '\345'
  233 |                 [MENU_STATUS_VIDEO_SCRCALIB] = "<U+5341>\<U+5B57><U+9375> : <U+756B><U+9762><U+4F4D><U+7F6E>  " SJIS_STAR "  <U+6416><U+6746> : <U+756B><U+9762><U+5C3A><U+5BF8>  " SJIS_STAR "  " SJIS_TRIANGLE " <U+9ED8><U+8A8D>  " SJIS_STAR "  %s <U+9000><U+51FA>",
      |                                                                                                                                                                                                                                                                         ^
psp-gcc -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -D_PSP_FW_VERSION=661   -c -o psp/psp_favorites.o psp/psp_favorites.c
psp/psp_favorites.c: In function 'fav_init':
psp/psp_favorites.c:69:9: warning: 'strncpy' output may be truncated copying 255 bytes from a string of length 255 [-Wstringop-truncation]
   69 |         strncpy(s_favorites[s_fav_count], line, FAV_PATH_MAX - 1);
      |         ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
psp-g++ -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -fno-exceptions -fno-rtti -fpermissive -Wno-register -D_PSP_FW_VERSION=661   -c -o apu.o apu.cpp
cc1plus: warning: command-line option '-Wno-incompatible-pointer-types' is valid for C/ObjC but not for C++
psp-g++ -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -Ipsp -Ipsp/me -Ipsp/openspc++ -Ipsp/adhoc -Idanzeff -Ipsp/mediaengineprx -Ipsp/homehookprx -I. -I/usr/local/pspdev/psp/include -I/usr/local/pspdev/psp/sdk/include -march=allegrex -O2 -G0 -Wall -pipe -fsingle-precision-constant -fpredictive-commoning -ffunction-sections -frename-registers -fno-gcse -finline-functions -finline-limit=20000 -falign-functions=64 -falign-loops=64 -fno-align-jumps -fno-align-labels -Wno-incompatible-pointer-types -Wno-format -Wno-array-bounds -DFW3X -DPSP -D__PSP__ -DEMUNAME_VERSION="\"Snes9xTYLme\"" -DPROJECT_NAME="\"Snes9xTYL\"" -DPROJECT_VERSION="\"1.9.01\"" -DME_SOUND -DHOME_HOOK -DNOKERNEL -fno-exceptions -fno-rtti -fpermissive -Wno-register -D_PSP_FW_VERSION=661   -c -o apudebug.o apudebug.cpp
cc1plus: warning: command-line option '-Wno-incompatible-pointer-types' is valid for C/ObjC but not for C++
In file included from apudebug.cpp:94:
cpuexec.h:104:6: error: conflicting declaration of 'void S9xClearIRQ(u32)' with 'C' linkage
  104 | void S9xClearIRQ (uint32);
      |      ^~~~~~~~~~~
In file included from memmap.h:264,
                 from ppu.h:364,
                 from cpuexec.h:43:
getset.h:110:6: note: previous declaration with 'C++' linkage
  110 | void S9xClearIRQ (uint32 source);
      |      ^~~~~~~~~~~
cpuexec.h:105:6: error: conflicting declaration of 'void S9xSetIRQ(u32)' with 'C' linkage
  105 | void S9xSetIRQ (uint32);
      |      ^~~~~~~~~
getset.h:109:6: note: previous declaration with 'C++' linkage
  109 | void S9xSetIRQ (uint32 source);
      |      ^~~~~~~~~
make[1]: *** [<builtin>: apudebug.o] Error 1
make[1]: Leaving directory '/__w/snes9xTYL/snes9xTYL'
make: *** [makefile:8: mehome] Error 2
Error: Process completed with exit code 2.
