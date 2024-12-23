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
  int64_t v37; // x1
  struct TutorialFlag_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x1
  struct TutorialFlag_StaticFields *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x1
  struct TutorialFlag_StaticFields *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v61; // x19
  __int64 v62; // x0
  __int64 v63; // x1
  struct TutorialFlag_StaticFields *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7

  if ( (byte_4B65BC7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__, v1);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo, v9);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_13654/*"TUTORIAL_LABEL_EVENT_GACHA"*/, v11);
    sub_1BE4ACC(&StringLiteral_13667/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/, v12);
    sub_1BE4ACC(&StringLiteral_13649/*"TUTORIAL_LABEL_COMBINE"*/, v13);
    sub_1BE4ACC(&StringLiteral_13665/*"TUTORIAL_LABEL_RAID2_BATTLE"*/, v14);
    sub_1BE4ACC(&StringLiteral_13653/*"TUTORIAL_LABEL_END"*/, v15);
    sub_1BE4ACC(&StringLiteral_13663/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/, v16);
    sub_1BE4ACC(&StringLiteral_14801/*"TutorialFlagConfigId"*/, v17);
    sub_1BE4ACC(&StringLiteral_13650/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/, v18);
    sub_1BE4ACC(&StringLiteral_14804/*"TutorialFlagProgress"*/, v19);
    sub_1BE4ACC(&StringLiteral_13657/*"TUTORIAL_LABEL_FAVORITE1"*/, v20);
    sub_1BE4ACC(&StringLiteral_14802/*"TutorialFlagGachaId"*/, v21);
    sub_1BE4ACC(&StringLiteral_13656/*"TUTORIAL_LABEL_EVENT_REWARD"*/, v22);
    sub_1BE4ACC(&StringLiteral_13652/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/, v23);
    sub_1BE4ACC(&StringLiteral_13662/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/, v24);
    sub_1BE4ACC(&StringLiteral_13669/*"TUTORIAL_LABEL_STONE_GACHA"*/, v25);
    sub_1BE4ACC(&StringLiteral_13670/*"TUTORIAL_LABEL_SVT_LEAVE"*/, v26);
    sub_1BE4ACC(&StringLiteral_13668/*"TUTORIAL_LABEL_SHOP"*/, v27);
    sub_1BE4ACC(&StringLiteral_13661/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/, v28);
    sub_1BE4ACC(&StringLiteral_14803/*"TutorialFlagLocalId"*/, v29);
    sub_1BE4ACC(&StringLiteral_13664/*"TUTORIAL_LABEL_MASHU_CHANGE"*/, v30);
    sub_1BE4ACC(&StringLiteral_13655/*"TUTORIAL_LABEL_EVENT_MISSION"*/, v31);
    sub_1BE4ACC(&StringLiteral_13660/*"TUTORIAL_LABEL_GACHA_SCENE"*/, v32);
    sub_1BE4ACC(&StringLiteral_13651/*"TUTORIAL_LABEL_DECK_SCENE"*/, v33);
    sub_1BE4ACC(&StringLiteral_13666/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/, v34);
    sub_1BE4ACC(&StringLiteral_13658/*"TUTORIAL_LABEL_FAVORITE2"*/, v35);
    sub_1BE4ACC(&StringLiteral_13659/*"TUTORIAL_LABEL_FES"*/, v36);
    byte_4B65BC7 = 1;
  }
  TutorialFlag_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_14804/*"TutorialFlagProgress"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)TutorialFlag_TypeInfo->static_fields,
    StringLiteral_14804/*"TutorialFlagProgress"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v37 = StringLiteral_14803/*"TutorialFlagLocalId"*/;
  static_fields = TutorialFlag_TypeInfo->static_fields;
  static_fields->SAVE_KEY2 = (struct System_String_o *)StringLiteral_14803/*"TutorialFlagLocalId"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->SAVE_KEY2, v37, v39, v40, v41, v42, v43, v44);
  v45 = StringLiteral_14801/*"TutorialFlagConfigId"*/;
  v46 = TutorialFlag_TypeInfo->static_fields;
  v46->SAVE_KEY3 = (struct System_String_o *)StringLiteral_14801/*"TutorialFlagConfigId"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v46->SAVE_KEY3, v45, v47, v48, v49, v50, v51, v52);
  v53 = StringLiteral_14802/*"TutorialFlagGachaId"*/;
  v54 = TutorialFlag_TypeInfo->static_fields;
  v54->SAVE_KEY4 = (struct System_String_o *)StringLiteral_14802/*"TutorialFlagGachaId"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v54->SAVE_KEY4, v53, v55, v56, v57, v58, v59, v60);
  v61 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo);
  System_Collections_Generic_Dictionary_object__Int32Enum____ctor(
    v61,
    (const MethodInfo_32A9A48 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
  if ( !v61 )
    sub_1BE4D28(v62, v63);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13669/*"TUTORIAL_LABEL_STONE_GACHA"*/,
    101,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13653/*"TUTORIAL_LABEL_END"*/,
    102,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13668/*"TUTORIAL_LABEL_SHOP"*/,
    103,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13649/*"TUTORIAL_LABEL_COMBINE"*/,
    104,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13657/*"TUTORIAL_LABEL_FAVORITE1"*/,
    105,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13658/*"TUTORIAL_LABEL_FAVORITE2"*/,
    106,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13660/*"TUTORIAL_LABEL_GACHA_SCENE"*/,
    107,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13661/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/,
    108,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13651/*"TUTORIAL_LABEL_DECK_SCENE"*/,
    109,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13652/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/,
    110,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13654/*"TUTORIAL_LABEL_EVENT_GACHA"*/,
    111,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13656/*"TUTORIAL_LABEL_EVENT_REWARD"*/,
    112,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13650/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/,
    113,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13655/*"TUTORIAL_LABEL_EVENT_MISSION"*/,
    114,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13664/*"TUTORIAL_LABEL_MASHU_CHANGE"*/,
    115,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13662/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/,
    117,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13663/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/,
    118,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13665/*"TUTORIAL_LABEL_RAID2_BATTLE"*/,
    120,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13667/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/,
    121,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13666/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/,
    122,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13670/*"TUTORIAL_LABEL_SVT_LEAVE"*/,
    126,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v61,
    (Il2CppObject *)StringLiteral_13659/*"TUTORIAL_LABEL_FES"*/,
    127,
    (const MethodInfo_32AA3FC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  v64 = TutorialFlag_TypeInfo->static_fields;
  v64->flagNameList = (struct System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *)v61;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v64->flagNameList, (int64_t)v61, v65, v66, v67, v68, v69, v70);
}


