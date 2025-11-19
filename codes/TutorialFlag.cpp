void TutorialFlag___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct TutorialFlag_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct TutorialFlag_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct TutorialFlag_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct TutorialFlag_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  struct TutorialFlag_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4CB51FD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    sub_1C6BA08(&StringLiteral_13550/*"TUTORIAL_LABEL_EVENT_GACHA"*/);
    sub_1C6BA08(&StringLiteral_13563/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/);
    sub_1C6BA08(&StringLiteral_13545/*"TUTORIAL_LABEL_COMBINE"*/);
    sub_1C6BA08(&StringLiteral_13561/*"TUTORIAL_LABEL_RAID2_BATTLE"*/);
    sub_1C6BA08(&StringLiteral_13549/*"TUTORIAL_LABEL_END"*/);
    sub_1C6BA08(&StringLiteral_13559/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/);
    sub_1C6BA08(&StringLiteral_14617/*"TutorialFlagConfigId"*/);
    sub_1C6BA08(&StringLiteral_13546/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/);
    sub_1C6BA08(&StringLiteral_14621/*"TutorialFlagProgress"*/);
    sub_1C6BA08(&StringLiteral_13553/*"TUTORIAL_LABEL_FAVORITE1"*/);
    sub_1C6BA08(&StringLiteral_14618/*"TutorialFlagGachaId"*/);
    sub_1C6BA08(&StringLiteral_13552/*"TUTORIAL_LABEL_EVENT_REWARD"*/);
    sub_1C6BA08(&StringLiteral_13548/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/);
    sub_1C6BA08(&StringLiteral_13558/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/);
    sub_1C6BA08(&StringLiteral_13565/*"TUTORIAL_LABEL_STONE_GACHA"*/);
    sub_1C6BA08(&StringLiteral_13566/*"TUTORIAL_LABEL_SVT_LEAVE"*/);
    sub_1C6BA08(&StringLiteral_13564/*"TUTORIAL_LABEL_SHOP"*/);
    sub_1C6BA08(&StringLiteral_13557/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/);
    sub_1C6BA08(&StringLiteral_14620/*"TutorialFlagLocalId"*/);
    sub_1C6BA08(&StringLiteral_14619/*"TutorialFlagGachaIdArray"*/);
    sub_1C6BA08(&StringLiteral_13560/*"TUTORIAL_LABEL_MASHU_CHANGE"*/);
    sub_1C6BA08(&StringLiteral_13551/*"TUTORIAL_LABEL_EVENT_MISSION"*/);
    sub_1C6BA08(&StringLiteral_13556/*"TUTORIAL_LABEL_GACHA_SCENE"*/);
    sub_1C6BA08(&StringLiteral_13547/*"TUTORIAL_LABEL_DECK_SCENE"*/);
    sub_1C6BA08(&StringLiteral_13562/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/);
    sub_1C6BA08(&StringLiteral_13554/*"TUTORIAL_LABEL_FAVORITE2"*/);
    sub_1C6BA08(&StringLiteral_13555/*"TUTORIAL_LABEL_FES"*/);
    byte_4CB51FD = 1;
  }
  TutorialFlag_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_14621/*"TutorialFlagProgress"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)TutorialFlag_TypeInfo->static_fields, StringLiteral_14621/*"TutorialFlagProgress"*/, v1, v2);
  v3 = StringLiteral_14620/*"TutorialFlagLocalId"*/;
  static_fields = TutorialFlag_TypeInfo->static_fields;
  static_fields->SAVE_KEY2 = (struct System_String_o *)StringLiteral_14620/*"TutorialFlagLocalId"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->SAVE_KEY2, v3, v5, v6);
  v7 = StringLiteral_14617/*"TutorialFlagConfigId"*/;
  v8 = TutorialFlag_TypeInfo->static_fields;
  v8->SAVE_KEY3 = (struct System_String_o *)StringLiteral_14617/*"TutorialFlagConfigId"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->SAVE_KEY3, v7, v9, v10);
  v11 = StringLiteral_14618/*"TutorialFlagGachaId"*/;
  v12 = TutorialFlag_TypeInfo->static_fields;
  v12->SAVE_KEY4 = (struct System_String_o *)StringLiteral_14618/*"TutorialFlagGachaId"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v12->SAVE_KEY4, v11, v13, v14);
  v15 = StringLiteral_14619/*"TutorialFlagGachaIdArray"*/;
  v16 = TutorialFlag_TypeInfo->static_fields;
  v16->SaveKey5 = (struct System_String_o *)StringLiteral_14619/*"TutorialFlagGachaIdArray"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->SaveKey5, v15, v17, v18);
  v19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo);
  System_Collections_Generic_Dictionary_object__Int32Enum____ctor(
    v19,
    (const MethodInfo_34B5170 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
  if ( !v19 )
    sub_1C6BC60(v20, v21);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13565/*"TUTORIAL_LABEL_STONE_GACHA"*/,
    101,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13549/*"TUTORIAL_LABEL_END"*/,
    102,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13564/*"TUTORIAL_LABEL_SHOP"*/,
    103,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13545/*"TUTORIAL_LABEL_COMBINE"*/,
    104,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13553/*"TUTORIAL_LABEL_FAVORITE1"*/,
    105,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13554/*"TUTORIAL_LABEL_FAVORITE2"*/,
    106,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13556/*"TUTORIAL_LABEL_GACHA_SCENE"*/,
    107,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13557/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/,
    108,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13547/*"TUTORIAL_LABEL_DECK_SCENE"*/,
    109,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13548/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/,
    110,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13550/*"TUTORIAL_LABEL_EVENT_GACHA"*/,
    111,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13552/*"TUTORIAL_LABEL_EVENT_REWARD"*/,
    112,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13546/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/,
    113,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13551/*"TUTORIAL_LABEL_EVENT_MISSION"*/,
    114,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13560/*"TUTORIAL_LABEL_MASHU_CHANGE"*/,
    115,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13558/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/,
    117,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13559/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/,
    118,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13561/*"TUTORIAL_LABEL_RAID2_BATTLE"*/,
    120,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13563/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/,
    121,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13562/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/,
    122,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13566/*"TUTORIAL_LABEL_SVT_LEAVE"*/,
    126,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v19,
    (Il2CppObject *)StringLiteral_13555/*"TUTORIAL_LABEL_FES"*/,
    127,
    (const MethodInfo_34B5B24 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  v22 = TutorialFlag_TypeInfo->static_fields;
  v22->flagNameList = (struct System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *)v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v22->flagNameList, (int32_t)v19, v23, v24);
}


