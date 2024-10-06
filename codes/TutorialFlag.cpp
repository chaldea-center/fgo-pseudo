void __fastcall TutorialFlag___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v33; // w1
  struct TutorialFlag_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  struct TutorialFlag_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w1
  struct TutorialFlag_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v45; // x19
  __int64 v46; // x0
  __int64 v47; // x1
  struct TutorialFlag_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3

  if ( (byte_4A6EEB6 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__, v1);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__, v4);
    sub_1B90010(&System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo, v5);
    sub_1B90010(&TutorialFlag_TypeInfo, v6);
    sub_1B90010(&StringLiteral_13479/*"TUTORIAL_LABEL_EVENT_GACHA"*/, v7);
    sub_1B90010(&StringLiteral_13492/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/, v8);
    sub_1B90010(&StringLiteral_13474/*"TUTORIAL_LABEL_COMBINE"*/, v9);
    sub_1B90010(&StringLiteral_13490/*"TUTORIAL_LABEL_RAID2_BATTLE"*/, v10);
    sub_1B90010(&StringLiteral_13478/*"TUTORIAL_LABEL_END"*/, v11);
    sub_1B90010(&StringLiteral_13488/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/, v12);
    sub_1B90010(&StringLiteral_14623/*"TutorialFlagConfigId"*/, v13);
    sub_1B90010(&StringLiteral_13475/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/, v14);
    sub_1B90010(&StringLiteral_14626/*"TutorialFlagProgress"*/, v15);
    sub_1B90010(&StringLiteral_13482/*"TUTORIAL_LABEL_FAVORITE1"*/, v16);
    sub_1B90010(&StringLiteral_14624/*"TutorialFlagGachaId"*/, v17);
    sub_1B90010(&StringLiteral_13481/*"TUTORIAL_LABEL_EVENT_REWARD"*/, v18);
    sub_1B90010(&StringLiteral_13477/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/, v19);
    sub_1B90010(&StringLiteral_13487/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/, v20);
    sub_1B90010(&StringLiteral_13494/*"TUTORIAL_LABEL_STONE_GACHA"*/, v21);
    sub_1B90010(&StringLiteral_13495/*"TUTORIAL_LABEL_SVT_LEAVE"*/, v22);
    sub_1B90010(&StringLiteral_13493/*"TUTORIAL_LABEL_SHOP"*/, v23);
    sub_1B90010(&StringLiteral_13486/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/, v24);
    sub_1B90010(&StringLiteral_14625/*"TutorialFlagLocalId"*/, v25);
    sub_1B90010(&StringLiteral_13489/*"TUTORIAL_LABEL_MASHU_CHANGE"*/, v26);
    sub_1B90010(&StringLiteral_13480/*"TUTORIAL_LABEL_EVENT_MISSION"*/, v27);
    sub_1B90010(&StringLiteral_13485/*"TUTORIAL_LABEL_GACHA_SCENE"*/, v28);
    sub_1B90010(&StringLiteral_13476/*"TUTORIAL_LABEL_DECK_SCENE"*/, v29);
    sub_1B90010(&StringLiteral_13491/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/, v30);
    sub_1B90010(&StringLiteral_13483/*"TUTORIAL_LABEL_FAVORITE2"*/, v31);
    sub_1B90010(&StringLiteral_13484/*"TUTORIAL_LABEL_FES"*/, v32);
    byte_4A6EEB6 = 1;
  }
  TutorialFlag_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_14626/*"TutorialFlagProgress"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)TutorialFlag_TypeInfo->static_fields, StringLiteral_14626/*"TutorialFlagProgress"*/, v2, v3);
  v33 = StringLiteral_14625/*"TutorialFlagLocalId"*/;
  static_fields = TutorialFlag_TypeInfo->static_fields;
  static_fields->SAVE_KEY2 = (struct System_String_o *)StringLiteral_14625/*"TutorialFlagLocalId"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->SAVE_KEY2, v33, v35, v36);
  v37 = StringLiteral_14623/*"TutorialFlagConfigId"*/;
  v38 = TutorialFlag_TypeInfo->static_fields;
  v38->SAVE_KEY3 = (struct System_String_o *)StringLiteral_14623/*"TutorialFlagConfigId"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v38->SAVE_KEY3, v37, v39, v40);
  v41 = StringLiteral_14624/*"TutorialFlagGachaId"*/;
  v42 = TutorialFlag_TypeInfo->static_fields;
  v42->SAVE_KEY4 = (struct System_String_o *)StringLiteral_14624/*"TutorialFlagGachaId"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v42->SAVE_KEY4, v41, v43, v44);
  v45 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B9025C(System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo);
  System_Collections_Generic_Dictionary_object__Int32Enum____ctor(
    v45,
    (const MethodInfo_31D25D8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
  if ( !v45 )
    sub_1B9026C(v46, v47);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13494/*"TUTORIAL_LABEL_STONE_GACHA"*/,
    101,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13478/*"TUTORIAL_LABEL_END"*/,
    102,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13493/*"TUTORIAL_LABEL_SHOP"*/,
    103,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13474/*"TUTORIAL_LABEL_COMBINE"*/,
    104,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13482/*"TUTORIAL_LABEL_FAVORITE1"*/,
    105,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13483/*"TUTORIAL_LABEL_FAVORITE2"*/,
    106,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13485/*"TUTORIAL_LABEL_GACHA_SCENE"*/,
    107,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13486/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/,
    108,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13476/*"TUTORIAL_LABEL_DECK_SCENE"*/,
    109,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13477/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/,
    110,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13479/*"TUTORIAL_LABEL_EVENT_GACHA"*/,
    111,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13481/*"TUTORIAL_LABEL_EVENT_REWARD"*/,
    112,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13475/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/,
    113,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13480/*"TUTORIAL_LABEL_EVENT_MISSION"*/,
    114,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13489/*"TUTORIAL_LABEL_MASHU_CHANGE"*/,
    115,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13487/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/,
    117,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13488/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/,
    118,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13490/*"TUTORIAL_LABEL_RAID2_BATTLE"*/,
    120,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13492/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/,
    121,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13491/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/,
    122,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13495/*"TUTORIAL_LABEL_SVT_LEAVE"*/,
    126,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v45,
    (Il2CppObject *)StringLiteral_13484/*"TUTORIAL_LABEL_FES"*/,
    127,
    (const MethodInfo_31D2F8C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  v48 = TutorialFlag_TypeInfo->static_fields;
  v48->flagNameList = (struct System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *)v45;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v48->flagNameList, (int32_t)v45, v49, v50);
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

  if ( (byte_4A6EEA8 & 1) == 0 )
  {
    sub_1B90010(&ManagerConfig_TypeInfo, v1);
    sub_1B90010(&TutorialFlag_TypeInfo, v2);
    byte_4A6EEA8 = 1;
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

  if ( (byte_4A6EEA9 & 1) == 0 )
  {
    sub_1B90010(&TutorialFlag_TypeInfo, v1);
    byte_4A6EEA9 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(4, v1);
}


void __fastcall TutorialFlag__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  TutorialFlag_c *v2; // x0

  if ( (byte_4A6EE9E & 1) == 0 )
  {
    sub_1B90010(&TutorialFlag_TypeInfo, v1);
    byte_4A6EE9E = 1;
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

  if ( (byte_4A6EEA1 & 1) == 0 )
  {
    sub_1B90010(&TutorialFlag_TypeInfo, method);
    byte_4A6EEA1 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  return TutorialFlag__Get_37740444(Id, v4);
}


bool __fastcall TutorialFlag__GetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_4A6EEB2 & 1) == 0 )
  {
    sub_1B90010(&TutorialFlag_TypeInfo, method);
    byte_4A6EEB2 = 1;
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
  if ( (byte_4A6EEB4 & 1) == 0 )
  {
    sub_1B90010(&TutorialFlag_TypeInfo, method);
    byte_4A6EEB4 = 1;
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

  if ( (byte_4A6EEA0 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__, method);
    sub_1B90010(&TutorialFlag_TypeInfo, v3);
    byte_4A6EEA0 = 1;
  }
  v4 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v4 = TutorialFlag_TypeInfo;
  }
  flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v4->static_fields->flagNameList;
  if ( !flagNameList )
    sub_1B9026C(0LL, method);
  return System_Collections_Generic_Dictionary_object__Int32Enum___get_Item(
           flagNameList,
           (Il2CppObject *)flagIdName,
           (const MethodInfo_31D2F0C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
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

  if ( (byte_4A6EE9F & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__, v1);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__, v2);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__, v3);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__, v4);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__get_Current__, v5);
    sub_1B90010(&TutorialFlag_Id___TypeInfo, v6);
    sub_1B90010(&Method_System_Collections_Generic_KeyValuePair_string__TutorialFlag_Id__get_Value__, v7);
    sub_1B90010(&TutorialFlag_TypeInfo, v8);
    byte_4A6EE9F = 1;
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
                  (const MethodInfo_31D2C5C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__),
        flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B900B8(
                                                                                  TutorialFlag_Id___TypeInfo,
                                                                                  Count),
        (v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)TutorialFlag_TypeInfo->static_fields->flagNameList) == 0LL) )
  {
    sub_1B9026C(flagNameList, v1);
  }
  v13 = (TutorialFlag_Id_array *)flagNameList;
  System_Collections_Generic_Dictionary_object__Int32Enum___GetEnumerator(
    &v19,
    v12,
    (const MethodInfo_31D337C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v15 = System_Collections_Generic_Dictionary_Enumerator_object__Int32Enum___MoveNext(
            &v19,
            (const MethodInfo_32D529C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__);
    if ( !v15 )
      break;
    if ( !v13 )
      sub_1B9026C(v15, v16);
    if ( i >= v13->max_length )
      sub_1B90274(v15, v16);
    v17 = (char *)v13 + 4 * (int)i;
    *((_DWORD *)v17 + 8) = v19.fields._current.fields.value;
  }
  System_Collections_Generic_Dictionary_Enumerator_object__Int32Enum___Dispose(
    &v19,
    (const MethodInfo_32D53C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__);
  return v13;
}


int32_t __fastcall TutorialFlag__GetProgress(const MethodInfo *method)
{
  __int64 v1; // x1
  TutorialFlag_c *v2; // x0

  if ( (byte_4A6EEA7 & 1) == 0 )
  {
    sub_1B90010(&TutorialFlag_TypeInfo, v1);
    byte_4A6EEA7 = 1;
  }
  v2 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v2 = TutorialFlag_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY, 0, 0LL);
}


bool __fastcall TutorialFlag__Get_37740444(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4A6EEA2 & 1) == 0 )
  {
    sub_1B90010(&TutorialFlag_TypeInfo, method);
    byte_4A6EEA2 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_37772084(flagId, method);
}


