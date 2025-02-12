void __fastcall DatFileName___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v49; // x19
  __int64 v50; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7

  if ( (byte_4BB3679 & 1) == 0 )
  {
    sub_1C13D24(&DatFileName_TypeInfo, v1);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__, v2);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo, v4);
    sub_1C13D24(&StringLiteral_18285/*"class_board_release_lock"*/, v5);
    sub_1C13D24(&StringLiteral_17409/*"battle_result"*/, v6);
    sub_1C13D24(&StringLiteral_23506/*"sequence"*/, v7);
    sub_1C13D24(&StringLiteral_24558/*"ui_end_quest_phase"*/, v8);
    sub_1C13D24(&StringLiteral_24870/*"userSvtCommandCard"*/, v9);
    sub_1C13D24(&StringLiteral_23103/*"questboard_cap_closed_special_2"*/, v10);
    sub_1C13D24(&StringLiteral_25059/*"war_board_battle_result"*/, v11);
    sub_1C13D24(&StringLiteral_17238/*"audioclip"*/, v12);
    sub_1C13D24(&StringLiteral_21691/*"master_mission_panel"*/, v13);
    sub_1C13D24(&StringLiteral_22870/*"password_emailcode"*/, v14);
    sub_1C13D24(&StringLiteral_23508/*"sequenceSelectTypeByGender"*/, v15);
    sub_1C13D24(&StringLiteral_24861/*"userState"*/, v16);
    sub_1C13D24(&StringLiteral_23095/*"quest_info"*/, v17);
    sub_1C13D24(&StringLiteral_23512/*"serializationStream"*/, v18);
    sub_1C13D24(&StringLiteral_24867/*"userSvtAppendPassiveSkillLv"*/, v19);
    sub_1C13D24(&StringLiteral_23036/*"public"*/, v20);
    sub_1C13D24(&StringLiteral_17408/*"battle_reset"*/, v21);
    sub_1C13D24(&StringLiteral_21692/*"master_mission_special"*/, v22);
    sub_1C13D24(&StringLiteral_23507/*"sequence expected to contain elements only. Schema was not created using this tool."*/, v23);
    sub_1C13D24(&StringLiteral_21652/*"mask-character"*/, v24);
    sub_1C13D24(&StringLiteral_17237/*"audio.supported"*/, v25);
    sub_1C13D24(&StringLiteral_17407/*"battle_quest_route"*/, v26);
    sub_1C13D24(&StringLiteral_24866/*"userSvtAppendPassiveSkill"*/, v27);
    sub_1C13D24(&StringLiteral_24348/*"time_status_icon_free"*/, v28);
    sub_1C13D24(&StringLiteral_24871/*"userSvtCommandCode"*/, v29);
    sub_1C13D24(&StringLiteral_24865/*"userSvt"*/, v30);
    sub_1C13D24(&StringLiteral_24860/*"userShop"*/, v31);
    sub_1C13D24(&StringLiteral_24862/*"userStatus/flagSet"*/, v32);
    sub_1C13D24(&StringLiteral_22717/*"or-IN"*/, v33);
    sub_1C13D24(&StringLiteral_21390/*"l3"*/, v34);
    sub_1C13D24(&StringLiteral_25057/*"warMoveCameraSquare"*/, v35);
    sub_1C13D24(&StringLiteral_22871/*"path"*/, v36);
    sub_1C13D24(&StringLiteral_19958/*"friend/reject"*/, v37);
    sub_1C13D24(&StringLiteral_21650/*"maroon"*/, v38);
    sub_1C13D24(&StringLiteral_23096/*"quest_main"*/, v39);
    sub_1C13D24(&StringLiteral_24864/*"userSupportDeck"*/, v40);
    sub_1C13D24(&StringLiteral_21651/*"mask"*/, v41);
    sub_1C13D24(&StringLiteral_17404/*"battle_num_"*/, v42);
    sub_1C13D24(&StringLiteral_21693/*"master_mission_weekly"*/, v43);
    sub_1C13D24(&StringLiteral_24869/*"userSvtCollection"*/, v44);
    sub_1C13D24(&StringLiteral_23713/*"show-border"*/, v45);
    sub_1C13D24(&StringLiteral_25058/*"war_"*/, v46);
    sub_1C13D24(&StringLiteral_23430/*"sceneLoad"*/, v47);
    sub_1C13D24(&StringLiteral_24868/*"userSvtCoin"*/, v48);
    byte_4BB3679 = 1;
  }
  v49 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C13F70(System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v49,
    (const MethodInfo_32C1BD4 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
  if ( !v49 )
    sub_1C13F80(v50, v51);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    0,
    (Il2CppObject *)StringLiteral_23430/*"sceneLoad"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    1,
    (Il2CppObject *)StringLiteral_23036/*"public"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    2,
    (Il2CppObject *)StringLiteral_17408/*"battle_reset"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    3,
    (Il2CppObject *)StringLiteral_17404/*"battle_num_"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    4,
    (Il2CppObject *)StringLiteral_24868/*"userSvtCoin"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    5,
    (Il2CppObject *)StringLiteral_24871/*"userSvtCommandCode"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    6,
    (Il2CppObject *)StringLiteral_24870/*"userSvtCommandCard"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    7,
    (Il2CppObject *)StringLiteral_24867/*"userSvtAppendPassiveSkillLv"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    8,
    (Il2CppObject *)StringLiteral_24862/*"userStatus/flagSet"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    9,
    (Il2CppObject *)StringLiteral_24861/*"userState"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    10,
    (Il2CppObject *)StringLiteral_24860/*"userShop"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    11,
    (Il2CppObject *)StringLiteral_24869/*"userSvtCollection"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    12,
    (Il2CppObject *)StringLiteral_22717/*"or-IN"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    13,
    (Il2CppObject *)StringLiteral_21651/*"mask"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    14,
    (Il2CppObject *)StringLiteral_21652/*"mask-character"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    15,
    (Il2CppObject *)StringLiteral_21650/*"maroon"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    16,
    (Il2CppObject *)StringLiteral_17237/*"audio.supported"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    17,
    (Il2CppObject *)StringLiteral_17238/*"audioclip"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    18,
    (Il2CppObject *)StringLiteral_23713/*"show-border"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    19,
    (Il2CppObject *)StringLiteral_23512/*"serializationStream"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    20,
    (Il2CppObject *)StringLiteral_19958/*"friend/reject"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    21,
    (Il2CppObject *)StringLiteral_22870/*"password_emailcode"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    22,
    (Il2CppObject *)StringLiteral_22871/*"path"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    23,
    (Il2CppObject *)StringLiteral_24865/*"userSvt"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    24,
    (Il2CppObject *)StringLiteral_24866/*"userSvtAppendPassiveSkill"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    25,
    (Il2CppObject *)StringLiteral_24864/*"userSupportDeck"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    26,
    (Il2CppObject *)StringLiteral_21693/*"master_mission_weekly"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    27,
    (Il2CppObject *)StringLiteral_23508/*"sequenceSelectTypeByGender"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    28,
    (Il2CppObject *)StringLiteral_23507/*"sequence expected to contain elements only. Schema was not created using this tool."*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    29,
    (Il2CppObject *)StringLiteral_17407/*"battle_quest_route"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    30,
    (Il2CppObject *)StringLiteral_17409/*"battle_result"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    31,
    (Il2CppObject *)StringLiteral_24558/*"ui_end_quest_phase"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    32,
    (Il2CppObject *)StringLiteral_23506/*"sequence"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    33,
    (Il2CppObject *)StringLiteral_23096/*"quest_main"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    34,
    (Il2CppObject *)StringLiteral_21390/*"l3"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    35,
    (Il2CppObject *)StringLiteral_21691/*"master_mission_panel"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    36,
    (Il2CppObject *)StringLiteral_18285/*"class_board_release_lock"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    37,
    (Il2CppObject *)StringLiteral_21692/*"master_mission_special"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    38,
    (Il2CppObject *)StringLiteral_25058/*"war_"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    39,
    (Il2CppObject *)StringLiteral_25059/*"war_board_battle_result"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    40,
    (Il2CppObject *)StringLiteral_24348/*"time_status_icon_free"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    41,
    (Il2CppObject *)StringLiteral_25057/*"warMoveCameraSquare"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    42,
    (Il2CppObject *)StringLiteral_23095/*"quest_info"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    43,
    (Il2CppObject *)StringLiteral_23103/*"questboard_cap_closed_special_2"*/,
    (const MethodInfo_32C25A8 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  DatFileName_TypeInfo->static_fields->filelist = (struct System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__o *)v49;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)DatFileName_TypeInfo->static_fields,
    (int64_t)v49,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
}


void __fastcall DatFileName___ctor(DatFileName_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall DatFileName__getFileName(int32_t name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DatFileName_c *v7; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v9; // x0
  Il2CppObject *Item; // x19

  if ( (byte_4BB3674 & 1) == 0 )
  {
    sub_1C13D24(&AndroidUtil_TypeInfo, method);
    sub_1C13D24(&DatFileName_TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v5);
    sub_1C13D24(&StringLiteral_1/*""*/, v6);
    byte_4BB3674 = 1;
  }
  v7 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v7 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v7->static_fields->filelist;
  if ( !filelist )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_32C279C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v9 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v9 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v9->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_32C2508 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1C13F80(filelist, method);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed((System_String_o *)Item, 0LL);
}


System_String_o *__fastcall DatFileName__getFileNameNotConverted(int32_t name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DatFileName_c *v6; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v8; // x0

  if ( (byte_4BB3678 & 1) == 0 )
  {
    sub_1C13D24(&DatFileName_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v4);
    sub_1C13D24(&StringLiteral_1/*""*/, v5);
    byte_4BB3678 = 1;
  }
  v6 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v6 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v6->static_fields->filelist;
  if ( !filelist )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_32C279C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v8 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v8 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v8->static_fields->filelist;
    if ( filelist )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  filelist,
                                  name,
                                  (const MethodInfo_32C2508 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_12:
    sub_1C13F80(filelist, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DatFileName__getFileName_38824328(int32_t name, int64_t l, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DatFileName_c *v10; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  DatFileName_c *v15; // x0
  Il2CppObject *Item; // x20
  Il2CppObject *v17; // x0
  System_String_o *v18; // x19
  int64_t v20; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB3675 & 1) == 0 )
  {
    sub_1C13D24(&AndroidUtil_TypeInfo, l);
    sub_1C13D24(&DatFileName_TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v7);
    sub_1C13D24(&long_TypeInfo, v8);
    sub_1C13D24(&StringLiteral_1/*""*/, v9);
    byte_4BB3675 = 1;
  }
  v10 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v10 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v10->static_fields->filelist;
  if ( !filelist )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_32C279C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v15 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v15 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v15->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_32C2508 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1C13F80(filelist, l);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v20 = l;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v20, v12, v13, v14);
  v18 = System_String__Format((System_String_o *)Item, v17, 0LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DatFileName__getFileName_38824680(
        int32_t name,
        int32_t i1,
        int32_t i2,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DatFileName_c *v12; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  DatFileName_c *v17; // x0
  Il2CppObject *Item; // x21
  Il2CppObject *v19; // x20
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  System_String_o *v24; // x19
  int32_t v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB3676 & 1) == 0 )
  {
    sub_1C13D24(&AndroidUtil_TypeInfo, *(_QWORD *)&i1);
    sub_1C13D24(&DatFileName_TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9);
    sub_1C13D24(&int_TypeInfo, v10);
    sub_1C13D24(&StringLiteral_1/*""*/, v11);
    byte_4BB3676 = 1;
  }
  v12 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v12 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v12->static_fields->filelist;
  if ( !filelist )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_32C279C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v17 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v17 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v17->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_32C2508 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1C13F80(filelist, *(_QWORD *)&i1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v27 = i1;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v14, v15, v16);
  v26 = i2;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v20, v21, v22);
  v24 = System_String__Format_62982316((System_String_o *)Item, v19, v23, 0LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v24, 0LL);
}


System_String_o *__fastcall DatFileName__getFileName_38825068(
        int32_t name,
        System_String_o *str1,
        System_String_o *str2,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DatFileName_c *v11; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  DatFileName_c *v13; // x0
  Il2CppObject *Item; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x19

  if ( (byte_4BB3677 & 1) == 0 )
  {
    sub_1C13D24(&AndroidUtil_TypeInfo, str1);
    sub_1C13D24(&DatFileName_TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9);
    sub_1C13D24(&StringLiteral_1/*""*/, v10);
    byte_4BB3677 = 1;
  }
  v11 = DatFileName_TypeInfo;
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
    v11 = DatFileName_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v11->static_fields->filelist;
  if ( !filelist )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         name,
         (const MethodInfo_32C279C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
  {
    v13 = DatFileName_TypeInfo;
    if ( !DatFileName_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
      v13 = DatFileName_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v13->static_fields->filelist;
    if ( filelist )
    {
      Item = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
               filelist,
               name,
               (const MethodInfo_32C2508 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_18:
    sub_1C13F80(filelist, str1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  if ( str2 )
    v15 = System_String__Format_62982316((System_String_o *)Item, (Il2CppObject *)str1, (Il2CppObject *)str2, 0LL);
  else
    v15 = System_String__Format((System_String_o *)Item, (Il2CppObject *)str1, 0LL);
  v16 = v15;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v16, 0LL);
}