void ResponseCommandKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4E765B7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
    sub_1D0F0B4(&ResponseCommandKind_TypeInfo);
    sub_1D0F0B4(&StringLiteral_18038/*"card_combine"*/);
    sub_1D0F0B4(&StringLiteral_18055/*"card_statussync"*/);
    sub_1D0F0B4(&StringLiteral_20045/*"friend_accept"*/);
    sub_1D0F0B4(&StringLiteral_20363/*"home"*/);
    sub_1D0F0B4(&StringLiteral_25295/*"war_board_treasure"*/);
    sub_1D0F0B4(&StringLiteral_17360/*"battle_scenario"*/);
    sub_1D0F0B4(&StringLiteral_19605/*"event_scan_panel_map"*/);
    sub_1D0F0B4(&StringLiteral_17627/*"box_gacha_draw"*/);
    sub_1D0F0B4(&StringLiteral_24703/*"treasure_box_draw"*/);
    sub_1D0F0B4(&StringLiteral_25289/*"war_board_master_attack"*/);
    sub_1D0F0B4(&StringLiteral_25288/*"war_board_finish"*/);
    sub_1D0F0B4(&StringLiteral_17366/*"battle_use_continue_item"*/);
    sub_1D0F0B4(&StringLiteral_19516/*"event_deck_setup"*/);
    sub_1D0F0B4(&StringLiteral_18320/*"coin_room_put"*/);
    sub_1D0F0B4(&StringLiteral_18808/*"debug_delete_servant"*/);
    sub_1D0F0B4(&StringLiteral_18039/*"card_combine_costume"*/);
    sub_1D0F0B4(&StringLiteral_17358/*"battle_result"*/);
    sub_1D0F0B4(&StringLiteral_19635/*"event_trade_start"*/);
    sub_1D0F0B4(&StringLiteral_20049/*"friend_offer"*/);
    sub_1D0F0B4(&StringLiteral_17562/*"blacklist_top"*/);
    sub_1D0F0B4(&StringLiteral_21768/*"login"*/);
    sub_1D0F0B4(&StringLiteral_20051/*"friend_remove"*/);
    sub_1D0F0B4(&StringLiteral_25296/*"war_board_turn_end"*/);
    sub_1D0F0B4(&StringLiteral_18807/*"debug_add_servant"*/);
    sub_1D0F0B4(&StringLiteral_18043/*"card_combine_skill"*/);
    sub_1D0F0B4(&StringLiteral_19553/*"event_mission_notify"*/);
    sub_1D0F0B4(&StringLiteral_18811/*"debug_server_time"*/);
    sub_1D0F0B4(&StringLiteral_23253/*"profile"*/);
    sub_1D0F0B4(&StringLiteral_19592/*"event_receive_cooltime_reward"*/);
    sub_1D0F0B4(&StringLiteral_20268/*"grand_setup_svt"*/);
    sub_1D0F0B4(&StringLiteral_25107/*"user_status_flag_set"*/);
    sub_1D0F0B4(&StringLiteral_18046/*"card_exchange_append_passive_skill"*/);
    sub_1D0F0B4(&StringLiteral_25291/*"war_board_reinforcements"*/);
    sub_1D0F0B4(&StringLiteral_19634/*"event_trade_receive"*/);
    sub_1D0F0B4(&StringLiteral_18047/*"card_favorite"*/);
    sub_1D0F0B4(&StringLiteral_17364/*"battle_turn"*/);
    sub_1D0F0B4(&StringLiteral_25294/*"war_board_start"*/);
    sub_1D0F0B4(&StringLiteral_25287/*"war_board_continue"*/);
    sub_1D0F0B4(&StringLiteral_24365/*"svt_equip_combine"*/);
    sub_1D0F0B4(&StringLiteral_24746/*"tutorial_set"*/);
    sub_1D0F0B4(&StringLiteral_24197/*"storage_takeout"*/);
    sub_1D0F0B4(&StringLiteral_17269/*"bank_status"*/);
    sub_1D0F0B4(&StringLiteral_23298/*"purchase_by_stone"*/);
    sub_1D0F0B4(&StringLiteral_20048/*"friend_message_hide_sync"*/);
    sub_1D0F0B4(&StringLiteral_18450/*"command_code_statussync"*/);
    sub_1D0F0B4(&StringLiteral_25278/*"war_board_battle_result"*/);
    sub_1D0F0B4(&StringLiteral_23258/*"profile_edit_name"*/);
    sub_1D0F0B4(&StringLiteral_23969/*"signup"*/);
    sub_1D0F0B4(&StringLiteral_19517/*"event_digging"*/);
    sub_1D0F0B4(&StringLiteral_18448/*"command_code_lock"*/);
    sub_1D0F0B4(&StringLiteral_18269/*"class_board_release_lock"*/);
    sub_1D0F0B4(&StringLiteral_25290/*"war_board_move"*/);
    sub_1D0F0B4(&StringLiteral_18451/*"command_code_unlock"*/);
    sub_1D0F0B4(&StringLiteral_23749/*"sell_svt"*/);
    sub_1D0F0B4(&StringLiteral_23483/*"regist_account"*/);
    sub_1D0F0B4(&StringLiteral_17359/*"battle_resume"*/);
    sub_1D0F0B4(&StringLiteral_19897/*"follower_edit_name"*/);
    sub_1D0F0B4(&StringLiteral_18809/*"debug_edit_servant"*/);
    sub_1D0F0B4(&StringLiteral_18446/*"command_code_attach"*/);
    sub_1D0F0B4(&StringLiteral_19549/*"event_location"*/);
    sub_1D0F0B4(&StringLiteral_18447/*"command_code_detach"*/);
    sub_1D0F0B4(&StringLiteral_18449/*"command_code_setstatus"*/);
    sub_1D0F0B4(&StringLiteral_17362/*"battle_skip"*/);
    sub_1D0F0B4(&StringLiteral_19525/*"event_expedition_finish"*/);
    sub_1D0F0B4(&StringLiteral_18810/*"debug_quest"*/);
    sub_1D0F0B4(&StringLiteral_19554/*"event_mission_random_cancel"*/);
    sub_1D0F0B4(&StringLiteral_23297/*"purchase_by_bank"*/);
    sub_1D0F0B4(&StringLiteral_20052/*"friend_top"*/);
    sub_1D0F0B4(&StringLiteral_20116/*"gamedata"*/);
    sub_1D0F0B4(&StringLiteral_19606/*"event_script_flag_on"*/);
    sub_1D0F0B4(&StringLiteral_19898/*"follower_setup"*/);
    sub_1D0F0B4(&StringLiteral_19526/*"event_expedition_start"*/);
    sub_1D0F0B4(&StringLiteral_18544/*"continue_decide"*/);
    sub_1D0F0B4(&StringLiteral_20047/*"friend_lock_sync"*/);
    sub_1D0F0B4(&StringLiteral_18056/*"card_svt_flag"*/);
    sub_1D0F0B4(&StringLiteral_23229/*"present_receive"*/);
    sub_1D0F0B4(&StringLiteral_18545/*"continue_input"*/);
    sub_1D0F0B4(&StringLiteral_20050/*"friend_reject"*/);
    sub_1D0F0B4(&StringLiteral_19527/*"event_fortification"*/);
    sub_1D0F0B4(&StringLiteral_19596/*"event_reset_digging"*/);
    sub_1D0F0B4(&StringLiteral_17561/*"blacklist_remove"*/);
    sub_1D0F0B4(&StringLiteral_19593/*"event_recoverySync"*/);
    sub_1D0F0B4(&StringLiteral_25297/*"war_board_wall_attack"*/);
    sub_1D0F0B4(&StringLiteral_24196/*"storage_takein"*/);
    sub_1D0F0B4(&StringLiteral_18316/*"code_input"*/);
    sub_1D0F0B4(&StringLiteral_20101/*"gacha_draw"*/);
    sub_1D0F0B4(&StringLiteral_25286/*"war_board_command_spell"*/);
    sub_1D0F0B4(&StringLiteral_18270/*"class_board_release_square"*/);
    sub_1D0F0B4(&StringLiteral_20046/*"friend_cancel"*/);
    sub_1D0F0B4(&StringLiteral_19506/*"event_change_passive_skill"*/);
    sub_1D0F0B4(&StringLiteral_18044/*"card_combine_td"*/);
    sub_1D0F0B4(&StringLiteral_17357/*"battle_reset"*/);
    sub_1D0F0B4(&StringLiteral_23286/*"purchase"*/);
    sub_1D0F0B4(&StringLiteral_20269/*"grand_setup_svt_equip"*/);
    sub_1D0F0B4(&StringLiteral_19555/*"event_mission_receive"*/);
    sub_1D0F0B4(&StringLiteral_18042/*"card_combine_passive_skill"*/);
    sub_1D0F0B4(&StringLiteral_21448/*"item_recover"*/);
    sub_1D0F0B4(&StringLiteral_17356/*"battle_quest_route"*/);
    sub_1D0F0B4(&StringLiteral_24745/*"tutorial_event_flag_set"*/);
    sub_1D0F0B4(&StringLiteral_17349/*"battle_command_spell"*/);
    sub_1D0F0B4(&StringLiteral_18824/*"deck_edit_name"*/);
    sub_1D0F0B4(&StringLiteral_17350/*"battle_interruption"*/);
    sub_1D0F0B4(&StringLiteral_18452/*"command_spell"*/);
    sub_1D0F0B4(&StringLiteral_25293/*"war_board_setup"*/);
    sub_1D0F0B4(&StringLiteral_17560/*"blacklist_regist"*/);
    sub_1D0F0B4(&StringLiteral_17365/*"battle_use_continue"*/);
    sub_1D0F0B4(&StringLiteral_17361/*"battle_setup"*/);
    sub_1D0F0B4(&StringLiteral_19872/*"follow_remove"*/);
    sub_1D0F0B4(&StringLiteral_19899/*"follower_setup_recommend_support"*/);
    sub_1D0F0B4(&StringLiteral_21449/*"item_use"*/);
    sub_1D0F0B4(&StringLiteral_23402/*"raid_auto_update"*/);
    sub_1D0F0B4(&StringLiteral_23535/*"reset_purchase_num"*/);
    sub_1D0F0B4(&StringLiteral_18002/*"cancel_purchase_by_bank"*/);
    sub_1D0F0B4(&StringLiteral_19871/*"follow_assign"*/);
    sub_1D0F0B4(&StringLiteral_18546/*"continue_prepare"*/);
    sub_1D0F0B4(&StringLiteral_23221/*"prepare_purchase_by_bank"*/);
    sub_1D0F0B4(&StringLiteral_24743/*"tutorial_clear"*/);
    sub_1D0F0B4(&StringLiteral_19515/*"event_daily_point"*/);
    sub_1D0F0B4(&StringLiteral_17628/*"box_gacha_reset"*/);
    sub_1D0F0B4(&StringLiteral_18291/*"client_api_error_dialog"*/);
    sub_1D0F0B4(&StringLiteral_25292/*"war_board_resume"*/);
    sub_1D0F0B4(&StringLiteral_18045/*"card_command_card_exceed"*/);
    sub_1D0F0B4(&StringLiteral_25104/*"user_formation"*/);
    sub_1D0F0B4(&StringLiteral_18048/*"card_friendship_exceed"*/);
    sub_1D0F0B4(&StringLiteral_24366/*"svt_equip_set"*/);
    sub_1D0F0B4(&StringLiteral_18812/*"debug_update_user"*/);
    sub_1D0F0B4(&StringLiteral_18050/*"card_init_random_limit_count"*/);
    sub_1D0F0B4(&StringLiteral_19595/*"event_reset_data_lost_battle"*/);
    sub_1D0F0B4(&StringLiteral_25024/*"userDelete"*/);
    sub_1D0F0B4(&StringLiteral_18825/*"deck_setup"*/);
    sub_1D0F0B4(&StringLiteral_18041/*"card_combine_limit_special"*/);
    sub_1D0F0B4(&StringLiteral_18225/*"check_date_version"*/);
    sub_1D0F0B4(&StringLiteral_23257/*"profile_edit_birth"*/);
    sub_1D0F0B4(&StringLiteral_18052/*"card_locksync"*/);
    sub_1D0F0B4(&StringLiteral_18040/*"card_combine_exceed"*/);
    sub_1D0F0B4(&StringLiteral_18051/*"card_limit"*/);
    sub_1D0F0B4(&StringLiteral_25285/*"war_board_buff_save"*/);
    sub_1D0F0B4(&StringLiteral_19514/*"event_create_recipe"*/);
    byte_4E765B7 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1D0F300(System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_35C7DCC *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1D0F30C(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_23969/*"signup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_23483/*"regist_account"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_20116/*"gamedata"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_21768/*"login"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_20363/*"home"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_20101/*"gacha_draw"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_18825/*"deck_setup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_25104/*"user_formation"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_23286/*"purchase"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_23298/*"purchase_by_stone"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_23297/*"purchase_by_bank"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_23749/*"sell_svt"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_20049/*"friend_offer"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_20045/*"friend_accept"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_20050/*"friend_reject"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_20046/*"friend_cancel"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_20051/*"friend_remove"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_23253/*"profile"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_23258/*"profile_edit_name"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_17361/*"battle_setup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_17364/*"battle_turn"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_17358/*"battle_result"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_17349/*"battle_command_spell"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_17365/*"battle_use_continue"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_18038/*"card_combine"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_18043/*"card_combine_skill"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_18044/*"card_combine_td"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_18048/*"card_friendship_exceed"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_23229/*"present_receive"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_18316/*"code_input"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_18546/*"continue_prepare"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_18545/*"continue_input"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_18544/*"continue_decide"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_18047/*"card_favorite"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_18050/*"card_init_random_limit_count"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24746/*"tutorial_set"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_24743/*"tutorial_clear"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_17359/*"battle_resume"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_18051/*"card_limit"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_24366/*"svt_equip_set"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_24365/*"svt_equip_combine"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_18810/*"debug_quest"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_23257/*"profile_edit_birth"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_21449/*"item_use"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_21448/*"item_recover"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_18452/*"command_spell"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_17627/*"box_gacha_draw"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_17628/*"box_gacha_reset"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_19553/*"event_mission_notify"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_19555/*"event_mission_receive"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_19898/*"follower_setup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_17360/*"battle_scenario"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_18824/*"deck_edit_name"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_18811/*"debug_server_time"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_18040/*"card_combine_exceed"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_18052/*"card_locksync"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_24745/*"tutorial_event_flag_set"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_24196/*"storage_takein"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_24197/*"storage_takeout"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_19897/*"follower_edit_name"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_17269/*"bank_status"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_18039/*"card_combine_costume"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_17562/*"blacklist_top"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_17560/*"blacklist_regist"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_17561/*"blacklist_remove"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_20048/*"friend_message_hide_sync"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_19606/*"event_script_flag_on"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_18056/*"card_svt_flag"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_19549/*"event_location"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_18055/*"card_statussync"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_18449/*"command_code_setstatus"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_18450/*"command_code_statussync"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_19593/*"event_recoverySync"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_19516/*"event_deck_setup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_25107/*"user_status_flag_set"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_20052/*"friend_top"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_18446/*"command_code_attach"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_18447/*"command_code_detach"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_18451/*"command_code_unlock"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_18812/*"debug_update_user"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_19871/*"follow_assign"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_19872/*"follow_remove"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_19515/*"event_daily_point"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_18045/*"card_command_card_exceed"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_18041/*"card_combine_limit_special"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_17356/*"battle_quest_route"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_20047/*"friend_lock_sync"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_23402/*"raid_auto_update"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_18448/*"command_code_lock"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_25294/*"war_board_start"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_25293/*"war_board_setup"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_25285/*"war_board_buff_save"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_25290/*"war_board_move"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_25295/*"war_board_treasure"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_25296/*"war_board_turn_end"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_25289/*"war_board_master_attack"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_25297/*"war_board_wall_attack"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_25286/*"war_board_command_spell"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_25278/*"war_board_battle_result"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_25288/*"war_board_finish"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_25292/*"war_board_resume"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_25287/*"war_board_continue"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_25291/*"war_board_reinforcements"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_19605/*"event_scan_panel_map"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_17366/*"battle_use_continue_item"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_18225/*"check_date_version"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_21449/*"item_use"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_18042/*"card_combine_passive_skill"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_24703/*"treasure_box_draw"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_19554/*"event_mission_random_cancel"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_18320/*"coin_room_put"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_25024/*"userDelete"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_17357/*"battle_reset"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_19517/*"event_digging"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_19596/*"event_reset_digging"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_19526/*"event_expedition_start"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_19525/*"event_expedition_finish"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_18291/*"client_api_error_dialog"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_19592/*"event_receive_cooltime_reward"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_19514/*"event_create_recipe"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_19527/*"event_fortification"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_18270/*"class_board_release_square"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_18269/*"class_board_release_lock"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_19595/*"event_reset_data_lost_battle"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_18807/*"debug_add_servant"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_18809/*"debug_edit_servant"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_18808/*"debug_delete_servant"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_17350/*"battle_interruption"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_19635/*"event_trade_start"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_19634/*"event_trade_receive"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_23221/*"prepare_purchase_by_bank"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_18002/*"cancel_purchase_by_bank"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_19899/*"follower_setup_recommend_support"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_23535/*"reset_purchase_num"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_18046/*"card_exchange_append_passive_skill"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_20268/*"grand_setup_svt"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_20269/*"grand_setup_svt_equip"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_17362/*"battle_skip"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_19506/*"event_change_passive_skill"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  ResponseCommandKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)ResponseCommandKind_TypeInfo->static_fields,
    (int32_t)v1,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void ResponseCommandKind___ctor(ResponseCommandKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *ResponseCommandKind__GetName(int32_t kind, const MethodInfo *method)
{
  ResponseCommandKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4E765B5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
    sub_1D0F0B4(&ResponseCommandKind_TypeInfo);
    byte_4E765B5 = 1;
  }
  v3 = ResponseCommandKind_TypeInfo;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
    v3 = ResponseCommandKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1D0F30C(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_35C8700 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
}


ResponseData_o *ResponseCommandKind__SearchData(
        int32_t kind,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  System_String_o *Name; // x0
  __int64 v6; // x1
  int max_length; // w8
  System_String_o *v8; // x20
  unsigned int v9; // w22
  ResponseData_o *v10; // x21

  if ( (byte_4E765B6 & 1) == 0 )
  {
    sub_1D0F0B4(&ResponseCommandKind_TypeInfo);
    byte_4E765B6 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  Name = ResponseCommandKind__GetName(kind, (const MethodInfo *)responseList);
  if ( !responseList )
    goto LABEL_15;
  max_length = responseList->max_length;
  if ( max_length >= 1 )
  {
    v8 = Name;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1D0F314(Name);
      v10 = responseList->m_Items[v9];
      if ( !v10 )
        break;
      Name = (System_String_o *)System_String__op_Equality(v10->fields.nid, v8, 0);
      if ( ((unsigned __int8)Name & 1) != 0 )
        return v10;
      max_length = responseList->max_length;
      if ( (int)++v9 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1D0F30C(Name, v6);
  }
  return 0;
}