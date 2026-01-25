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

  if ( (byte_4CED5A6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17858/*"card_combine"*/);
    sub_1C7BAE8(&StringLiteral_17875/*"card_statussync"*/);
    sub_1C7BAE8(&StringLiteral_19837/*"friend_accept"*/);
    sub_1C7BAE8(&StringLiteral_20153/*"home"*/);
    sub_1C7BAE8(&StringLiteral_25029/*"war_board_treasure"*/);
    sub_1C7BAE8(&StringLiteral_17189/*"battle_scenario"*/);
    sub_1C7BAE8(&StringLiteral_19412/*"event_scan_panel_map"*/);
    sub_1C7BAE8(&StringLiteral_17455/*"box_gacha_draw"*/);
    sub_1C7BAE8(&StringLiteral_24439/*"treasure_box_draw"*/);
    sub_1C7BAE8(&StringLiteral_25023/*"war_board_master_attack"*/);
    sub_1C7BAE8(&StringLiteral_25022/*"war_board_finish"*/);
    sub_1C7BAE8(&StringLiteral_17195/*"battle_use_continue_item"*/);
    sub_1C7BAE8(&StringLiteral_19323/*"event_deck_setup"*/);
    sub_1C7BAE8(&StringLiteral_18134/*"coin_room_put"*/);
    sub_1C7BAE8(&StringLiteral_18620/*"debug_delete_servant"*/);
    sub_1C7BAE8(&StringLiteral_17859/*"card_combine_costume"*/);
    sub_1C7BAE8(&StringLiteral_17187/*"battle_result"*/);
    sub_1C7BAE8(&StringLiteral_19442/*"event_trade_start"*/);
    sub_1C7BAE8(&StringLiteral_19841/*"friend_offer"*/);
    sub_1C7BAE8(&StringLiteral_17391/*"blacklist_top"*/);
    sub_1C7BAE8(&StringLiteral_21540/*"login"*/);
    sub_1C7BAE8(&StringLiteral_19843/*"friend_remove"*/);
    sub_1C7BAE8(&StringLiteral_25030/*"war_board_turn_end"*/);
    sub_1C7BAE8(&StringLiteral_18619/*"debug_add_servant"*/);
    sub_1C7BAE8(&StringLiteral_17863/*"card_combine_skill"*/);
    sub_1C7BAE8(&StringLiteral_19360/*"event_mission_notify"*/);
    sub_1C7BAE8(&StringLiteral_18623/*"debug_server_time"*/);
    sub_1C7BAE8(&StringLiteral_23007/*"profile"*/);
    sub_1C7BAE8(&StringLiteral_19399/*"event_receive_cooltime_reward"*/);
    sub_1C7BAE8(&StringLiteral_20060/*"grand_setup_svt"*/);
    sub_1C7BAE8(&StringLiteral_24841/*"user_status_flag_set"*/);
    sub_1C7BAE8(&StringLiteral_17866/*"card_exchange_append_passive_skill"*/);
    sub_1C7BAE8(&StringLiteral_25025/*"war_board_reinforcements"*/);
    sub_1C7BAE8(&StringLiteral_19441/*"event_trade_receive"*/);
    sub_1C7BAE8(&StringLiteral_17867/*"card_favorite"*/);
    sub_1C7BAE8(&StringLiteral_17193/*"battle_turn"*/);
    sub_1C7BAE8(&StringLiteral_25028/*"war_board_start"*/);
    sub_1C7BAE8(&StringLiteral_25021/*"war_board_continue"*/);
    sub_1C7BAE8(&StringLiteral_24109/*"svt_equip_combine"*/);
    sub_1C7BAE8(&StringLiteral_24482/*"tutorial_set"*/);
    sub_1C7BAE8(&StringLiteral_23945/*"storage_takeout"*/);
    sub_1C7BAE8(&StringLiteral_17103/*"bank_status"*/);
    sub_1C7BAE8(&StringLiteral_23052/*"purchase_by_stone"*/);
    sub_1C7BAE8(&StringLiteral_19840/*"friend_message_hide_sync"*/);
    sub_1C7BAE8(&StringLiteral_18263/*"command_code_statussync"*/);
    sub_1C7BAE8(&StringLiteral_25012/*"war_board_battle_result"*/);
    sub_1C7BAE8(&StringLiteral_23012/*"profile_edit_name"*/);
    sub_1C7BAE8(&StringLiteral_23720/*"signup"*/);
    sub_1C7BAE8(&StringLiteral_19324/*"event_digging"*/);
    sub_1C7BAE8(&StringLiteral_18261/*"command_code_lock"*/);
    sub_1C7BAE8(&StringLiteral_18085/*"class_board_release_lock"*/);
    sub_1C7BAE8(&StringLiteral_25024/*"war_board_move"*/);
    sub_1C7BAE8(&StringLiteral_18264/*"command_code_unlock"*/);
    sub_1C7BAE8(&StringLiteral_23500/*"sell_svt"*/);
    sub_1C7BAE8(&StringLiteral_23235/*"regist_account"*/);
    sub_1C7BAE8(&StringLiteral_17188/*"battle_resume"*/);
    sub_1C7BAE8(&StringLiteral_19691/*"follower_edit_name"*/);
    sub_1C7BAE8(&StringLiteral_18621/*"debug_edit_servant"*/);
    sub_1C7BAE8(&StringLiteral_18259/*"command_code_attach"*/);
    sub_1C7BAE8(&StringLiteral_19356/*"event_location"*/);
    sub_1C7BAE8(&StringLiteral_18260/*"command_code_detach"*/);
    sub_1C7BAE8(&StringLiteral_18262/*"command_code_setstatus"*/);
    sub_1C7BAE8(&StringLiteral_17191/*"battle_skip"*/);
    sub_1C7BAE8(&StringLiteral_19332/*"event_expedition_finish"*/);
    sub_1C7BAE8(&StringLiteral_18622/*"debug_quest"*/);
    sub_1C7BAE8(&StringLiteral_19361/*"event_mission_random_cancel"*/);
    sub_1C7BAE8(&StringLiteral_23051/*"purchase_by_bank"*/);
    sub_1C7BAE8(&StringLiteral_19844/*"friend_top"*/);
    sub_1C7BAE8(&StringLiteral_19908/*"gamedata"*/);
    sub_1C7BAE8(&StringLiteral_19413/*"event_script_flag_on"*/);
    sub_1C7BAE8(&StringLiteral_19692/*"follower_setup"*/);
    sub_1C7BAE8(&StringLiteral_19333/*"event_expedition_start"*/);
    sub_1C7BAE8(&StringLiteral_18356/*"continue_decide"*/);
    sub_1C7BAE8(&StringLiteral_19839/*"friend_lock_sync"*/);
    sub_1C7BAE8(&StringLiteral_17876/*"card_svt_flag"*/);
    sub_1C7BAE8(&StringLiteral_22983/*"present_receive"*/);
    sub_1C7BAE8(&StringLiteral_18357/*"continue_input"*/);
    sub_1C7BAE8(&StringLiteral_19842/*"friend_reject"*/);
    sub_1C7BAE8(&StringLiteral_19334/*"event_fortification"*/);
    sub_1C7BAE8(&StringLiteral_19403/*"event_reset_digging"*/);
    sub_1C7BAE8(&StringLiteral_17390/*"blacklist_remove"*/);
    sub_1C7BAE8(&StringLiteral_19400/*"event_recoverySync"*/);
    sub_1C7BAE8(&StringLiteral_25031/*"war_board_wall_attack"*/);
    sub_1C7BAE8(&StringLiteral_23944/*"storage_takein"*/);
    sub_1C7BAE8(&StringLiteral_18130/*"code_input"*/);
    sub_1C7BAE8(&StringLiteral_19893/*"gacha_draw"*/);
    sub_1C7BAE8(&StringLiteral_25020/*"war_board_command_spell"*/);
    sub_1C7BAE8(&StringLiteral_18086/*"class_board_release_square"*/);
    sub_1C7BAE8(&StringLiteral_19838/*"friend_cancel"*/);
    sub_1C7BAE8(&StringLiteral_17864/*"card_combine_td"*/);
    sub_1C7BAE8(&StringLiteral_17186/*"battle_reset"*/);
    sub_1C7BAE8(&StringLiteral_23040/*"purchase"*/);
    sub_1C7BAE8(&StringLiteral_20061/*"grand_setup_svt_equip"*/);
    sub_1C7BAE8(&StringLiteral_19362/*"event_mission_receive"*/);
    sub_1C7BAE8(&StringLiteral_17862/*"card_combine_passive_skill"*/);
    sub_1C7BAE8(&StringLiteral_21221/*"item_recover"*/);
    sub_1C7BAE8(&StringLiteral_17185/*"battle_quest_route"*/);
    sub_1C7BAE8(&StringLiteral_24481/*"tutorial_event_flag_set"*/);
    sub_1C7BAE8(&StringLiteral_17178/*"battle_command_spell"*/);
    sub_1C7BAE8(&StringLiteral_18636/*"deck_edit_name"*/);
    sub_1C7BAE8(&StringLiteral_17179/*"battle_interruption"*/);
    sub_1C7BAE8(&StringLiteral_18265/*"command_spell"*/);
    sub_1C7BAE8(&StringLiteral_25027/*"war_board_setup"*/);
    sub_1C7BAE8(&StringLiteral_17389/*"blacklist_regist"*/);
    sub_1C7BAE8(&StringLiteral_17194/*"battle_use_continue"*/);
    sub_1C7BAE8(&StringLiteral_17190/*"battle_setup"*/);
    sub_1C7BAE8(&StringLiteral_19676/*"follow_remove"*/);
    sub_1C7BAE8(&StringLiteral_19693/*"follower_setup_recommend_support"*/);
    sub_1C7BAE8(&StringLiteral_21222/*"item_use"*/);
    sub_1C7BAE8(&StringLiteral_23156/*"raid_auto_update"*/);
    sub_1C7BAE8(&StringLiteral_23287/*"reset_purchase_num"*/);
    sub_1C7BAE8(&StringLiteral_17822/*"cancel_purchase_by_bank"*/);
    sub_1C7BAE8(&StringLiteral_19675/*"follow_assign"*/);
    sub_1C7BAE8(&StringLiteral_18358/*"continue_prepare"*/);
    sub_1C7BAE8(&StringLiteral_22975/*"prepare_purchase_by_bank"*/);
    sub_1C7BAE8(&StringLiteral_24479/*"tutorial_clear"*/);
    sub_1C7BAE8(&StringLiteral_19322/*"event_daily_point"*/);
    sub_1C7BAE8(&StringLiteral_17456/*"box_gacha_reset"*/);
    sub_1C7BAE8(&StringLiteral_18106/*"client_api_error_dialog"*/);
    sub_1C7BAE8(&StringLiteral_25026/*"war_board_resume"*/);
    sub_1C7BAE8(&StringLiteral_17865/*"card_command_card_exceed"*/);
    sub_1C7BAE8(&StringLiteral_24838/*"user_formation"*/);
    sub_1C7BAE8(&StringLiteral_17868/*"card_friendship_exceed"*/);
    sub_1C7BAE8(&StringLiteral_24110/*"svt_equip_set"*/);
    sub_1C7BAE8(&StringLiteral_18624/*"debug_update_user"*/);
    sub_1C7BAE8(&StringLiteral_17870/*"card_init_random_limit_count"*/);
    sub_1C7BAE8(&StringLiteral_19402/*"event_reset_data_lost_battle"*/);
    sub_1C7BAE8(&StringLiteral_24758/*"userDelete"*/);
    sub_1C7BAE8(&StringLiteral_18637/*"deck_setup"*/);
    sub_1C7BAE8(&StringLiteral_17861/*"card_combine_limit_special"*/);
    sub_1C7BAE8(&StringLiteral_18042/*"check_date_version"*/);
    sub_1C7BAE8(&StringLiteral_23011/*"profile_edit_birth"*/);
    sub_1C7BAE8(&StringLiteral_17872/*"card_locksync"*/);
    sub_1C7BAE8(&StringLiteral_17860/*"card_combine_exceed"*/);
    sub_1C7BAE8(&StringLiteral_17871/*"card_limit"*/);
    sub_1C7BAE8(&StringLiteral_25019/*"war_board_buff_save"*/);
    sub_1C7BAE8(&StringLiteral_19321/*"event_create_recipe"*/);
    byte_4CED5A6 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_34BBB78 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1C7BD40(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_23720/*"signup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_23235/*"regist_account"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_19908/*"gamedata"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_21540/*"login"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_20153/*"home"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_19893/*"gacha_draw"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_18637/*"deck_setup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_24838/*"user_formation"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_23040/*"purchase"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_23052/*"purchase_by_stone"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_23051/*"purchase_by_bank"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_23500/*"sell_svt"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_19841/*"friend_offer"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_19837/*"friend_accept"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_19842/*"friend_reject"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_19838/*"friend_cancel"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_19843/*"friend_remove"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_23007/*"profile"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_23012/*"profile_edit_name"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_17190/*"battle_setup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_17193/*"battle_turn"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_17187/*"battle_result"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_17178/*"battle_command_spell"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_17194/*"battle_use_continue"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_17858/*"card_combine"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_17863/*"card_combine_skill"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_17864/*"card_combine_td"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_17868/*"card_friendship_exceed"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_22983/*"present_receive"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_18130/*"code_input"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_18358/*"continue_prepare"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_18357/*"continue_input"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_18356/*"continue_decide"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_17867/*"card_favorite"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_17870/*"card_init_random_limit_count"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24482/*"tutorial_set"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_24479/*"tutorial_clear"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_17188/*"battle_resume"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_17871/*"card_limit"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_24110/*"svt_equip_set"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_24109/*"svt_equip_combine"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_18622/*"debug_quest"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_23011/*"profile_edit_birth"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_21222/*"item_use"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_21221/*"item_recover"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_18265/*"command_spell"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_17455/*"box_gacha_draw"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_17456/*"box_gacha_reset"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_19360/*"event_mission_notify"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_19362/*"event_mission_receive"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_19692/*"follower_setup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_17189/*"battle_scenario"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_18636/*"deck_edit_name"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_18623/*"debug_server_time"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_17860/*"card_combine_exceed"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_17872/*"card_locksync"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_24481/*"tutorial_event_flag_set"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_23944/*"storage_takein"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_23945/*"storage_takeout"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_19691/*"follower_edit_name"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_17103/*"bank_status"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_17859/*"card_combine_costume"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_17391/*"blacklist_top"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_17389/*"blacklist_regist"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_17390/*"blacklist_remove"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_19840/*"friend_message_hide_sync"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_19413/*"event_script_flag_on"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_17876/*"card_svt_flag"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_19356/*"event_location"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_17875/*"card_statussync"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_18262/*"command_code_setstatus"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_18263/*"command_code_statussync"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_19400/*"event_recoverySync"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_19323/*"event_deck_setup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_24841/*"user_status_flag_set"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_19844/*"friend_top"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_18259/*"command_code_attach"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_18260/*"command_code_detach"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_18264/*"command_code_unlock"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_18624/*"debug_update_user"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_19675/*"follow_assign"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_19676/*"follow_remove"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_19322/*"event_daily_point"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_17865/*"card_command_card_exceed"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_17861/*"card_combine_limit_special"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_17185/*"battle_quest_route"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_19839/*"friend_lock_sync"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_23156/*"raid_auto_update"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_18261/*"command_code_lock"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_25028/*"war_board_start"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_25027/*"war_board_setup"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_25019/*"war_board_buff_save"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_25024/*"war_board_move"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_25029/*"war_board_treasure"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_25030/*"war_board_turn_end"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_25023/*"war_board_master_attack"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_25031/*"war_board_wall_attack"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_25020/*"war_board_command_spell"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_25012/*"war_board_battle_result"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_25022/*"war_board_finish"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_25026/*"war_board_resume"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_25021/*"war_board_continue"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_25025/*"war_board_reinforcements"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_19412/*"event_scan_panel_map"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_17195/*"battle_use_continue_item"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_18042/*"check_date_version"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_21222/*"item_use"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_17862/*"card_combine_passive_skill"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_24439/*"treasure_box_draw"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_19361/*"event_mission_random_cancel"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_18134/*"coin_room_put"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_24758/*"userDelete"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_17186/*"battle_reset"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_19324/*"event_digging"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_19403/*"event_reset_digging"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_19333/*"event_expedition_start"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_19332/*"event_expedition_finish"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_18106/*"client_api_error_dialog"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_19399/*"event_receive_cooltime_reward"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_19321/*"event_create_recipe"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_19334/*"event_fortification"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_18086/*"class_board_release_square"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_18085/*"class_board_release_lock"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_19402/*"event_reset_data_lost_battle"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_18619/*"debug_add_servant"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_18621/*"debug_edit_servant"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_18620/*"debug_delete_servant"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_17179/*"battle_interruption"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_19442/*"event_trade_start"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_19441/*"event_trade_receive"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_22975/*"prepare_purchase_by_bank"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17822/*"cancel_purchase_by_bank"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_19693/*"follower_setup_recommend_support"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_23287/*"reset_purchase_num"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_17866/*"card_exchange_append_passive_skill"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_20060/*"grand_setup_svt"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_20061/*"grand_setup_svt_equip"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    138,
    (Il2CppObject *)StringLiteral_17191/*"battle_skip"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  ResponseCommandKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__o *)v1;
  sub_1C7BA8C(
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

  if ( (byte_4CED5A4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    byte_4CED5A4 = 1;
  }
  v3 = ResponseCommandKind_TypeInfo;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
    v3 = ResponseCommandKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1C7BD40(0, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_34BC4AC *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
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

  if ( (byte_4CED5A5 & 1) == 0 )
  {
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    byte_4CED5A5 = 1;
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
        sub_1C7BD48(Name);
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
    sub_1C7BD40(Name, v6);
  }
  return 0;
}