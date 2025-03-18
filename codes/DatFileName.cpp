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

  if ( (byte_4C20EE8 & 1) == 0 )
  {
    sub_1C3B764(&DatFileName_TypeInfo, v1);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__, v2);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo, v4);
    sub_1C3B764(&StringLiteral_18359/*"ease-in-cubic"*/, v5);
    sub_1C3B764(&StringLiteral_17481/*"channelSinkProviders"*/, v6);
    sub_1C3B764(&StringLiteral_23610/*"time_status_side_03"*/, v7);
    sub_1C3B764(&StringLiteral_24666/*"{0} is not a valid value for {1}."*/, v8);
    sub_1C3B764(&StringLiteral_24981/*"レベル上限："*/, v9);
    sub_1C3B764(&StringLiteral_23201/*"status_servant_"*/, v10);
    sub_1C3B764(&StringLiteral_25171, v11);
    sub_1C3B764(&StringLiteral_17309/*"button_infocheck_unreg"*/, v12);
    sub_1C3B764(&StringLiteral_21770/*"noVoice"*/, v13);
    sub_1C3B764(&StringLiteral_22960/*"shortcut_board_icon_bronze_sapling"*/, v14);
    sub_1C3B764(&StringLiteral_23612/*"time_status_top"*/, v15);
    sub_1C3B764(&StringLiteral_24972/*"バトルスクリプトエラー"*/, v16);
    sub_1C3B764(&StringLiteral_23193/*"status_battle_color"*/, v17);
    sub_1C3B764(&StringLiteral_23616/*"timerStartInMilliseconds"*/, v18);
    sub_1C3B764(&StringLiteral_24978/*"ユーザーIDが存在しないため設定できません"*/, v19);
    sub_1C3B764(&StringLiteral_23132/*"squareIndexGroup"*/, v20);
    sub_1C3B764(&StringLiteral_17480/*"channelInfo"*/, v21);
    sub_1C3B764(&StringLiteral_21771/*"no_craft_{0}"*/, v22);
    sub_1C3B764(&StringLiteral_23611/*"time_status_side_04"*/, v23);
    sub_1C3B764(&StringLiteral_21731/*"ng"*/, v24);
    sub_1C3B764(&StringLiteral_17308/*"button_infocheck_reg"*/, v25);
    sub_1C3B764(&StringLiteral_17479/*"channel"*/, v26);
    sub_1C3B764(&StringLiteral_24977/*"プレイヤー"*/, v27);
    sub_1C3B764(&StringLiteral_24456/*"x-mac-thai"*/, v28);
    sub_1C3B764(&StringLiteral_24982/*"・"*/, v29);
    sub_1C3B764(&StringLiteral_24976/*"フォトフレーム選択ID保持用のPlayerPrefs名"*/, v30);
    sub_1C3B764(&StringLiteral_24971/*"バスター"*/, v31);
    sub_1C3B764(&StringLiteral_24973/*"バトル前スクリプト以外のトークから聖杯戦争盤へ移動することはできません。\nターミナルへ戻ります。"*/, v32);
    sub_1C3B764(&StringLiteral_22807/*"setAdImpressionsCount"*/, v33);
    sub_1C3B764(&StringLiteral_21469/*"mstQuestGroup"*/, v34);
    sub_1C3B764(&StringLiteral_25169, v35);
    sub_1C3B764(&StringLiteral_22961/*"shortcut_board_icon_event_"*/, v36);
    sub_1C3B764(&StringLiteral_20037/*"img_parameter_A"*/, v37);
    sub_1C3B764(&StringLiteral_21729/*"next_release_title_fade_out"*/, v38);
    sub_1C3B764(&StringLiteral_23194/*"status_height"*/, v39);
    sub_1C3B764(&StringLiteral_24975/*"パラメータ"*/, v40);
    sub_1C3B764(&StringLiteral_21730/*"nfi"*/, v41);
    sub_1C3B764(&StringLiteral_17476/*"changeUpdateStatus"*/, v42);
    sub_1C3B764(&StringLiteral_21772/*"no_expedition_{0}"*/, v43);
    sub_1C3B764(&StringLiteral_24980/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/, v44);
    sub_1C3B764(&StringLiteral_23817/*"um2"*/, v45);
    sub_1C3B764(&StringLiteral_25170, v46);
    sub_1C3B764(&StringLiteral_23534/*"tdChangeByBattlePoint_{0}_{1}"*/, v47);
    sub_1C3B764(&StringLiteral_24979/*"リスト"*/, v48);
    byte_4C20EE8 = 1;
  }
  v49 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v49,
    (const MethodInfo_332498C *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string___ctor__);
  if ( !v49 )
    sub_1C3B9C0(v50, v51);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    0,
    (Il2CppObject *)StringLiteral_23534/*"tdChangeByBattlePoint_{0}_{1}"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    1,
    (Il2CppObject *)StringLiteral_23132/*"squareIndexGroup"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    2,
    (Il2CppObject *)StringLiteral_17480/*"channelInfo"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    3,
    (Il2CppObject *)StringLiteral_17476/*"changeUpdateStatus"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    4,
    (Il2CppObject *)StringLiteral_24979/*"リスト"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    5,
    (Il2CppObject *)StringLiteral_24982/*"・"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    6,
    (Il2CppObject *)StringLiteral_24981/*"レベル上限："*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    7,
    (Il2CppObject *)StringLiteral_24978/*"ユーザーIDが存在しないため設定できません"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    8,
    (Il2CppObject *)StringLiteral_24973/*"バトル前スクリプト以外のトークから聖杯戦争盤へ移動することはできません。\nターミナルへ戻ります。"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    9,
    (Il2CppObject *)StringLiteral_24972/*"バトルスクリプトエラー"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    10,
    (Il2CppObject *)StringLiteral_24971/*"バスター"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    11,
    (Il2CppObject *)StringLiteral_24980/*"ルビを含むテキストにも[#置換:ちかん]できますよ"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    12,
    (Il2CppObject *)StringLiteral_22807/*"setAdImpressionsCount"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    13,
    (Il2CppObject *)StringLiteral_21730/*"nfi"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    14,
    (Il2CppObject *)StringLiteral_21731/*"ng"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    15,
    (Il2CppObject *)StringLiteral_21729/*"next_release_title_fade_out"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    16,
    (Il2CppObject *)StringLiteral_17308/*"button_infocheck_reg"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    17,
    (Il2CppObject *)StringLiteral_17309/*"button_infocheck_unreg"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    18,
    (Il2CppObject *)StringLiteral_23817/*"um2"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    19,
    (Il2CppObject *)StringLiteral_23616/*"timerStartInMilliseconds"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    20,
    (Il2CppObject *)StringLiteral_20037/*"img_parameter_A"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    21,
    (Il2CppObject *)StringLiteral_22960/*"shortcut_board_icon_bronze_sapling"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    22,
    (Il2CppObject *)StringLiteral_22961/*"shortcut_board_icon_event_"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    23,
    (Il2CppObject *)StringLiteral_24976/*"フォトフレーム選択ID保持用のPlayerPrefs名"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    24,
    (Il2CppObject *)StringLiteral_24977/*"プレイヤー"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    25,
    (Il2CppObject *)StringLiteral_24975/*"パラメータ"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    26,
    (Il2CppObject *)StringLiteral_21772/*"no_expedition_{0}"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    27,
    (Il2CppObject *)StringLiteral_23612/*"time_status_top"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    28,
    (Il2CppObject *)StringLiteral_23611/*"time_status_side_04"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    29,
    (Il2CppObject *)StringLiteral_17479/*"channel"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    30,
    (Il2CppObject *)StringLiteral_17481/*"channelSinkProviders"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    31,
    (Il2CppObject *)StringLiteral_24666/*"{0} is not a valid value for {1}."*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    32,
    (Il2CppObject *)StringLiteral_23610/*"time_status_side_03"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    33,
    (Il2CppObject *)StringLiteral_23194/*"status_height"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    34,
    (Il2CppObject *)StringLiteral_21469/*"mstQuestGroup"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    35,
    (Il2CppObject *)StringLiteral_21770/*"noVoice"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    36,
    (Il2CppObject *)StringLiteral_18359/*"ease-in-cubic"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    37,
    (Il2CppObject *)StringLiteral_21771/*"no_craft_{0}"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    38,
    (Il2CppObject *)StringLiteral_25170,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    39,
    (Il2CppObject *)StringLiteral_25171,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    40,
    (Il2CppObject *)StringLiteral_24456/*"x-mac-thai"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    41,
    (Il2CppObject *)StringLiteral_25169,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    42,
    (Il2CppObject *)StringLiteral_23193/*"status_battle_color"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v49,
    43,
    (Il2CppObject *)StringLiteral_23201/*"status_servant_"*/,
    (const MethodInfo_3325360 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__Add__);
  DatFileName_TypeInfo->static_fields->filelist = (struct System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__o *)v49;
  sub_1C3B708(
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

  if ( (byte_4C20EE3 & 1) == 0 )
  {
    sub_1C3B764(&AndroidUtil_TypeInfo, method);
    sub_1C3B764(&DatFileName_TypeInfo, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v5);
    sub_1C3B764(&StringLiteral_1/*""*/, v6);
    byte_4C20EE3 = 1;
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
         (const MethodInfo_3325554 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_33252C0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1C3B9C0(filelist, method);
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

  if ( (byte_4C20EE7 & 1) == 0 )
  {
    sub_1C3B764(&DatFileName_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v4);
    sub_1C3B764(&StringLiteral_1/*""*/, v5);
    byte_4C20EE7 = 1;
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
         (const MethodInfo_3325554 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
                                  (const MethodInfo_33252C0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
LABEL_12:
    sub_1C3B9C0(filelist, method);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall DatFileName__getFileName_39102008(int32_t name, int64_t l, const MethodInfo *method)
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

  if ( (byte_4C20EE4 & 1) == 0 )
  {
    sub_1C3B764(&AndroidUtil_TypeInfo, l);
    sub_1C3B764(&DatFileName_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v7);
    sub_1C3B764(&long_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_1/*""*/, v9);
    byte_4C20EE4 = 1;
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
         (const MethodInfo_3325554 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_33252C0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1C3B9C0(filelist, l);
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
System_String_o *__fastcall DatFileName__getFileName_39102360(
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

  if ( (byte_4C20EE5 & 1) == 0 )
  {
    sub_1C3B764(&AndroidUtil_TypeInfo, *(_QWORD *)&i1);
    sub_1C3B764(&DatFileName_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9);
    sub_1C3B764(&int_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_1/*""*/, v11);
    byte_4C20EE5 = 1;
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
         (const MethodInfo_3325554 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_33252C0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_15:
    sub_1C3B9C0(filelist, *(_QWORD *)&i1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  v27 = i1;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v14, v15, v16);
  v26 = i2;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v20, v21, v22);
  v24 = System_String__Format_63382984((System_String_o *)Item, v19, v23, 0LL);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v24, 0LL);
}


System_String_o *__fastcall DatFileName__getFileName_39102748(
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

  if ( (byte_4C20EE6 & 1) == 0 )
  {
    sub_1C3B764(&AndroidUtil_TypeInfo, str1);
    sub_1C3B764(&DatFileName_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__, v9);
    sub_1C3B764(&StringLiteral_1/*""*/, v10);
    byte_4C20EE6 = 1;
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
         (const MethodInfo_3325554 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__ContainsKey__) )
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
               (const MethodInfo_33252C0 *)Method_System_Collections_Generic_Dictionary_DatFileName_FILE_NAME__string__get_Item__);
      goto LABEL_12;
    }
LABEL_18:
    sub_1C3B9C0(filelist, str1);
  }
  Item = (Il2CppObject *)StringLiteral_1/*""*/;
LABEL_12:
  if ( str2 )
    v15 = System_String__Format_63382984((System_String_o *)Item, (Il2CppObject *)str1, (Il2CppObject *)str2, 0LL);
  else
    v15 = System_String__Format((System_String_o *)Item, (Il2CppObject *)str1, 0LL);
  v16 = v15;
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__ConvertFileNameIfNeed(v16, 0LL);
}