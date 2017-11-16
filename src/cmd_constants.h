

enum atm_immediate_cmd_constants {

	ATM_CMD_I_NOTE_OFF = 0,

	ATM_CMD_I_NOTE_C2,
	ATM_CMD_I_NOTE_C2_,
	ATM_CMD_I_NOTE_D2,
	ATM_CMD_I_NOTE_D2_,
	ATM_CMD_I_NOTE_E2,
	ATM_CMD_I_NOTE_F2,
	ATM_CMD_I_NOTE_F2_,
	ATM_CMD_I_NOTE_G2,
	ATM_CMD_I_NOTE_G2_,
	ATM_CMD_I_NOTE_A2,
	ATM_CMD_I_NOTE_A2_,
	ATM_CMD_I_NOTE_B2,

	ATM_CMD_I_NOTE_C3,
	ATM_CMD_I_NOTE_C3_,
	ATM_CMD_I_NOTE_D3,
	ATM_CMD_I_NOTE_D3_,
	ATM_CMD_I_NOTE_E3,
	ATM_CMD_I_NOTE_F3,
	ATM_CMD_I_NOTE_F3_,
	ATM_CMD_I_NOTE_G3,
	ATM_CMD_I_NOTE_G3_,
	ATM_CMD_I_NOTE_A3,
	ATM_CMD_I_NOTE_A3_,
	ATM_CMD_I_NOTE_B3,

	ATM_CMD_I_NOTE_C4,
	ATM_CMD_I_NOTE_C4_,
	ATM_CMD_I_NOTE_D4,
	ATM_CMD_I_NOTE_D4_,
	ATM_CMD_I_NOTE_E4,
	ATM_CMD_I_NOTE_F4,
	ATM_CMD_I_NOTE_F4_,
	ATM_CMD_I_NOTE_G4,
	ATM_CMD_I_NOTE_G4_,
	ATM_CMD_I_NOTE_A4,
	ATM_CMD_I_NOTE_A4_,
	ATM_CMD_I_NOTE_B4,

	ATM_CMD_I_NOTE_C5,
	ATM_CMD_I_NOTE_C5_,
	ATM_CMD_I_NOTE_D5,
	ATM_CMD_I_NOTE_D5_,
	ATM_CMD_I_NOTE_E5,
	ATM_CMD_I_NOTE_F5,
	ATM_CMD_I_NOTE_F5_,
	ATM_CMD_I_NOTE_G5,
	ATM_CMD_I_NOTE_G5_,
	ATM_CMD_I_NOTE_A5,
	ATM_CMD_I_NOTE_A5_,
	ATM_CMD_I_NOTE_B5,

	ATM_CMD_I_NOTE_C6,
	ATM_CMD_I_NOTE_C6_,
	ATM_CMD_I_NOTE_D6,
	ATM_CMD_I_NOTE_D6_,
	ATM_CMD_I_NOTE_E6,
	ATM_CMD_I_NOTE_F6,
	ATM_CMD_I_NOTE_F6_,
	ATM_CMD_I_NOTE_G6,
	ATM_CMD_I_NOTE_G6_,
	ATM_CMD_I_NOTE_A6,
	ATM_CMD_I_NOTE_A6_,
	ATM_CMD_I_NOTE_B6,

	ATM_CMD_I_NOTE_C7,
	ATM_CMD_I_NOTE_C7_,
	ATM_CMD_I_NOTE_D7,

	/* Use as ATM_CMD_I_DELAY_1_TICK+[num-ticks] e.g. ATM_CMD_I_DELAY_1_TICK+3 for 4 ticks */
	ATM_CMD_I_DELAY_1_TICK = 64,

	ATM_CMD_I_STOP = 96,
	ATM_CMD_I_RETURN,
	ATM_CMD_I_GLISSANDO_OFF,
	ATM_CMD_I_ARPEGGIO_OFF,
	ATM_CMD_I_NOTECUT_OFF,
	ATM_CMD_I_NOISE_RETRIG_OFF,
	ATM_CMD_I_TRANSPOSITION_OFF,
};