void TutorialFlag___ctor(TutorialFlag_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TutorialFlag__ClearProgress(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  TutorialFlag_c *v2; // x0

  if ( (byte_4CB51EB & 1) == 0 )
  {
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51EB = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( !v1->static_fields->UseMock )
  {
    v2 = TutorialFlag_TypeInfo;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      v2 = TutorialFlag_TypeInfo;
    }
    UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->SAVE_KEY, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void TutorialFlag__CompleteProgress(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4CB51EC & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51EC = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(4, v1);
}


void TutorialFlag__DeleteContinueData(const MethodInfo *method)
{
  TutorialFlag_c *v1; // x0

  if ( (byte_4CB51E1 & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51E1 = 1;
  }
  v1 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v1 = TutorialFlag_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVE_KEY, 0);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SAVE_KEY2, 0);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SAVE_KEY3, 0);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SAVE_KEY4, 0);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SaveKey5, 0);
}


bool TutorialFlag__Get(System_String_o *flagIdName, const MethodInfo *method)
{
  int32_t Id; // w0
  const MethodInfo *v4; // x1

  if ( (byte_4CB51E4 & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51E4 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  return TutorialFlag__Get_40657328(Id, v4);
}


bool TutorialFlag__GetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_4CB51F5 & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51F5 = 1;
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
  return (UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY3, 0, 0) & v4) != 0;
}


bool TutorialFlag__GetGachaFlg(int32_t gachaFlagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_4CB51F7 & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51F7 = 1;
  }
  if ( gachaFlagId >= 32 )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    return TutorialFlag__GetGachaFlgArray(gachaFlagId, method);
  }
  else
  {
    v3 = TutorialFlag_TypeInfo;
    v4 = 1 << gachaFlagId;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      v3 = TutorialFlag_TypeInfo;
    }
    return (UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY4, 0, 0) & v4) != 0;
  }
}