void __fastcall TutorialFlag___ctor(TutorialFlag_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TutorialFlag__ClearProgress(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ManagerConfig_c *v3; // x0
  TutorialFlag_c *v4; // x0

  if ( (byte_4B65BB9 & 1) == 0 )
  {
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v1);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v2);
    byte_4B65BB9 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = TutorialFlag_TypeInfo;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      v4 = TutorialFlag_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v4->static_fields->SAVE_KEY, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TutorialFlag__CompleteProgress(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4B65BBA & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v1);
    byte_4B65BBA = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(4, v1);
}


void __fastcall TutorialFlag__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  TutorialFlag_c *v2; // x0

  if ( (byte_4B65BAF & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v1);
    byte_4B65BAF = 1;
  }
  v2 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v2 = TutorialFlag_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->SAVE_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SAVE_KEY2, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SAVE_KEY3, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SAVE_KEY4, 0LL);
}


bool __fastcall TutorialFlag__Get(System_String_o *flagIdName, const MethodInfo *method)
{
  int32_t Id; // w0
  const MethodInfo *v4; // x1

  if ( (byte_4B65BB2 & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B65BB2 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  return TutorialFlag__Get_38593888(Id, v4);
}


bool __fastcall TutorialFlag__GetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_4B65BC3 & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B65BC3 = 1;
  }
  if ( (unsigned int)configFlagId > 0x63 )
    return 0;
  v3 = TutorialFlag_TypeInfo;
  v4 = 1 << ((configFlagId + 100) % 100);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v3 = TutorialFlag_TypeInfo;
  }
  return (UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY3, 0, 0LL) & v4) != 0;
}


