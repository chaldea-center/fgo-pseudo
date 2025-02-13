void __fastcall ResponseCommandKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDB524 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&StringLiteral_18068/*"card_combine"*/);
    sub_1C21E38(&StringLiteral_18085/*"card_statussync"*/);
    sub_1C21E38(&StringLiteral_19979/*"friend_accept"*/);
    sub_1C21E38(&StringLiteral_20291/*"home"*/);
    sub_1C21E38(&StringLiteral_25097/*"war_board_treasure"*/);
    sub_1C21E38(&StringLiteral_17424/*"battle_scenario"*/);
    sub_1C21E38(&StringLiteral_19582/*"event_scan_panel_map"*/);
    sub_1C21E38(&StringLiteral_17688/*"box_gacha_draw"*/);
    sub_1C21E38(&StringLiteral_24497/*"treasure_box_draw"*/);
    sub_1C21E38(&StringLiteral_25091/*"war_board_master_attack"*/);
    sub_1C21E38(&StringLiteral_25090/*"war_board_finish"*/);
    sub_1C21E38(&StringLiteral_17430/*"battle_use_continue_item"*/);
    sub_1C21E38(&StringLiteral_19495/*"event_deck_setup"*/);
    sub_1C21E38(&StringLiteral_18349/*"coin_room_put"*/);
    sub_1C21E38(&StringLiteral_18823/*"debug_delete_servant"*/);
    sub_1C21E38(&StringLiteral_18069/*"card_combine_costume"*/);
    sub_1C21E38(&StringLiteral_17422/*"battle_result"*/);
    sub_1C21E38(&StringLiteral_19612/*"event_trade_start"*/);
    sub_1C21E38(&StringLiteral_19983/*"friend_offer"*/);
    sub_1C21E38(&StringLiteral_17623/*"blacklist_top"*/);
    sub_1C21E38(&StringLiteral_21580/*"login"*/);
    sub_1C21E38(&StringLiteral_19985/*"friend_remove"*/);
    sub_1C21E38(&StringLiteral_25098/*"war_board_turn_end"*/);
    sub_1C21E38(&StringLiteral_18822/*"debug_add_servant"*/);
    sub_1C21E38(&StringLiteral_18073/*"card_combine_skill"*/);
    sub_1C21E38(&StringLiteral_19530/*"event_mission_notify"*/);
    sub_1C21E38(&StringLiteral_18826/*"debug_server_time"*/);
    sub_1C21E38(&StringLiteral_23026/*"profile"*/);
    sub_1C21E38(&StringLiteral_19569/*"event_receive_cooltime_reward"*/);
    sub_1C21E38(&StringLiteral_24902/*"user_status_flag_set"*/);
    sub_1C21E38(&StringLiteral_18076/*"card_exchange_append_passive_skill"*/);
    sub_1C21E38(&StringLiteral_25093/*"war_board_reinforcements"*/);
    sub_1C21E38(&StringLiteral_19611/*"event_trade_receive"*/);
    sub_1C21E38(&StringLiteral_18077/*"card_favorite"*/);
    sub_1C21E38(&StringLiteral_17428/*"battle_turn"*/);
    sub_1C21E38(&StringLiteral_25096/*"war_board_start"*/);
    sub_1C21E38(&StringLiteral_25089/*"war_board_continue"*/);
    sub_1C21E38(&StringLiteral_24146/*"svt_equip_combine"*/);
    sub_1C21E38(&StringLiteral_24538/*"tutorial_set"*/);
    sub_1C21E38(&StringLiteral_23985/*"storage_takeout"*/);
    sub_1C21E38(&StringLiteral_17344/*"bank_status"*/);
    sub_1C21E38(&StringLiteral_23072/*"purchase_by_stone"*/);
    sub_1C21E38(&StringLiteral_19982/*"friend_message_hide_sync"*/);
    sub_1C21E38(&StringLiteral_18470/*"command_code_statussync"*/);
    sub_1C21E38(&StringLiteral_25080/*"war_board_battle_result"*/);
    sub_1C21E38(&StringLiteral_23031/*"profile_edit_name"*/);
    sub_1C21E38(&StringLiteral_23751/*"signup"*/);
    sub_1C21E38(&StringLiteral_19496/*"event_digging"*/);
    sub_1C21E38(&StringLiteral_18468/*"command_code_lock"*/);
    sub_1C21E38(&StringLiteral_18299/*"class_board_release_lock"*/);
    sub_1C21E38(&StringLiteral_25092/*"war_board_move"*/);
    sub_1C21E38(&StringLiteral_18471/*"command_code_unlock"*/);
    sub_1C21E38(&StringLiteral_23520/*"sell_svt"*/);
    sub_1C21E38(&StringLiteral_23257/*"regist_account"*/);
    sub_1C21E38(&StringLiteral_17423/*"battle_resume"*/);
    sub_1C21E38(&StringLiteral_19846/*"follower_edit_name"*/);
    sub_1C21E38(&StringLiteral_18824/*"debug_edit_servant"*/);
    sub_1C21E38(&StringLiteral_18466/*"command_code_attach"*/);
    sub_1C21E38(&StringLiteral_19526/*"event_location"*/);
    sub_1C21E38(&StringLiteral_18467/*"command_code_detach"*/);
    sub_1C21E38(&StringLiteral_18469/*"command_code_setstatus"*/);
    sub_1C21E38(&StringLiteral_19502/*"event_expedition_finish"*/);
    sub_1C21E38(&StringLiteral_18825/*"debug_quest"*/);
    sub_1C21E38(&StringLiteral_19531/*"event_mission_random_cancel"*/);
    sub_1C21E38(&StringLiteral_23071/*"purchase_by_bank"*/);
    sub_1C21E38(&StringLiteral_19986/*"friend_top"*/);
    sub_1C21E38(&StringLiteral_20047/*"gamedata"*/);
    sub_1C21E38(&StringLiteral_19583/*"event_script_flag_on"*/);
    sub_1C21E38(&StringLiteral_19847/*"follower_setup"*/);
    sub_1C21E38(&StringLiteral_19503/*"event_expedition_start"*/);
    sub_1C21E38(&StringLiteral_18557/*"continue_decide"*/);
    sub_1C21E38(&StringLiteral_19981/*"friend_lock_sync"*/);
    sub_1C21E38(&StringLiteral_18086/*"card_svt_flag"*/);
    sub_1C21E38(&StringLiteral_23005/*"present_receive"*/);
    sub_1C21E38(&StringLiteral_18558/*"continue_input"*/);
    sub_1C21E38(&StringLiteral_19984/*"friend_reject"*/);
    sub_1C21E38(&StringLiteral_19504/*"event_fortification"*/);
    sub_1C21E38(&StringLiteral_19573/*"event_reset_digging"*/);
    sub_1C21E38(&StringLiteral_17622/*"blacklist_remove"*/);
    sub_1C21E38(&StringLiteral_19570/*"event_recoverySync"*/);
    sub_1C21E38(&StringLiteral_25099/*"war_board_wall_attack"*/);
    sub_1C21E38(&StringLiteral_23984/*"storage_takein"*/);
    sub_1C21E38(&StringLiteral_18345/*"code_input"*/);
    sub_1C21E38(&StringLiteral_20040/*"gacha_draw"*/);
    sub_1C21E38(&StringLiteral_25088/*"war_board_command_spell"*/);
    sub_1C21E38(&StringLiteral_18300/*"class_board_release_square"*/);
    sub_1C21E38(&StringLiteral_19980/*"friend_cancel"*/);
    sub_1C21E38(&StringLiteral_18074/*"card_combine_td"*/);
    sub_1C21E38(&StringLiteral_17421/*"battle_reset"*/);
    sub_1C21E38(&StringLiteral_23060/*"purchase"*/);
    sub_1C21E38(&StringLiteral_19532/*"event_mission_receive"*/);
    sub_1C21E38(&StringLiteral_18072/*"card_combine_passive_skill"*/);
    sub_1C21E38(&StringLiteral_21267/*"item_recover"*/);
    sub_1C21E38(&StringLiteral_17420/*"battle_quest_route"*/);
    sub_1C21E38(&StringLiteral_24537/*"tutorial_event_flag_set"*/);
    sub_1C21E38(&StringLiteral_17413/*"battle_command_spell"*/);
    sub_1C21E38(&StringLiteral_18839/*"deck_edit_name"*/);
    sub_1C21E38(&StringLiteral_17414/*"battle_interruption"*/);
    sub_1C21E38(&StringLiteral_18472/*"command_spell"*/);
    sub_1C21E38(&StringLiteral_25095/*"war_board_setup"*/);
    sub_1C21E38(&StringLiteral_17621/*"blacklist_regist"*/);
    sub_1C21E38(&StringLiteral_17429/*"battle_use_continue"*/);
    sub_1C21E38(&StringLiteral_17425/*"battle_setup"*/);
    sub_1C21E38(&StringLiteral_19832/*"follow_remove"*/);
    sub_1C21E38(&StringLiteral_19848/*"follower_setup_recommend_support"*/);
    sub_1C21E38(&StringLiteral_21268/*"item_use"*/);
    sub_1C21E38(&StringLiteral_23173/*"raid_auto_update"*/);
    sub_1C21E38(&StringLiteral_23308/*"reset_purchase_num"*/);
    sub_1C21E38(&StringLiteral_18031/*"cancel_purchase_by_bank"*/);
    sub_1C21E38(&StringLiteral_19831/*"follow_assign"*/);
    sub_1C21E38(&StringLiteral_18559/*"continue_prepare"*/);
    sub_1C21E38(&StringLiteral_22998/*"prepare_purchase_by_bank"*/);
    sub_1C21E38(&StringLiteral_24536/*"tutorial_clear"*/);
    sub_1C21E38(&StringLiteral_19494/*"event_daily_point"*/);
    sub_1C21E38(&StringLiteral_17689/*"box_gacha_reset"*/);
    sub_1C21E38(&StringLiteral_18319/*"client_api_error_dialog"*/);
    sub_1C21E38(&StringLiteral_25094/*"war_board_resume"*/);
    sub_1C21E38(&StringLiteral_18075/*"card_command_card_exceed"*/);
    sub_1C21E38(&StringLiteral_24899/*"user_formation"*/);
    sub_1C21E38(&StringLiteral_18078/*"card_friendship_exceed"*/);
    sub_1C21E38(&StringLiteral_24147/*"svt_equip_set"*/);
    sub_1C21E38(&StringLiteral_18827/*"debug_update_user"*/);
    sub_1C21E38(&StringLiteral_18080/*"card_init_random_limit_count"*/);
    sub_1C21E38(&StringLiteral_19572/*"event_reset_data_lost_battle"*/);
    sub_1C21E38(&StringLiteral_24822/*"userDelete"*/);
    sub_1C21E38(&StringLiteral_18840/*"deck_setup"*/);
    sub_1C21E38(&StringLiteral_18071/*"card_combine_limit_special"*/);
    sub_1C21E38(&StringLiteral_18254/*"check_date_version"*/);
    sub_1C21E38(&StringLiteral_23030/*"profile_edit_birth"*/);
    sub_1C21E38(&StringLiteral_18082/*"card_locksync"*/);
    sub_1C21E38(&StringLiteral_18070/*"card_combine_exceed"*/);
    sub_1C21E38(&StringLiteral_18081/*"card_limit"*/);
    sub_1C21E38(&StringLiteral_25087/*"war_board_buff_save"*/);
    sub_1C21E38(&StringLiteral_19493/*"event_create_recipe"*/);
    byte_4BDB524 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_32E58A4 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1C22094(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0LL,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_23751/*"signup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_23257/*"regist_account"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_20047/*"gamedata"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_21580/*"login"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_20291/*"home"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_20040/*"gacha_draw"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_18840/*"deck_setup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_24899/*"user_formation"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_23060/*"purchase"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_23072/*"purchase_by_stone"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_23071/*"purchase_by_bank"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_23520/*"sell_svt"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_19983/*"friend_offer"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_19979/*"friend_accept"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_19984/*"friend_reject"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_19980/*"friend_cancel"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_19985/*"friend_remove"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_23026/*"profile"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_23031/*"profile_edit_name"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_17425/*"battle_setup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_17428/*"battle_turn"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_17422/*"battle_result"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_17413/*"battle_command_spell"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_17429/*"battle_use_continue"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_18068/*"card_combine"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_18073/*"card_combine_skill"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_18074/*"card_combine_td"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_18078/*"card_friendship_exceed"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_23005/*"present_receive"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_18345/*"code_input"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_18559/*"continue_prepare"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_18558/*"continue_input"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_18557/*"continue_decide"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_18077/*"card_favorite"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_18080/*"card_init_random_limit_count"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24538/*"tutorial_set"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_24536/*"tutorial_clear"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_17423/*"battle_resume"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_18081/*"card_limit"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_24147/*"svt_equip_set"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_24146/*"svt_equip_combine"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_18825/*"debug_quest"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_23030/*"profile_edit_birth"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_21268/*"item_use"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_21267/*"item_recover"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_18472/*"command_spell"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_17688/*"box_gacha_draw"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_17689/*"box_gacha_reset"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_19530/*"event_mission_notify"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_19532/*"event_mission_receive"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_19847/*"follower_setup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_17424/*"battle_scenario"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_18839/*"deck_edit_name"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_18826/*"debug_server_time"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_18070/*"card_combine_exceed"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_18082/*"card_locksync"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_24537/*"tutorial_event_flag_set"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_23984/*"storage_takein"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_23985/*"storage_takeout"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_19846/*"follower_edit_name"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_17344/*"bank_status"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_18069/*"card_combine_costume"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_17623/*"blacklist_top"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_17621/*"blacklist_regist"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_17622/*"blacklist_remove"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_19982/*"friend_message_hide_sync"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_19583/*"event_script_flag_on"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_18086/*"card_svt_flag"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_19526/*"event_location"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_18085/*"card_statussync"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_18469/*"command_code_setstatus"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_18470/*"command_code_statussync"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_19570/*"event_recoverySync"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_19495/*"event_deck_setup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_24902/*"user_status_flag_set"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_19986/*"friend_top"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_18466/*"command_code_attach"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_18467/*"command_code_detach"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_18471/*"command_code_unlock"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_18827/*"debug_update_user"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_19831/*"follow_assign"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_19832/*"follow_remove"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_19494/*"event_daily_point"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_18075/*"card_command_card_exceed"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_18071/*"card_combine_limit_special"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_17420/*"battle_quest_route"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_19981/*"friend_lock_sync"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_23173/*"raid_auto_update"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_18468/*"command_code_lock"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_25096/*"war_board_start"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_25095/*"war_board_setup"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_25087/*"war_board_buff_save"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_25092/*"war_board_move"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_25097/*"war_board_treasure"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_25098/*"war_board_turn_end"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_25091/*"war_board_master_attack"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_25099/*"war_board_wall_attack"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_25088/*"war_board_command_spell"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_25080/*"war_board_battle_result"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_25090/*"war_board_finish"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_25094/*"war_board_resume"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_25089/*"war_board_continue"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_25093/*"war_board_reinforcements"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_19582/*"event_scan_panel_map"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_17430/*"battle_use_continue_item"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_18254/*"check_date_version"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_21268/*"item_use"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_18072/*"card_combine_passive_skill"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_24497/*"treasure_box_draw"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_19531/*"event_mission_random_cancel"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_18349/*"coin_room_put"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_24822/*"userDelete"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_17421/*"battle_reset"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_19496/*"event_digging"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_19573/*"event_reset_digging"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_19503/*"event_expedition_start"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_19502/*"event_expedition_finish"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_18319/*"client_api_error_dialog"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_19569/*"event_receive_cooltime_reward"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_19493/*"event_create_recipe"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_19504/*"event_fortification"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_18300/*"class_board_release_square"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_18299/*"class_board_release_lock"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_19572/*"event_reset_data_lost_battle"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_18822/*"debug_add_servant"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_18824/*"debug_edit_servant"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_18823/*"debug_delete_servant"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_17414/*"battle_interruption"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_19612/*"event_trade_start"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_19611/*"event_trade_receive"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_22998/*"prepare_purchase_by_bank"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_18031/*"cancel_purchase_by_bank"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_19848/*"follower_setup_recommend_support"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_23308/*"reset_purchase_num"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_18076/*"card_exchange_append_passive_skill"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  ResponseCommandKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ResponseCommandKind_TypeInfo->static_fields,
    (int64_t)v1,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall ResponseCommandKind___ctor(ResponseCommandKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall ResponseCommandKind__GetName(int32_t kind, const MethodInfo *method)
{
  ResponseCommandKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4BDB522 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    byte_4BDB522 = 1;
  }
  v3 = ResponseCommandKind_TypeInfo;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
    v3 = ResponseCommandKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1C22094(0LL, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_32E61D8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
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

  if ( (byte_4BDB523 & 1) == 0 )
  {
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    byte_4BDB523 = 1;
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
        sub_1C2209C(Name, v6);
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
LABEL_15:
    sub_1C22094(Name, v6);
  }
  return 0LL;
}