bool TutorialFlag__GetGachaFlgArray(int32_t gachaFlagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  System_Int32_array *GachaFlagArray; // x0
  __int64 v5; // x1
  int32_t v6; // w8
  int max_length; // w9
  int v8; // w8
  _BOOL4 v9; // w0

  if ( (byte_4CB51F9 & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51F9 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  GachaFlagArray = TutorialFlag__LoadGachaFlagArray((const MethodInfo *)v3);
  v6 = gachaFlagId + 31;
  if ( gachaFlagId >= 0 )
    v6 = gachaFlagId;
  if ( !GachaFlagArray )
    sub_1C6BC60(0, v5);
  max_length = GachaFlagArray->max_length;
  v8 = v6 >> 5;
  if ( v8 >= max_length )
  {
    LOBYTE(v9) = 0;
  }
  else
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1C6BC68(GachaFlagArray);
    return ((unsigned int)GachaFlagArray->m_Items[v8] >> gachaFlagId) & 1;
  }
  return v9;
}


int32_t TutorialFlag__GetId(System_String_o *flagIdName, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *flagNameList; // x0

  if ( (byte_4CB51E3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51E3 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v3 = TutorialFlag_TypeInfo;
  }
  flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->flagNameList;
  if ( !flagNameList )
    sub_1C6BC60(0, method);
  return System_Collections_Generic_Dictionary_object__Int32Enum___get_Item(
           flagNameList,
           (Il2CppObject *)flagIdName,
           (const MethodInfo_34B5AA4 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
}


TutorialFlag_Id_array *TutorialFlag__GetIdList(const MethodInfo *method)
{
  __int64 v1; // x1
  TutorialFlag_c *v2; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *flagNameList; // x0
  unsigned int Count; // w0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x9
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x19
  unsigned int i; // w22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  char *v10; // x9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4CB51E2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__get_Current__);
    sub_1C6BA08(&TutorialFlag_Id___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__TutorialFlag_Id__get_Value__);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51E2 = 1;
  }
  v2 = TutorialFlag_TypeInfo;
  memset(&v12, 0, sizeof(v12));
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v2 = TutorialFlag_TypeInfo;
  }
  flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v2->static_fields->flagNameList;
  if ( !flagNameList
    || (Count = System_Collections_Generic_Dictionary_object__Int32Enum___get_Count(
                  flagNameList,
                  (const MethodInfo_34B57F4 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__),
        flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BAB0(
                                                                                  TutorialFlag_Id___TypeInfo,
                                                                                  Count),
        (v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)TutorialFlag_TypeInfo->static_fields->flagNameList) == 0) )
  {
    sub_1C6BC60(flagNameList, v1);
  }
  v6 = flagNameList;
  System_Collections_Generic_Dictionary_object__Int32Enum___GetEnumerator(
    &v12,
    v5,
    (const MethodInfo_34B5F14 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v8 = System_Collections_Generic_Dictionary_Enumerator_object__Int32Enum___MoveNext(
           &v12,
           (const MethodInfo_35B7C44 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__);
    if ( !v8 )
      break;
    if ( !v6 )
      sub_1C6BC60(v8, v9);
    if ( i >= LODWORD(v6->fields._entries) )
      sub_1C6BC68(v8);
    v10 = (char *)v6 + 4 * (int)i;
    *((_DWORD *)v10 + 8) = v12.fields._current.fields.value;
  }
  System_Collections_Generic_Dictionary_Enumerator_object__Int32Enum___Dispose(
    &v12,
    (const MethodInfo_35B7D68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__);
  return (TutorialFlag_Id_array *)v6;
}


int32_t TutorialFlag__GetProgress(const MethodInfo *method)
{
  TutorialFlag_c *v1; // x0

  if ( (byte_4CB51EA & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51EA = 1;
  }
  v1 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v1 = TutorialFlag_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY, 0, 0);
}


bool TutorialFlag__Get_40657328(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4CB51E5 & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51E5 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_40692196(flagId, method);
}


bool TutorialFlag__Get_40657508(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
{
  int64_t *p_tutorial1; // x8

  if ( (unsigned int)(flagId - 100) < 0x64 )
  {
    if ( userGameEntity )
    {
      p_tutorial1 = &userGameEntity->fields.tutorial1;
      return (*p_tutorial1
            & (unsigned int)(1 << (flagId
                                 - 100
                                 * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))))) != 0;
    }
    goto LABEL_9;
  }
  if ( (unsigned int)(flagId - 200) < 0x64 )
  {
    if ( userGameEntity )
    {
      p_tutorial1 = &userGameEntity->fields.tutorial2;
      return (*p_tutorial1
            & (unsigned int)(1 << (flagId
                                 - 100
                                 * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))))) != 0;
    }
LABEL_9:
    sub_1C6BC60(userGameEntity, flagId);
  }
  return 0;
}


bool TutorialFlag__Get_40657728(OtherUserGameEntity_o *otherUserGameEntity, int32_t flagId, const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !otherUserGameEntity )
    sub_1C6BC60(0, flagId);
  return (otherUserGameEntity->fields.tutorial1
        & (unsigned int)(1 << (flagId
                             - 100 * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))))) != 0;
}


