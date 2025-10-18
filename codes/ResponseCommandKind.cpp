void ResponseCommandKind___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4C41ECC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
    sub_1C37058(&ResponseCommandKind_TypeInfo);
    sub_1C37058(&StringLiteral_17764/*"card_combine"*/);
    sub_1C37058(&StringLiteral_17781/*"card_statussync"*/);
    sub_1C37058(&StringLiteral_19681/*"friend_accept"*/);
    sub_1C37058(&StringLiteral_19992/*"home"*/);
    sub_1C37058(&StringLiteral_24776/*"war_board_treasure"*/);
    sub_1C37058(&StringLiteral_17106/*"battle_scenario"*/);
    sub_1C37058(&StringLiteral_19271/*"event_scan_panel_map"*/);
    sub_1C37058(&StringLiteral_17370/*"box_gacha_draw"*/);
    sub_1C37058(&StringLiteral_24200/*"treasure_box_draw"*/);
    sub_1C37058(&StringLiteral_24770/*"war_board_master_attack"*/);
    sub_1C37058(&StringLiteral_24769/*"war_board_finish"*/);
    sub_1C37058(&StringLiteral_17112/*"battle_use_continue_item"*/);
    sub_1C37058(&StringLiteral_19182/*"event_deck_setup"*/);
    sub_1C37058(&StringLiteral_18044/*"coin_room_put"*/);
    sub_1C37058(&StringLiteral_18514/*"debug_delete_servant"*/);
    sub_1C37058(&StringLiteral_17765/*"card_combine_costume"*/);
    sub_1C37058(&StringLiteral_17104/*"battle_result"*/);
    sub_1C37058(&StringLiteral_19301/*"event_trade_start"*/);
    sub_1C37058(&StringLiteral_19685/*"friend_offer"*/);
    sub_1C37058(&StringLiteral_17306/*"blacklist_top"*/);
    sub_1C37058(&StringLiteral_21341/*"login"*/);
    sub_1C37058(&StringLiteral_19687/*"friend_remove"*/);
    sub_1C37058(&StringLiteral_24777/*"war_board_turn_end"*/);
    sub_1C37058(&StringLiteral_18513/*"debug_add_servant"*/);
    sub_1C37058(&StringLiteral_17769/*"card_combine_skill"*/);
    sub_1C37058(&StringLiteral_19219/*"event_mission_notify"*/);
    sub_1C37058(&StringLiteral_18517/*"debug_server_time"*/);
    sub_1C37058(&StringLiteral_22789/*"profile"*/);
    sub_1C37058(&StringLiteral_19258/*"event_receive_cooltime_reward"*/);
    sub_1C37058(&StringLiteral_19901/*"grand_setup_svt"*/);
    sub_1C37058(&StringLiteral_24595/*"user_status_flag_set"*/);
    sub_1C37058(&StringLiteral_17772/*"card_exchange_append_passive_skill"*/);
    sub_1C37058(&StringLiteral_24772/*"war_board_reinforcements"*/);
    sub_1C37058(&StringLiteral_19300/*"event_trade_receive"*/);
    sub_1C37058(&StringLiteral_17773/*"card_favorite"*/);
    sub_1C37058(&StringLiteral_17110/*"battle_turn"*/);
    sub_1C37058(&StringLiteral_24775/*"war_board_start"*/);
    sub_1C37058(&StringLiteral_24768/*"war_board_continue"*/);
    sub_1C37058(&StringLiteral_23878/*"svt_equip_combine"*/);
    sub_1C37058(&StringLiteral_24241/*"tutorial_set"*/);
    sub_1C37058(&StringLiteral_23719/*"storage_takeout"*/);
    sub_1C37058(&StringLiteral_17023/*"bank_status"*/);
    sub_1C37058(&StringLiteral_22832/*"purchase_by_stone"*/);
    sub_1C37058(&StringLiteral_19684/*"friend_message_hide_sync"*/);
    sub_1C37058(&StringLiteral_18165/*"command_code_statussync"*/);
    sub_1C37058(&StringLiteral_24759/*"war_board_battle_result"*/);
    sub_1C37058(&StringLiteral_22794/*"profile_edit_name"*/);
    sub_1C37058(&StringLiteral_23498/*"signup"*/);
    sub_1C37058(&StringLiteral_19183/*"event_digging"*/);
    sub_1C37058(&StringLiteral_18163/*"command_code_lock"*/);
    sub_1C37058(&StringLiteral_17993/*"class_board_release_lock"*/);
    sub_1C37058(&StringLiteral_24771/*"war_board_move"*/);
    sub_1C37058(&StringLiteral_18166/*"command_code_unlock"*/);
    sub_1C37058(&StringLiteral_23267/*"sell_svt"*/);
    sub_1C37058(&StringLiteral_23014/*"regist_account"*/);
    sub_1C37058(&StringLiteral_17105/*"battle_resume"*/);
    sub_1C37058(&StringLiteral_19535/*"follower_edit_name"*/);
    sub_1C37058(&StringLiteral_18515/*"debug_edit_servant"*/);
    sub_1C37058(&StringLiteral_18161/*"command_code_attach"*/);
    sub_1C37058(&StringLiteral_19215/*"event_location"*/);
    sub_1C37058(&StringLiteral_18162/*"command_code_detach"*/);
    sub_1C37058(&StringLiteral_18164/*"command_code_setstatus"*/);
    sub_1C37058(&StringLiteral_19191/*"event_expedition_finish"*/);
    sub_1C37058(&StringLiteral_18516/*"debug_quest"*/);
    sub_1C37058(&StringLiteral_19220/*"event_mission_random_cancel"*/);
    sub_1C37058(&StringLiteral_22831/*"purchase_by_bank"*/);
    sub_1C37058(&StringLiteral_19688/*"friend_top"*/);
    sub_1C37058(&StringLiteral_19752/*"gamedata"*/);
    sub_1C37058(&StringLiteral_19272/*"event_script_flag_on"*/);
    sub_1C37058(&StringLiteral_19536/*"follower_setup"*/);
    sub_1C37058(&StringLiteral_19192/*"event_expedition_start"*/);
    sub_1C37058(&StringLiteral_18256/*"continue_decide"*/);
    sub_1C37058(&StringLiteral_19683/*"friend_lock_sync"*/);
    sub_1C37058(&StringLiteral_17782/*"card_svt_flag"*/);
    sub_1C37058(&StringLiteral_22767/*"present_receive"*/);
    sub_1C37058(&StringLiteral_18257/*"continue_input"*/);
    sub_1C37058(&StringLiteral_19686/*"friend_reject"*/);
    sub_1C37058(&StringLiteral_19193/*"event_fortification"*/);
    sub_1C37058(&StringLiteral_19262/*"event_reset_digging"*/);
    sub_1C37058(&StringLiteral_17305/*"blacklist_remove"*/);
    sub_1C37058(&StringLiteral_19259/*"event_recoverySync"*/);
    sub_1C37058(&StringLiteral_24778/*"war_board_wall_attack"*/);
    sub_1C37058(&StringLiteral_23718/*"storage_takein"*/);
    sub_1C37058(&StringLiteral_18040/*"code_input"*/);
    sub_1C37058(&StringLiteral_19737/*"gacha_draw"*/);
    sub_1C37058(&StringLiteral_24767/*"war_board_command_spell"*/);
    sub_1C37058(&StringLiteral_17994/*"class_board_release_square"*/);
    sub_1C37058(&StringLiteral_19682/*"friend_cancel"*/);
    sub_1C37058(&StringLiteral_17770/*"card_combine_td"*/);
    sub_1C37058(&StringLiteral_17103/*"battle_reset"*/);
    sub_1C37058(&StringLiteral_22820/*"purchase"*/);
    sub_1C37058(&StringLiteral_19902/*"grand_setup_svt_equip"*/);
    sub_1C37058(&StringLiteral_19221/*"event_mission_receive"*/);
    sub_1C37058(&StringLiteral_17768/*"card_combine_passive_skill"*/);
    sub_1C37058(&StringLiteral_21030/*"item_recover"*/);
    sub_1C37058(&StringLiteral_17102/*"battle_quest_route"*/);
    sub_1C37058(&StringLiteral_24240/*"tutorial_event_flag_set"*/);
    sub_1C37058(&StringLiteral_17095/*"battle_command_spell"*/);
    sub_1C37058(&StringLiteral_18530/*"deck_edit_name"*/);
    sub_1C37058(&StringLiteral_17096/*"battle_interruption"*/);
    sub_1C37058(&StringLiteral_18167/*"command_spell"*/);
    sub_1C37058(&StringLiteral_24774/*"war_board_setup"*/);
    sub_1C37058(&StringLiteral_17304/*"blacklist_regist"*/);
    sub_1C37058(&StringLiteral_17111/*"battle_use_continue"*/);
    sub_1C37058(&StringLiteral_17107/*"battle_setup"*/);
    sub_1C37058(&StringLiteral_19520/*"follow_remove"*/);
    sub_1C37058(&StringLiteral_19537/*"follower_setup_recommend_support"*/);
    sub_1C37058(&StringLiteral_21031/*"item_use"*/);
    sub_1C37058(&StringLiteral_22936/*"raid_auto_update"*/);
    sub_1C37058(&StringLiteral_23064/*"reset_purchase_num"*/);
    sub_1C37058(&StringLiteral_17727/*"cancel_purchase_by_bank"*/);
    sub_1C37058(&StringLiteral_19519/*"follow_assign"*/);
    sub_1C37058(&StringLiteral_18258/*"continue_prepare"*/);
    sub_1C37058(&StringLiteral_22759/*"prepare_purchase_by_bank"*/);
    sub_1C37058(&StringLiteral_24239/*"tutorial_clear"*/);
    sub_1C37058(&StringLiteral_19181/*"event_daily_point"*/);
    sub_1C37058(&StringLiteral_17371/*"box_gacha_reset"*/);
    sub_1C37058(&StringLiteral_18014/*"client_api_error_dialog"*/);
    sub_1C37058(&StringLiteral_24773/*"war_board_resume"*/);
    sub_1C37058(&StringLiteral_17771/*"card_command_card_exceed"*/);
    sub_1C37058(&StringLiteral_24592/*"user_formation"*/);
    sub_1C37058(&StringLiteral_17774/*"card_friendship_exceed"*/);
    sub_1C37058(&StringLiteral_23879/*"svt_equip_set"*/);
    sub_1C37058(&StringLiteral_18518/*"debug_update_user"*/);
    sub_1C37058(&StringLiteral_17776/*"card_init_random_limit_count"*/);
    sub_1C37058(&StringLiteral_19261/*"event_reset_data_lost_battle"*/);
    sub_1C37058(&StringLiteral_24512/*"userDelete"*/);
    sub_1C37058(&StringLiteral_18531/*"deck_setup"*/);
    sub_1C37058(&StringLiteral_17767/*"card_combine_limit_special"*/);
    sub_1C37058(&StringLiteral_17949/*"check_date_version"*/);
    sub_1C37058(&StringLiteral_22793/*"profile_edit_birth"*/);
    sub_1C37058(&StringLiteral_17778/*"card_locksync"*/);
    sub_1C37058(&StringLiteral_17766/*"card_combine_exceed"*/);
    sub_1C37058(&StringLiteral_17777/*"card_limit"*/);
    sub_1C37058(&StringLiteral_24766/*"war_board_buff_save"*/);
    sub_1C37058(&StringLiteral_19180/*"event_create_recipe"*/);
    byte_4C41ECC = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_342CC4C *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string___ctor__);
  if ( !v1 )
    sub_1C372B4(v2);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    0,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1,
    (Il2CppObject *)StringLiteral_23498/*"signup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    2,
    (Il2CppObject *)StringLiteral_23014/*"regist_account"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    3,
    (Il2CppObject *)StringLiteral_19752/*"gamedata"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_21341/*"login"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    5,
    (Il2CppObject *)StringLiteral_19992/*"home"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    6,
    (Il2CppObject *)StringLiteral_19737/*"gacha_draw"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    7,
    (Il2CppObject *)StringLiteral_18531/*"deck_setup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    8,
    (Il2CppObject *)StringLiteral_24592/*"user_formation"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_22820/*"purchase"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_22832/*"purchase_by_stone"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    11,
    (Il2CppObject *)StringLiteral_22831/*"purchase_by_bank"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    12,
    (Il2CppObject *)StringLiteral_23267/*"sell_svt"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    13,
    (Il2CppObject *)StringLiteral_19685/*"friend_offer"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    14,
    (Il2CppObject *)StringLiteral_19681/*"friend_accept"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    15,
    (Il2CppObject *)StringLiteral_19686/*"friend_reject"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    16,
    (Il2CppObject *)StringLiteral_19682/*"friend_cancel"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    17,
    (Il2CppObject *)StringLiteral_19687/*"friend_remove"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    18,
    (Il2CppObject *)StringLiteral_22789/*"profile"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    19,
    (Il2CppObject *)StringLiteral_22794/*"profile_edit_name"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_17107/*"battle_setup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    21,
    (Il2CppObject *)StringLiteral_17110/*"battle_turn"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_17104/*"battle_result"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_17095/*"battle_command_spell"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    24,
    (Il2CppObject *)StringLiteral_17111/*"battle_use_continue"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    25,
    (Il2CppObject *)StringLiteral_17764/*"card_combine"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    26,
    (Il2CppObject *)StringLiteral_17769/*"card_combine_skill"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    27,
    (Il2CppObject *)StringLiteral_17770/*"card_combine_td"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    28,
    (Il2CppObject *)StringLiteral_17774/*"card_friendship_exceed"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    29,
    (Il2CppObject *)StringLiteral_22767/*"present_receive"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_18040/*"code_input"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    31,
    (Il2CppObject *)StringLiteral_18258/*"continue_prepare"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_18257/*"continue_input"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    33,
    (Il2CppObject *)StringLiteral_18256/*"continue_decide"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_17773/*"card_favorite"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_17776/*"card_init_random_limit_count"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    36,
    (Il2CppObject *)StringLiteral_24241/*"tutorial_set"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    37,
    (Il2CppObject *)StringLiteral_24239/*"tutorial_clear"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_17105/*"battle_resume"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_17777/*"card_limit"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_23879/*"svt_equip_set"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_23878/*"svt_equip_combine"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_18516/*"debug_quest"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_22793/*"profile_edit_birth"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_21031/*"item_use"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    45,
    (Il2CppObject *)StringLiteral_21030/*"item_recover"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    46,
    (Il2CppObject *)StringLiteral_18167/*"command_spell"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    47,
    (Il2CppObject *)StringLiteral_17370/*"box_gacha_draw"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    48,
    (Il2CppObject *)StringLiteral_17371/*"box_gacha_reset"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    49,
    (Il2CppObject *)StringLiteral_19219/*"event_mission_notify"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_19221/*"event_mission_receive"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    51,
    (Il2CppObject *)StringLiteral_19536/*"follower_setup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    52,
    (Il2CppObject *)StringLiteral_17106/*"battle_scenario"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    53,
    (Il2CppObject *)StringLiteral_18530/*"deck_edit_name"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    54,
    (Il2CppObject *)StringLiteral_18517/*"debug_server_time"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    55,
    (Il2CppObject *)StringLiteral_17766/*"card_combine_exceed"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    56,
    (Il2CppObject *)StringLiteral_17778/*"card_locksync"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    57,
    (Il2CppObject *)StringLiteral_24240/*"tutorial_event_flag_set"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    58,
    (Il2CppObject *)StringLiteral_23718/*"storage_takein"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    59,
    (Il2CppObject *)StringLiteral_23719/*"storage_takeout"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_19535/*"follower_edit_name"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_17023/*"bank_status"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    62,
    (Il2CppObject *)StringLiteral_17765/*"card_combine_costume"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    63,
    (Il2CppObject *)StringLiteral_17306/*"blacklist_top"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    64,
    (Il2CppObject *)StringLiteral_17304/*"blacklist_regist"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    65,
    (Il2CppObject *)StringLiteral_17305/*"blacklist_remove"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    66,
    (Il2CppObject *)StringLiteral_19684/*"friend_message_hide_sync"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    67,
    (Il2CppObject *)StringLiteral_19272/*"event_script_flag_on"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    68,
    (Il2CppObject *)StringLiteral_17782/*"card_svt_flag"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    69,
    (Il2CppObject *)StringLiteral_19215/*"event_location"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    70,
    (Il2CppObject *)StringLiteral_17781/*"card_statussync"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_18164/*"command_code_setstatus"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_18165/*"command_code_statussync"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    73,
    (Il2CppObject *)StringLiteral_19259/*"event_recoverySync"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    74,
    (Il2CppObject *)StringLiteral_19182/*"event_deck_setup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    75,
    (Il2CppObject *)StringLiteral_24595/*"user_status_flag_set"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    76,
    (Il2CppObject *)StringLiteral_19688/*"friend_top"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    77,
    (Il2CppObject *)StringLiteral_18161/*"command_code_attach"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    78,
    (Il2CppObject *)StringLiteral_18162/*"command_code_detach"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    79,
    (Il2CppObject *)StringLiteral_18166/*"command_code_unlock"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_18518/*"debug_update_user"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    81,
    (Il2CppObject *)StringLiteral_19519/*"follow_assign"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    82,
    (Il2CppObject *)StringLiteral_19520/*"follow_remove"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    83,
    (Il2CppObject *)StringLiteral_19181/*"event_daily_point"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    84,
    (Il2CppObject *)StringLiteral_17771/*"card_command_card_exceed"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    85,
    (Il2CppObject *)StringLiteral_17767/*"card_combine_limit_special"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    86,
    (Il2CppObject *)StringLiteral_17102/*"battle_quest_route"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    87,
    (Il2CppObject *)StringLiteral_19683/*"friend_lock_sync"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    88,
    (Il2CppObject *)StringLiteral_22936/*"raid_auto_update"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    89,
    (Il2CppObject *)StringLiteral_18163/*"command_code_lock"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_24775/*"war_board_start"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_24774/*"war_board_setup"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_24766/*"war_board_buff_save"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    93,
    (Il2CppObject *)StringLiteral_24771/*"war_board_move"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    94,
    (Il2CppObject *)StringLiteral_24776/*"war_board_treasure"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    95,
    (Il2CppObject *)StringLiteral_24777/*"war_board_turn_end"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    96,
    (Il2CppObject *)StringLiteral_24770/*"war_board_master_attack"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    97,
    (Il2CppObject *)StringLiteral_24778/*"war_board_wall_attack"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    98,
    (Il2CppObject *)StringLiteral_24767/*"war_board_command_spell"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    99,
    (Il2CppObject *)StringLiteral_24759/*"war_board_battle_result"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_24769/*"war_board_finish"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    101,
    (Il2CppObject *)StringLiteral_24773/*"war_board_resume"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    102,
    (Il2CppObject *)StringLiteral_24768/*"war_board_continue"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    103,
    (Il2CppObject *)StringLiteral_24772/*"war_board_reinforcements"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    104,
    (Il2CppObject *)StringLiteral_19271/*"event_scan_panel_map"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    105,
    (Il2CppObject *)StringLiteral_17112/*"battle_use_continue_item"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    106,
    (Il2CppObject *)StringLiteral_17949/*"check_date_version"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    107,
    (Il2CppObject *)StringLiteral_21031/*"item_use"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    108,
    (Il2CppObject *)StringLiteral_17768/*"card_combine_passive_skill"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    109,
    (Il2CppObject *)StringLiteral_24200/*"treasure_box_draw"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    110,
    (Il2CppObject *)StringLiteral_19220/*"event_mission_random_cancel"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    111,
    (Il2CppObject *)StringLiteral_18044/*"coin_room_put"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    112,
    (Il2CppObject *)StringLiteral_24512/*"userDelete"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    113,
    (Il2CppObject *)StringLiteral_17103/*"battle_reset"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    114,
    (Il2CppObject *)StringLiteral_19183/*"event_digging"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    115,
    (Il2CppObject *)StringLiteral_19262/*"event_reset_digging"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    116,
    (Il2CppObject *)StringLiteral_19192/*"event_expedition_start"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    117,
    (Il2CppObject *)StringLiteral_19191/*"event_expedition_finish"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    118,
    (Il2CppObject *)StringLiteral_18014/*"client_api_error_dialog"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    119,
    (Il2CppObject *)StringLiteral_19258/*"event_receive_cooltime_reward"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    120,
    (Il2CppObject *)StringLiteral_19180/*"event_create_recipe"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    121,
    (Il2CppObject *)StringLiteral_19193/*"event_fortification"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    122,
    (Il2CppObject *)StringLiteral_17994/*"class_board_release_square"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    123,
    (Il2CppObject *)StringLiteral_17993/*"class_board_release_lock"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    124,
    (Il2CppObject *)StringLiteral_19261/*"event_reset_data_lost_battle"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    125,
    (Il2CppObject *)StringLiteral_18513/*"debug_add_servant"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    126,
    (Il2CppObject *)StringLiteral_18515/*"debug_edit_servant"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    127,
    (Il2CppObject *)StringLiteral_18514/*"debug_delete_servant"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    128,
    (Il2CppObject *)StringLiteral_17096/*"battle_interruption"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    129,
    (Il2CppObject *)StringLiteral_19301/*"event_trade_start"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    130,
    (Il2CppObject *)StringLiteral_19300/*"event_trade_receive"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    131,
    (Il2CppObject *)StringLiteral_22759/*"prepare_purchase_by_bank"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    132,
    (Il2CppObject *)StringLiteral_17727/*"cancel_purchase_by_bank"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    133,
    (Il2CppObject *)StringLiteral_19537/*"follower_setup_recommend_support"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    134,
    (Il2CppObject *)StringLiteral_23064/*"reset_purchase_num"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    135,
    (Il2CppObject *)StringLiteral_17772/*"card_exchange_append_passive_skill"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    136,
    (Il2CppObject *)StringLiteral_19901/*"grand_setup_svt"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    137,
    (Il2CppObject *)StringLiteral_19902/*"grand_setup_svt_equip"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__Add__);
  ResponseCommandKind_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ResponseCommandKind_TypeInfo->static_fields, (int32_t)v1, v3, v4);
}


void ResponseCommandKind___ctor(ResponseCommandKind_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *ResponseCommandKind__GetName(int32_t kind, const MethodInfo *method)
{
  ResponseCommandKind_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0

  if ( (byte_4C41ECA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
    sub_1C37058(&ResponseCommandKind_TypeInfo);
    byte_4C41ECA = 1;
  }
  v3 = ResponseCommandKind_TypeInfo;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
    v3 = ResponseCommandKind_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    sub_1C372B4(0);
  return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                              nameList,
                              kind,
                              (const MethodInfo_342D580 *)Method_System_Collections_Generic_Dictionary_ResponseCommandKind_Kind__string__get_Item__);
}


ResponseData_o *ResponseCommandKind__SearchData(
        int32_t kind,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  System_String_o *Name; // x0
  int max_length; // w8
  System_String_o *v7; // x20
  unsigned int v8; // w22
  ResponseData_o *v9; // x21

  if ( (byte_4C41ECB & 1) == 0 )
  {
    sub_1C37058(&ResponseCommandKind_TypeInfo);
    byte_4C41ECB = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  Name = ResponseCommandKind__GetName(kind, (const MethodInfo *)responseList);
  if ( !responseList )
    goto LABEL_15;
  max_length = responseList->max_length;
  if ( max_length >= 1 )
  {
    v7 = Name;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C372BC(Name);
      v9 = responseList->m_Items[v8];
      if ( !v9 )
        break;
      Name = (System_String_o *)System_String__op_Equality(v9->fields.nid, v7, 0);
      if ( ((unsigned __int8)Name & 1) != 0 )
        return v9;
      max_length = responseList->max_length;
      if ( (int)++v8 >= max_length )
        return 0;
    }
LABEL_15:
    sub_1C372B4(Name);
  }
  return 0;
}