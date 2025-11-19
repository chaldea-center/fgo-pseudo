void ResponseCommandKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB51CF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
    sub_1C6BA08(&ResponseCommandKind_TypeInfo);
    sub_1C6BA08(&StringLiteral_17781/*"card_combine"*/);
    sub_1C6BA08(&StringLiteral_17798/*"card_statussync"*/);
    sub_1C6BA08(&StringLiteral_19744/*"friend_accept"*/);
    sub_1C6BA08(&StringLiteral_20056/*"home"*/);
    sub_1C6BA08(&StringLiteral_24886/*"war_board_treasure"*/);
    sub_1C6BA08(&StringLiteral_17119/*"battle_scenario"*/);
    sub_1C6BA08(&StringLiteral_19320/*"event_scan_panel_map"*/);
    sub_1C6BA08(&StringLiteral_17384/*"box_gacha_draw"*/);
    sub_1C6BA08(&StringLiteral_24300/*"treasure_box_draw"*/);
    sub_1C6BA08(&StringLiteral_24880/*"war_board_master_attack"*/);
    sub_1C6BA08(&StringLiteral_24879/*"war_board_finish"*/);
    sub_1C6BA08(&StringLiteral_17125/*"battle_use_continue_item"*/);
    sub_1C6BA08(&StringLiteral_19231/*"event_deck_setup"*/);
    sub_1C6BA08(&StringLiteral_18059/*"coin_room_put"*/);
    sub_1C6BA08(&StringLiteral_18542/*"debug_delete_servant"*/);
    sub_1C6BA08(&StringLiteral_17782/*"card_combine_costume"*/);
    sub_1C6BA08(&StringLiteral_17117/*"battle_result"*/);
    sub_1C6BA08(&StringLiteral_19350/*"event_trade_start"*/);
    sub_1C6BA08(&StringLiteral_19748/*"friend_offer"*/);
    sub_1C6BA08(&StringLiteral_17320/*"blacklist_top"*/);
    sub_1C6BA08(&StringLiteral_21425/*"login"*/);
    sub_1C6BA08(&StringLiteral_19750/*"friend_remove"*/);
    sub_1C6BA08(&StringLiteral_24887/*"war_board_turn_end"*/);
    sub_1C6BA08(&StringLiteral_18541/*"debug_add_servant"*/);
    sub_1C6BA08(&StringLiteral_17786/*"card_combine_skill"*/);
    sub_1C6BA08(&StringLiteral_19268/*"event_mission_notify"*/);
    sub_1C6BA08(&StringLiteral_18545/*"debug_server_time"*/);
    sub_1C6BA08(&StringLiteral_22880/*"profile"*/);
    sub_1C6BA08(&StringLiteral_19307/*"event_receive_cooltime_reward"*/);
    sub_1C6BA08(&StringLiteral_19964/*"grand_setup_svt"*/);
    sub_1C6BA08(&StringLiteral_24698/*"user_status_flag_set"*/);
    sub_1C6BA08(&StringLiteral_17789/*"card_exchange_append_passive_skill"*/);
    sub_1C6BA08(&StringLiteral_24882/*"war_board_reinforcements"*/);
    sub_1C6BA08(&StringLiteral_19349/*"event_trade_receive"*/);
    sub_1C6BA08(&StringLiteral_17790/*"card_favorite"*/);
    sub_1C6BA08(&StringLiteral_17123/*"battle_turn"*/);
    sub_1C6BA08(&StringLiteral_24885/*"war_board_start"*/);
    sub_1C6BA08(&StringLiteral_24878/*"war_board_continue"*/);
    sub_1C6BA08(&StringLiteral_23972/*"svt_equip_combine"*/);
    sub_1C6BA08(&StringLiteral_24343/*"tutorial_set"*/);
    sub_1C6BA08(&StringLiteral_23813/*"storage_takeout"*/);
    sub_1C6BA08(&StringLiteral_17036/*"bank_status"*/);
    sub_1C6BA08(&StringLiteral_22925/*"purchase_by_stone"*/);
    sub_1C6BA08(&StringLiteral_19747/*"friend_message_hide_sync"*/);
    sub_1C6BA08(&StringLiteral_18188/*"command_code_statussync"*/);
    sub_1C6BA08(&StringLiteral_24869/*"war_board_battle_result"*/);
    sub_1C6BA08(&StringLiteral_22885/*"profile_edit_name"*/);
    sub_1C6BA08(&StringLiteral_23590/*"signup"*/);
    sub_1C6BA08(&StringLiteral_19232/*"event_digging"*/);
    sub_1C6BA08(&StringLiteral_18186/*"command_code_lock"*/);
    sub_1C6BA08(&StringLiteral_18010/*"class_board_release_lock"*/);
    sub_1C6BA08(&StringLiteral_24881/*"war_board_move"*/);
    sub_1C6BA08(&StringLiteral_18189/*"command_code_unlock"*/);
    sub_1C6BA08(&StringLiteral_23371/*"sell_svt"*/);
    sub_1C6BA08(&StringLiteral_23108/*"regist_account"*/);
    sub_1C6BA08(&StringLiteral_17118/*"battle_resume"*/);
    sub_1C6BA08(&StringLiteral_19598/*"follower_edit_name"*/);
    sub_1C6BA08(&StringLiteral_18543/*"debug_edit_servant"*/);
    sub_1C6BA08(&StringLiteral_18184/*"command_code_attach"*/);
    sub_1C6BA08(&StringLiteral_19264/*"event_location"*/);
    sub_1C6BA08(&StringLiteral_18185/*"command_code_detach"*/);
    sub_1C6BA08(&StringLiteral_18187/*"command_code_setstatus"*/);
    sub_1C6BA08(&StringLiteral_19240/*"event_expedition_finish"*/);
    sub_1C6BA08(&StringLiteral_18544/*"debug_quest"*/);
    sub_1C6BA08(&StringLiteral_19269/*"event_mission_random_cancel"*/);
    sub_1C6BA08(&StringLiteral_22924/*"purchase_by_bank"*/);
    sub_1C6BA08(&StringLiteral_19751/*"friend_top"*/);
    sub_1C6BA08(&StringLiteral_19815/*"gamedata"*/);
    sub_1C6BA08(&StringLiteral_19321/*"event_script_flag_on"*/);
    sub_1C6BA08(&StringLiteral_19599/*"follower_setup"*/);
    sub_1C6BA08(&StringLiteral_19241/*"event_expedition_start"*/);
    sub_1C6BA08(&StringLiteral_18280/*"continue_decide"*/);
    sub_1C6BA08(&StringLiteral_19746/*"friend_lock_sync"*/);
    sub_1C6BA08(&StringLiteral_17799/*"card_svt_flag"*/);
    sub_1C6BA08(&StringLiteral_22857/*"present_receive"*/);
    sub_1C6BA08(&StringLiteral_18281/*"continue_input"*/);
    sub_1C6BA08(&StringLiteral_19749/*"friend_reject"*/);
    sub_1C6BA08(&StringLiteral_19242/*"event_fortification"*/);
    sub_1C6BA08(&StringLiteral_19311/*"event_reset_digging"*/);
    sub_1C6BA08(&StringLiteral_17319/*"blacklist_remove"*/);
    sub_1C6BA08(&StringLiteral_19308/*"event_recoverySync"*/);
    sub_1C6BA08(&StringLiteral_24888/*"war_board_wall_attack"*/);
    sub_1C6BA08(&StringLiteral_23812/*"storage_takein"*/);
    sub_1C6BA08(&StringLiteral_18055/*"code_input"*/);
    sub_1C6BA08(&StringLiteral_19800/*"gacha_draw"*/);
    sub_1C6BA08(&StringLiteral_24877/*"war_board_command_spell"*/);
    sub_1C6BA08(&StringLiteral_18011/*"class_board_release_square"*/);
    sub_1C6BA08(&StringLiteral_19745/*"friend_cancel"*/);
    sub_1C6BA08(&StringLiteral_17787/*"card_combine_td"*/);
    sub_1C6BA08(&StringLiteral_17116/*"battle_reset"*/);
    sub_1C6BA08(&StringLiteral_22913/*"purchase"*/);
    sub_1C6BA08(&StringLiteral_19965/*"grand_setup_svt_equip"*/);
    sub_1C6BA08(&StringLiteral_19270/*"event_mission_receive"*/);
    sub_1C6BA08(&StringLiteral_17785/*"card_combine_passive_skill"*/);
    sub_1C6BA08(&StringLiteral_21105/*"item_recover"*/);
    sub_1C6BA08(&StringLiteral_17115/*"battle_quest_route"*/);
    sub_1C6BA08(&StringLiteral_24342/*"tutorial_event_flag_set"*/);
    sub_1C6BA08(&StringLiteral_17108/*"battle_command_spell"*/);
    sub_1C6BA08(&StringLiteral_18558/*"deck_edit_name"*/);
    sub_1C6BA08(&StringLiteral_17109/*"battle_interruption"*/);
    sub_1C6BA08(&StringLiteral_18190/*"command_spell"*/);
    sub_1C6BA08(&StringLiteral_24884/*"war_board_setup"*/);
    sub_1C6BA08(&StringLiteral_17318/*"blacklist_regist"*/);
    sub_1C6BA08(&StringLiteral_17124/*"battle_use_continue"*/);
    sub_1C6BA08(&StringLiteral_17120/*"battle_setup"*/);
    sub_1C6BA08(&StringLiteral_19583/*"follow_remove"*/);
    sub_1C6BA08(&StringLiteral_19600/*"follower_setup_recommend_support"*/);
    sub_1C6BA08(&StringLiteral_21106/*"item_use"*/);
    sub_1C6BA08(&StringLiteral_23029/*"raid_auto_update"*/);
    sub_1C6BA08(&StringLiteral_23159/*"reset_purchase_num"*/);
    sub_1C6BA08(&StringLiteral_17744/*"cancel_purchase_by_bank"*/);
    sub_1C6BA08(&StringLiteral_19582/*"follow_assign"*/);
    sub_1C6BA08(&StringLiteral_18282/*"continue_prepare"*/);
    sub_1C6BA08(&StringLiteral_22849/*"prepare_purchase_by_bank"*/);
    sub_1C6BA08(&StringLiteral_24340/*"tutorial_clear"*/);
    sub_1C6BA08(&StringLiteral_19230/*"event_daily_point"*/);
    sub_1C6BA08(&StringLiteral_17385/*"box_gacha_reset"*/);
    sub_1C6BA08(&StringLiteral_18031/*"client_api_error_dialog"*/);
    sub_1C6BA08(&StringLiteral_24883/*"war_board_resume"*/);
    sub_1C6BA08(&StringLiteral_17788/*"card_command_card_exceed"*/);
    sub_1C6BA08(&StringLiteral_24695/*"user_formation"*/);
    sub_1C6BA08(&StringLiteral_17791/*"card_friendship_exceed"*/);
    sub_1C6BA08(&StringLiteral_23973/*"svt_equip_set"*/);
    sub_1C6BA08(&StringLiteral_18546/*"debug_update_user"*/);
    sub_1C6BA08(&StringLiteral_17793/*"card_init_random_limit_count"*/);
    sub_1C6BA08(&StringLiteral_19310/*"event_reset_data_lost_battle"*/);
    sub_1C6BA08(&StringLiteral_24615/*"userDelete"*/);
    sub_1C6BA08(&StringLiteral_18559/*"deck_setup"*/);
    sub_1C6BA08(&StringLiteral_17784/*"card_combine_limit_special"*/);
    sub_1C6BA08(&StringLiteral_17967/*"check_date_version"*/);
    sub_1C6BA08(&StringLiteral_22884/*"profile_edit_birth"*/);
    sub_1C6BA08(&StringLiteral_17795/*"card_locksync"*/);
    sub_1C6BA08(&StringLiteral_17783/*"card_combine_exceed"*/);
    sub_1C6BA08(&StringLiteral_17794/*"card_limit"*/);
    sub_1C6BA08(&StringLiteral_24876/*"war_board_buff_save"*/);
    sub_1C6BA08(&StringLiteral_19229/*"event_create_recipe"*/);
    byte_4CB51CF = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3484F58 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1C6BC60(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_23590/*"signup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_23108/*"regist_account"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_19815/*"gamedata"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_21425/*"login"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_20056/*"home"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_19800/*"gacha_draw"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_18559/*"deck_setup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_24695/*"user_formation"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_22913/*"purchase"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_22925/*"purchase_by_stone"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_22924/*"purchase_by_bank"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_23371/*"sell_svt"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_19748/*"friend_offer"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_19744/*"friend_accept"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_19749/*"friend_reject"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_19745/*"friend_cancel"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_19750/*"friend_remove"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_22880/*"profile"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_22885/*"profile_edit_name"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_17120/*"battle_setup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_17123/*"battle_turn"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_17117/*"battle_result"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_17108/*"battle_command_spell"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_17124/*"battle_use_continue"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_17781/*"card_combine"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_17786/*"card_combine_skill"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_17787/*"card_combine_td"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_17791/*"card_friendship_exceed"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_22857/*"present_receive"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_18055/*"code_input"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_18282/*"continue_prepare"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_18281/*"continue_input"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_18280/*"continue_decide"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_17790/*"card_favorite"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_17793/*"card_init_random_limit_count"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24343/*"tutorial_set"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_24340/*"tutorial_clear"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_17118/*"battle_resume"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_17794/*"card_limit"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_23973/*"svt_equip_set"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_23972/*"svt_equip_combine"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_18544/*"debug_quest"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_22884/*"profile_edit_birth"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_21106/*"item_use"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_21105/*"item_recover"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_18190/*"command_spell"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_17384/*"box_gacha_draw"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_17385/*"box_gacha_reset"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_19268/*"event_mission_notify"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_19270/*"event_mission_receive"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_19599/*"follower_setup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_17119/*"battle_scenario"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_18558/*"deck_edit_name"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_18545/*"debug_server_time"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_17783/*"card_combine_exceed"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_17795/*"card_locksync"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_24342/*"tutorial_event_flag_set"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_23812/*"storage_takein"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_23813/*"storage_takeout"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_19598/*"follower_edit_name"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_17036/*"bank_status"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_17782/*"card_combine_costume"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_17320/*"blacklist_top"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_17318/*"blacklist_regist"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_17319/*"blacklist_remove"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_19747/*"friend_message_hide_sync"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_19321/*"event_script_flag_on"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_17799/*"card_svt_flag"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_19264/*"event_location"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_17798/*"card_statussync"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_18187/*"command_code_setstatus"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_18188/*"command_code_statussync"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_19308/*"event_recoverySync"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_19231/*"event_deck_setup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_24698/*"user_status_flag_set"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_19751/*"friend_top"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_18184/*"command_code_attach"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_18185/*"command_code_detach"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_18189/*"command_code_unlock"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_18546/*"debug_update_user"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_19582/*"follow_assign"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_19583/*"follow_remove"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_19230/*"event_daily_point"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_17788/*"card_command_card_exceed"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_17784/*"card_combine_limit_special"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_17115/*"battle_quest_route"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_19746/*"friend_lock_sync"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_23029/*"raid_auto_update"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_18186/*"command_code_lock"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_24885/*"war_board_start"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_24884/*"war_board_setup"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_24876/*"war_board_buff_save"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_24881/*"war_board_move"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_24886/*"war_board_treasure"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_24887/*"war_board_turn_end"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_24880/*"war_board_master_attack"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_24888/*"war_board_wall_attack"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_24877/*"war_board_command_spell"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_24869/*"war_board_battle_result"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_24879/*"war_board_finish"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_24883/*"war_board_resume"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_24878/*"war_board_continue"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_24882/*"war_board_reinforcements"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_19320/*"event_scan_panel_map"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_17125/*"battle_use_continue_item"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_17967/*"check_date_version"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_21106/*"item_use"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_17785/*"card_combine_passive_skill"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_24300/*"treasure_box_draw"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_19269/*"event_mission_random_cancel"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_18059/*"coin_room_put"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_24615/*"userDelete"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_17116/*"battle_reset"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_19232/*"event_digging"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_19311/*"event_reset_digging"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_19241/*"event_expedition_start"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_19240/*"event_expedition_finish"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_18031/*"client_api_error_dialog"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_19307/*"event_receive_cooltime_reward"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_19229/*"event_create_recipe"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_19242/*"event_fortification"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_18011/*"class_board_release_square"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_18010/*"class_board_release_lock"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_19310/*"event_reset_data_lost_battle"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_18541/*"debug_add_servant"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_18543/*"debug_edit_servant"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_18542/*"debug_delete_servant"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_17109/*"battle_interruption"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_19350/*"event_trade_start"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_19349/*"event_trade_receive"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_22849/*"prepare_purchase_by_bank"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17744/*"cancel_purchase_by_bank"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_19600/*"follower_setup_recommend_support"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_23159/*"reset_purchase_num"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_17789/*"card_exchange_append_passive_skill"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_19964/*"grand_setup_svt"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_19965/*"grand_setup_svt_equip"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  ResponseCommandKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ResponseCommandKind_TypeInfo->static_fields, (int32_t)v1, v4, v5);
}


void ResponseCommandKind___ctor(ResponseCommandKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *ResponseCommandKind__GetName(int32_t kind, const MethodInfo *method)
{
  ResponseCommandKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4CB51CD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
    sub_1C6BA08(&ResponseCommandKind_TypeInfo);
    byte_4CB51CD = 1;
  }
  v3 = ResponseCommandKind_TypeInfo;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
    v3 = ResponseCommandKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1C6BC60(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_348588C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
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

  if ( (byte_4CB51CE & 1) == 0 )
  {
    sub_1C6BA08(&ResponseCommandKind_TypeInfo);
    byte_4CB51CE = 1;
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
        sub_1C6BC68(Name);
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
    sub_1C6BC60(Name, v6);
  }
  return 0;
}