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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  struct TutorialFlag_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C55C98 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    sub_1C3E564(&StringLiteral_13557/*"TUTORIAL_LABEL_EVENT_GACHA"*/);
    sub_1C3E564(&StringLiteral_13570/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/);
    sub_1C3E564(&StringLiteral_13552/*"TUTORIAL_LABEL_COMBINE"*/);
    sub_1C3E564(&StringLiteral_13568/*"TUTORIAL_LABEL_RAID2_BATTLE"*/);
    sub_1C3E564(&StringLiteral_13556/*"TUTORIAL_LABEL_END"*/);
    sub_1C3E564(&StringLiteral_13566/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/);
    sub_1C3E564(&StringLiteral_14627/*"TutorialFlagConfigId"*/);
    sub_1C3E564(&StringLiteral_13553/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/);
    sub_1C3E564(&StringLiteral_14630/*"TutorialFlagProgress"*/);
    sub_1C3E564(&StringLiteral_13560/*"TUTORIAL_LABEL_FAVORITE1"*/);
    sub_1C3E564(&StringLiteral_14628/*"TutorialFlagGachaId"*/);
    sub_1C3E564(&StringLiteral_13559/*"TUTORIAL_LABEL_EVENT_REWARD"*/);
    sub_1C3E564(&StringLiteral_13555/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/);
    sub_1C3E564(&StringLiteral_13565/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/);
    sub_1C3E564(&StringLiteral_13572/*"TUTORIAL_LABEL_STONE_GACHA"*/);
    sub_1C3E564(&StringLiteral_13573/*"TUTORIAL_LABEL_SVT_LEAVE"*/);
    sub_1C3E564(&StringLiteral_13571/*"TUTORIAL_LABEL_SHOP"*/);
    sub_1C3E564(&StringLiteral_13564/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/);
    sub_1C3E564(&StringLiteral_14629/*"TutorialFlagLocalId"*/);
    sub_1C3E564(&StringLiteral_13567/*"TUTORIAL_LABEL_MASHU_CHANGE"*/);
    sub_1C3E564(&StringLiteral_13558/*"TUTORIAL_LABEL_EVENT_MISSION"*/);
    sub_1C3E564(&StringLiteral_13563/*"TUTORIAL_LABEL_GACHA_SCENE"*/);
    sub_1C3E564(&StringLiteral_13554/*"TUTORIAL_LABEL_DECK_SCENE"*/);
    sub_1C3E564(&StringLiteral_13569/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/);
    sub_1C3E564(&StringLiteral_13561/*"TUTORIAL_LABEL_FAVORITE2"*/);
    sub_1C3E564(&StringLiteral_13562/*"TUTORIAL_LABEL_FES"*/);
    byte_4C55C98 = 1;
  }
  TutorialFlag_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_14630/*"TutorialFlagProgress"*/;
  sub_1C3E508((CGThumbnailListItem_o *)TutorialFlag_TypeInfo->static_fields, StringLiteral_14630/*"TutorialFlagProgress"*/, v1, v2);
  v3 = StringLiteral_14629/*"TutorialFlagLocalId"*/;
  static_fields = TutorialFlag_TypeInfo->static_fields;
  static_fields->SAVE_KEY2 = (struct System_String_o *)StringLiteral_14629/*"TutorialFlagLocalId"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->SAVE_KEY2, v3, v5, v6);
  v7 = StringLiteral_14627/*"TutorialFlagConfigId"*/;
  v8 = TutorialFlag_TypeInfo->static_fields;
  v8->SAVE_KEY3 = (struct System_String_o *)StringLiteral_14627/*"TutorialFlagConfigId"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->SAVE_KEY3, v7, v9, v10);
  v11 = StringLiteral_14628/*"TutorialFlagGachaId"*/;
  v12 = TutorialFlag_TypeInfo->static_fields;
  v12->SAVE_KEY4 = (struct System_String_o *)StringLiteral_14628/*"TutorialFlagGachaId"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v12->SAVE_KEY4, v11, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo);
  System_Collections_Generic_Dictionary_object__Int32Enum____ctor(
    v15,
    (const MethodInfo_346F014 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
  if ( !v15 )
    sub_1C3E7C0(v16, v17);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13572/*"TUTORIAL_LABEL_STONE_GACHA"*/,
    101,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13556/*"TUTORIAL_LABEL_END"*/,
    102,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13571/*"TUTORIAL_LABEL_SHOP"*/,
    103,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13552/*"TUTORIAL_LABEL_COMBINE"*/,
    104,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13560/*"TUTORIAL_LABEL_FAVORITE1"*/,
    105,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13561/*"TUTORIAL_LABEL_FAVORITE2"*/,
    106,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13563/*"TUTORIAL_LABEL_GACHA_SCENE"*/,
    107,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13564/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/,
    108,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13554/*"TUTORIAL_LABEL_DECK_SCENE"*/,
    109,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13555/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/,
    110,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13557/*"TUTORIAL_LABEL_EVENT_GACHA"*/,
    111,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13559/*"TUTORIAL_LABEL_EVENT_REWARD"*/,
    112,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13553/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/,
    113,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13558/*"TUTORIAL_LABEL_EVENT_MISSION"*/,
    114,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13567/*"TUTORIAL_LABEL_MASHU_CHANGE"*/,
    115,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13565/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/,
    117,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13566/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/,
    118,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13568/*"TUTORIAL_LABEL_RAID2_BATTLE"*/,
    120,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13570/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/,
    121,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13569/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/,
    122,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13573/*"TUTORIAL_LABEL_SVT_LEAVE"*/,
    126,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13562/*"TUTORIAL_LABEL_FES"*/,
    127,
    (const MethodInfo_346F9C8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  v18 = TutorialFlag_TypeInfo->static_fields;
  v18->flagNameList = (struct System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *)v15;
  sub_1C3E508((CGThumbnailListItem_o *)&v18->flagNameList, (int32_t)v15, v19, v20);
}


