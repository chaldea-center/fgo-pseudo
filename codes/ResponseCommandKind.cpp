void __fastcall ResponseCommandKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42B2897 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_17354/*"card_combine"*/);
    sub_B52984(&StringLiteral_17370/*"card_statussync"*/);
    sub_B52984(&StringLiteral_19045/*"friend_accept"*/);
    sub_B52984(&StringLiteral_19303/*"home"*/);
    sub_B52984(&StringLiteral_23437/*"war_board_treasure"*/);
    sub_B52984(&StringLiteral_16785/*"battle_scenario"*/);
    sub_B52984(&StringLiteral_18718/*"event_scan_panel_map"*/);
    sub_B52984(&StringLiteral_17018/*"box_gacha_draw"*/);
    sub_B52984(&StringLiteral_22981/*"treasure_box_draw"*/);
    sub_B52984(&StringLiteral_23431/*"war_board_master_attack"*/);
    sub_B52984(&StringLiteral_23430/*"war_board_finish"*/);
    sub_B52984(&StringLiteral_16791/*"battle_use_continue_item"*/);
    sub_B52984(&StringLiteral_18632/*"event_deck_setup"*/);
    sub_B52984(&StringLiteral_17619/*"coin_room_put"*/);
    sub_B52984(&StringLiteral_18044/*"debug_delete_servant"*/);
    sub_B52984(&StringLiteral_17355/*"card_combine_costume"*/);
    sub_B52984(&StringLiteral_16783/*"battle_result"*/);
    sub_B52984(&StringLiteral_19049/*"friend_offer"*/);
    sub_B52984(&StringLiteral_16979/*"blacklist_top"*/);
    sub_B52984(&StringLiteral_20465/*"login"*/);
    sub_B52984(&StringLiteral_19051/*"friend_remove"*/);
    sub_B52984(&StringLiteral_23438/*"war_board_turn_end"*/);
    sub_B52984(&StringLiteral_18043/*"debug_add_servant"*/);
    sub_B52984(&StringLiteral_17359/*"card_combine_skill"*/);
    sub_B52984(&StringLiteral_18667/*"event_mission_notify"*/);
    sub_B52984(&StringLiteral_18047/*"debug_server_time"*/);
    sub_B52984(&StringLiteral_21720/*"profile"*/);
    sub_B52984(&StringLiteral_18705/*"event_receive_cooltime_reward"*/);
    sub_B52984(&StringLiteral_23265/*"user_status_flag_set"*/);
    sub_B52984(&StringLiteral_23433/*"war_board_reinforcements"*/);
    sub_B52984(&StringLiteral_17362/*"card_favorite"*/);
    sub_B52984(&StringLiteral_16789/*"battle_turn"*/);
    sub_B52984(&StringLiteral_23436/*"war_board_start"*/);
    sub_B52984(&StringLiteral_23429/*"war_board_continue"*/);
    sub_B52984(&StringLiteral_22666/*"svt_equip_combine"*/);
    sub_B52984(&StringLiteral_23021/*"tutorial_set"*/);
    sub_B52984(&StringLiteral_22524/*"storage_takeout"*/);
    sub_B52984(&StringLiteral_16714/*"bank_status"*/);
    sub_B52984(&StringLiteral_21766/*"purchase_by_stone"*/);
    sub_B52984(&StringLiteral_19048/*"friend_message_hide_sync"*/);
    sub_B52984(&StringLiteral_17731/*"command_code_statussync"*/);
    sub_B52984(&StringLiteral_23420/*"war_board_battle_result"*/);
    sub_B52984(&StringLiteral_21725/*"profile_edit_name"*/);
    sub_B52984(&StringLiteral_22314/*"signup"*/);
    sub_B52984(&StringLiteral_18633/*"event_digging"*/);
    sub_B52984(&StringLiteral_17729/*"command_code_lock"*/);
    sub_B52984(&StringLiteral_17577/*"class_board_release_lock"*/);
    sub_B52984(&StringLiteral_23432/*"war_board_move"*/);
    sub_B52984(&StringLiteral_17732/*"command_code_unlock"*/);
    sub_B52984(&StringLiteral_22146/*"sell_svt"*/);
    sub_B52984(&StringLiteral_21929/*"regist_account"*/);
    sub_B52984(&StringLiteral_16784/*"battle_resume"*/);
    sub_B52984(&StringLiteral_18936/*"follower_edit_name"*/);
    sub_B52984(&StringLiteral_18045/*"debug_edit_servant"*/);
    sub_B52984(&StringLiteral_17727/*"command_code_attach"*/);
    sub_B52984(&StringLiteral_18663/*"event_location"*/);
    sub_B52984(&StringLiteral_17728/*"command_code_detach"*/);
    sub_B52984(&StringLiteral_17730/*"command_code_setstatus"*/);
    sub_B52984(&StringLiteral_18639/*"event_expedition_finish"*/);
    sub_B52984(&StringLiteral_18046/*"debug_quest"*/);
    sub_B52984(&StringLiteral_18668/*"event_mission_random_cancel"*/);
    sub_B52984(&StringLiteral_21765/*"purchase_by_bank"*/);
    sub_B52984(&StringLiteral_19052/*"friend_top"*/);
    sub_B52984(&StringLiteral_19097/*"gamedata"*/);
    sub_B52984(&StringLiteral_18719/*"event_script_flag_on"*/);
    sub_B52984(&StringLiteral_18937/*"follower_setup"*/);
    sub_B52984(&StringLiteral_18640/*"event_expedition_start"*/);
    sub_B52984(&StringLiteral_17811/*"continue_decide"*/);
    sub_B52984(&StringLiteral_19047/*"friend_lock_sync"*/);
    sub_B52984(&StringLiteral_17371/*"card_svt_flag"*/);
    sub_B52984(&StringLiteral_21703/*"present_receive"*/);
    sub_B52984(&StringLiteral_17812/*"continue_input"*/);
    sub_B52984(&StringLiteral_19050/*"friend_reject"*/);
    sub_B52984(&StringLiteral_18641/*"event_fortification"*/);
    sub_B52984(&StringLiteral_18709/*"event_reset_digging"*/);
    sub_B52984(&StringLiteral_16978/*"blacklist_remove"*/);
    sub_B52984(&StringLiteral_18706/*"event_recoverySync"*/);
    sub_B52984(&StringLiteral_23439/*"war_board_wall_attack"*/);
    sub_B52984(&StringLiteral_22523/*"storage_takein"*/);
    sub_B52984(&StringLiteral_17615/*"code_input"*/);
    sub_B52984(&StringLiteral_19093/*"gacha_draw"*/);
    sub_B52984(&StringLiteral_23428/*"war_board_command_spell"*/);
    sub_B52984(&StringLiteral_17578/*"class_board_release_square"*/);
    sub_B52984(&StringLiteral_19046/*"friend_cancel"*/);
    sub_B52984(&StringLiteral_17360/*"card_combine_td"*/);
    sub_B52984(&StringLiteral_16782/*"battle_reset"*/);
    sub_B52984(&StringLiteral_21755/*"purchase"*/);
    sub_B52984(&StringLiteral_18669/*"event_mission_receive"*/);
    sub_B52984(&StringLiteral_17358/*"card_combine_passive_skill"*/);
    sub_B52984(&StringLiteral_20172/*"item_recover"*/);
    sub_B52984(&StringLiteral_16781/*"battle_quest_route"*/);
    sub_B52984(&StringLiteral_23020/*"tutorial_event_flag_set"*/);
    sub_B52984(&StringLiteral_16775/*"battle_command_spell"*/);
    sub_B52984(&StringLiteral_18056/*"deck_edit_name"*/);
    sub_B52984(&StringLiteral_17733/*"command_spell"*/);
    sub_B52984(&StringLiteral_23435/*"war_board_setup"*/);
    sub_B52984(&StringLiteral_16977/*"blacklist_regist"*/);
    sub_B52984(&StringLiteral_16790/*"battle_use_continue"*/);
    sub_B52984(&StringLiteral_16786/*"battle_setup"*/);
    sub_B52984(&StringLiteral_18924/*"follow_remove"*/);
    sub_B52984(&StringLiteral_20173/*"item_use"*/);
    sub_B52984(&StringLiteral_21857/*"raid_auto_update"*/);
    sub_B52984(&StringLiteral_18923/*"follow_assign"*/);
    sub_B52984(&StringLiteral_17813/*"continue_prepare"*/);
    sub_B52984(&StringLiteral_23019/*"tutorial_clear"*/);
    sub_B52984(&StringLiteral_18631/*"event_daily_point"*/);
    sub_B52984(&StringLiteral_17019/*"box_gacha_reset"*/);
    sub_B52984(&StringLiteral_17597/*"client_api_error_dialog"*/);
    sub_B52984(&StringLiteral_23434/*"war_board_resume"*/);
    sub_B52984(&StringLiteral_17361/*"card_command_card_exceed"*/);
    sub_B52984(&StringLiteral_23262/*"user_formation"*/);
    sub_B52984(&StringLiteral_17363/*"card_friendship_exceed"*/);
    sub_B52984(&StringLiteral_22667/*"svt_equip_set"*/);
    sub_B52984(&StringLiteral_18048/*"debug_update_user"*/);
    sub_B52984(&StringLiteral_17365/*"card_init_random_limit_count"*/);
    sub_B52984(&StringLiteral_18708/*"event_reset_data_lost_battle"*/);
    sub_B52984(&StringLiteral_23194/*"userDelete"*/);
    sub_B52984(&StringLiteral_18057/*"deck_setup"*/);
    sub_B52984(&StringLiteral_17357/*"card_combine_limit_special"*/);
    sub_B52984(&StringLiteral_17534/*"check_date_version"*/);
    sub_B52984(&StringLiteral_21724/*"profile_edit_birth"*/);
    sub_B52984(&StringLiteral_17367/*"card_locksync"*/);
    sub_B52984(&StringLiteral_17356/*"card_combine_exceed"*/);
    sub_B52984(&StringLiteral_17366/*"card_limit"*/);
    sub_B52984(&StringLiteral_23427/*"war_board_buff_save"*/);
    sub_B52984(&StringLiteral_18630/*"event_create_recipe"*/);
    byte_42B2897 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B52A54(System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v1,
    (const MethodInfo_2F3E9EC *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
  if ( !v1 )
    sub_B52A5C(v2, v3);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    0,
    0LL,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    1,
    (System_String_o *)StringLiteral_22314/*"signup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    2,
    (System_String_o *)StringLiteral_21929/*"regist_account"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    3,
    (System_String_o *)StringLiteral_19097/*"gamedata"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    4,
    (System_String_o *)StringLiteral_20465/*"login"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    5,
    (System_String_o *)StringLiteral_19303/*"home"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    6,
    (System_String_o *)StringLiteral_19093/*"gacha_draw"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    7,
    (System_String_o *)StringLiteral_18057/*"deck_setup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    8,
    (System_String_o *)StringLiteral_23262/*"user_formation"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    9,
    (System_String_o *)StringLiteral_21755/*"purchase"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    10,
    (System_String_o *)StringLiteral_21766/*"purchase_by_stone"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    11,
    (System_String_o *)StringLiteral_21765/*"purchase_by_bank"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    12,
    (System_String_o *)StringLiteral_22146/*"sell_svt"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    13,
    (System_String_o *)StringLiteral_19049/*"friend_offer"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    14,
    (System_String_o *)StringLiteral_19045/*"friend_accept"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    15,
    (System_String_o *)StringLiteral_19050/*"friend_reject"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    16,
    (System_String_o *)StringLiteral_19046/*"friend_cancel"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    17,
    (System_String_o *)StringLiteral_19051/*"friend_remove"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    18,
    (System_String_o *)StringLiteral_21720/*"profile"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    19,
    (System_String_o *)StringLiteral_21725/*"profile_edit_name"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    20,
    (System_String_o *)StringLiteral_16786/*"battle_setup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    21,
    (System_String_o *)StringLiteral_16789/*"battle_turn"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    22,
    (System_String_o *)StringLiteral_16783/*"battle_result"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    23,
    (System_String_o *)StringLiteral_16775/*"battle_command_spell"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    24,
    (System_String_o *)StringLiteral_16790/*"battle_use_continue"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    25,
    (System_String_o *)StringLiteral_17354/*"card_combine"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    26,
    (System_String_o *)StringLiteral_17359/*"card_combine_skill"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    27,
    (System_String_o *)StringLiteral_17360/*"card_combine_td"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    28,
    (System_String_o *)StringLiteral_17363/*"card_friendship_exceed"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    29,
    (System_String_o *)StringLiteral_21703/*"present_receive"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    30,
    (System_String_o *)StringLiteral_17615/*"code_input"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    31,
    (System_String_o *)StringLiteral_17813/*"continue_prepare"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    32,
    (System_String_o *)StringLiteral_17812/*"continue_input"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    33,
    (System_String_o *)StringLiteral_17811/*"continue_decide"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    34,
    (System_String_o *)StringLiteral_17362/*"card_favorite"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    35,
    (System_String_o *)StringLiteral_17365/*"card_init_random_limit_count"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    36,
    (System_String_o *)StringLiteral_23021/*"tutorial_set"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    37,
    (System_String_o *)StringLiteral_23019/*"tutorial_clear"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    38,
    (System_String_o *)StringLiteral_16784/*"battle_resume"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    39,
    (System_String_o *)StringLiteral_17366/*"card_limit"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    40,
    (System_String_o *)StringLiteral_22667/*"svt_equip_set"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    41,
    (System_String_o *)StringLiteral_22666/*"svt_equip_combine"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    42,
    (System_String_o *)StringLiteral_18046/*"debug_quest"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    43,
    (System_String_o *)StringLiteral_21724/*"profile_edit_birth"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    44,
    (System_String_o *)StringLiteral_20173/*"item_use"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    45,
    (System_String_o *)StringLiteral_20172/*"item_recover"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    46,
    (System_String_o *)StringLiteral_17733/*"command_spell"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    47,
    (System_String_o *)StringLiteral_17018/*"box_gacha_draw"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    48,
    (System_String_o *)StringLiteral_17019/*"box_gacha_reset"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    49,
    (System_String_o *)StringLiteral_18667/*"event_mission_notify"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    50,
    (System_String_o *)StringLiteral_18669/*"event_mission_receive"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    51,
    (System_String_o *)StringLiteral_18937/*"follower_setup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    52,
    (System_String_o *)StringLiteral_16785/*"battle_scenario"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    53,
    (System_String_o *)StringLiteral_18056/*"deck_edit_name"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    54,
    (System_String_o *)StringLiteral_18047/*"debug_server_time"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    55,
    (System_String_o *)StringLiteral_17356/*"card_combine_exceed"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    56,
    (System_String_o *)StringLiteral_17367/*"card_locksync"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    57,
    (System_String_o *)StringLiteral_23020/*"tutorial_event_flag_set"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    58,
    (System_String_o *)StringLiteral_22523/*"storage_takein"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    59,
    (System_String_o *)StringLiteral_22524/*"storage_takeout"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    60,
    (System_String_o *)StringLiteral_18936/*"follower_edit_name"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    61,
    (System_String_o *)StringLiteral_16714/*"bank_status"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    62,
    (System_String_o *)StringLiteral_17355/*"card_combine_costume"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    63,
    (System_String_o *)StringLiteral_16979/*"blacklist_top"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    64,
    (System_String_o *)StringLiteral_16977/*"blacklist_regist"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    65,
    (System_String_o *)StringLiteral_16978/*"blacklist_remove"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    66,
    (System_String_o *)StringLiteral_19048/*"friend_message_hide_sync"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    67,
    (System_String_o *)StringLiteral_18719/*"event_script_flag_on"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    68,
    (System_String_o *)StringLiteral_17371/*"card_svt_flag"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    69,
    (System_String_o *)StringLiteral_18663/*"event_location"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    70,
    (System_String_o *)StringLiteral_17370/*"card_statussync"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    71,
    (System_String_o *)StringLiteral_17730/*"command_code_setstatus"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    72,
    (System_String_o *)StringLiteral_17731/*"command_code_statussync"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    73,
    (System_String_o *)StringLiteral_18706/*"event_recoverySync"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    74,
    (System_String_o *)StringLiteral_18632/*"event_deck_setup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    75,
    (System_String_o *)StringLiteral_23265/*"user_status_flag_set"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    76,
    (System_String_o *)StringLiteral_19052/*"friend_top"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    77,
    (System_String_o *)StringLiteral_17727/*"command_code_attach"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    78,
    (System_String_o *)StringLiteral_17728/*"command_code_detach"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    79,
    (System_String_o *)StringLiteral_17732/*"command_code_unlock"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    80,
    (System_String_o *)StringLiteral_18048/*"debug_update_user"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    81,
    (System_String_o *)StringLiteral_18923/*"follow_assign"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    82,
    (System_String_o *)StringLiteral_18924/*"follow_remove"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    83,
    (System_String_o *)StringLiteral_18631/*"event_daily_point"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    84,
    (System_String_o *)StringLiteral_17361/*"card_command_card_exceed"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    85,
    (System_String_o *)StringLiteral_17357/*"card_combine_limit_special"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    86,
    (System_String_o *)StringLiteral_16781/*"battle_quest_route"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    87,
    (System_String_o *)StringLiteral_19047/*"friend_lock_sync"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    88,
    (System_String_o *)StringLiteral_21857/*"raid_auto_update"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    89,
    (System_String_o *)StringLiteral_17729/*"command_code_lock"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    90,
    (System_String_o *)StringLiteral_23436/*"war_board_start"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    91,
    (System_String_o *)StringLiteral_23435/*"war_board_setup"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    92,
    (System_String_o *)StringLiteral_23427/*"war_board_buff_save"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    93,
    (System_String_o *)StringLiteral_23432/*"war_board_move"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    94,
    (System_String_o *)StringLiteral_23437/*"war_board_treasure"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    95,
    (System_String_o *)StringLiteral_23438/*"war_board_turn_end"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    96,
    (System_String_o *)StringLiteral_23431/*"war_board_master_attack"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    97,
    (System_String_o *)StringLiteral_23439/*"war_board_wall_attack"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    98,
    (System_String_o *)StringLiteral_23428/*"war_board_command_spell"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    99,
    (System_String_o *)StringLiteral_23420/*"war_board_battle_result"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    100,
    (System_String_o *)StringLiteral_23430/*"war_board_finish"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    101,
    (System_String_o *)StringLiteral_23434/*"war_board_resume"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    102,
    (System_String_o *)StringLiteral_23429/*"war_board_continue"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    103,
    (System_String_o *)StringLiteral_23433/*"war_board_reinforcements"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    104,
    (System_String_o *)StringLiteral_18718/*"event_scan_panel_map"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    105,
    (System_String_o *)StringLiteral_16791/*"battle_use_continue_item"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    106,
    (System_String_o *)StringLiteral_17534/*"check_date_version"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    107,
    (System_String_o *)StringLiteral_20173/*"item_use"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    108,
    (System_String_o *)StringLiteral_17358/*"card_combine_passive_skill"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    109,
    (System_String_o *)StringLiteral_22981/*"treasure_box_draw"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    110,
    (System_String_o *)StringLiteral_18668/*"event_mission_random_cancel"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    111,
    (System_String_o *)StringLiteral_17619/*"coin_room_put"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    112,
    (System_String_o *)StringLiteral_23194/*"userDelete"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    113,
    (System_String_o *)StringLiteral_16782/*"battle_reset"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    114,
    (System_String_o *)StringLiteral_18633/*"event_digging"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    115,
    (System_String_o *)StringLiteral_18709/*"event_reset_digging"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    116,
    (System_String_o *)StringLiteral_18640/*"event_expedition_start"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    117,
    (System_String_o *)StringLiteral_18639/*"event_expedition_finish"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    118,
    (System_String_o *)StringLiteral_17597/*"client_api_error_dialog"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    119,
    (System_String_o *)StringLiteral_18705/*"event_receive_cooltime_reward"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    120,
    (System_String_o *)StringLiteral_18630/*"event_create_recipe"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    121,
    (System_String_o *)StringLiteral_18641/*"event_fortification"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    122,
    (System_String_o *)StringLiteral_17578/*"class_board_release_square"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    123,
    (System_String_o *)StringLiteral_17577/*"class_board_release_lock"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    124,
    (System_String_o *)StringLiteral_18708/*"event_reset_data_lost_battle"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    125,
    (System_String_o *)StringLiteral_18043/*"debug_add_servant"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    126,
    (System_String_o *)StringLiteral_18045/*"debug_edit_servant"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    127,
    (System_String_o *)StringLiteral_18044/*"debug_delete_servant"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  static_fields = (BattleServantConfConponent_o *)ResponseCommandKind_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v5, v6, v7, v8, v9, v10);
}


void __fastcall ResponseCommandKind___ctor(ResponseCommandKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall ResponseCommandKind__GetName(int32_t kind, const MethodInfo *method)
{
  ResponseCommandKind_c *v3; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *nameList; // x0

  if ( (byte_42B2895 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    byte_42B2895 = 1;
  }
  v3 = ResponseCommandKind_TypeInfo;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
    v3 = ResponseCommandKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_B52A5C(0LL, method);
  return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
           nameList,
           kind,
           (const MethodInfo_2F3F4DC *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
}


ResponseData_o *__fastcall ResponseCommandKind__SearchData(
        int32_t kind,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  System_String_o *Name; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  System_String_o *v8; // x20
  unsigned int v9; // w22
  ResponseData_o *v10; // x21
  __int64 v12; // x0

  if ( (byte_42B2896 & 1) == 0 )
  {
    sub_B52984(&ResponseCommandKind_TypeInfo);
    byte_42B2896 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  Name = ResponseCommandKind__GetName(kind, (const MethodInfo *)responseList);
  if ( !responseList )
    goto LABEL_16;
  max_length = responseList->max_length;
  if ( max_length >= 1 )
  {
    v8 = Name;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v12 = sub_B52A88(Name);
        sub_B52A28(v12, 0LL);
      }
      v10 = responseList->m_Items[v9];
      if ( !v10 )
        break;
      Name = (System_String_o *)System_String__op_Equality(v10->fields.nid, v8, 0LL);
      if ( ((unsigned __int8)Name & 1) != 0 )
        return v10;
      max_length = responseList->max_length;
      if ( (int)++v9 >= max_length )
        return 0LL;
    }
LABEL_16:
    sub_B52A5C(Name, v6);
  }
  return 0LL;
}