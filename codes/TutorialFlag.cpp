void __fastcall TutorialFlag___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  int64_t v66; // x1
  struct TutorialFlag_StaticFields *static_fields; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x1
  struct TutorialFlag_StaticFields *v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x1
  struct TutorialFlag_StaticFields *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v93; // x19
  __int64 v94; // x0
  __int64 v95; // x1
  struct TutorialFlag_StaticFields *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7

  if ( (byte_4B15217 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo, v10, v11);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_13617/*"TUTORIAL_LABEL_EVENT_GACHA"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_13630/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_13612/*"TUTORIAL_LABEL_COMBINE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_13628/*"TUTORIAL_LABEL_RAID2_BATTLE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_13616/*"TUTORIAL_LABEL_END"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_13626/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_14763/*"TutorialFlagConfigId"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_13613/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_14766/*"TutorialFlagProgress"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_13620/*"TUTORIAL_LABEL_FAVORITE1"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_14764/*"TutorialFlagGachaId"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_13619/*"TUTORIAL_LABEL_EVENT_REWARD"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_13615/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_13625/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_13632/*"TUTORIAL_LABEL_STONE_GACHA"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_13633/*"TUTORIAL_LABEL_SVT_LEAVE"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_13631/*"TUTORIAL_LABEL_SHOP"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_13624/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_14765/*"TutorialFlagLocalId"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_13627/*"TUTORIAL_LABEL_MASHU_CHANGE"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_13618/*"TUTORIAL_LABEL_EVENT_MISSION"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_13623/*"TUTORIAL_LABEL_GACHA_SCENE"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_13614/*"TUTORIAL_LABEL_DECK_SCENE"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_13629/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_13621/*"TUTORIAL_LABEL_FAVORITE2"*/, v62, v63);
    sub_1BCA7E0(&StringLiteral_13622/*"TUTORIAL_LABEL_FES"*/, v64, v65);
    byte_4B15217 = 1;
  }
  TutorialFlag_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_14766/*"TutorialFlagProgress"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TutorialFlag_TypeInfo->static_fields,
    StringLiteral_14766/*"TutorialFlagProgress"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v66 = StringLiteral_14765/*"TutorialFlagLocalId"*/;
  static_fields = TutorialFlag_TypeInfo->static_fields;
  static_fields->SAVE_KEY2 = (struct System_String_o *)StringLiteral_14765/*"TutorialFlagLocalId"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SAVE_KEY2, v66, v68, v69, v70, v71, v72, v73);
  v74 = StringLiteral_14763/*"TutorialFlagConfigId"*/;
  v75 = TutorialFlag_TypeInfo->static_fields;
  v75->SAVE_KEY3 = (struct System_String_o *)StringLiteral_14763/*"TutorialFlagConfigId"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v75->SAVE_KEY3, v74, v76, v77, v78, v79, v80, v81);
  v82 = StringLiteral_14764/*"TutorialFlagGachaId"*/;
  v83 = TutorialFlag_TypeInfo->static_fields;
  v83->SAVE_KEY4 = (struct System_String_o *)StringLiteral_14764/*"TutorialFlagGachaId"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v83->SAVE_KEY4, v82, v84, v85, v86, v87, v88, v89);
  v93 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo,
                                                                   v90,
                                                                   v91,
                                                                   v92);
  System_Collections_Generic_Dictionary_object__Int32Enum____ctor(
    v93,
    (const MethodInfo_325EA84 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
  if ( !v93 )
    sub_1BCAA3C(v94, v95);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13632/*"TUTORIAL_LABEL_STONE_GACHA"*/,
    101,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13616/*"TUTORIAL_LABEL_END"*/,
    102,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13631/*"TUTORIAL_LABEL_SHOP"*/,
    103,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13612/*"TUTORIAL_LABEL_COMBINE"*/,
    104,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13620/*"TUTORIAL_LABEL_FAVORITE1"*/,
    105,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13621/*"TUTORIAL_LABEL_FAVORITE2"*/,
    106,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13623/*"TUTORIAL_LABEL_GACHA_SCENE"*/,
    107,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13624/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/,
    108,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13614/*"TUTORIAL_LABEL_DECK_SCENE"*/,
    109,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13615/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/,
    110,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13617/*"TUTORIAL_LABEL_EVENT_GACHA"*/,
    111,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13619/*"TUTORIAL_LABEL_EVENT_REWARD"*/,
    112,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13613/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/,
    113,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13618/*"TUTORIAL_LABEL_EVENT_MISSION"*/,
    114,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13627/*"TUTORIAL_LABEL_MASHU_CHANGE"*/,
    115,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13625/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/,
    117,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13626/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/,
    118,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13628/*"TUTORIAL_LABEL_RAID2_BATTLE"*/,
    120,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13630/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/,
    121,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13629/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/,
    122,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13633/*"TUTORIAL_LABEL_SVT_LEAVE"*/,
    126,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v93,
    (Il2CppObject *)StringLiteral_13622/*"TUTORIAL_LABEL_FES"*/,
    127,
    (const MethodInfo_325F438 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  v96 = TutorialFlag_TypeInfo->static_fields;
  v96->flagNameList = (struct System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *)v93;
  sub_1BCA784((PartyOrganizationUtility_o *)&v96->flagNameList, (int64_t)v93, v97, v98, v99, v100, v101, v102);
}


