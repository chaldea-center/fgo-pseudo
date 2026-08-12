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

  if ( (byte_596F6C5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_18551/*"card_combine"*/);
    sub_2213A60(&StringLiteral_18568/*"card_statussync"*/);
    sub_2213A60(&StringLiteral_20611/*"friend_accept"*/);
    sub_2213A60(&StringLiteral_20947/*"home"*/);
    sub_2213A60(&StringLiteral_26148/*"war_board_treasure"*/);
    sub_2213A60(&StringLiteral_17840/*"battle_scenario"*/);
    sub_2213A60(&StringLiteral_20163/*"event_scan_panel_map"*/);
    sub_2213A60(&StringLiteral_18127/*"box_gacha_draw"*/);
    sub_2213A60(&StringLiteral_25509/*"treasure_box_draw"*/);
    sub_2213A60(&StringLiteral_26142/*"war_board_master_attack"*/);
    sub_2213A60(&StringLiteral_26141/*"war_board_finish"*/);
    sub_2213A60(&StringLiteral_17846/*"battle_use_continue_item"*/);
    sub_2213A60(&StringLiteral_20074/*"event_deck_setup"*/);
    sub_2213A60(&StringLiteral_18839/*"coin_room_put"*/);
    sub_2213A60(&StringLiteral_19348/*"debug_delete_servant"*/);
    sub_2213A60(&StringLiteral_18552/*"card_combine_costume"*/);
    sub_2213A60(&StringLiteral_17838/*"battle_result"*/);
    sub_2213A60(&StringLiteral_20193/*"event_trade_start"*/);
    sub_2213A60(&StringLiteral_20615/*"friend_offer"*/);
    sub_2213A60(&StringLiteral_18046/*"blacklist_top"*/);
    sub_2213A60(&StringLiteral_22419/*"login"*/);
    sub_2213A60(&StringLiteral_20617/*"friend_remove"*/);
    sub_2213A60(&StringLiteral_26149/*"war_board_turn_end"*/);
    sub_2213A60(&StringLiteral_19347/*"debug_add_servant"*/);
    sub_2213A60(&StringLiteral_18556/*"card_combine_skill"*/);
    sub_2213A60(&StringLiteral_20111/*"event_mission_notify"*/);
    sub_2213A60(&StringLiteral_19351/*"debug_server_time"*/);
    sub_2213A60(&StringLiteral_23976/*"profile"*/);
    sub_2213A60(&StringLiteral_20150/*"event_receive_cooltime_reward"*/);
    sub_2213A60(&StringLiteral_20842/*"grand_setup_svt"*/);
    sub_2213A60(&StringLiteral_25949/*"user_status_flag_set"*/);
    sub_2213A60(&StringLiteral_18559/*"card_exchange_append_passive_skill"*/);
    sub_2213A60(&StringLiteral_26144/*"war_board_reinforcements"*/);
    sub_2213A60(&StringLiteral_20192/*"event_trade_receive"*/);
    sub_2213A60(&StringLiteral_18560/*"card_favorite"*/);
    sub_2213A60(&StringLiteral_17844/*"battle_turn"*/);
    sub_2213A60(&StringLiteral_26147/*"war_board_start"*/);
    sub_2213A60(&StringLiteral_26140/*"war_board_continue"*/);
    sub_2213A60(&StringLiteral_25149/*"svt_equip_combine"*/);
    sub_2213A60(&StringLiteral_25554/*"tutorial_set"*/);
    sub_2213A60(&StringLiteral_24979/*"storage_takeout"*/);
    sub_2213A60(&StringLiteral_17748/*"bank_status"*/);
    sub_2213A60(&StringLiteral_24022/*"purchase_by_stone"*/);
    sub_2213A60(&StringLiteral_20614/*"friend_message_hide_sync"*/);
    sub_2213A60(&StringLiteral_18975/*"command_code_statussync"*/);
    sub_2213A60(&StringLiteral_26131/*"war_board_battle_result"*/);
    sub_2213A60(&StringLiteral_23981/*"profile_edit_name"*/);
    sub_2213A60(&StringLiteral_24738/*"signup"*/);
    sub_2213A60(&StringLiteral_20075/*"event_digging"*/);
    sub_2213A60(&StringLiteral_18973/*"command_code_lock"*/);
    sub_2213A60(&StringLiteral_18786/*"class_board_release_lock"*/);
    sub_2213A60(&StringLiteral_26143/*"war_board_move"*/);
    sub_2213A60(&StringLiteral_18976/*"command_code_unlock"*/);
    sub_2213A60(&StringLiteral_24506/*"sell_svt"*/);
    sub_2213A60(&StringLiteral_24211/*"regist_account"*/);
    sub_2213A60(&StringLiteral_17839/*"battle_resume"*/);
    sub_2213A60(&StringLiteral_20464/*"follower_edit_name"*/);
    sub_2213A60(&StringLiteral_19349/*"debug_edit_servant"*/);
    sub_2213A60(&StringLiteral_18971/*"command_code_attach"*/);
    sub_2213A60(&StringLiteral_20107/*"event_location"*/);
    sub_2213A60(&StringLiteral_18972/*"command_code_detach"*/);
    sub_2213A60(&StringLiteral_18974/*"command_code_setstatus"*/);
    sub_2213A60(&StringLiteral_17842/*"battle_skip"*/);
    sub_2213A60(&StringLiteral_20083/*"event_expedition_finish"*/);
    sub_2213A60(&StringLiteral_19350/*"debug_quest"*/);
    sub_2213A60(&StringLiteral_20112/*"event_mission_random_cancel"*/);
    sub_2213A60(&StringLiteral_24021/*"purchase_by_bank"*/);
    sub_2213A60(&StringLiteral_20618/*"friend_top"*/);
    sub_2213A60(&StringLiteral_20682/*"gamedata"*/);
    sub_2213A60(&StringLiteral_20164/*"event_script_flag_on"*/);
    sub_2213A60(&StringLiteral_20465/*"follower_setup"*/);
    sub_2213A60(&StringLiteral_20084/*"event_expedition_start"*/);
    sub_2213A60(&StringLiteral_19075/*"continue_decide"*/);
    sub_2213A60(&StringLiteral_20613/*"friend_lock_sync"*/);
    sub_2213A60(&StringLiteral_18569/*"card_svt_flag"*/);
    sub_2213A60(&StringLiteral_23948/*"present_receive"*/);
    sub_2213A60(&StringLiteral_19076/*"continue_input"*/);
    sub_2213A60(&StringLiteral_20616/*"friend_reject"*/);
    sub_2213A60(&StringLiteral_20085/*"event_fortification"*/);
    sub_2213A60(&StringLiteral_20154/*"event_reset_digging"*/);
    sub_2213A60(&StringLiteral_18045/*"blacklist_remove"*/);
    sub_2213A60(&StringLiteral_20151/*"event_recoverySync"*/);
    sub_2213A60(&StringLiteral_26150/*"war_board_wall_attack"*/);
    sub_2213A60(&StringLiteral_24978/*"storage_takein"*/);
    sub_2213A60(&StringLiteral_18835/*"code_input"*/);
    sub_2213A60(&StringLiteral_20667/*"gacha_draw"*/);
    sub_2213A60(&StringLiteral_26139/*"war_board_command_spell"*/);
    sub_2213A60(&StringLiteral_18787/*"class_board_release_square"*/);
    sub_2213A60(&StringLiteral_20612/*"friend_cancel"*/);
    sub_2213A60(&StringLiteral_20064/*"event_change_passive_skill"*/);
    sub_2213A60(&StringLiteral_18557/*"card_combine_td"*/);
    sub_2213A60(&StringLiteral_17837/*"battle_reset"*/);
    sub_2213A60(&StringLiteral_24010/*"purchase"*/);
    sub_2213A60(&StringLiteral_20843/*"grand_setup_svt_equip"*/);
    sub_2213A60(&StringLiteral_20113/*"event_mission_receive"*/);
    sub_2213A60(&StringLiteral_18555/*"card_combine_passive_skill"*/);
    sub_2213A60(&StringLiteral_22075/*"item_recover"*/);
    sub_2213A60(&StringLiteral_17836/*"battle_quest_route"*/);
    sub_2213A60(&StringLiteral_25553/*"tutorial_event_flag_set"*/);
    sub_2213A60(&StringLiteral_17829/*"battle_command_spell"*/);
    sub_2213A60(&StringLiteral_19364/*"deck_edit_name"*/);
    sub_2213A60(&StringLiteral_17830/*"battle_interruption"*/);
    sub_2213A60(&StringLiteral_18977/*"command_spell"*/);
    sub_2213A60(&StringLiteral_26146/*"war_board_setup"*/);
    sub_2213A60(&StringLiteral_18044/*"blacklist_regist"*/);
    sub_2213A60(&StringLiteral_17845/*"battle_use_continue"*/);
    sub_2213A60(&StringLiteral_17841/*"battle_setup"*/);
    sub_2213A60(&StringLiteral_20439/*"follow_remove"*/);
    sub_2213A60(&StringLiteral_20466/*"follower_setup_recommend_support"*/);
    sub_2213A60(&StringLiteral_22076/*"item_use"*/);
    sub_2213A60(&StringLiteral_24128/*"raid_auto_update"*/);
    sub_2213A60(&StringLiteral_24268/*"reset_purchase_num"*/);
    sub_2213A60(&StringLiteral_18515/*"cancel_purchase_by_bank"*/);
    sub_2213A60(&StringLiteral_20438/*"follow_assign"*/);
    sub_2213A60(&StringLiteral_19077/*"continue_prepare"*/);
    sub_2213A60(&StringLiteral_23940/*"prepare_purchase_by_bank"*/);
    sub_2213A60(&StringLiteral_25551/*"tutorial_clear"*/);
    sub_2213A60(&StringLiteral_20073/*"event_daily_point"*/);
    sub_2213A60(&StringLiteral_18128/*"box_gacha_reset"*/);
    sub_2213A60(&StringLiteral_18808/*"client_api_error_dialog"*/);
    sub_2213A60(&StringLiteral_26145/*"war_board_resume"*/);
    sub_2213A60(&StringLiteral_18558/*"card_command_card_exceed"*/);
    sub_2213A60(&StringLiteral_25946/*"user_formation"*/);
    sub_2213A60(&StringLiteral_18561/*"card_friendship_exceed"*/);
    sub_2213A60(&StringLiteral_25150/*"svt_equip_set"*/);
    sub_2213A60(&StringLiteral_19352/*"debug_update_user"*/);
    sub_2213A60(&StringLiteral_18563/*"card_init_random_limit_count"*/);
    sub_2213A60(&StringLiteral_20153/*"event_reset_data_lost_battle"*/);
    sub_2213A60(&StringLiteral_25863/*"userDelete"*/);
    sub_2213A60(&StringLiteral_19365/*"deck_setup"*/);
    sub_2213A60(&StringLiteral_18554/*"card_combine_limit_special"*/);
    sub_2213A60(&StringLiteral_18740/*"check_date_version"*/);
    sub_2213A60(&StringLiteral_23980/*"profile_edit_birth"*/);
    sub_2213A60(&StringLiteral_18565/*"card_locksync"*/);
    sub_2213A60(&StringLiteral_18553/*"card_combine_exceed"*/);
    sub_2213A60(&StringLiteral_18564/*"card_limit"*/);
    sub_2213A60(&StringLiteral_26138/*"war_board_buff_save"*/);
    sub_2213A60(&StringLiteral_20072/*"event_create_recipe"*/);
    byte_596F6C5 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3FBB9EC *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
  if ( !v1 )
    sub_2213CDC(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_24738/*"signup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_24211/*"regist_account"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_20682/*"gamedata"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_22419/*"login"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_20947/*"home"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_20667/*"gacha_draw"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_19365/*"deck_setup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_25946/*"user_formation"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_24010/*"purchase"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_24022/*"purchase_by_stone"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_24021/*"purchase_by_bank"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_24506/*"sell_svt"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_20615/*"friend_offer"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_20611/*"friend_accept"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_20616/*"friend_reject"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_20612/*"friend_cancel"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_20617/*"friend_remove"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_23976/*"profile"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_23981/*"profile_edit_name"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_17841/*"battle_setup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_17844/*"battle_turn"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_17838/*"battle_result"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_17829/*"battle_command_spell"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_17845/*"battle_use_continue"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_18551/*"card_combine"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_18556/*"card_combine_skill"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_18557/*"card_combine_td"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_18561/*"card_friendship_exceed"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_23948/*"present_receive"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_18835/*"code_input"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_19077/*"continue_prepare"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_19076/*"continue_input"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_19075/*"continue_decide"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_18560/*"card_favorite"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_18563/*"card_init_random_limit_count"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_25554/*"tutorial_set"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_25551/*"tutorial_clear"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_17839/*"battle_resume"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_18564/*"card_limit"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_25150/*"svt_equip_set"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_25149/*"svt_equip_combine"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_19350/*"debug_quest"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_23980/*"profile_edit_birth"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_22076/*"item_use"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_22075/*"item_recover"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_18977/*"command_spell"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_18127/*"box_gacha_draw"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_18128/*"box_gacha_reset"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_20111/*"event_mission_notify"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_20113/*"event_mission_receive"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_20465/*"follower_setup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_17840/*"battle_scenario"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_19364/*"deck_edit_name"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_19351/*"debug_server_time"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_18553/*"card_combine_exceed"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_18565/*"card_locksync"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_25553/*"tutorial_event_flag_set"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_24978/*"storage_takein"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_24979/*"storage_takeout"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_20464/*"follower_edit_name"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_17748/*"bank_status"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_18552/*"card_combine_costume"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_18046/*"blacklist_top"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_18044/*"blacklist_regist"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_18045/*"blacklist_remove"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_20614/*"friend_message_hide_sync"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_20164/*"event_script_flag_on"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_18569/*"card_svt_flag"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_20107/*"event_location"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_18568/*"card_statussync"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_18974/*"command_code_setstatus"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_18975/*"command_code_statussync"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_20151/*"event_recoverySync"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_20074/*"event_deck_setup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_25949/*"user_status_flag_set"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_20618/*"friend_top"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_18971/*"command_code_attach"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_18972/*"command_code_detach"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_18976/*"command_code_unlock"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_19352/*"debug_update_user"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_20438/*"follow_assign"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_20439/*"follow_remove"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_20073/*"event_daily_point"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_18558/*"card_command_card_exceed"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_18554/*"card_combine_limit_special"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_17836/*"battle_quest_route"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_20613/*"friend_lock_sync"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_24128/*"raid_auto_update"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_18973/*"command_code_lock"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_26147/*"war_board_start"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_26146/*"war_board_setup"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_26138/*"war_board_buff_save"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_26143/*"war_board_move"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_26148/*"war_board_treasure"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_26149/*"war_board_turn_end"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_26142/*"war_board_master_attack"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_26150/*"war_board_wall_attack"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_26139/*"war_board_command_spell"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_26131/*"war_board_battle_result"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_26141/*"war_board_finish"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_26145/*"war_board_resume"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_26140/*"war_board_continue"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_26144/*"war_board_reinforcements"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_20163/*"event_scan_panel_map"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_17846/*"battle_use_continue_item"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_18740/*"check_date_version"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_22076/*"item_use"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_18555/*"card_combine_passive_skill"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_25509/*"treasure_box_draw"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_20112/*"event_mission_random_cancel"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_18839/*"coin_room_put"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_25863/*"userDelete"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_17837/*"battle_reset"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_20075/*"event_digging"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_20154/*"event_reset_digging"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_20084/*"event_expedition_start"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_20083/*"event_expedition_finish"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_18808/*"client_api_error_dialog"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_20150/*"event_receive_cooltime_reward"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_20072/*"event_create_recipe"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_20085/*"event_fortification"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_18787/*"class_board_release_square"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_18786/*"class_board_release_lock"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_20153/*"event_reset_data_lost_battle"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_19347/*"debug_add_servant"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_19349/*"debug_edit_servant"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_19348/*"debug_delete_servant"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_17830/*"battle_interruption"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_20193/*"event_trade_start"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_20192/*"event_trade_receive"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_23940/*"prepare_purchase_by_bank"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_18515/*"cancel_purchase_by_bank"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_20466/*"follower_setup_recommend_support"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_24268/*"reset_purchase_num"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_18559/*"card_exchange_append_passive_skill"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_20842/*"grand_setup_svt"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_20843/*"grand_setup_svt_equip"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_17842/*"battle_skip"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    139,
    (Il2CppObject *)StringLiteral_20064/*"event_change_passive_skill"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  ResponseCommandKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__o *)v1;
  sub_2213A04(
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

  if ( (byte_596F6C3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    byte_596F6C3 = 1;
  }
  v4 = ResponseCommandKind_TypeInfo;
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, method, v2);
    v4 = ResponseCommandKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v4->static_fields->nameList;
  if ( !nameList )
    sub_2213CDC(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_3FBC300 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
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

  if ( (byte_596F6C4 & 1) == 0 )
  {
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    byte_596F6C4 = 1;
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
        sub_2213CE4(Name);
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
    sub_2213CDC(Name, v6);
  }
  return 0;
}