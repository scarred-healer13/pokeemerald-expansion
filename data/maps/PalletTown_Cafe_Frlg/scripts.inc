PalletTown_Cafe_Frlg_MapScripts::
    .byte 0

PalletTown_Cafe_EventScript_Fatman::
    msgbox PalletTown_Cafe_Text_PancakeMemories, MSGBOX_NPC
    end

PalletTown_Cafe_EventScript_Greedent::
    lock
    faceplayer
    call PalletTown_Cafe_EventScript_DoGreedentCry
    applymovement LOCALID_PALLET_CAFE_GREEDENT, Common_Movement_FaceOriginalDirection
    waitmovement 0
    release
    end

PalletTown_Cafe_EventScript_DoGreedentCry::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	waitse
	playmoncry SPECIES_GREEDENT, CRY_MODE_NORMAL
	msgbox PalletTown_Cafe_Text_Greedent
	waitmoncry
	call EventScript_RestorePrevTextColor
	return
    end

PalletTown_Cafe_EventScript_Camper::
    msgbox PalletTown_Cafe_Text_Rangerintraining, MSGBOX_NPC
    end

PalletTown_Cafe_EventScript_Lass::
    msgbox PalletTown_Cafe_Text_Date, MSGBOX_NPC
    end

PalletTown_Cafe_EventScript_Youngster::
    msgbox PalletTown_Cafe_Text_Countryboring, MSGBOX_NPC
    end

PalletTown_Cafe_EventScript_Oldman::
    lock
    faceplayer
    checkplayergender
    call_if_eq VAR_RESULT, MALE, PalletTown_Cafe_EventScript_OldManMemoriesMale
    call_if_eq VAR_RESULT, FEMALE, PalletTown_Cafe_EventScript_OldManMemoriesFemale
    closemessage
    applymovement LOCALID_PALLET_CAFE_OLD_MAN_1, Common_Movement_FaceOriginalDirection
    waitmovement 0
    release
    end

PalletTown_Cafe_EventScript_OldManMemoriesMale::
    msgbox PalletTown_Cafe_Text_Memoriesifboy, MSGBOX_NPC
    end

PalletTown_Cafe_EventScript_OldManMemoriesFemale::
    msgbox PalletTown_Cafe_Text_Memoriesifgirl, MSGBOX_NPC
    end

PalletTown_Cafe_EventScript_Stoutland::
    lock
    faceplayer
    call PalletTown_Cafe_EventScript_DoStoutlandCry
    applymovement LOCALID_PALLET_CAFE_STOUTLAND, Common_Movement_FaceOriginalDirection
    waitmovement 0
    release
    end

PalletTown_Cafe_EventScript_DoStoutlandCry::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	waitse
	playmoncry SPECIES_STOUTLAND, CRY_MODE_NORMAL
	msgbox PalletTown_Cafe_Text_Stoutland
	waitmoncry
	call EventScript_RestorePrevTextColor
	return
    end

PalletTown_Cafe_EventScript_Littlegirl::
    msgbox PalletTown_Cafe_Text_VisitGrandpa, MSGBOX_NPC
    end

PalletTown_Cafe_Text_PancakeMemories::
    .string "Why, if it isn't {PLAYER}!\p"
    .string "All grown up, and prepping\n"
    .string "for an adventure!\p"
    .string "I still remember when you\n"
    .string "would always ask for pancakes.\p"
    .string "I swear you would beat my\n"
    .string "Greedent's record!$"

PalletTown_Cafe_Text_Rangerintraining::
    .string "I'm resting here in town before I\n"
    .string "continue my training.\p"
    .string "I hope to be a ranger one day,\n"
    .string "protecting POKéMON from thieves.\p"
    .string "Keep a sharp eye out for any\n"
    .string "suspicious people!$"

PalletTown_Cafe_Text_Date::
    .string "My boyfriend is visiting me!\p"
    .string "It's a bit of a travel from\n"
    .string "Viridian, but he's always careful!\p"
    .string "My sweetheart gets plenty of Repels\n"
    .string "just to visit me!$"

PalletTown_Cafe_Text_Countryboring::
    .string "My girlfriend is awesome, but...\p"
    .string "The country is so boring!\p"
    .string "There's nothing to do, not like\n"
    .string "in Viridian City!\p"
    .string "At least my angel is here...$"

PalletTown_Cafe_Text_Memoriesifboy::
    .string "Ah, it's young {PLAYER}.\p"
    .string "On his way to becoming a\n"
    .string "trainer and all that.\p"
    .string "Reminds me of my years with\n"
    .string "Stoutland, old faithful friend.\p"
    .string "Take care of your POKéMON, and\n"
    .string "never give up!$"

PalletTown_Cafe_Text_Memoriesifgirl::
    .string "Ah, it's young {PLAYER}.\p"
    .string "On her way to becoming a\n"
    .string "trainer and all that.\p"
    .string "Reminds me of my years with\n"
    .string "Stoutland, old faithful friend.\p"
    .string "Take care of your POKéMON, and\n"
    .string "never give up!$"

PalletTown_Cafe_Text_VisitGrandpa::
    .string "Grandpa always talks about\n"
    .string "how he was a great trainer.\p"
    .string "But I can't see it.\p"
    .string "He's so silly, and\n"
    .string "so is Stoudland!$"

PalletTown_Cafe_Text_Greedent::
    .string "Greedent: Chom-chomp!$"

PalletTown_Cafe_Text_Stoutland::
    .string "Stoutland: Aroo...$"