void __fastcall TutorialFlag___ctor(TutorialFlag_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TutorialFlag__ClearProgress(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  ManagerConfig_c *v5; // x0
  TutorialFlag_c *v6; // x0

  if ( (byte_4B15209 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v1, v2);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v3, v4);
    byte_4B15209 = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    v6 = TutorialFlag_TypeInfo;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v1);
      v6 = TutorialFlag_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v6->static_fields->SAVE_KEY, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TutorialFlag__CompleteProgress(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1520A & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v1, v2);
    byte_4B1520A = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v1);
  TutorialFlag__SetProgress(4, v1);
}


void __fastcall TutorialFlag__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TutorialFlag_c *v3; // x0

  if ( (byte_4B151FF & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v1, v2);
    byte_4B151FF = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v1);
    v3 = TutorialFlag_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->SAVE_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SAVE_KEY2, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SAVE_KEY3, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SAVE_KEY4, 0LL);
}


bool __fastcall TutorialFlag__Get(System_String_o *flagIdName, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t Id; // w0
  const MethodInfo *v5; // x1

  if ( (byte_4B15202 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B15202 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  Id = TutorialFlag__GetId(flagIdName, method);
  return TutorialFlag__Get_38402052(Id, v5);
}


bool __fastcall TutorialFlag__GetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  __int64 v2; // x2
  TutorialFlag_c *v4; // x0
  int v5; // w19

  if ( (byte_4B15213 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B15213 = 1;
  }
  if ( (unsigned int)configFlagId > 0x63 )
    return 0;
  v4 = TutorialFlag_TypeInfo;
  v5 = 1 << ((configFlagId + 100) % 100);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
    v4 = TutorialFlag_TypeInfo;
  }
  return (UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY3, 0, 0LL) & v5) != 0;
}


bool __fastcall TutorialFlag__GetGachaFlg(int32_t gachaFlagId, const MethodInfo *method)
{
  __int64 v2; // x2
  char v3; // w19
  TutorialFlag_c *v4; // x0

  v3 = gachaFlagId;
  if ( (byte_4B15215 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B15215 = 1;
  }
  v4 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
    v4 = TutorialFlag_TypeInfo;
  }
  return ((unsigned int)UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY4, 0, 0LL) >> v3) & 1;
}


