void ResponseCommandKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5937563 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_18513/*"card_combine"*/);
    sub_21FFC50(&StringLiteral_18530/*"card_statussync"*/);
    sub_21FFC50(&StringLiteral_20570/*"friend_accept"*/);
    sub_21FFC50(&StringLiteral_20906/*"home"*/);
    sub_21FFC50(&StringLiteral_26098/*"war_board_treasure"*/);
    sub_21FFC50(&StringLiteral_17802/*"battle_scenario"*/);
    sub_21FFC50(&StringLiteral_20121/*"event_scan_panel_map"*/);
    sub_21FFC50(&StringLiteral_18089/*"box_gacha_draw"*/);
    sub_21FFC50(&StringLiteral_25461/*"treasure_box_draw"*/);
    sub_21FFC50(&StringLiteral_26092/*"war_board_master_attack"*/);
    sub_21FFC50(&StringLiteral_26091/*"war_board_finish"*/);
    sub_21FFC50(&StringLiteral_17808/*"battle_use_continue_item"*/);
    sub_21FFC50(&StringLiteral_20032/*"event_deck_setup"*/);
    sub_21FFC50(&StringLiteral_18801/*"coin_room_put"*/);
    sub_21FFC50(&StringLiteral_19307/*"debug_delete_servant"*/);
    sub_21FFC50(&StringLiteral_18514/*"card_combine_costume"*/);
    sub_21FFC50(&StringLiteral_17800/*"battle_result"*/);
    sub_21FFC50(&StringLiteral_20151/*"event_trade_start"*/);
    sub_21FFC50(&StringLiteral_20574/*"friend_offer"*/);
    sub_21FFC50(&StringLiteral_18008/*"blacklist_top"*/);
    sub_21FFC50(&StringLiteral_22376/*"login"*/);
    sub_21FFC50(&StringLiteral_20576/*"friend_remove"*/);
    sub_21FFC50(&StringLiteral_26099/*"war_board_turn_end"*/);
    sub_21FFC50(&StringLiteral_19306/*"debug_add_servant"*/);
    sub_21FFC50(&StringLiteral_18518/*"card_combine_skill"*/);
    sub_21FFC50(&StringLiteral_20069/*"event_mission_notify"*/);
    sub_21FFC50(&StringLiteral_19310/*"debug_server_time"*/);
    sub_21FFC50(&StringLiteral_23929/*"profile"*/);
    sub_21FFC50(&StringLiteral_20108/*"event_receive_cooltime_reward"*/);
    sub_21FFC50(&StringLiteral_20801/*"grand_setup_svt"*/);
    sub_21FFC50(&StringLiteral_25901/*"user_status_flag_set"*/);
    sub_21FFC50(&StringLiteral_18521/*"card_exchange_append_passive_skill"*/);
    sub_21FFC50(&StringLiteral_26094/*"war_board_reinforcements"*/);
    sub_21FFC50(&StringLiteral_20150/*"event_trade_receive"*/);
    sub_21FFC50(&StringLiteral_18522/*"card_favorite"*/);
    sub_21FFC50(&StringLiteral_17806/*"battle_turn"*/);
    sub_21FFC50(&StringLiteral_26097/*"war_board_start"*/);
    sub_21FFC50(&StringLiteral_26090/*"war_board_continue"*/);
    sub_21FFC50(&StringLiteral_25101/*"svt_equip_combine"*/);
    sub_21FFC50(&StringLiteral_25506/*"tutorial_set"*/);
    sub_21FFC50(&StringLiteral_24931/*"storage_takeout"*/);
    sub_21FFC50(&StringLiteral_17711/*"bank_status"*/);
    sub_21FFC50(&StringLiteral_23975/*"purchase_by_stone"*/);
    sub_21FFC50(&StringLiteral_20573/*"friend_message_hide_sync"*/);
    sub_21FFC50(&StringLiteral_18937/*"command_code_statussync"*/);
    sub_21FFC50(&StringLiteral_26081/*"war_board_battle_result"*/);
    sub_21FFC50(&StringLiteral_23934/*"profile_edit_name"*/);
    sub_21FFC50(&StringLiteral_24690/*"signup"*/);
    sub_21FFC50(&StringLiteral_20033/*"event_digging"*/);
    sub_21FFC50(&StringLiteral_18935/*"command_code_lock"*/);
    sub_21FFC50(&StringLiteral_18748/*"class_board_release_lock"*/);
    sub_21FFC50(&StringLiteral_26093/*"war_board_move"*/);
    sub_21FFC50(&StringLiteral_18938/*"command_code_unlock"*/);
    sub_21FFC50(&StringLiteral_24458/*"sell_svt"*/);
    sub_21FFC50(&StringLiteral_24163/*"regist_account"*/);
    sub_21FFC50(&StringLiteral_17801/*"battle_resume"*/);
    sub_21FFC50(&StringLiteral_20423/*"follower_edit_name"*/);
    sub_21FFC50(&StringLiteral_19308/*"debug_edit_servant"*/);
    sub_21FFC50(&StringLiteral_18933/*"command_code_attach"*/);
    sub_21FFC50(&StringLiteral_20065/*"event_location"*/);
    sub_21FFC50(&StringLiteral_18934/*"command_code_detach"*/);
    sub_21FFC50(&StringLiteral_18936/*"command_code_setstatus"*/);
    sub_21FFC50(&StringLiteral_17804/*"battle_skip"*/);
    sub_21FFC50(&StringLiteral_20041/*"event_expedition_finish"*/);
    sub_21FFC50(&StringLiteral_19309/*"debug_quest"*/);
    sub_21FFC50(&StringLiteral_20070/*"event_mission_random_cancel"*/);
    sub_21FFC50(&StringLiteral_23974/*"purchase_by_bank"*/);
    sub_21FFC50(&StringLiteral_20577/*"friend_top"*/);
    sub_21FFC50(&StringLiteral_20641/*"gamedata"*/);
    sub_21FFC50(&StringLiteral_20122/*"event_script_flag_on"*/);
    sub_21FFC50(&StringLiteral_20424/*"follower_setup"*/);
    sub_21FFC50(&StringLiteral_20042/*"event_expedition_start"*/);
    sub_21FFC50(&StringLiteral_19034/*"continue_decide"*/);
    sub_21FFC50(&StringLiteral_20572/*"friend_lock_sync"*/);
    sub_21FFC50(&StringLiteral_18531/*"card_svt_flag"*/);
    sub_21FFC50(&StringLiteral_23901/*"present_receive"*/);
    sub_21FFC50(&StringLiteral_19035/*"continue_input"*/);
    sub_21FFC50(&StringLiteral_20575/*"friend_reject"*/);
    sub_21FFC50(&StringLiteral_20043/*"event_fortification"*/);
    sub_21FFC50(&StringLiteral_20112/*"event_reset_digging"*/);
    sub_21FFC50(&StringLiteral_18007/*"blacklist_remove"*/);
    sub_21FFC50(&StringLiteral_20109/*"event_recoverySync"*/);
    sub_21FFC50(&StringLiteral_26100/*"war_board_wall_attack"*/);
    sub_21FFC50(&StringLiteral_24930/*"storage_takein"*/);
    sub_21FFC50(&StringLiteral_18797/*"code_input"*/);
    sub_21FFC50(&StringLiteral_20626/*"gacha_draw"*/);
    sub_21FFC50(&StringLiteral_26089/*"war_board_command_spell"*/);
    sub_21FFC50(&StringLiteral_18749/*"class_board_release_square"*/);
    sub_21FFC50(&StringLiteral_20571/*"friend_cancel"*/);
    sub_21FFC50(&StringLiteral_20022/*"event_change_passive_skill"*/);
    sub_21FFC50(&StringLiteral_18519/*"card_combine_td"*/);
    sub_21FFC50(&StringLiteral_17799/*"battle_reset"*/);
    sub_21FFC50(&StringLiteral_23963/*"purchase"*/);
    sub_21FFC50(&StringLiteral_20802/*"grand_setup_svt_equip"*/);
    sub_21FFC50(&StringLiteral_20071/*"event_mission_receive"*/);
    sub_21FFC50(&StringLiteral_18517/*"card_combine_passive_skill"*/);
    sub_21FFC50(&StringLiteral_22032/*"item_recover"*/);
    sub_21FFC50(&StringLiteral_17798/*"battle_quest_route"*/);
    sub_21FFC50(&StringLiteral_25505/*"tutorial_event_flag_set"*/);
    sub_21FFC50(&StringLiteral_17791/*"battle_command_spell"*/);
    sub_21FFC50(&StringLiteral_19323/*"deck_edit_name"*/);
    sub_21FFC50(&StringLiteral_17792/*"battle_interruption"*/);
    sub_21FFC50(&StringLiteral_18939/*"command_spell"*/);
    sub_21FFC50(&StringLiteral_26096/*"war_board_setup"*/);
    sub_21FFC50(&StringLiteral_18006/*"blacklist_regist"*/);
    sub_21FFC50(&StringLiteral_17807/*"battle_use_continue"*/);
    sub_21FFC50(&StringLiteral_17803/*"battle_setup"*/);
    sub_21FFC50(&StringLiteral_20398/*"follow_remove"*/);
    sub_21FFC50(&StringLiteral_20425/*"follower_setup_recommend_support"*/);
    sub_21FFC50(&StringLiteral_22033/*"item_use"*/);
    sub_21FFC50(&StringLiteral_24081/*"raid_auto_update"*/);
    sub_21FFC50(&StringLiteral_24220/*"reset_purchase_num"*/);
    sub_21FFC50(&StringLiteral_18477/*"cancel_purchase_by_bank"*/);
    sub_21FFC50(&StringLiteral_20397/*"follow_assign"*/);
    sub_21FFC50(&StringLiteral_19036/*"continue_prepare"*/);
    sub_21FFC50(&StringLiteral_23893/*"prepare_purchase_by_bank"*/);
    sub_21FFC50(&StringLiteral_25503/*"tutorial_clear"*/);
    sub_21FFC50(&StringLiteral_20031/*"event_daily_point"*/);
    sub_21FFC50(&StringLiteral_18090/*"box_gacha_reset"*/);
    sub_21FFC50(&StringLiteral_18770/*"client_api_error_dialog"*/);
    sub_21FFC50(&StringLiteral_26095/*"war_board_resume"*/);
    sub_21FFC50(&StringLiteral_18520/*"card_command_card_exceed"*/);
    sub_21FFC50(&StringLiteral_25898/*"user_formation"*/);
    sub_21FFC50(&StringLiteral_18523/*"card_friendship_exceed"*/);
    sub_21FFC50(&StringLiteral_25102/*"svt_equip_set"*/);
    sub_21FFC50(&StringLiteral_19311/*"debug_update_user"*/);
    sub_21FFC50(&StringLiteral_18525/*"card_init_random_limit_count"*/);
    sub_21FFC50(&StringLiteral_20111/*"event_reset_data_lost_battle"*/);
    sub_21FFC50(&StringLiteral_25815/*"userDelete"*/);
    sub_21FFC50(&StringLiteral_19324/*"deck_setup"*/);
    sub_21FFC50(&StringLiteral_18516/*"card_combine_limit_special"*/);
    sub_21FFC50(&StringLiteral_18702/*"check_date_version"*/);
    sub_21FFC50(&StringLiteral_23933/*"profile_edit_birth"*/);
    sub_21FFC50(&StringLiteral_18527/*"card_locksync"*/);
    sub_21FFC50(&StringLiteral_18515/*"card_combine_exceed"*/);
    sub_21FFC50(&StringLiteral_18526/*"card_limit"*/);
    sub_21FFC50(&StringLiteral_26088/*"war_board_buff_save"*/);
    sub_21FFC50(&StringLiteral_20030/*"event_create_recipe"*/);
    byte_5937563 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3F88244 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
  if ( !v1 )
    sub_21FFECC(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_24690/*"signup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_24163/*"regist_account"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_20641/*"gamedata"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_22376/*"login"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_20906/*"home"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_20626/*"gacha_draw"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_19324/*"deck_setup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_25898/*"user_formation"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_23963/*"purchase"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_23975/*"purchase_by_stone"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_23974/*"purchase_by_bank"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_24458/*"sell_svt"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_20574/*"friend_offer"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_20570/*"friend_accept"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_20575/*"friend_reject"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_20571/*"friend_cancel"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_20576/*"friend_remove"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_23929/*"profile"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_23934/*"profile_edit_name"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_17803/*"battle_setup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_17806/*"battle_turn"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_17800/*"battle_result"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_17791/*"battle_command_spell"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_17807/*"battle_use_continue"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_18513/*"card_combine"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_18518/*"card_combine_skill"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_18519/*"card_combine_td"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_18523/*"card_friendship_exceed"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_23901/*"present_receive"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_18797/*"code_input"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_19036/*"continue_prepare"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_19035/*"continue_input"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_19034/*"continue_decide"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_18522/*"card_favorite"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_18525/*"card_init_random_limit_count"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_25506/*"tutorial_set"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_25503/*"tutorial_clear"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_17801/*"battle_resume"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_18526/*"card_limit"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_25102/*"svt_equip_set"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_25101/*"svt_equip_combine"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_19309/*"debug_quest"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_23933/*"profile_edit_birth"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_22033/*"item_use"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_22032/*"item_recover"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_18939/*"command_spell"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_18089/*"box_gacha_draw"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_18090/*"box_gacha_reset"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_20069/*"event_mission_notify"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_20071/*"event_mission_receive"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_20424/*"follower_setup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_17802/*"battle_scenario"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_19323/*"deck_edit_name"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_19310/*"debug_server_time"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_18515/*"card_combine_exceed"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_18527/*"card_locksync"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_25505/*"tutorial_event_flag_set"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_24930/*"storage_takein"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_24931/*"storage_takeout"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_20423/*"follower_edit_name"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_17711/*"bank_status"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_18514/*"card_combine_costume"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_18008/*"blacklist_top"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_18006/*"blacklist_regist"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_18007/*"blacklist_remove"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_20573/*"friend_message_hide_sync"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_20122/*"event_script_flag_on"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_18531/*"card_svt_flag"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_20065/*"event_location"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_18530/*"card_statussync"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_18936/*"command_code_setstatus"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_18937/*"command_code_statussync"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_20109/*"event_recoverySync"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_20032/*"event_deck_setup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_25901/*"user_status_flag_set"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_20577/*"friend_top"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_18933/*"command_code_attach"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_18934/*"command_code_detach"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_18938/*"command_code_unlock"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_19311/*"debug_update_user"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_20397/*"follow_assign"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_20398/*"follow_remove"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_20031/*"event_daily_point"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_18520/*"card_command_card_exceed"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_18516/*"card_combine_limit_special"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_17798/*"battle_quest_route"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_20572/*"friend_lock_sync"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_24081/*"raid_auto_update"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_18935/*"command_code_lock"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_26097/*"war_board_start"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_26096/*"war_board_setup"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_26088/*"war_board_buff_save"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_26093/*"war_board_move"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_26098/*"war_board_treasure"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_26099/*"war_board_turn_end"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_26092/*"war_board_master_attack"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_26100/*"war_board_wall_attack"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_26089/*"war_board_command_spell"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_26081/*"war_board_battle_result"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_26091/*"war_board_finish"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_26095/*"war_board_resume"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_26090/*"war_board_continue"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_26094/*"war_board_reinforcements"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_20121/*"event_scan_panel_map"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_17808/*"battle_use_continue_item"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_18702/*"check_date_version"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_22033/*"item_use"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_18517/*"card_combine_passive_skill"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_25461/*"treasure_box_draw"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_20070/*"event_mission_random_cancel"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_18801/*"coin_room_put"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_25815/*"userDelete"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_17799/*"battle_reset"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_20033/*"event_digging"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_20112/*"event_reset_digging"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_20042/*"event_expedition_start"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_20041/*"event_expedition_finish"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_18770/*"client_api_error_dialog"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_20108/*"event_receive_cooltime_reward"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_20030/*"event_create_recipe"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_20043/*"event_fortification"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_18749/*"class_board_release_square"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_18748/*"class_board_release_lock"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_20111/*"event_reset_data_lost_battle"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_19306/*"debug_add_servant"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_19308/*"debug_edit_servant"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_19307/*"debug_delete_servant"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_17792/*"battle_interruption"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_20151/*"event_trade_start"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_20150/*"event_trade_receive"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_23893/*"prepare_purchase_by_bank"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_18477/*"cancel_purchase_by_bank"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_20425/*"follower_setup_recommend_support"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_24220/*"reset_purchase_num"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_18521/*"card_exchange_append_passive_skill"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_20801/*"grand_setup_svt"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_20802/*"grand_setup_svt_equip"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_17804/*"battle_skip"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_20022/*"event_change_passive_skill"*/,
    (const MethodInfo_3F88BF8 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  ResponseCommandKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ResponseCommandKind_TypeInfo->static_fields,
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
  __int64 v2; // x2
  ResponseCommandKind_c *v4; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_5937561 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    byte_5937561 = 1;
  }
  v4 = ResponseCommandKind_TypeInfo;
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, method, v2);
    v4 = ResponseCommandKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v4->static_fields->nameList;
  if ( !nameList )
    sub_21FFECC(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_3F88B58 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
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
  __int64 v9; // x22
  ResponseData_o *v10; // x21

  if ( (byte_5937562 & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    byte_5937562 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList, method);
  Name = ResponseCommandKind__GetName(kind, (const MethodInfo *)responseList);
  if ( !responseList )
    goto LABEL_14;
  max_length = responseList->max_length;
  if ( max_length >= 1 )
  {
    v8 = Name;
    v9 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= max_length )
        sub_21FFED4(Name);
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
LABEL_14:
    sub_21FFECC(Name, v6);
  }
  return 0;
}