/* Encode the number of parameter bytes after the command */
enum atm_cmd_params_num_constants {
	ATM_CMD_PNUM_1 = 128,
	ATM_CMD_PNUM_2 = 128 | (1 << 4),
	ATM_CMD_PNUM_3 = 128 | (2 << 4),
	ATM_CMD_PNUM_4 = 128 | (3 << 4),
	ATM_CMD_PNUM_5 = 128 | (4 << 4),
	ATM_CMD_PNUM_6 = 128 | (5 << 4),
	ATM_CMD_PNUM_7 = 128 | (6 << 4),
	ATM_CMD_PNUM_VLE = 128 | (7 << 4),
};

enum atm_parametrised_cmd_id_constants {
	ATM_CMD_ID_RESERVED0 = 0,
	ATM_CMD_ID_CALL,
	ATM_CMD_ID_GLISSANDO_ON,
	ATM_CMD_ID_ARPEGGIO_ON,
	ATM_CMD_ID_NOTECUT_ON,
	ATM_CMD_ID_NOISE_RETRIG_ON,
	ATM_CMD_ID_SET_TRANSPOSITION,
	ATM_CMD_ID_RESERVED7,
	ATM_CMD_ID_ADD_TRANSPOSITION,
	ATM_CMD_ID_SET_TEMPO,
	ATM_CMD_ID_ADD_TEMPO,
	ATM_CMD_ID_SET_VOLUME,
	ATM_CMD_ID_SET_MOD,
	ATM_CMD_ID_SET_LOOP_PATTERN,
	ATM_CMD_ID_SLIDE,
	ATM_CMD_ID_LFO,
};

enum atm_parametrised_cmd_constants {
	ATM_CMD_P_CALL              = ATM_CMD_ID_CALL              + ATM_CMD_PNUM_1,
	ATM_CMD_P_CALL_REPEAT       = ATM_CMD_ID_CALL              + ATM_CMD_PNUM_2,
	ATM_CMD_P_GLISSANDO_ON      = ATM_CMD_ID_GLISSANDO_ON      + ATM_CMD_PNUM_1,
	ATM_CMD_P_ARPEGGIO_ON       = ATM_CMD_ID_ARPEGGIO_ON       + ATM_CMD_PNUM_2,
	ATM_CMD_P_NOTECUT_ON        = ATM_CMD_ID_NOTECUT_ON        + ATM_CMD_PNUM_1,
	ATM_CMD_P_NOISE_RETRIG_ON   = ATM_CMD_ID_NOISE_RETRIG_ON   + ATM_CMD_PNUM_1,
	ATM_CMD_P_SET_TRANSPOSITION = ATM_CMD_ID_SET_TRANSPOSITION + ATM_CMD_PNUM_1,
	ATM_CMD_P_ADD_TRANSPOSITION = ATM_CMD_ID_ADD_TRANSPOSITION + ATM_CMD_PNUM_1,
	ATM_CMD_P_SET_TEMPO         = ATM_CMD_ID_SET_TEMPO         + ATM_CMD_PNUM_1,
	ATM_CMD_P_ADD_TEMPO         = ATM_CMD_ID_ADD_TEMPO         + ATM_CMD_PNUM_1,
	ATM_CMD_P_SET_VOLUME        = ATM_CMD_ID_SET_VOLUME        + ATM_CMD_PNUM_1,
	ATM_CMD_P_SET_MOD           = ATM_CMD_ID_SET_MOD           + ATM_CMD_PNUM_1,
	ATM_CMD_P_SET_LOOP_PATTERN  = ATM_CMD_ID_SET_LOOP_PATTERN  + ATM_CMD_PNUM_1,
	ATM_CMD_P_SLIDE_ON          = ATM_CMD_ID_SLIDE             + ATM_CMD_PNUM_2,
	ATM_CMD_P_SLIDE_OFF         = ATM_CMD_ID_SLIDE             + ATM_CMD_PNUM_1,
	ATM_CMD_P_SLIDE_ADV_ON      = ATM_CMD_ID_SLIDE             + ATM_CMD_PNUM_3,
	ATM_CMD_P_SLIDE_ADV_OFF     = ATM_CMD_ID_SLIDE             + ATM_CMD_PNUM_1,
	ATM_CMD_P_LFO_ON            = ATM_CMD_ID_LFO               + ATM_CMD_PNUM_3,
	ATM_CMD_P_LFO_OFF           = ATM_CMD_ID_LFO               + ATM_CMD_PNUM_1,
};

#define ATM_CMD_M_DELAY_TICKS(delay) (ATM_CMD_I_DELAY_1_TICK+(delay-1))

