PalletTown_FarmersHouse_Frlg_MapScripts::
	.byte 0

PalletTown_FarmersHouse_EventScript_Woman::
    msgbox PalletTown_FarmersHouse_Text_HardWork, MSGBOX_NPC
    end

PalletTown_FarmersHouse_EventScript_Meowth::
    lock
    faceplayer
    call PalletTown_FarmersHouse_EventScript_DoMeowthCry
    applymovement LOCALID_MEOWTH, Common_Movement_FaceOriginalDirection
    waitmovement 0
    release
    end

PalletTown_FarmersHouse_EventScript_DoMeowthCry::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	waitse
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
	msgbox PalletTown_FarmersHouse_Text_Meowth
	waitmoncry
	call EventScript_RestorePrevTextColor
	return
    end

PalletTown_FarmersHouse_EventScript_Little_Boy::
    msgbox PalletTown_FarmersHouse_Text_TakeCare, MSGBOX_NPC
    end

PalletTown_FarmersHouse_Text_HardWork::
    .string "My husband works hard to make\n"
	.string "sure those Tauros are well cared for.\p"
	.string "He also takes care of me, our kids,\n"
	.string "and our Meowth and Houndour.\p"
	.string "He even makes sure my daughter's\n"
	.string "boyfriend is alright, begrudingly.\p"
	.string "Work hard to help others out, and\n"
	.string "everyone will work hard to help you.$"

PalletTown_FarmersHouse_Text_Meowth::
    .string "Meowth: ...Mrow?$"

PalletTown_FarmersHouse_Text_TakeCare::
	.string "When I grow up, I'm gonna take care\n"
	.string "of POKéMON like my Pa!$"
