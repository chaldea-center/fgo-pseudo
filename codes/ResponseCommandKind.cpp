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

  if ( (byte_4E03943 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
    sub_1CE6700(&System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
    sub_1CE6700(&ResponseCommandKind_TypeInfo);
    sub_1CE6700(&StringLiteral_17962/*"card_combine"*/);
    sub_1CE6700(&StringLiteral_17979/*"card_statussync"*/);
    sub_1CE6700(&StringLiteral_19957/*"friend_accept"*/);
    sub_1CE6700(&StringLiteral_20275/*"home"*/);
    sub_1CE6700(&StringLiteral_25186/*"war_board_treasure"*/);
    sub_1CE6700(&StringLiteral_17287/*"battle_scenario"*/);
    sub_1CE6700(&StringLiteral_19526/*"event_scan_panel_map"*/);
    sub_1CE6700(&StringLiteral_17553/*"box_gacha_draw"*/);
    sub_1CE6700(&StringLiteral_24595/*"treasure_box_draw"*/);
    sub_1CE6700(&StringLiteral_25180/*"war_board_master_attack"*/);
    sub_1CE6700(&StringLiteral_25179/*"war_board_finish"*/);
    sub_1CE6700(&StringLiteral_17293/*"battle_use_continue_item"*/);
    sub_1CE6700(&StringLiteral_19437/*"event_deck_setup"*/);
    sub_1CE6700(&StringLiteral_18242/*"coin_room_put"*/);
    sub_1CE6700(&StringLiteral_18730/*"debug_delete_servant"*/);
    sub_1CE6700(&StringLiteral_17963/*"card_combine_costume"*/);
    sub_1CE6700(&StringLiteral_17285/*"battle_result"*/);
    sub_1CE6700(&StringLiteral_19556/*"event_trade_start"*/);
    sub_1CE6700(&StringLiteral_19961/*"friend_offer"*/);
    sub_1CE6700(&StringLiteral_17489/*"blacklist_top"*/);
    sub_1CE6700(&StringLiteral_21675/*"login"*/);
    sub_1CE6700(&StringLiteral_19963/*"friend_remove"*/);
    sub_1CE6700(&StringLiteral_25187/*"war_board_turn_end"*/);
    sub_1CE6700(&StringLiteral_18729/*"debug_add_servant"*/);
    sub_1CE6700(&StringLiteral_17967/*"card_combine_skill"*/);
    sub_1CE6700(&StringLiteral_19474/*"event_mission_notify"*/);
    sub_1CE6700(&StringLiteral_18733/*"debug_server_time"*/);
    sub_1CE6700(&StringLiteral_23151/*"profile"*/);
    sub_1CE6700(&StringLiteral_19513/*"event_receive_cooltime_reward"*/);
    sub_1CE6700(&StringLiteral_20180/*"grand_setup_svt"*/);
    sub_1CE6700(&StringLiteral_24998/*"user_status_flag_set"*/);
    sub_1CE6700(&StringLiteral_17970/*"card_exchange_append_passive_skill"*/);
    sub_1CE6700(&StringLiteral_25182/*"war_board_reinforcements"*/);
    sub_1CE6700(&StringLiteral_19555/*"event_trade_receive"*/);
    sub_1CE6700(&StringLiteral_17971/*"card_favorite"*/);
    sub_1CE6700(&StringLiteral_17291/*"battle_turn"*/);
    sub_1CE6700(&StringLiteral_25185/*"war_board_start"*/);
    sub_1CE6700(&StringLiteral_25178/*"war_board_continue"*/);
    sub_1CE6700(&StringLiteral_24259/*"svt_equip_combine"*/);
    sub_1CE6700(&StringLiteral_24638/*"tutorial_set"*/);
    sub_1CE6700(&StringLiteral_24095/*"storage_takeout"*/);
    sub_1CE6700(&StringLiteral_17198/*"bank_status"*/);
    sub_1CE6700(&StringLiteral_23196/*"purchase_by_stone"*/);
    sub_1CE6700(&StringLiteral_19960/*"friend_message_hide_sync"*/);
    sub_1CE6700(&StringLiteral_18372/*"command_code_statussync"*/);
    sub_1CE6700(&StringLiteral_25169/*"war_board_battle_result"*/);
    sub_1CE6700(&StringLiteral_23156/*"profile_edit_name"*/);
    sub_1CE6700(&StringLiteral_23867/*"signup"*/);
    sub_1CE6700(&StringLiteral_19438/*"event_digging"*/);
    sub_1CE6700(&StringLiteral_18370/*"command_code_lock"*/);
    sub_1CE6700(&StringLiteral_18191/*"class_board_release_lock"*/);
    sub_1CE6700(&StringLiteral_25181/*"war_board_move"*/);
    sub_1CE6700(&StringLiteral_18373/*"command_code_unlock"*/);
    sub_1CE6700(&StringLiteral_23647/*"sell_svt"*/);
    sub_1CE6700(&StringLiteral_23381/*"regist_account"*/);
    sub_1CE6700(&StringLiteral_17286/*"battle_resume"*/);
    sub_1CE6700(&StringLiteral_19810/*"follower_edit_name"*/);
    sub_1CE6700(&StringLiteral_18731/*"debug_edit_servant"*/);
    sub_1CE6700(&StringLiteral_18368/*"command_code_attach"*/);
    sub_1CE6700(&StringLiteral_19470/*"event_location"*/);
    sub_1CE6700(&StringLiteral_18369/*"command_code_detach"*/);
    sub_1CE6700(&StringLiteral_18371/*"command_code_setstatus"*/);
    sub_1CE6700(&StringLiteral_17289/*"battle_skip"*/);
    sub_1CE6700(&StringLiteral_19446/*"event_expedition_finish"*/);
    sub_1CE6700(&StringLiteral_18732/*"debug_quest"*/);
    sub_1CE6700(&StringLiteral_19475/*"event_mission_random_cancel"*/);
    sub_1CE6700(&StringLiteral_23195/*"purchase_by_bank"*/);
    sub_1CE6700(&StringLiteral_19964/*"friend_top"*/);
    sub_1CE6700(&StringLiteral_20028/*"gamedata"*/);
    sub_1CE6700(&StringLiteral_19527/*"event_script_flag_on"*/);
    sub_1CE6700(&StringLiteral_19811/*"follower_setup"*/);
    sub_1CE6700(&StringLiteral_19447/*"event_expedition_start"*/);
    sub_1CE6700(&StringLiteral_18466/*"continue_decide"*/);
    sub_1CE6700(&StringLiteral_19959/*"friend_lock_sync"*/);
    sub_1CE6700(&StringLiteral_17980/*"card_svt_flag"*/);
    sub_1CE6700(&StringLiteral_23127/*"present_receive"*/);
    sub_1CE6700(&StringLiteral_18467/*"continue_input"*/);
    sub_1CE6700(&StringLiteral_19962/*"friend_reject"*/);
    sub_1CE6700(&StringLiteral_19448/*"event_fortification"*/);
    sub_1CE6700(&StringLiteral_19517/*"event_reset_digging"*/);
    sub_1CE6700(&StringLiteral_17488/*"blacklist_remove"*/);
    sub_1CE6700(&StringLiteral_19514/*"event_recoverySync"*/);
    sub_1CE6700(&StringLiteral_25188/*"war_board_wall_attack"*/);
    sub_1CE6700(&StringLiteral_24094/*"storage_takein"*/);
    sub_1CE6700(&StringLiteral_18238/*"code_input"*/);
    sub_1CE6700(&StringLiteral_20013/*"gacha_draw"*/);
    sub_1CE6700(&StringLiteral_25177/*"war_board_command_spell"*/);
    sub_1CE6700(&StringLiteral_18192/*"class_board_release_square"*/);
    sub_1CE6700(&StringLiteral_19958/*"friend_cancel"*/);
    sub_1CE6700(&StringLiteral_19427/*"event_change_passive_skill"*/);
    sub_1CE6700(&StringLiteral_17968/*"card_combine_td"*/);
    sub_1CE6700(&StringLiteral_17284/*"battle_reset"*/);
    sub_1CE6700(&StringLiteral_23184/*"purchase"*/);
    sub_1CE6700(&StringLiteral_20181/*"grand_setup_svt_equip"*/);
    sub_1CE6700(&StringLiteral_19476/*"event_mission_receive"*/);
    sub_1CE6700(&StringLiteral_17966/*"card_combine_passive_skill"*/);
    sub_1CE6700(&StringLiteral_21355/*"item_recover"*/);
    sub_1CE6700(&StringLiteral_17283/*"battle_quest_route"*/);
    sub_1CE6700(&StringLiteral_24637/*"tutorial_event_flag_set"*/);
    sub_1CE6700(&StringLiteral_17276/*"battle_command_spell"*/);
    sub_1CE6700(&StringLiteral_18746/*"deck_edit_name"*/);
    sub_1CE6700(&StringLiteral_17277/*"battle_interruption"*/);
    sub_1CE6700(&StringLiteral_18374/*"command_spell"*/);
    sub_1CE6700(&StringLiteral_25184/*"war_board_setup"*/);
    sub_1CE6700(&StringLiteral_17487/*"blacklist_regist"*/);
    sub_1CE6700(&StringLiteral_17292/*"battle_use_continue"*/);
    sub_1CE6700(&StringLiteral_17288/*"battle_setup"*/);
    sub_1CE6700(&StringLiteral_19793/*"follow_remove"*/);
    sub_1CE6700(&StringLiteral_19812/*"follower_setup_recommend_support"*/);
    sub_1CE6700(&StringLiteral_21356/*"item_use"*/);
    sub_1CE6700(&StringLiteral_23300/*"raid_auto_update"*/);
    sub_1CE6700(&StringLiteral_23433/*"reset_purchase_num"*/);
    sub_1CE6700(&StringLiteral_17926/*"cancel_purchase_by_bank"*/);
    sub_1CE6700(&StringLiteral_19792/*"follow_assign"*/);
    sub_1CE6700(&StringLiteral_18468/*"continue_prepare"*/);
    sub_1CE6700(&StringLiteral_23119/*"prepare_purchase_by_bank"*/);
    sub_1CE6700(&StringLiteral_24635/*"tutorial_clear"*/);
    sub_1CE6700(&StringLiteral_19436/*"event_daily_point"*/);
    sub_1CE6700(&StringLiteral_17554/*"box_gacha_reset"*/);
    sub_1CE6700(&StringLiteral_18213/*"client_api_error_dialog"*/);
    sub_1CE6700(&StringLiteral_25183/*"war_board_resume"*/);
    sub_1CE6700(&StringLiteral_17969/*"card_command_card_exceed"*/);
    sub_1CE6700(&StringLiteral_24995/*"user_formation"*/);
    sub_1CE6700(&StringLiteral_17972/*"card_friendship_exceed"*/);
    sub_1CE6700(&StringLiteral_24260/*"svt_equip_set"*/);
    sub_1CE6700(&StringLiteral_18734/*"debug_update_user"*/);
    sub_1CE6700(&StringLiteral_17974/*"card_init_random_limit_count"*/);
    sub_1CE6700(&StringLiteral_19516/*"event_reset_data_lost_battle"*/);
    sub_1CE6700(&StringLiteral_24915/*"userDelete"*/);
    sub_1CE6700(&StringLiteral_18747/*"deck_setup"*/);
    sub_1CE6700(&StringLiteral_17965/*"card_combine_limit_special"*/);
    sub_1CE6700(&StringLiteral_18147/*"check_date_version"*/);
    sub_1CE6700(&StringLiteral_23155/*"profile_edit_birth"*/);
    sub_1CE6700(&StringLiteral_17976/*"card_locksync"*/);
    sub_1CE6700(&StringLiteral_17964/*"card_combine_exceed"*/);
    sub_1CE6700(&StringLiteral_17975/*"card_limit"*/);
    sub_1CE6700(&StringLiteral_25176/*"war_board_buff_save"*/);
    sub_1CE6700(&StringLiteral_19435/*"event_create_recipe"*/);
    byte_4E03943 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1CE694C(System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_357B178 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1CE6958(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_23867/*"signup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_23381/*"regist_account"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_20028/*"gamedata"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_21675/*"login"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_20275/*"home"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_20013/*"gacha_draw"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_18747/*"deck_setup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_24995/*"user_formation"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_23184/*"purchase"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_23196/*"purchase_by_stone"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_23195/*"purchase_by_bank"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_23647/*"sell_svt"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_19961/*"friend_offer"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_19957/*"friend_accept"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_19962/*"friend_reject"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_19958/*"friend_cancel"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_19963/*"friend_remove"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_23151/*"profile"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_23156/*"profile_edit_name"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_17288/*"battle_setup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_17291/*"battle_turn"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_17285/*"battle_result"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_17276/*"battle_command_spell"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_17292/*"battle_use_continue"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_17962/*"card_combine"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_17967/*"card_combine_skill"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_17968/*"card_combine_td"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_17972/*"card_friendship_exceed"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_23127/*"present_receive"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_18238/*"code_input"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_18468/*"continue_prepare"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_18467/*"continue_input"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_18466/*"continue_decide"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_17971/*"card_favorite"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_17974/*"card_init_random_limit_count"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24638/*"tutorial_set"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_24635/*"tutorial_clear"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_17286/*"battle_resume"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_17975/*"card_limit"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_24260/*"svt_equip_set"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_24259/*"svt_equip_combine"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_18732/*"debug_quest"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_23155/*"profile_edit_birth"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_21356/*"item_use"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_21355/*"item_recover"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_18374/*"command_spell"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_17553/*"box_gacha_draw"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_17554/*"box_gacha_reset"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_19474/*"event_mission_notify"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_19476/*"event_mission_receive"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_19811/*"follower_setup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_17287/*"battle_scenario"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_18746/*"deck_edit_name"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_18733/*"debug_server_time"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_17964/*"card_combine_exceed"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_17976/*"card_locksync"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_24637/*"tutorial_event_flag_set"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_24094/*"storage_takein"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_24095/*"storage_takeout"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_19810/*"follower_edit_name"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_17198/*"bank_status"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_17963/*"card_combine_costume"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_17489/*"blacklist_top"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_17487/*"blacklist_regist"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_17488/*"blacklist_remove"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_19960/*"friend_message_hide_sync"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_19527/*"event_script_flag_on"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_17980/*"card_svt_flag"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_19470/*"event_location"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_17979/*"card_statussync"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_18371/*"command_code_setstatus"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_18372/*"command_code_statussync"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_19514/*"event_recoverySync"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_19437/*"event_deck_setup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_24998/*"user_status_flag_set"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_19964/*"friend_top"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_18368/*"command_code_attach"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_18369/*"command_code_detach"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_18373/*"command_code_unlock"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_18734/*"debug_update_user"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_19792/*"follow_assign"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_19793/*"follow_remove"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_19436/*"event_daily_point"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_17969/*"card_command_card_exceed"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_17965/*"card_combine_limit_special"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_17283/*"battle_quest_route"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_19959/*"friend_lock_sync"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_23300/*"raid_auto_update"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_18370/*"command_code_lock"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_25185/*"war_board_start"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_25184/*"war_board_setup"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_25176/*"war_board_buff_save"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_25181/*"war_board_move"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_25186/*"war_board_treasure"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_25187/*"war_board_turn_end"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_25180/*"war_board_master_attack"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_25188/*"war_board_wall_attack"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_25177/*"war_board_command_spell"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_25169/*"war_board_battle_result"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_25179/*"war_board_finish"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_25183/*"war_board_resume"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_25178/*"war_board_continue"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_25182/*"war_board_reinforcements"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_19526/*"event_scan_panel_map"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_17293/*"battle_use_continue_item"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_18147/*"check_date_version"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_21356/*"item_use"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_17966/*"card_combine_passive_skill"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_24595/*"treasure_box_draw"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_19475/*"event_mission_random_cancel"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_18242/*"coin_room_put"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_24915/*"userDelete"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_17284/*"battle_reset"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_19438/*"event_digging"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_19517/*"event_reset_digging"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_19447/*"event_expedition_start"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_19446/*"event_expedition_finish"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_18213/*"client_api_error_dialog"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_19513/*"event_receive_cooltime_reward"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_19435/*"event_create_recipe"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_19448/*"event_fortification"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_18192/*"class_board_release_square"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_18191/*"class_board_release_lock"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_19516/*"event_reset_data_lost_battle"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_18729/*"debug_add_servant"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_18731/*"debug_edit_servant"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_18730/*"debug_delete_servant"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_17277/*"battle_interruption"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_19556/*"event_trade_start"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_19555/*"event_trade_receive"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_23119/*"prepare_purchase_by_bank"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17926/*"cancel_purchase_by_bank"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_19812/*"follower_setup_recommend_support"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_23433/*"reset_purchase_num"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_17970/*"card_exchange_append_passive_skill"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_20180/*"grand_setup_svt"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_20181/*"grand_setup_svt_equip"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_17289/*"battle_skip"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_19427/*"event_change_passive_skill"*/,
    (const MethodInfo_357BB4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  ResponseCommandKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__o *)v1;
  sub_1CE66A4(
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

  if ( (byte_4E03941 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
    sub_1CE6700(&ResponseCommandKind_TypeInfo);
    byte_4E03941 = 1;
  }
  v3 = ResponseCommandKind_TypeInfo;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
    v3 = ResponseCommandKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1CE6958(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_357BAAC *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
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

  if ( (byte_4E03942 & 1) == 0 )
  {
    sub_1CE6700(&ResponseCommandKind_TypeInfo);
    byte_4E03942 = 1;
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
        sub_1CE6960(Name);
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
    sub_1CE6958(Name, v6);
  }
  return 0;
}