#define ATM_CMD_M_CALL(pattern_index) ATM_CMD_P_CALL, (pattern_index)
#define ATM_CMD_M_CALL_REPEAT(pattern_index, repeat_count) ATM_CMD_P_CALL_REPEAT, (pattern_index), (repeat_count-1)
#define ATM_CMD_M_GLISSANDO_ON(p1) ATM_CMD_P_GLISSANDO_ON, (p1)
#define ATM_CMD_M_ARPEGGIO_ON(p1, p2) ATM_CMD_P_ARPEGGIO_ON, (p1), (p2)
#define ATM_CMD_M_NOTECUT_ON(p1) ATM_CMD_P_NOTECUT_ON, (p1)
#define ATM_CMD_M_NOISE_RETRIG_ON(p1) ATM_CMD_P_NOISE_RETRIG_ON, (p1)
#define ATM_CMD_M_SET_TRANSPOSITION(p1) ATM_CMD_P_SET_TRANSPOSITION, ((uint8_t)p1)
#define ATM_CMD_M_ADD_TRANSPOSITION(p1) ATM_CMD_P_ADD_TRANSPOSITION, ((uint8_t)p1)
#define ATM_CMD_M_SET_TEMPO(p1) ATM_CMD_P_SET_TEMPO, (p1)
#define ATM_CMD_M_ADD_TEMPO(p1) ATM_CMD_P_ADD_TEMPO, ((uint8_t)p1)
#define ATM_CMD_M_SET_VOLUME(p1) ATM_CMD_P_SET_VOLUME, (p1)
#define ATM_CMD_M_SET_MOD(p1) ATM_CMD_P_SET_MOD, (p1)
#define ATM_CMD_M_SET_LOOP_PATTERN(p1) ATM_CMD_P_SET_LOOP_PATTERN, (p1)

#define ATM_CMD_M_SLIDE_VOL_ON(p1) ATM_CMD_P_SLIDE_ON, 0, (uint8_t)(p1)
#define ATM_CMD_M_SLIDE_FREQ_ON(p1) ATM_CMD_P_SLIDE_ON, 1, (uint8_t)(p1)
#define ATM_CMD_M_SLIDE_MOD_ON(p1) ATM_CMD_P_SLIDE_ON, 2, (uint8_t)(p1)

#define ATM_CMD_M_SLIDE_VOL_OFF ATM_CMD_P_SLIDE_OFF, 0
#define ATM_CMD_M_SLIDE_FREQ_OFF ATM_CMD_P_SLIDE_OFF, 1
#define ATM_CMD_M_SLIDE_MOD_OFF ATM_CMD_P_SLIDE_OFF, 2

#define ATM_CMD_M_SLIDE_VOL_ADV_ON(p1, p2) ATM_CMD_P_SLIDE_ADV_ON, 0, (uint8_t)(p1), (p2)
#define ATM_CMD_M_SLIDE_FREQ_ADV_ON(p1, p2) ATM_CMD_P_SLIDE_ADV_ON, 1, (uint8_t)(p1), (p2)
#define ATM_CMD_M_SLIDE_MOD_ADV_ON(p1, p2) ATM_CMD_P_SLIDE_ADV_ON, 2, (uint8_t)(p1), (p2)

#define ATM_CMD_M_SLIDE_VOL_ADV_OFF ATM_CMD_P_SLIDE_ADV_OFF, 0
#define ATM_CMD_M_SLIDE_FREQ_ADV_OFF ATM_CMD_P_SLIDE_ADV_OFF, 1
#define ATM_CMD_M_SLIDE_MOD_ADV_OFF ATM_CMD_P_SLIDE_ADV_OFF, 2

#define ATM_CMD_M_TREMOLO_ON(depth, rate) ATM_CMD_P_LFO_ON, 0, (uint8_t)(depth), (rate)
#define ATM_CMD_M_VIBRATO_ON(depth, rate) ATM_CMD_P_LFO_ON, 1, (uint8_t)(depth), (rate)
#define ATM_CMD_M_MOD_LFO_ON(depth, rate) ATM_CMD_P_LFO_ON, 2, (uint8_t)(depth), (rate)

#define ATM_CMD_M_TREMOLO_OFF ATM_CMD_P_LFO_OFF, 0
#define ATM_CMD_M_VIBRATO_OFF ATM_CMD_P_LFO_OFF, 1
#define ATM_CMD_M_MOD_LFO_OFF ATM_CMD_P_LFO_OFF, 2