int32_t __fastcall TutorialFlag__GetId(System_String_o *flagIdName, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TutorialFlag_c *v6; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *flagNameList; // x0

  if ( (byte_4B15201 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__, method, v2);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v4, v5);
    byte_4B15201 = 1;
  }
  v6 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
    v6 = TutorialFlag_TypeInfo;
  }
  flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v6->static_fields->flagNameList;
  if ( !flagNameList )
    sub_1BCAA3C(0LL, method);
  return System_Collections_Generic_Dictionary_object__Int32Enum___get_Item(
           flagNameList,
           (Il2CppObject *)flagIdName,
           (const MethodInfo_325F3B8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
}


TutorialFlag_Id_array *__fastcall TutorialFlag__GetIdList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  TutorialFlag_c *v17; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *flagNameList; // x0
  unsigned int Count; // w0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v20; // x9
  TutorialFlag_Id_array *v21; // x19
  il2cpp_array_size_t i; // w22
  _BOOL8 v23; // x0
  __int64 v24; // x1
  char *v25; // x9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4B15200 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&TutorialFlag_Id___TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__TutorialFlag_Id__get_Value__, v13, v14);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v15, v16);
    byte_4B15200 = 1;
  }
  v17 = TutorialFlag_TypeInfo;
  memset(&v27, 0, sizeof(v27));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v1);
    v17 = TutorialFlag_TypeInfo;
  }
  flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v17->static_fields->flagNameList;
  if ( !flagNameList
    || (Count = System_Collections_Generic_Dictionary_object__Int32Enum___get_Count(
                  flagNameList,
                  (const MethodInfo_325F108 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__),
        flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCA888(
                                                                                  TutorialFlag_Id___TypeInfo,
                                                                                  Count),
        (v20 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)TutorialFlag_TypeInfo->static_fields->flagNameList) == 0LL) )
  {
    sub_1BCAA3C(flagNameList, v1);
  }
  v21 = (TutorialFlag_Id_array *)flagNameList;
  System_Collections_Generic_Dictionary_object__Int32Enum___GetEnumerator(
    &v27,
    v20,
    (const MethodInfo_325F828 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v23 = System_Collections_Generic_Dictionary_Enumerator_object__Int32Enum___MoveNext(
            &v27,
            (const MethodInfo_3362FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__);
    if ( !v23 )
      break;
    if ( !v21 )
      sub_1BCAA3C(v23, v24);
    if ( i >= v21->max_length )
      sub_1BCAA44(v23, v24);
    v25 = (char *)v21 + 4 * (int)i;
    *((_DWORD *)v25 + 8) = v27.fields._current.fields.value;
  }
  System_Collections_Generic_Dictionary_Enumerator_object__Int32Enum___Dispose(
    &v27,
    (const MethodInfo_33630F4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__);
  return v21;
}


int32_t __fastcall TutorialFlag__GetProgress(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TutorialFlag_c *v3; // x0

  if ( (byte_4B15208 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v1, v2);
    byte_4B15208 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v1);
    v3 = TutorialFlag_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY, 0, 0LL);
}


bool __fastcall TutorialFlag__Get_38402052(int32_t flagId, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15203 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B15203 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  return TutorialFlag__Get_38435200(flagId, method);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TutorialFlag__Get_38402232(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
{
  int64_t *p_tutorial1; // x8

  if ( (unsigned int)(flagId - 100) < 0x64 )
  {
    if ( userGameEntity )
    {
      p_tutorial1 = &userGameEntity->fields.tutorial1;
      return (*p_tutorial1 & (unsigned int)(1 << (flagId
                                                - 100
                                                * (((unsigned __int64)(1374389535LL * flagId) >> 37)
                                                 + (1374389535LL * flagId < 0))))) != 0;
    }
    goto LABEL_9;
  }
  if ( (unsigned int)(flagId - 200) < 0x64 )
  {
    if ( userGameEntity )
    {
      p_tutorial1 = &userGameEntity->fields.tutorial2;
      return (*p_tutorial1 & (unsigned int)(1 << (flagId
                                                - 100
                                                * (((unsigned __int64)(1374389535LL * flagId) >> 37)
                                                 + (1374389535LL * flagId < 0))))) != 0;
    }
LABEL_9:
    sub_1BCAA3C(userGameEntity, *(_QWORD *)&flagId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TutorialFlag__Get_38402452(
        OtherUserGameEntity_o *otherUserGameEntity,
        int32_t flagId,
        const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !otherUserGameEntity )
    sub_1BCAA3C(0LL, *(_QWORD *)&flagId);
  return (otherUserGameEntity->fields.tutorial1 & (unsigned int)(1 << (flagId
                                                                     - 100
                                                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37)
                                                                      + (1374389535LL * flagId < 0))))) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TutorialFlag__Get_38402644(FollowerInfo_o *followerInfo, int32_t flagId, const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !followerInfo )
    sub_1BCAA3C(0LL, *(_QWORD *)&flagId);
  return (followerInfo->fields.tutorial1 & (unsigned int)(1 << (flagId
                                                              - 100
                                                              * (((unsigned __int64)(1374389535LL * flagId) >> 37)
                                                               + (1374389535LL * flagId < 0))))) != 0;
}


bool __fastcall TutorialFlag__Get_38435200(int32_t flagId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_4B15204 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B15204 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v4);
  return TutorialFlag__Get_38402232(SelfUserGame, flagId, v5);
}


bool __fastcall TutorialFlag__Get_38436636(int32_t flagId, const MethodInfo *method)
{
  __int64 v2; // x2
  TutorialFlag_c *v4; // x0
  int v5; // w19

  if ( (byte_4B15210 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B15210 = 1;
  }
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  v4 = TutorialFlag_TypeInfo;
  v5 = 1 << (flagId % 100);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
    v4 = TutorialFlag_TypeInfo;
  }
  return (UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY2, 0, 0LL) & v5) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TutorialFlag__Get_38437060(int32_t flagId, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15212 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B15212 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  if ( !UserEventMaster__TryGetEntity((UserEventMaster_o *)MasterData_object, &entity, (int64_t)Instance, eventId, 0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_12:
    sub_1BCAA3C(Instance, v10);
  return UserEventEntity__getTutorialFlag(entity, flagId, 0LL);
}


bool __fastcall TutorialFlag__IsProgressComplete(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2
  const MethodInfo *v3; // x1

  if ( (byte_4B1520F & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v1, v2);
    byte_4B1520F = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v1);
  if ( TutorialFlag__Get_38402052(102, v1) )
    return 1;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v3);
  return TutorialFlag__IsProgressDone(4, v3);
}


bool __fastcall TutorialFlag__IsProgressDone(int32_t count, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1

  if ( (byte_4B1520D & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B1520D = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( TutorialFlag__Get_38402052(102, method) )
    return 1;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v4);
  return TutorialFlag__IsProgressDone_38436420(count, v4);
}


bool __fastcall TutorialFlag__IsProgressDone_38436420(int32_t count, const MethodInfo *method)
{
  __int64 v2; // x2
  TutorialFlag_c *v4; // x0

  if ( (byte_4B1520E & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B1520E = 1;
  }
  v4 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  return TutorialFlag__GetProgress((const MethodInfo *)v4) >= count;
}


void __fastcall TutorialFlag__Set(System_String_o *flagIdName, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t Id; // w0
  const MethodInfo *v5; // x1

  if ( (byte_4B15205 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B15205 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  Id = TutorialFlag__GetId(flagIdName, method);
  TutorialFlag__Set_38435392(Id, v5);
}


void __fastcall TutorialFlag__SetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ManagerConfig_c *v6; // x0
  TutorialFlag_c *v7; // x0
  int32_t Int; // w0

  if ( (byte_4B15214 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v4, v5);
    byte_4B15214 = 1;
  }
  v6 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( !v6->static_fields->UseMock && (unsigned int)configFlagId <= 0x63 )
  {
    v7 = TutorialFlag_TypeInfo;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
      v7 = TutorialFlag_TypeInfo;
    }
    Int = UnityEngine_PlayerPrefs__GetInt(v7->static_fields->SAVE_KEY3, 0, 0LL);
    UnityEngine_PlayerPrefs__SetInt(
      TutorialFlag_TypeInfo->static_fields->SAVE_KEY3,
      Int | (1 << ((configFlagId + 100) % 100)),
      0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TutorialFlag__SetGachaFlg(int32_t gachaFlagId, const MethodInfo *method)
{
  __int64 v2; // x2
  char v3; // w19
  __int64 v4; // x1
  __int64 v5; // x2
  ManagerConfig_c *v6; // x0
  int v7; // w19
  TutorialFlag_c *v8; // x0
  int32_t Int; // w0

  v3 = gachaFlagId;
  if ( (byte_4B15216 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v4, v5);
    byte_4B15216 = 1;
  }
  v6 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( !v6->static_fields->UseMock )
  {
    v7 = 1 << v3;
    v8 = TutorialFlag_TypeInfo;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
      v8 = TutorialFlag_TypeInfo;
    }
    Int = UnityEngine_PlayerPrefs__GetInt(v8->static_fields->SAVE_KEY4, 0, 0LL);
    UnityEngine_PlayerPrefs__SetInt(TutorialFlag_TypeInfo->static_fields->SAVE_KEY4, Int | v7, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TutorialFlag__SetProgress(int32_t count, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1520B & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B1520B = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  TutorialFlag__SetProgress_38436120(count, method);
}


void __fastcall TutorialFlag__SetProgress_38436120(int32_t count, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ManagerConfig_c *v6; // x0
  TutorialFlag_c *v7; // x0

  if ( (byte_4B1520C & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v4, v5);
    byte_4B1520C = 1;
  }
  v6 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( !v6->static_fields->UseMock )
  {
    v7 = TutorialFlag_TypeInfo;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
      v7 = TutorialFlag_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v7->static_fields->SAVE_KEY, count, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TutorialFlag__Set_38435392(int32_t flagId, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15206 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B15206 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  TutorialFlag__Set_38435476(flagId, method);
}


void __fastcall TutorialFlag__Set_38435476(int32_t flagId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_4B15207 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B15207 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v4);
  TutorialFlag__Set_38435580(SelfUserGame, flagId, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TutorialFlag__Set_38435580(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
{
  int64_t *p_tutorial2; // x8

  if ( (unsigned int)(flagId - 100) >= 0x64 )
  {
    if ( (unsigned int)(flagId - 200) >= 0x64 )
      return;
    if ( userGameEntity )
    {
      p_tutorial2 = &userGameEntity->fields.tutorial2;
      goto LABEL_7;
    }
LABEL_9:
    sub_1BCAA3C(userGameEntity, *(_QWORD *)&flagId);
  }
  if ( !userGameEntity )
    goto LABEL_9;
  p_tutorial2 = &userGameEntity->fields.tutorial1;
LABEL_7:
  *p_tutorial2 |= (unsigned int)(1 << (flagId
                                     - 100
                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))));
}


void __fastcall TutorialFlag__Set_38436808(int32_t flagId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ManagerConfig_c *v6; // x0
  TutorialFlag_c *v7; // x0
  int v8; // w19
  int32_t Int; // w0

  if ( (byte_4B15211 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v4, v5);
    byte_4B15211 = 1;
  }
  v6 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v6 = ManagerConfig_TypeInfo;
  }
  if ( !v6->static_fields->UseMock && (unsigned int)(flagId - 100) <= 0x63 )
  {
    v7 = TutorialFlag_TypeInfo;
    v8 = 1 << (flagId % 100);
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
      v7 = TutorialFlag_TypeInfo;
    }
    Int = UnityEngine_PlayerPrefs__GetInt(v7->static_fields->SAVE_KEY2, 0, 0LL);
    UnityEngine_PlayerPrefs__SetInt(TutorialFlag_TypeInfo->static_fields->SAVE_KEY2, Int | v8, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}