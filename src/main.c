//all of this was made possible by the great videos by Pigsy's Retro Game Dev Tutorials 
// if you need any further detail on this I'd recommend checking out his video here - https://youtu.be/y69ZSqxbCoo?si=FE8HBZWZ1hZ36xhd

#include <genesis.h>
#include <resources.h>

//Give each sample a unique number by defining it with a value between 1-255

 #define ODXrim 1
 #define ODXshaker 2
 #define ODXclap 3
 #define ODXsnare 4
 #define ODXkick 5
 #define ODXchh 6
 #define ODXohh 7
 #define ODXtomh 8
 #define ODXtomm 9
 #define ODXtoml 10
 #define ODXride 11
 #define ODXcrash 12

//Setup the gamepad function

static void joyEvent(u16 joy, u16 changed, u16 state);

int main()
{

	//Give each of these the name we defined above, the name of the sample in resources.res and the size of the file (also the sample name)

		XGM_setPCM(ODXrim, odx_rim, sizeof(odx_rim));
		XGM_setPCM(ODXshaker, odx_shaker, sizeof(odx_shaker));
		XGM_setPCM(ODXclap, odx_clap, sizeof(odx_clap));
		XGM_setPCM(ODXsnare, odx_snare, sizeof(odx_snare));
		XGM_setPCM(ODXkick, odx_kick, sizeof(odx_kick));
		XGM_setPCM(ODXchh, odx_chh, sizeof(odx_chh));
		XGM_setPCM(ODXohh, odx_ohh, sizeof(odx_ohh));
		XGM_setPCM(ODXtomh, odx_tomh, sizeof(odx_tomh));
		XGM_setPCM(ODXtomm, odx_tomm, sizeof(odx_tomm));
		XGM_setPCM(ODXtoml, odx_toml, sizeof(odx_toml));
		XGM_setPCM(ODXride, odx_ride, sizeof(odx_ride));
		XGM_setPCM(ODXcrash, odx_crash, sizeof(odx_crash));
	
		//Call the gamepad function

		JOY_setEventHandler(joyEvent);


	while(1)
    {

				SYS_doVBlankProcess();

    }
    return (0);
}


static void joyEvent(u16 joy, u16 changed, u16 state){

	//Each if statement correlates to the Megadrive/Genesis gamepad controller button of the same name
	//XGM_startPlayPCM will call a sample every time you press that button
	//XGM_startPlayPCM(defined sample at the top, priority between 0-15 (15 being the highest), SOUND_PCM_CH(1-4))
	//-Samples on different channels can be played at the same time

	//the VDP lines create text,that correlates with the instrument. Each palette is a different colour


		if (changed & state & BUTTON_A){
			XGM_startPlayPCM(ODXrim, 15, SOUND_PCM_CH3);
			VDP_setTextPalette(PAL2);
			VDP_drawText("RIM", 17, 13);
	}

		if (changed & state & BUTTON_B){
		XGM_startPlayPCM(ODXshaker, 15, SOUND_PCM_CH4);
		VDP_setTextPalette(PAL1);
		VDP_drawText("SHAKER", 17, 13);
	}

		if (changed & state & BUTTON_C){
		XGM_startPlayPCM(ODXclap, 15, SOUND_PCM_CH3);
		VDP_setTextPalette(PAL2);
		VDP_drawText("CLAP", 17, 13);
	}

		if (changed & state & BUTTON_DOWN){
		XGM_startPlayPCM(ODXsnare, 15, SOUND_PCM_CH3);
		VDP_setTextPalette(PAL0);
		VDP_drawText("SNARE", 17, 13);
	}

		if (changed & state & BUTTON_LEFT){
		XGM_startPlayPCM(ODXkick, 15, SOUND_PCM_CH2);
		VDP_setTextPalette(PAL0);
		VDP_drawText("KICK", 17, 13);
	}

		if (changed & state & BUTTON_UP){
		XGM_startPlayPCM(ODXchh, 15, SOUND_PCM_CH4);
		VDP_setTextPalette(PAL1);
		VDP_drawText("CLOSED HAT", 17, 13);
	}

		if (changed & state & BUTTON_RIGHT){
		XGM_startPlayPCM(ODXohh, 15, SOUND_PCM_CH4);
		VDP_setTextPalette(PAL1);
		VDP_drawText("OPEN HAT", 17, 13);
	}

		if (changed & state & BUTTON_START){
		XGM_startPlayPCM(ODXtomh, 15, SOUND_PCM_CH1);
		VDP_setTextPalette(PAL2);
		VDP_drawText("HIGH TOM", 17, 13);
	}

		if (changed & state & BUTTON_MODE){
		XGM_startPlayPCM(ODXtomm, 15, SOUND_PCM_CH1);
		VDP_setTextPalette(PAL2);
		VDP_drawText("MID TOM", 17, 13);
	}

		if (changed & state & BUTTON_X){
		XGM_startPlayPCM(ODXtoml, 15, SOUND_PCM_CH1);
		VDP_setTextPalette(PAL2);
		VDP_drawText("LOW TOM", 17, 13);
	}

		if (changed & state & BUTTON_Y){
		XGM_startPlayPCM(ODXride, 15, SOUND_PCM_CH4);
		VDP_setTextPalette(PAL1);
		VDP_drawText("RIDE", 17, 13);
	}

		if (changed & state & BUTTON_Z){
		XGM_startPlayPCM(ODXcrash, 15, SOUND_PCM_CH4);
		VDP_setTextPalette(PAL1);
		VDP_drawText("CRASH", 17, 13);
	}

	
	if (!(changed & state & BUTTON_ALL)){
		VDP_clearTextLine(13);
	}

}