bool __fastcall TutorialFlag__Get_37740624(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_1B9026C(userGameEntity, flagId);
  }
  return 0;
}


bool __fastcall TutorialFlag__Get_37740844(
        OtherUserGameEntity_o *otherUserGameEntity,
        int32_t flagId,
        const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !otherUserGameEntity )
    sub_1B9026C(0LL, flagId);
  return (otherUserGameEntity->fields.tutorial1 & (unsigned int)(1 << (flagId
                                                                     - 100
                                                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37)
                                                                      + (1374389535LL * flagId < 0))))) != 0;
}


bool __fastcall TutorialFlag__Get_37741036(FollowerInfo_o *followerInfo, int32_t flagId, const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !followerInfo )
    sub_1B9026C(0LL, flagId);
  return (followerInfo->fields.tutorial1 & (unsigned int)(1 << (flagId
                                                              - 100
                                                              * (((unsigned __int64)(1374389535LL * flagId) >> 37)
                                                               + (1374389535LL * flagId < 0))))) != 0;
}


bool __fastcall TutorialFlag__Get_37772084(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_4A6EEA3 & 1) == 0 )
  {
    sub_1B90010(&TutorialFlag_TypeInfo, method);
    byte_4A6EEA3 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_37740624(SelfUserGame, flagId, v3);
}