bool TutorialFlag__Get_40657920(FollowerInfo_o *followerInfo, int32_t flagId, const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !followerInfo )
    sub_1C6BC60(0, flagId);
  return (followerInfo->fields.tutorial1
        & (unsigned int)(1 << (flagId
                             - 100 * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))))) != 0;
}


bool TutorialFlag__Get_40692196(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_4CB51E6 & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51E6 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_40657508(SelfUserGame, flagId, v3);
}


bool TutorialFlag__Get_40693632(int32_t flagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_4CB51F2 & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51F2 = 1;
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
  return (UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY2, 0, 0) & v4) != 0;
}


bool TutorialFlag__Get_40694056(int32_t flagId, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB51F4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB51F4 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
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
          0) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_16:
    sub_1C6BC60(Instance, v6);
  return UserEventEntity__getTutorialFlag(entity, flagId, 0);
}


bool TutorialFlag__IsProgressComplete(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  const MethodInfo *v2; // x1

  if ( (byte_4CB51F1 & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51F1 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40657328(102, v1) )
    return 1;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone(4, v2);
}


bool TutorialFlag__IsProgressDone(int32_t count, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4CB51EF & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51EF = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40657328(102, method) )
    return 1;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone_40693416(count, v3);
}


bool TutorialFlag__IsProgressDone_40693416(int32_t count, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4CB51F0 & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51F0 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__GetProgress((const MethodInfo *)v3) >= count;
}


System_Int32_array *TutorialFlag__LoadGachaFlagArray(const MethodInfo *method)
{
  TutorialFlag_c *v1; // x0
  System_String_o *String; // x0
  __int64 v3; // x1
  System_String_array *v4; // x20
  System_Collections_Generic_List_int__o *v5; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB51FB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    sub_1C6BA08(&StringLiteral_1115/*"0"*/);
    byte_4CB51FB = 1;
  }
  v1 = TutorialFlag_TypeInfo;
  result = 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v1 = TutorialFlag_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v1->static_fields->SaveKey5, (System_String_o *)StringLiteral_1115/*"0"*/, 0);
  if ( !String )
    goto LABEL_19;
  v4 = System_String__Split(String, 0x2Cu, 0, 0);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v4 )
    goto LABEL_19;
  max_length = v4->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C6BC68(String);
      String = (System_String_o *)System_Int32__TryParse(v4->m_Items[v7], &result, 0);
      if ( ((unsigned __int8)String & 1) != 0 )
      {
        if ( !v5 )
          goto LABEL_19;
        v3 = (unsigned int)result;
        items = v5->fields._items;
        v9 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            v3,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size] = v3;
        }
      }
      LODWORD(max_length) = v4->max_length;
    }
    while ( (__int64)++v7 < (int)max_length );
  }
  if ( !v5 )
