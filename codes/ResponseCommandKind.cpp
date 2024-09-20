void __fastcall ResponseCommandKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5A186 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_17766/*"card_combine"*/);
    sub_1B885B0(&StringLiteral_17782/*"card_statussync"*/);
    sub_1B885B0(&StringLiteral_19645/*"friend_accept"*/);
    sub_1B885B0(&StringLiteral_19942/*"home"*/);
    sub_1B885B0(&StringLiteral_24656/*"war_board_treasure"*/);
    sub_1B885B0(&StringLiteral_17136/*"battle_scenario"*/);
    sub_1B885B0(&StringLiteral_19250/*"event_scan_panel_map"*/);
    sub_1B885B0(&StringLiteral_17399/*"box_gacha_draw"*/);
    sub_1B885B0(&StringLiteral_24063/*"treasure_box_draw"*/);
    sub_1B885B0(&StringLiteral_24650/*"war_board_master_attack"*/);
    sub_1B885B0(&StringLiteral_24649/*"war_board_finish"*/);
    sub_1B885B0(&StringLiteral_17142/*"battle_use_continue_item"*/);
    sub_1B885B0(&StringLiteral_19163/*"event_deck_setup"*/);
    sub_1B885B0(&StringLiteral_18045/*"coin_room_put"*/);
    sub_1B885B0(&StringLiteral_18512/*"debug_delete_servant"*/);
    sub_1B885B0(&StringLiteral_17767/*"card_combine_costume"*/);
    sub_1B885B0(&StringLiteral_17134/*"battle_result"*/);
    sub_1B885B0(&StringLiteral_19280/*"event_trade_start"*/);
    sub_1B885B0(&StringLiteral_19649/*"friend_offer"*/);
    sub_1B885B0(&StringLiteral_17337/*"blacklist_top"*/);
    sub_1B885B0(&StringLiteral_21202/*"login"*/);
    sub_1B885B0(&StringLiteral_19651/*"friend_remove"*/);
    sub_1B885B0(&StringLiteral_24657/*"war_board_turn_end"*/);
    sub_1B885B0(&StringLiteral_18511/*"debug_add_servant"*/);
    sub_1B885B0(&StringLiteral_17771/*"card_combine_skill"*/);
    sub_1B885B0(&StringLiteral_19198/*"event_mission_notify"*/);
    sub_1B885B0(&StringLiteral_18515/*"debug_server_time"*/);
    sub_1B885B0(&StringLiteral_22613/*"profile"*/);
    sub_1B885B0(&StringLiteral_19237/*"event_receive_cooltime_reward"*/);
    sub_1B885B0(&StringLiteral_24461/*"user_status_flag_set"*/);
    sub_1B885B0(&StringLiteral_24652/*"war_board_reinforcements"*/);
    sub_1B885B0(&StringLiteral_19279/*"event_trade_receive"*/);
    sub_1B885B0(&StringLiteral_17774/*"card_favorite"*/);
    sub_1B885B0(&StringLiteral_17140/*"battle_turn"*/);
    sub_1B885B0(&StringLiteral_24655/*"war_board_start"*/);
    sub_1B885B0(&StringLiteral_24648/*"war_board_continue"*/);
    sub_1B885B0(&StringLiteral_23716/*"svt_equip_combine"*/);
    sub_1B885B0(&StringLiteral_24104/*"tutorial_set"*/);
    sub_1B885B0(&StringLiteral_23557/*"storage_takeout"*/);
    sub_1B885B0(&StringLiteral_17059/*"bank_status"*/);
    sub_1B885B0(&StringLiteral_22661/*"purchase_by_stone"*/);
    sub_1B885B0(&StringLiteral_19648/*"friend_message_hide_sync"*/);
    sub_1B885B0(&StringLiteral_18161/*"command_code_statussync"*/);
    sub_1B885B0(&StringLiteral_24639/*"war_board_battle_result"*/);
    sub_1B885B0(&StringLiteral_22618/*"profile_edit_name"*/);
    sub_1B885B0(&StringLiteral_23323/*"signup"*/);
    sub_1B885B0(&StringLiteral_19164/*"event_digging"*/);
    sub_1B885B0(&StringLiteral_18159/*"command_code_lock"*/);
    sub_1B885B0(&StringLiteral_17995/*"class_board_release_lock"*/);
    sub_1B885B0(&StringLiteral_24651/*"war_board_move"*/);
    sub_1B885B0(&StringLiteral_18162/*"command_code_unlock"*/);
    sub_1B885B0(&StringLiteral_23097/*"sell_svt"*/);
    sub_1B885B0(&StringLiteral_22840/*"regist_account"*/);
    sub_1B885B0(&StringLiteral_17135/*"battle_resume"*/);
    sub_1B885B0(&StringLiteral_19512/*"follower_edit_name"*/);
    sub_1B885B0(&StringLiteral_18513/*"debug_edit_servant"*/);
    sub_1B885B0(&StringLiteral_18157/*"command_code_attach"*/);
    sub_1B885B0(&StringLiteral_19194/*"event_location"*/);
    sub_1B885B0(&StringLiteral_18158/*"command_code_detach"*/);
    sub_1B885B0(&StringLiteral_18160/*"command_code_setstatus"*/);
    sub_1B885B0(&StringLiteral_19170/*"event_expedition_finish"*/);
    sub_1B885B0(&StringLiteral_18514/*"debug_quest"*/);
    sub_1B885B0(&StringLiteral_19199/*"event_mission_random_cancel"*/);
    sub_1B885B0(&StringLiteral_22660/*"purchase_by_bank"*/);
    sub_1B885B0(&StringLiteral_19652/*"friend_top"*/);
    sub_1B885B0(&StringLiteral_19704/*"gamedata"*/);
    sub_1B885B0(&StringLiteral_19251/*"event_script_flag_on"*/);
    sub_1B885B0(&StringLiteral_19513/*"follower_setup"*/);
    sub_1B885B0(&StringLiteral_19171/*"event_expedition_start"*/);
    sub_1B885B0(&StringLiteral_18248/*"continue_decide"*/);
    sub_1B885B0(&StringLiteral_19647/*"friend_lock_sync"*/);
    sub_1B885B0(&StringLiteral_17783/*"card_svt_flag"*/);
    sub_1B885B0(&StringLiteral_22594/*"present_receive"*/);
    sub_1B885B0(&StringLiteral_18249/*"continue_input"*/);
    sub_1B885B0(&StringLiteral_19650/*"friend_reject"*/);
    sub_1B885B0(&StringLiteral_19172/*"event_fortification"*/);
    sub_1B885B0(&StringLiteral_19241/*"event_reset_digging"*/);
    sub_1B885B0(&StringLiteral_17336/*"blacklist_remove"*/);
    sub_1B885B0(&StringLiteral_19238/*"event_recoverySync"*/);
    sub_1B885B0(&StringLiteral_24658/*"war_board_wall_attack"*/);
    sub_1B885B0(&StringLiteral_23556/*"storage_takein"*/);
    sub_1B885B0(&StringLiteral_18041/*"code_input"*/);
    sub_1B885B0(&StringLiteral_19697/*"gacha_draw"*/);
    sub_1B885B0(&StringLiteral_24647/*"war_board_command_spell"*/);
    sub_1B885B0(&StringLiteral_17996/*"class_board_release_square"*/);
    sub_1B885B0(&StringLiteral_19646/*"friend_cancel"*/);
    sub_1B885B0(&StringLiteral_17772/*"card_combine_td"*/);
    sub_1B885B0(&StringLiteral_17133/*"battle_reset"*/);
    sub_1B885B0(&StringLiteral_22648/*"purchase"*/);
    sub_1B885B0(&StringLiteral_19200/*"event_mission_receive"*/);
    sub_1B885B0(&StringLiteral_17770/*"card_combine_passive_skill"*/);
    sub_1B885B0(&StringLiteral_20889/*"item_recover"*/);
    sub_1B885B0(&StringLiteral_17132/*"battle_quest_route"*/);
    sub_1B885B0(&StringLiteral_24103/*"tutorial_event_flag_set"*/);
    sub_1B885B0(&StringLiteral_17125/*"battle_command_spell"*/);
    sub_1B885B0(&StringLiteral_18525/*"deck_edit_name"*/);
    sub_1B885B0(&StringLiteral_17126/*"battle_interruption"*/);
    sub_1B885B0(&StringLiteral_18163/*"command_spell"*/);
    sub_1B885B0(&StringLiteral_24654/*"war_board_setup"*/);
    sub_1B885B0(&StringLiteral_17335/*"blacklist_regist"*/);
    sub_1B885B0(&StringLiteral_17141/*"battle_use_continue"*/);
    sub_1B885B0(&StringLiteral_17137/*"battle_setup"*/);
    sub_1B885B0(&StringLiteral_19498/*"follow_remove"*/);
    sub_1B885B0(&StringLiteral_19514/*"follower_setup_recommend_support"*/);
    sub_1B885B0(&StringLiteral_20890/*"item_use"*/);
    sub_1B885B0(&StringLiteral_22759/*"raid_auto_update"*/);
    sub_1B885B0(&StringLiteral_17730/*"cancel_purchase_by_bank"*/);
    sub_1B885B0(&StringLiteral_19497/*"follow_assign"*/);
    sub_1B885B0(&StringLiteral_18250/*"continue_prepare"*/);
    sub_1B885B0(&StringLiteral_22587/*"prepare_purchase_by_bank"*/);
    sub_1B885B0(&StringLiteral_24102/*"tutorial_clear"*/);
    sub_1B885B0(&StringLiteral_19162/*"event_daily_point"*/);
    sub_1B885B0(&StringLiteral_17400/*"box_gacha_reset"*/);
    sub_1B885B0(&StringLiteral_18015/*"client_api_error_dialog"*/);
    sub_1B885B0(&StringLiteral_24653/*"war_board_resume"*/);
    sub_1B885B0(&StringLiteral_17773/*"card_command_card_exceed"*/);
    sub_1B885B0(&StringLiteral_24458/*"user_formation"*/);
    sub_1B885B0(&StringLiteral_17775/*"card_friendship_exceed"*/);
    sub_1B885B0(&StringLiteral_23717/*"svt_equip_set"*/);
    sub_1B885B0(&StringLiteral_18516/*"debug_update_user"*/);
    sub_1B885B0(&StringLiteral_17777/*"card_init_random_limit_count"*/);
    sub_1B885B0(&StringLiteral_19240/*"event_reset_data_lost_battle"*/);
    sub_1B885B0(&StringLiteral_24383/*"userDelete"*/);
    sub_1B885B0(&StringLiteral_18526/*"deck_setup"*/);
    sub_1B885B0(&StringLiteral_17769/*"card_combine_limit_special"*/);
    sub_1B885B0(&StringLiteral_17951/*"check_date_version"*/);
    sub_1B885B0(&StringLiteral_22617/*"profile_edit_birth"*/);
    sub_1B885B0(&StringLiteral_17779/*"card_locksync"*/);
    sub_1B885B0(&StringLiteral_17768/*"card_combine_exceed"*/);
    sub_1B885B0(&StringLiteral_17778/*"card_limit"*/);
    sub_1B885B0(&StringLiteral_24646/*"war_board_buff_save"*/);
    sub_1B885B0(&StringLiteral_19161/*"event_create_recipe"*/);
    byte_4A5A186 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_319C86C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1B8880C(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0LL,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_23323/*"signup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_22840/*"regist_account"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_19704/*"gamedata"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_21202/*"login"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_19942/*"home"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_19697/*"gacha_draw"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_18526/*"deck_setup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_24458/*"user_formation"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_22648/*"purchase"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_22661/*"purchase_by_stone"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_22660/*"purchase_by_bank"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_23097/*"sell_svt"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_19649/*"friend_offer"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_19645/*"friend_accept"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_19650/*"friend_reject"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_19646/*"friend_cancel"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_19651/*"friend_remove"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_22613/*"profile"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_22618/*"profile_edit_name"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_17137/*"battle_setup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_17140/*"battle_turn"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_17134/*"battle_result"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_17125/*"battle_command_spell"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_17141/*"battle_use_continue"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_17766/*"card_combine"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_17771/*"card_combine_skill"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_17772/*"card_combine_td"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_17775/*"card_friendship_exceed"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_22594/*"present_receive"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_18041/*"code_input"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_18250/*"continue_prepare"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_18249/*"continue_input"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_18248/*"continue_decide"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_17774/*"card_favorite"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_17777/*"card_init_random_limit_count"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24104/*"tutorial_set"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_24102/*"tutorial_clear"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_17135/*"battle_resume"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_17778/*"card_limit"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_23717/*"svt_equip_set"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_23716/*"svt_equip_combine"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_18514/*"debug_quest"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_22617/*"profile_edit_birth"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_20890/*"item_use"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_20889/*"item_recover"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_18163/*"command_spell"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_17399/*"box_gacha_draw"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_17400/*"box_gacha_reset"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_19198/*"event_mission_notify"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_19200/*"event_mission_receive"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_19513/*"follower_setup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_17136/*"battle_scenario"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_18525/*"deck_edit_name"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_18515/*"debug_server_time"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_17768/*"card_combine_exceed"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_17779/*"card_locksync"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_24103/*"tutorial_event_flag_set"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_23556/*"storage_takein"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_23557/*"storage_takeout"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_19512/*"follower_edit_name"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_17059/*"bank_status"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_17767/*"card_combine_costume"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_17337/*"blacklist_top"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_17335/*"blacklist_regist"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_17336/*"blacklist_remove"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_19648/*"friend_message_hide_sync"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_19251/*"event_script_flag_on"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_17783/*"card_svt_flag"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_19194/*"event_location"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_17782/*"card_statussync"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_18160/*"command_code_setstatus"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_18161/*"command_code_statussync"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_19238/*"event_recoverySync"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_19163/*"event_deck_setup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_24461/*"user_status_flag_set"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_19652/*"friend_top"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_18157/*"command_code_attach"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_18158/*"command_code_detach"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_18162/*"command_code_unlock"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_18516/*"debug_update_user"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_19497/*"follow_assign"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_19498/*"follow_remove"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_19162/*"event_daily_point"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_17773/*"card_command_card_exceed"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_17769/*"card_combine_limit_special"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_17132/*"battle_quest_route"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_19647/*"friend_lock_sync"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_22759/*"raid_auto_update"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_18159/*"command_code_lock"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_24655/*"war_board_start"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_24654/*"war_board_setup"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_24646/*"war_board_buff_save"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_24651/*"war_board_move"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_24656/*"war_board_treasure"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_24657/*"war_board_turn_end"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_24650/*"war_board_master_attack"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_24658/*"war_board_wall_attack"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_24647/*"war_board_command_spell"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_24639/*"war_board_battle_result"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_24649/*"war_board_finish"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_24653/*"war_board_resume"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_24648/*"war_board_continue"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_24652/*"war_board_reinforcements"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_19250/*"event_scan_panel_map"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_17142/*"battle_use_continue_item"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_17951/*"check_date_version"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_20890/*"item_use"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_17770/*"card_combine_passive_skill"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_24063/*"treasure_box_draw"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_19199/*"event_mission_random_cancel"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_18045/*"coin_room_put"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_24383/*"userDelete"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_17133/*"battle_reset"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_19164/*"event_digging"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_19241/*"event_reset_digging"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_19171/*"event_expedition_start"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_19170/*"event_expedition_finish"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_18015/*"client_api_error_dialog"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_19237/*"event_receive_cooltime_reward"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_19161/*"event_create_recipe"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_19172/*"event_fortification"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_17996/*"class_board_release_square"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_17995/*"class_board_release_lock"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_19240/*"event_reset_data_lost_battle"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_18511/*"debug_add_servant"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_18513/*"debug_edit_servant"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_18512/*"debug_delete_servant"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_17126/*"battle_interruption"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_19280/*"event_trade_start"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_19279/*"event_trade_receive"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_22587/*"prepare_purchase_by_bank"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17730/*"cancel_purchase_by_bank"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_19514/*"follower_setup_recommend_support"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  ResponseCommandKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)ResponseCommandKind_TypeInfo->static_fields, (int32_t)v1, v4, v5);
}


void __fastcall ResponseCommandKind___ctor(ResponseCommandKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall ResponseCommandKind__GetName(int32_t kind, const MethodInfo *method)
{
  ResponseCommandKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4A5A184 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    byte_4A5A184 = 1;
  }
  v3 = ResponseCommandKind_TypeInfo;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
    v3 = ResponseCommandKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1B8880C(0LL, method);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_319D1A0 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
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

  if ( (byte_4A5A185 & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    byte_4A5A185 = 1;
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
        sub_1B88814(Name, v6);
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
    sub_1B8880C(Name, v6);
  }
  return 0LL;
}