bool __fastcall TutorialFlag__Get_37773520(int32_t flagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_4A6EEAF & 1) == 0 )
  {
    sub_1B90010(&TutorialFlag_TypeInfo, method);
    byte_4A6EEAF = 1;
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
bool __fastcall TutorialFlag__Get_37773944(int32_t flagId, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A6EEB1 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&eventId);
    sub_1B90010(&NetworkManager_TypeInfo, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A6EEB1 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  if ( !UserEventMaster__TryGetEntity((UserEventMaster_o *)MasterData_object, &entity, (int64_t)Instance, eventId, 0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_12:
    sub_1B9026C(Instance, v8);
  return UserEventEntity__getTutorialFlag(entity, flagId, 0LL);
}


bool __fastcall TutorialFlag__IsProgressComplete(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  const MethodInfo *v2; // x1

  if ( (byte_4A6EEAE & 1) == 0 )
  {
    sub_1B90010(&TutorialFlag_TypeInfo, v1);
    byte_4A6EEAE = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37740444(102, v1) )
    return 1;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone(4, v2);
}


bool __fastcall TutorialFlag__IsProgressDone(int32_t count, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4A6EEAC & 1) == 0 )
  {
    sub_1B90010(&TutorialFlag_TypeInfo, method);
    byte_4A6EEAC = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37740444(102, method) )
    return 1;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone_37773304(count, v3);
}


bool __fastcall TutorialFlag__IsProgressDone_37773304(int32_t count, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4A6EEAD & 1) == 0 )
  {
    sub_1B90010(&TutorialFlag_TypeInfo, method);
    byte_4A6EEAD = 1;
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

  if ( (byte_4A6EEA4 & 1) == 0 )
  {
    sub_1B90010(&TutorialFlag_TypeInfo, method);
    byte_4A6EEA4 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  TutorialFlag__Set_37772276(Id, v4);
}


void __fastcall TutorialFlag__SetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  __int64 v3; // x1
  ManagerConfig_c *v4; // x0
  TutorialFlag_c *v5; // x0
  int32_t Int; // w0

  if ( (byte_4A6EEB3 & 1) == 0 )
  {
    sub_1B90010(&ManagerConfig_TypeInfo, method);
    sub_1B90010(&TutorialFlag_TypeInfo, v3);
    byte_4A6EEB3 = 1;
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
  if ( (byte_4A6EEB5 & 1) == 0 )
  {
    sub_1B90010(&ManagerConfig_TypeInfo, method);
    sub_1B90010(&TutorialFlag_TypeInfo, v3);
    byte_4A6EEB5 = 1;
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
  if ( (byte_4A6EEAA & 1) == 0 )
  {
    sub_1B90010(&TutorialFlag_TypeInfo, method);
    byte_4A6EEAA = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress_37773004(count, method);
}


void __fastcall TutorialFlag__SetProgress_37773004(int32_t count, const MethodInfo *method)
{
  __int64 v3; // x1
  ManagerConfig_c *v4; // x0
  TutorialFlag_c *v5; // x0

  if ( (byte_4A6EEAB & 1) == 0 )
  {
    sub_1B90010(&ManagerConfig_TypeInfo, method);
    sub_1B90010(&TutorialFlag_TypeInfo, v3);
    byte_4A6EEAB = 1;
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


void __fastcall TutorialFlag__Set_37772276(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4A6EEA5 & 1) == 0 )
  {
    sub_1B90010(&TutorialFlag_TypeInfo, method);
    byte_4A6EEA5 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_37772360(flagId, method);
}


void __fastcall TutorialFlag__Set_37772360(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_4A6EEA6 & 1) == 0 )
  {
    sub_1B90010(&TutorialFlag_TypeInfo, method);
    byte_4A6EEA6 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_37772464(SelfUserGame, flagId, v3);
}


void __fastcall TutorialFlag__Set_37772464(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_1B9026C(userGameEntity, flagId);
  }
  if ( !userGameEntity )
    goto LABEL_9;
  p_tutorial2 = &userGameEntity->fields.tutorial1;
LABEL_7:
  *p_tutorial2 |= (unsigned int)(1 << (flagId
                                     - 100
                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))));
}


void __fastcall TutorialFlag__Set_37773692(int32_t flagId, const MethodInfo *method)
{
  __int64 v3; // x1
  ManagerConfig_c *v4; // x0
  TutorialFlag_c *v5; // x0
  int v6; // w19
  int32_t Int; // w0

  if ( (byte_4A6EEB0 & 1) == 0 )
  {
    sub_1B90010(&ManagerConfig_TypeInfo, method);
    sub_1B90010(&TutorialFlag_TypeInfo, v3);
    byte_4A6EEB0 = 1;
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