bool __fastcall TutorialFlag__GetGachaFlg(int32_t gachaFlagId, const MethodInfo *method)
{
  char v2; // w19
  TutorialFlag_c *v3; // x0

  v2 = gachaFlagId;
  if ( (byte_4B65BC5 & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B65BC5 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v3 = TutorialFlag_TypeInfo;
  }
  return ((unsigned int)UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY4, 0, 0LL) >> v2) & 1;
}


int32_t __fastcall TutorialFlag__GetId(System_String_o *flagIdName, const MethodInfo *method)
{
  __int64 v3; // x1
  TutorialFlag_c *v4; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *flagNameList; // x0

  if ( (byte_4B65BB1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__, method);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v3);
    byte_4B65BB1 = 1;
  }
  v4 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v4 = TutorialFlag_TypeInfo;
  }
  flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v4->static_fields->flagNameList;
  if ( !flagNameList )
    sub_1BE4D28(0LL, method);
  return System_Collections_Generic_Dictionary_object__Int32Enum___get_Item(
           flagNameList,
           (Il2CppObject *)flagIdName,
           (const MethodInfo_32AA37C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
}


TutorialFlag_Id_array *__fastcall TutorialFlag__GetIdList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  TutorialFlag_c *v9; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *flagNameList; // x0
  unsigned int Count; // w0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x9
  TutorialFlag_Id_array *v13; // x19
  il2cpp_array_size_t i; // w22
  _BOOL8 v15; // x0
  __int64 v16; // x1
  char *v17; // x9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4B65BB0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__, v1);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__, v2);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__get_Current__, v5);
    sub_1BE4ACC(&TutorialFlag_Id___TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_string__TutorialFlag_Id__get_Value__, v7);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v8);
    byte_4B65BB0 = 1;
  }
  v9 = TutorialFlag_TypeInfo;
  memset(&v19, 0, sizeof(v19));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v9 = TutorialFlag_TypeInfo;
  }
  flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v9->static_fields->flagNameList;
  if ( !flagNameList
    || (Count = System_Collections_Generic_Dictionary_object__Int32Enum___get_Count(
                  flagNameList,
                  (const MethodInfo_32AA0CC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__),
        flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4B74(
                                                                                  TutorialFlag_Id___TypeInfo,
                                                                                  Count),
        (v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)TutorialFlag_TypeInfo->static_fields->flagNameList) == 0LL) )
  {
    sub_1BE4D28(flagNameList, v1);
  }
  v13 = (TutorialFlag_Id_array *)flagNameList;
  System_Collections_Generic_Dictionary_object__Int32Enum___GetEnumerator(
    &v19,
    v12,
    (const MethodInfo_32AA7EC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v15 = System_Collections_Generic_Dictionary_Enumerator_object__Int32Enum___MoveNext(
            &v19,
            (const MethodInfo_33AD590 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__);
    if ( !v15 )
      break;
    if ( !v13 )
      sub_1BE4D28(v15, v16);
    if ( i >= v13->max_length )
      sub_1BE4D30(v15, v16);
    v17 = (char *)v13 + 4 * (int)i;
    *((_DWORD *)v17 + 8) = v19.fields._current.fields.value;
  }
  System_Collections_Generic_Dictionary_Enumerator_object__Int32Enum___Dispose(
    &v19,
    (const MethodInfo_33AD6B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__);
  return v13;
}


int32_t __fastcall TutorialFlag__GetProgress(const MethodInfo *method)
{
  __int64 v1; // x1
  TutorialFlag_c *v2; // x0

  if ( (byte_4B65BB8 & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v1);
    byte_4B65BB8 = 1;
  }
  v2 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v2 = TutorialFlag_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY, 0, 0LL);
}


bool __fastcall TutorialFlag__Get_38593888(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4B65BB3 & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B65BB3 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_38627072(flagId, method);
}


bool __fastcall TutorialFlag__Get_38594068(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_1BE4D28(userGameEntity, flagId);
  }
  return 0;
}


