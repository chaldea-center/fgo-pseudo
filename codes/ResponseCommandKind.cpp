void ResponseCommandKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C55C6E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
    sub_1C3E564(&ResponseCommandKind_TypeInfo);
    sub_1C3E564(&StringLiteral_17781/*"card_combine"*/);
    sub_1C3E564(&StringLiteral_17798/*"card_statussync"*/);
    sub_1C3E564(&StringLiteral_19699/*"friend_accept"*/);
    sub_1C3E564(&StringLiteral_20010/*"home"*/);
    sub_1C3E564(&StringLiteral_24796/*"war_board_treasure"*/);
    sub_1C3E564(&StringLiteral_17122/*"battle_scenario"*/);
    sub_1C3E564(&StringLiteral_19289/*"event_scan_panel_map"*/);
    sub_1C3E564(&StringLiteral_17386/*"box_gacha_draw"*/);
    sub_1C3E564(&StringLiteral_24220/*"treasure_box_draw"*/);
    sub_1C3E564(&StringLiteral_24790/*"war_board_master_attack"*/);
    sub_1C3E564(&StringLiteral_24789/*"war_board_finish"*/);
    sub_1C3E564(&StringLiteral_17128/*"battle_use_continue_item"*/);
    sub_1C3E564(&StringLiteral_19200/*"event_deck_setup"*/);
    sub_1C3E564(&StringLiteral_18061/*"coin_room_put"*/);
    sub_1C3E564(&StringLiteral_18532/*"debug_delete_servant"*/);
    sub_1C3E564(&StringLiteral_17782/*"card_combine_costume"*/);
    sub_1C3E564(&StringLiteral_17120/*"battle_result"*/);
    sub_1C3E564(&StringLiteral_19319/*"event_trade_start"*/);
    sub_1C3E564(&StringLiteral_19703/*"friend_offer"*/);
    sub_1C3E564(&StringLiteral_17322/*"blacklist_top"*/);
    sub_1C3E564(&StringLiteral_21359/*"login"*/);
    sub_1C3E564(&StringLiteral_19705/*"friend_remove"*/);
    sub_1C3E564(&StringLiteral_24797/*"war_board_turn_end"*/);
    sub_1C3E564(&StringLiteral_18531/*"debug_add_servant"*/);
    sub_1C3E564(&StringLiteral_17786/*"card_combine_skill"*/);
    sub_1C3E564(&StringLiteral_19237/*"event_mission_notify"*/);
    sub_1C3E564(&StringLiteral_18535/*"debug_server_time"*/);
    sub_1C3E564(&StringLiteral_22808/*"profile"*/);
    sub_1C3E564(&StringLiteral_19276/*"event_receive_cooltime_reward"*/);
    sub_1C3E564(&StringLiteral_19919/*"grand_setup_svt"*/);
    sub_1C3E564(&StringLiteral_24615/*"user_status_flag_set"*/);
    sub_1C3E564(&StringLiteral_17789/*"card_exchange_append_passive_skill"*/);
    sub_1C3E564(&StringLiteral_24792/*"war_board_reinforcements"*/);
    sub_1C3E564(&StringLiteral_19318/*"event_trade_receive"*/);
    sub_1C3E564(&StringLiteral_17790/*"card_favorite"*/);
    sub_1C3E564(&StringLiteral_17126/*"battle_turn"*/);
    sub_1C3E564(&StringLiteral_24795/*"war_board_start"*/);
    sub_1C3E564(&StringLiteral_24788/*"war_board_continue"*/);
    sub_1C3E564(&StringLiteral_23898/*"svt_equip_combine"*/);
    sub_1C3E564(&StringLiteral_24261/*"tutorial_set"*/);
    sub_1C3E564(&StringLiteral_23739/*"storage_takeout"*/);
    sub_1C3E564(&StringLiteral_17039/*"bank_status"*/);
    sub_1C3E564(&StringLiteral_22851/*"purchase_by_stone"*/);
    sub_1C3E564(&StringLiteral_19702/*"friend_message_hide_sync"*/);
    sub_1C3E564(&StringLiteral_18182/*"command_code_statussync"*/);
    sub_1C3E564(&StringLiteral_24779/*"war_board_battle_result"*/);
    sub_1C3E564(&StringLiteral_22813/*"profile_edit_name"*/);
    sub_1C3E564(&StringLiteral_23518/*"signup"*/);
    sub_1C3E564(&StringLiteral_19201/*"event_digging"*/);
    sub_1C3E564(&StringLiteral_18180/*"command_code_lock"*/);
    sub_1C3E564(&StringLiteral_18010/*"class_board_release_lock"*/);
    sub_1C3E564(&StringLiteral_24791/*"war_board_move"*/);
    sub_1C3E564(&StringLiteral_18183/*"command_code_unlock"*/);
    sub_1C3E564(&StringLiteral_23286/*"sell_svt"*/);
    sub_1C3E564(&StringLiteral_23033/*"regist_account"*/);
    sub_1C3E564(&StringLiteral_17121/*"battle_resume"*/);
    sub_1C3E564(&StringLiteral_19553/*"follower_edit_name"*/);
    sub_1C3E564(&StringLiteral_18533/*"debug_edit_servant"*/);
    sub_1C3E564(&StringLiteral_18178/*"command_code_attach"*/);
    sub_1C3E564(&StringLiteral_19233/*"event_location"*/);
    sub_1C3E564(&StringLiteral_18179/*"command_code_detach"*/);
    sub_1C3E564(&StringLiteral_18181/*"command_code_setstatus"*/);
    sub_1C3E564(&StringLiteral_19209/*"event_expedition_finish"*/);
    sub_1C3E564(&StringLiteral_18534/*"debug_quest"*/);
    sub_1C3E564(&StringLiteral_19238/*"event_mission_random_cancel"*/);
    sub_1C3E564(&StringLiteral_22850/*"purchase_by_bank"*/);
    sub_1C3E564(&StringLiteral_19706/*"friend_top"*/);
    sub_1C3E564(&StringLiteral_19770/*"gamedata"*/);
    sub_1C3E564(&StringLiteral_19290/*"event_script_flag_on"*/);
    sub_1C3E564(&StringLiteral_19554/*"follower_setup"*/);
    sub_1C3E564(&StringLiteral_19210/*"event_expedition_start"*/);
    sub_1C3E564(&StringLiteral_18273/*"continue_decide"*/);
    sub_1C3E564(&StringLiteral_19701/*"friend_lock_sync"*/);
    sub_1C3E564(&StringLiteral_17799/*"card_svt_flag"*/);
    sub_1C3E564(&StringLiteral_22786/*"present_receive"*/);
    sub_1C3E564(&StringLiteral_18274/*"continue_input"*/);
    sub_1C3E564(&StringLiteral_19704/*"friend_reject"*/);
    sub_1C3E564(&StringLiteral_19211/*"event_fortification"*/);
    sub_1C3E564(&StringLiteral_19280/*"event_reset_digging"*/);
    sub_1C3E564(&StringLiteral_17321/*"blacklist_remove"*/);
    sub_1C3E564(&StringLiteral_19277/*"event_recoverySync"*/);
    sub_1C3E564(&StringLiteral_24798/*"war_board_wall_attack"*/);
    sub_1C3E564(&StringLiteral_23738/*"storage_takein"*/);
    sub_1C3E564(&StringLiteral_18057/*"code_input"*/);
    sub_1C3E564(&StringLiteral_19755/*"gacha_draw"*/);
    sub_1C3E564(&StringLiteral_24787/*"war_board_command_spell"*/);
    sub_1C3E564(&StringLiteral_18011/*"class_board_release_square"*/);
    sub_1C3E564(&StringLiteral_19700/*"friend_cancel"*/);
    sub_1C3E564(&StringLiteral_17787/*"card_combine_td"*/);
    sub_1C3E564(&StringLiteral_17119/*"battle_reset"*/);
    sub_1C3E564(&StringLiteral_22839/*"purchase"*/);
    sub_1C3E564(&StringLiteral_19920/*"grand_setup_svt_equip"*/);
    sub_1C3E564(&StringLiteral_19239/*"event_mission_receive"*/);
    sub_1C3E564(&StringLiteral_17785/*"card_combine_passive_skill"*/);
    sub_1C3E564(&StringLiteral_21048/*"item_recover"*/);
    sub_1C3E564(&StringLiteral_17118/*"battle_quest_route"*/);
    sub_1C3E564(&StringLiteral_24260/*"tutorial_event_flag_set"*/);
    sub_1C3E564(&StringLiteral_17111/*"battle_command_spell"*/);
    sub_1C3E564(&StringLiteral_18548/*"deck_edit_name"*/);
    sub_1C3E564(&StringLiteral_17112/*"battle_interruption"*/);
    sub_1C3E564(&StringLiteral_18184/*"command_spell"*/);
    sub_1C3E564(&StringLiteral_24794/*"war_board_setup"*/);
    sub_1C3E564(&StringLiteral_17320/*"blacklist_regist"*/);
    sub_1C3E564(&StringLiteral_17127/*"battle_use_continue"*/);
    sub_1C3E564(&StringLiteral_17123/*"battle_setup"*/);
    sub_1C3E564(&StringLiteral_19538/*"follow_remove"*/);
    sub_1C3E564(&StringLiteral_19555/*"follower_setup_recommend_support"*/);
    sub_1C3E564(&StringLiteral_21049/*"item_use"*/);
    sub_1C3E564(&StringLiteral_22955/*"raid_auto_update"*/);
    sub_1C3E564(&StringLiteral_23083/*"reset_purchase_num"*/);
    sub_1C3E564(&StringLiteral_17744/*"cancel_purchase_by_bank"*/);
    sub_1C3E564(&StringLiteral_19537/*"follow_assign"*/);
    sub_1C3E564(&StringLiteral_18275/*"continue_prepare"*/);
    sub_1C3E564(&StringLiteral_22778/*"prepare_purchase_by_bank"*/);
    sub_1C3E564(&StringLiteral_24259/*"tutorial_clear"*/);
    sub_1C3E564(&StringLiteral_19199/*"event_daily_point"*/);
    sub_1C3E564(&StringLiteral_17387/*"box_gacha_reset"*/);
    sub_1C3E564(&StringLiteral_18031/*"client_api_error_dialog"*/);
    sub_1C3E564(&StringLiteral_24793/*"war_board_resume"*/);
    sub_1C3E564(&StringLiteral_17788/*"card_command_card_exceed"*/);
    sub_1C3E564(&StringLiteral_24612/*"user_formation"*/);
    sub_1C3E564(&StringLiteral_17791/*"card_friendship_exceed"*/);
    sub_1C3E564(&StringLiteral_23899/*"svt_equip_set"*/);
    sub_1C3E564(&StringLiteral_18536/*"debug_update_user"*/);
    sub_1C3E564(&StringLiteral_17793/*"card_init_random_limit_count"*/);
    sub_1C3E564(&StringLiteral_19279/*"event_reset_data_lost_battle"*/);
    sub_1C3E564(&StringLiteral_24532/*"userDelete"*/);
    sub_1C3E564(&StringLiteral_18549/*"deck_setup"*/);
    sub_1C3E564(&StringLiteral_17784/*"card_combine_limit_special"*/);
    sub_1C3E564(&StringLiteral_17966/*"check_date_version"*/);
    sub_1C3E564(&StringLiteral_22812/*"profile_edit_birth"*/);
    sub_1C3E564(&StringLiteral_17795/*"card_locksync"*/);
    sub_1C3E564(&StringLiteral_17783/*"card_combine_exceed"*/);
    sub_1C3E564(&StringLiteral_17794/*"card_limit"*/);
    sub_1C3E564(&StringLiteral_24786/*"war_board_buff_save"*/);
    sub_1C3E564(&StringLiteral_19198/*"event_create_recipe"*/);
    byte_4C55C6E = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_343EDFC *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1C3E7C0(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_23518/*"signup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_23033/*"regist_account"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_19770/*"gamedata"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_21359/*"login"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_20010/*"home"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_19755/*"gacha_draw"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_18549/*"deck_setup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_24612/*"user_formation"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_22839/*"purchase"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_22851/*"purchase_by_stone"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_22850/*"purchase_by_bank"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_23286/*"sell_svt"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_19703/*"friend_offer"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_19699/*"friend_accept"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_19704/*"friend_reject"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_19700/*"friend_cancel"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_19705/*"friend_remove"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_22808/*"profile"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_22813/*"profile_edit_name"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_17123/*"battle_setup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_17126/*"battle_turn"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_17120/*"battle_result"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_17111/*"battle_command_spell"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_17127/*"battle_use_continue"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_17781/*"card_combine"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_17786/*"card_combine_skill"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_17787/*"card_combine_td"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_17791/*"card_friendship_exceed"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_22786/*"present_receive"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_18057/*"code_input"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_18275/*"continue_prepare"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_18274/*"continue_input"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_18273/*"continue_decide"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_17790/*"card_favorite"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_17793/*"card_init_random_limit_count"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24261/*"tutorial_set"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_24259/*"tutorial_clear"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_17121/*"battle_resume"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_17794/*"card_limit"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_23899/*"svt_equip_set"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_23898/*"svt_equip_combine"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_18534/*"debug_quest"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_22812/*"profile_edit_birth"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_21049/*"item_use"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_21048/*"item_recover"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_18184/*"command_spell"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_17386/*"box_gacha_draw"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_17387/*"box_gacha_reset"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_19237/*"event_mission_notify"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_19239/*"event_mission_receive"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_19554/*"follower_setup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_17122/*"battle_scenario"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_18548/*"deck_edit_name"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_18535/*"debug_server_time"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_17783/*"card_combine_exceed"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_17795/*"card_locksync"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_24260/*"tutorial_event_flag_set"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_23738/*"storage_takein"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_23739/*"storage_takeout"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_19553/*"follower_edit_name"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_17039/*"bank_status"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_17782/*"card_combine_costume"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_17322/*"blacklist_top"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_17320/*"blacklist_regist"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_17321/*"blacklist_remove"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_19702/*"friend_message_hide_sync"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_19290/*"event_script_flag_on"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_17799/*"card_svt_flag"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_19233/*"event_location"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_17798/*"card_statussync"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_18181/*"command_code_setstatus"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_18182/*"command_code_statussync"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_19277/*"event_recoverySync"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_19200/*"event_deck_setup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_24615/*"user_status_flag_set"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_19706/*"friend_top"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_18178/*"command_code_attach"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_18179/*"command_code_detach"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_18183/*"command_code_unlock"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_18536/*"debug_update_user"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_19537/*"follow_assign"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_19538/*"follow_remove"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_19199/*"event_daily_point"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_17788/*"card_command_card_exceed"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_17784/*"card_combine_limit_special"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_17118/*"battle_quest_route"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_19701/*"friend_lock_sync"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_22955/*"raid_auto_update"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_18180/*"command_code_lock"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_24795/*"war_board_start"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_24794/*"war_board_setup"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_24786/*"war_board_buff_save"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_24791/*"war_board_move"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_24796/*"war_board_treasure"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_24797/*"war_board_turn_end"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_24790/*"war_board_master_attack"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_24798/*"war_board_wall_attack"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_24787/*"war_board_command_spell"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_24779/*"war_board_battle_result"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_24789/*"war_board_finish"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_24793/*"war_board_resume"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_24788/*"war_board_continue"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_24792/*"war_board_reinforcements"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_19289/*"event_scan_panel_map"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_17128/*"battle_use_continue_item"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_17966/*"check_date_version"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_21049/*"item_use"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_17785/*"card_combine_passive_skill"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_24220/*"treasure_box_draw"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_19238/*"event_mission_random_cancel"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_18061/*"coin_room_put"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_24532/*"userDelete"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_17119/*"battle_reset"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_19201/*"event_digging"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_19280/*"event_reset_digging"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_19210/*"event_expedition_start"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_19209/*"event_expedition_finish"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_18031/*"client_api_error_dialog"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_19276/*"event_receive_cooltime_reward"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_19198/*"event_create_recipe"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_19211/*"event_fortification"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_18011/*"class_board_release_square"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_18010/*"class_board_release_lock"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_19279/*"event_reset_data_lost_battle"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_18531/*"debug_add_servant"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_18533/*"debug_edit_servant"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_18532/*"debug_delete_servant"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_17112/*"battle_interruption"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_19319/*"event_trade_start"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_19318/*"event_trade_receive"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_22778/*"prepare_purchase_by_bank"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17744/*"cancel_purchase_by_bank"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_19555/*"follower_setup_recommend_support"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_23083/*"reset_purchase_num"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_17789/*"card_exchange_append_passive_skill"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_19919/*"grand_setup_svt"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_19920/*"grand_setup_svt_equip"*/,
    (const MethodInfo_343F7D0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  ResponseCommandKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)ResponseCommandKind_TypeInfo->static_fields, (int32_t)v1, v4, v5);
}


void ResponseCommandKind___ctor(ResponseCommandKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *ResponseCommandKind__GetName(int32_t kind, const MethodInfo *method)
{
  ResponseCommandKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4C55C6C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
    sub_1C3E564(&ResponseCommandKind_TypeInfo);
    byte_4C55C6C = 1;
  }
  v3 = ResponseCommandKind_TypeInfo;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
    v3 = ResponseCommandKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1C3E7C0(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_343F730 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
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

  if ( (byte_4C55C6D & 1) == 0 )
  {
    sub_1C3E564(&ResponseCommandKind_TypeInfo);
    byte_4C55C6D = 1;
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
        sub_1C3E7C8(Name, v6);
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
    sub_1C3E7C0(Name, v6);
  }
  return 0;
}