LABEL_19:
    sub_1C6BC60(String, v3);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void TutorialFlag__SaveGachaFlagArray(System_Int32_array *flags, const MethodInfo *method)
{
  System_String_o *v3; // x0
  TutorialFlag_c *v4; // x8
  System_String_o *v5; // x19

  if ( (byte_4CB51FC & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_String_Join_int___);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    sub_1C6BA08(&StringLiteral_808/*","*/);
    byte_4CB51FC = 1;
  }
  v3 = System_String__Join_int_(
         (System_String_o *)StringLiteral_808/*","*/,
         (System_Collections_Generic_IEnumerable_T__o *)flags,
         (const MethodInfo_31E7090 *)Method_System_String_Join_int___);
  v4 = TutorialFlag_TypeInfo;
  v5 = v3;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v4 = TutorialFlag_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v4->static_fields->SaveKey5, v5, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void TutorialFlag__Set(System_String_o *flagIdName, const MethodInfo *method)
{
  int32_t Id; // w0
  const MethodInfo *v4; // x1

  if ( (byte_4CB51E7 & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51E7 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  TutorialFlag__Set_40692388(Id, v4);
}


void TutorialFlag__SetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  TutorialFlag_c *v4; // x0
  int32_t Int; // w0

  if ( (byte_4CB51F6 & 1) == 0 )
  {
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51F6 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock && (unsigned int)configFlagId <= 0x63 )
  {
    v4 = TutorialFlag_TypeInfo;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      v4 = TutorialFlag_TypeInfo;
    }
    Int = UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY3, 0, 0);
    UnityEngine_PlayerPrefs__SetInt(
      TutorialFlag_TypeInfo->static_fields->SAVE_KEY3,
      Int | (1 << ((configFlagId + 100) % 100)),
      0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void TutorialFlag__SetGachaFlg(int32_t gachaFlagId, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  int v4; // w19
  TutorialFlag_c *v5; // x0
  int32_t Int; // w0

  if ( (byte_4CB51F8 & 1) == 0 )
  {
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51F8 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    if ( gachaFlagId >= 32 )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      TutorialFlag__SetGachaFlgArray(gachaFlagId, method);
    }
    else
    {
      v4 = 1 << gachaFlagId;
      v5 = TutorialFlag_TypeInfo;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
        v5 = TutorialFlag_TypeInfo;
      }
      Int = UnityEngine_PlayerPrefs__GetInt(v5->static_fields->SAVE_KEY4, 0, 0);
      UnityEngine_PlayerPrefs__SetInt(TutorialFlag_TypeInfo->static_fields->SAVE_KEY4, Int | v4, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
}


void TutorialFlag__SetGachaFlgArray(int32_t gachaFlagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  System_Int32_array *GachaFlagArray; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w8
  int v7; // w22
  System_Int32_array *v8; // x20
  System_Int32_array *array; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB51FA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Resize_int___);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51FA = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  GachaFlagArray = TutorialFlag__LoadGachaFlagArray((const MethodInfo *)v3);
  v6 = gachaFlagId + 31;
  if ( gachaFlagId >= 0 )
    v6 = gachaFlagId;
  array = GachaFlagArray;
  if ( !GachaFlagArray
    || (v7 = v6 >> 5, v8 = GachaFlagArray, v6 >> 5 >= SLODWORD(GachaFlagArray->max_length))
    && (System_Array__Resize_int_(&array, v7 + 1, (const MethodInfo_30F8264 *)Method_System_Array_Resize_int___),
        (v8 = array) == 0) )
  {
    sub_1C6BC60(GachaFlagArray, v5);
  }
  if ( (unsigned int)v7 >= LODWORD(v8->max_length) )
    sub_1C6BC68(GachaFlagArray);
  v8->m_Items[v7] |= 1 << gachaFlagId;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SaveGachaFlagArray(v8, v5);
}


void TutorialFlag__SetProgress(int32_t count, const MethodInfo *method)
{
  if ( (byte_4CB51ED & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51ED = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress_40693116(count, method);
}


void TutorialFlag__SetProgress_40693116(int32_t count, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  TutorialFlag_c *v4; // x0

  if ( (byte_4CB51EE & 1) == 0 )
  {
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51EE = 1;
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
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY, count, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void TutorialFlag__Set_40692388(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4CB51E8 & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51E8 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_40692472(flagId, method);
}


void TutorialFlag__Set_40692472(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_4CB51E9 & 1) == 0 )
  {
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51E9 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_40692576(SelfUserGame, flagId, v3);
}


void TutorialFlag__Set_40692576(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_1C6BC60(userGameEntity, flagId);
  }
  if ( !userGameEntity )
    goto LABEL_9;
  p_tutorial2 = &userGameEntity->fields.tutorial1;
LABEL_7:
  *p_tutorial2 |= (unsigned int)(1 << (flagId
                                     - 100
                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))));
}


void TutorialFlag__Set_40693804(int32_t flagId, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  TutorialFlag_c *v4; // x0
  int v5; // w19
  int32_t Int; // w0

  if ( (byte_4CB51F3 & 1) == 0 )
  {
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&TutorialFlag_TypeInfo);
    byte_4CB51F3 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock && (unsigned int)(flagId - 100) <= 0x63 )
  {
    v4 = TutorialFlag_TypeInfo;
    v5 = 1 << (flagId % 100);
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      v4 = TutorialFlag_TypeInfo;
    }
    Int = UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY2, 0, 0);
    UnityEngine_PlayerPrefs__SetInt(TutorialFlag_TypeInfo->static_fields->SAVE_KEY2, Int | v5, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}