bool __fastcall TutorialFlag__Get_38594288(
        OtherUserGameEntity_o *otherUserGameEntity,
        int32_t flagId,
        const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !otherUserGameEntity )
    sub_1BE4D28(0LL, flagId);
  return (otherUserGameEntity->fields.tutorial1 & (unsigned int)(1 << (flagId
                                                                     - 100
                                                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37)
                                                                      + (1374389535LL * flagId < 0))))) != 0;
}


bool __fastcall TutorialFlag__Get_38594480(FollowerInfo_o *followerInfo, int32_t flagId, const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !followerInfo )
    sub_1BE4D28(0LL, flagId);
  return (followerInfo->fields.tutorial1 & (unsigned int)(1 << (flagId
                                                              - 100
                                                              * (((unsigned __int64)(1374389535LL * flagId) >> 37)
                                                               + (1374389535LL * flagId < 0))))) != 0;
}


bool __fastcall TutorialFlag__Get_38627072(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_4B65BB4 & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B65BB4 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_38594068(SelfUserGame, flagId, v3);
}


bool __fastcall TutorialFlag__Get_38628508(int32_t flagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_4B65BC0 & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B65BC0 = 1;
  }
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  v3 = TutorialFlag_TypeInfo;
  v4 = 1 << (flagId % 100);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v3 = TutorialFlag_TypeInfo;
  }
  return (UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY2, 0, 0LL) & v4) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TutorialFlag__Get_38628932(int32_t flagId, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B65BC2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B65BC2 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v8);
    byte_4B61717 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_16;
  if ( !UserEventMaster__TryGetEntity(
          (UserEventMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          eventId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_16:
    sub_1BE4D28(Instance, v8);
  return UserEventEntity__getTutorialFlag(entity, flagId, 0LL);
}


bool __fastcall TutorialFlag__IsProgressComplete(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  const MethodInfo *v2; // x1

  if ( (byte_4B65BBF & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v1);
    byte_4B65BBF = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38593888(102, v1) )
    return 1;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone(4, v2);
}


bool __fastcall TutorialFlag__IsProgressDone(int32_t count, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4B65BBD & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B65BBD = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38593888(102, method) )
    return 1;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone_38628292(count, v3);
}


bool __fastcall TutorialFlag__IsProgressDone_38628292(int32_t count, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4B65BBE & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B65BBE = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__GetProgress((const MethodInfo *)v3) >= count;
}


void __fastcall TutorialFlag__Set(System_String_o *flagIdName, const MethodInfo *method)
{
  int32_t Id; // w0
  const MethodInfo *v4; // x1

  if ( (byte_4B65BB5 & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B65BB5 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  TutorialFlag__Set_38627264(Id, v4);
}


void __fastcall TutorialFlag__SetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  __int64 v3; // x1
  ManagerConfig_c *v4; // x0
  TutorialFlag_c *v5; // x0
  int32_t Int; // w0

  if ( (byte_4B65BC4 & 1) == 0 )
  {
    sub_1BE4ACC(&ManagerConfig_TypeInfo, method);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v3);
    byte_4B65BC4 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock && (unsigned int)configFlagId <= 0x63 )
  {
    v5 = TutorialFlag_TypeInfo;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      v5 = TutorialFlag_TypeInfo;
    }
    Int = UnityEngine_PlayerPrefs__GetInt(v5->static_fields->SAVE_KEY3, 0, 0LL);
    UnityEngine_PlayerPrefs__SetInt(
      TutorialFlag_TypeInfo->static_fields->SAVE_KEY3,
      Int | (1 << ((configFlagId + 100) % 100)),
      0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TutorialFlag__SetGachaFlg(int32_t gachaFlagId, const MethodInfo *method)
{
  char v2; // w19
  __int64 v3; // x1
  ManagerConfig_c *v4; // x0
  int v5; // w19
  TutorialFlag_c *v6; // x0
  int32_t Int; // w0

  v2 = gachaFlagId;
  if ( (byte_4B65BC6 & 1) == 0 )
  {
    sub_1BE4ACC(&ManagerConfig_TypeInfo, method);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v3);
    byte_4B65BC6 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    v5 = 1 << v2;
    v6 = TutorialFlag_TypeInfo;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      v6 = TutorialFlag_TypeInfo;
    }
    Int = UnityEngine_PlayerPrefs__GetInt(v6->static_fields->SAVE_KEY4, 0, 0LL);
    UnityEngine_PlayerPrefs__SetInt(TutorialFlag_TypeInfo->static_fields->SAVE_KEY4, Int | v5, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TutorialFlag__SetProgress(int32_t count, const MethodInfo *method)
{
  if ( (byte_4B65BBB & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B65BBB = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress_38627992(count, method);
}


void __fastcall TutorialFlag__SetProgress_38627992(int32_t count, const MethodInfo *method)
{
  __int64 v3; // x1
  ManagerConfig_c *v4; // x0
  TutorialFlag_c *v5; // x0

  if ( (byte_4B65BBC & 1) == 0 )
  {
    sub_1BE4ACC(&ManagerConfig_TypeInfo, method);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v3);
    byte_4B65BBC = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    v5 = TutorialFlag_TypeInfo;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      v5 = TutorialFlag_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v5->static_fields->SAVE_KEY, count, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TutorialFlag__Set_38627264(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4B65BB6 & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B65BB6 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_38627348(flagId, method);
}


void __fastcall TutorialFlag__Set_38627348(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_4B65BB7 & 1) == 0 )
  {
    sub_1BE4ACC(&TutorialFlag_TypeInfo, method);
    byte_4B65BB7 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_38627452(SelfUserGame, flagId, v3);
}


void __fastcall TutorialFlag__Set_38627452(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_1BE4D28(userGameEntity, flagId);
  }
  if ( !userGameEntity )
    goto LABEL_9;
  p_tutorial2 = &userGameEntity->fields.tutorial1;
LABEL_7:
  *p_tutorial2 |= (unsigned int)(1 << (flagId
                                     - 100
                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))));
}


void __fastcall TutorialFlag__Set_38628680(int32_t flagId, const MethodInfo *method)
{
  __int64 v3; // x1
  ManagerConfig_c *v4; // x0
  TutorialFlag_c *v5; // x0
  int v6; // w19
  int32_t Int; // w0

  if ( (byte_4B65BC1 & 1) == 0 )
  {
    sub_1BE4ACC(&ManagerConfig_TypeInfo, method);
    sub_1BE4ACC(&TutorialFlag_TypeInfo, v3);
    byte_4B65BC1 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock && (unsigned int)(flagId - 100) <= 0x63 )
  {
    v5 = TutorialFlag_TypeInfo;
    v6 = 1 << (flagId % 100);
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      v5 = TutorialFlag_TypeInfo;
    }
    Int = UnityEngine_PlayerPrefs__GetInt(v5->static_fields->SAVE_KEY2, 0, 0LL);
    UnityEngine_PlayerPrefs__SetInt(TutorialFlag_TypeInfo->static_fields->SAVE_KEY2, Int | v6, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}