void TutorialFlag___ctor(TutorialFlag_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TutorialFlag__ClearProgress(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  TutorialFlag_c *v2; // x0

  if ( (byte_4C55C8A & 1) == 0 )
  {
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C8A = 1;
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

  if ( (byte_4C55C8B & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C8B = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(4, v1);
}


void TutorialFlag__DeleteContinueData(const MethodInfo *method)
{
  TutorialFlag_c *v1; // x0

  if ( (byte_4C55C80 & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C80 = 1;
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
}


bool TutorialFlag__Get(System_String_o *flagIdName, const MethodInfo *method)
{
  int32_t Id; // w0
  const MethodInfo *v4; // x1

  if ( (byte_4C55C83 & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C83 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  return TutorialFlag__Get_40473944(Id, v4);
}


bool TutorialFlag__GetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_4C55C94 & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C94 = 1;
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
  char v2; // w19
  TutorialFlag_c *v3; // x0

  v2 = gachaFlagId;
  if ( (byte_4C55C96 & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C96 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v3 = TutorialFlag_TypeInfo;
  }
  return ((unsigned int)UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY4, 0, 0) >> v2) & 1;
}


int32_t TutorialFlag__GetId(System_String_o *flagIdName, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *flagNameList; // x0

  if ( (byte_4C55C82 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C82 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v3 = TutorialFlag_TypeInfo;
  }
  flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->flagNameList;
  if ( !flagNameList )
    sub_1C3E7C0(0, method);
  return System_Collections_Generic_Dictionary_object__Int32Enum___get_Item(
           flagNameList,
           (Il2CppObject *)flagIdName,
           (const MethodInfo_346F948 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
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

  if ( (byte_4C55C81 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__get_Current__);
    sub_1C3E564(&TutorialFlag_Id___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_string__TutorialFlag_Id__get_Value__);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C81 = 1;
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
                  (const MethodInfo_346F698 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__),
        flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3E60C(
                                                                                  TutorialFlag_Id___TypeInfo,
                                                                                  Count),
        (v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)TutorialFlag_TypeInfo->static_fields->flagNameList) == 0) )
  {
    sub_1C3E7C0(flagNameList, v1);
  }
  v6 = flagNameList;
  System_Collections_Generic_Dictionary_object__Int32Enum___GetEnumerator(
    &v12,
    v5,
    (const MethodInfo_346FDB8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v8 = System_Collections_Generic_Dictionary_Enumerator_object__Int32Enum___MoveNext(
           &v12,
           (const MethodInfo_3571168 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__);
    if ( !v8 )
      break;
    if ( !v6 )
      sub_1C3E7C0(v8, v9);
    if ( i >= LODWORD(v6->fields._entries) )
      sub_1C3E7C8(v8, v9);
    v10 = (char *)v6 + 4 * (int)i;
    *((_DWORD *)v10 + 8) = v12.fields._current.fields.value;
  }
  System_Collections_Generic_Dictionary_Enumerator_object__Int32Enum___Dispose(
    &v12,
    (const MethodInfo_357128C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__);
  return (TutorialFlag_Id_array *)v6;
}


int32_t TutorialFlag__GetProgress(const MethodInfo *method)
{
  TutorialFlag_c *v1; // x0

  if ( (byte_4C55C89 & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C89 = 1;
  }
  v1 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v1 = TutorialFlag_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY, 0, 0);
}


bool TutorialFlag__Get_40473944(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4C55C84 & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C84 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_40508792(flagId, method);
}


// local variable allocation has failed, the output may be wrong!
bool TutorialFlag__Get_40474124(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_1C3E7C0(userGameEntity, *(_QWORD *)&flagId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool TutorialFlag__Get_40474344(OtherUserGameEntity_o *otherUserGameEntity, int32_t flagId, const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !otherUserGameEntity )
    sub_1C3E7C0(0, *(_QWORD *)&flagId);
  return (otherUserGameEntity->fields.tutorial1
        & (unsigned int)(1 << (flagId
                             - 100 * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))))) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool TutorialFlag__Get_40474536(FollowerInfo_o *followerInfo, int32_t flagId, const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !followerInfo )
    sub_1C3E7C0(0, *(_QWORD *)&flagId);
  return (followerInfo->fields.tutorial1
        & (unsigned int)(1 << (flagId
                             - 100 * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))))) != 0;
}


bool TutorialFlag__Get_40508792(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_4C55C85 & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C85 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_40474124(SelfUserGame, flagId, v3);
}


bool TutorialFlag__Get_40510228(int32_t flagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_4C55C91 & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C91 = 1;
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


bool TutorialFlag__Get_40510652(int32_t flagId, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C55C93 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C55C93 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
    sub_1C3E7C0(Instance, v6);
  return UserEventEntity__getTutorialFlag(entity, flagId, 0);
}


bool TutorialFlag__IsProgressComplete(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  const MethodInfo *v2; // x1

  if ( (byte_4C55C90 & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C90 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40473944(102, v1) )
    return 1;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone(4, v2);
}


bool TutorialFlag__IsProgressDone(int32_t count, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4C55C8E & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C8E = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40473944(102, method) )
    return 1;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone_40510012(count, v3);
}


bool TutorialFlag__IsProgressDone_40510012(int32_t count, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4C55C8F & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C8F = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__GetProgress((const MethodInfo *)v3) >= count;
}


void TutorialFlag__Set(System_String_o *flagIdName, const MethodInfo *method)
{
  int32_t Id; // w0
  const MethodInfo *v4; // x1

  if ( (byte_4C55C86 & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C86 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  TutorialFlag__Set_40508984(Id, v4);
}


void TutorialFlag__SetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  TutorialFlag_c *v4; // x0
  int32_t Int; // w0

  if ( (byte_4C55C95 & 1) == 0 )
  {
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C95 = 1;
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
  char v2; // w19
  ManagerConfig_c *v3; // x0
  int v4; // w19
  TutorialFlag_c *v5; // x0
  int32_t Int; // w0

  v2 = gachaFlagId;
  if ( (byte_4C55C97 & 1) == 0 )
  {
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C97 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = 1 << v2;
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


void TutorialFlag__SetProgress(int32_t count, const MethodInfo *method)
{
  if ( (byte_4C55C8C & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C8C = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress_40509712(count, method);
}


void TutorialFlag__SetProgress_40509712(int32_t count, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  TutorialFlag_c *v4; // x0

  if ( (byte_4C55C8D & 1) == 0 )
  {
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C8D = 1;
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


void TutorialFlag__Set_40508984(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4C55C87 & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C87 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_40509068(flagId, method);
}


void TutorialFlag__Set_40509068(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_4C55C88 & 1) == 0 )
  {
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C88 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_40509172(SelfUserGame, flagId, v3);
}


// local variable allocation has failed, the output may be wrong!
void TutorialFlag__Set_40509172(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_1C3E7C0(userGameEntity, *(_QWORD *)&flagId);
  }
  if ( !userGameEntity )
    goto LABEL_9;
  p_tutorial2 = &userGameEntity->fields.tutorial1;
LABEL_7:
  *p_tutorial2 |= (unsigned int)(1 << (flagId
                                     - 100
                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))));
}


void TutorialFlag__Set_40510400(int32_t flagId, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  TutorialFlag_c *v4; // x0
  int v5; // w19
  int32_t Int; // w0

  if ( (byte_4C55C92 & 1) == 0 )
  {
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&TutorialFlag_TypeInfo);
    byte_4C55C92 = 1;
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