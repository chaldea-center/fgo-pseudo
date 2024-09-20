void __fastcall TutorialFlag___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct TutorialFlag_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct TutorialFlag_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct TutorialFlag_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  struct TutorialFlag_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A5A1AE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&StringLiteral_13454/*"TUTORIAL_LABEL_EVENT_GACHA"*/);
    sub_1B885B0(&StringLiteral_13467/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/);
    sub_1B885B0(&StringLiteral_13449/*"TUTORIAL_LABEL_COMBINE"*/);
    sub_1B885B0(&StringLiteral_13465/*"TUTORIAL_LABEL_RAID2_BATTLE"*/);
    sub_1B885B0(&StringLiteral_13453/*"TUTORIAL_LABEL_END"*/);
    sub_1B885B0(&StringLiteral_13463/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/);
    sub_1B885B0(&StringLiteral_14598/*"TutorialFlagConfigId"*/);
    sub_1B885B0(&StringLiteral_13450/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/);
    sub_1B885B0(&StringLiteral_14601/*"TutorialFlagProgress"*/);
    sub_1B885B0(&StringLiteral_13457/*"TUTORIAL_LABEL_FAVORITE1"*/);
    sub_1B885B0(&StringLiteral_14599/*"TutorialFlagGachaId"*/);
    sub_1B885B0(&StringLiteral_13456/*"TUTORIAL_LABEL_EVENT_REWARD"*/);
    sub_1B885B0(&StringLiteral_13452/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/);
    sub_1B885B0(&StringLiteral_13462/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/);
    sub_1B885B0(&StringLiteral_13469/*"TUTORIAL_LABEL_STONE_GACHA"*/);
    sub_1B885B0(&StringLiteral_13470/*"TUTORIAL_LABEL_SVT_LEAVE"*/);
    sub_1B885B0(&StringLiteral_13468/*"TUTORIAL_LABEL_SHOP"*/);
    sub_1B885B0(&StringLiteral_13461/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/);
    sub_1B885B0(&StringLiteral_14600/*"TutorialFlagLocalId"*/);
    sub_1B885B0(&StringLiteral_13464/*"TUTORIAL_LABEL_MASHU_CHANGE"*/);
    sub_1B885B0(&StringLiteral_13455/*"TUTORIAL_LABEL_EVENT_MISSION"*/);
    sub_1B885B0(&StringLiteral_13460/*"TUTORIAL_LABEL_GACHA_SCENE"*/);
    sub_1B885B0(&StringLiteral_13451/*"TUTORIAL_LABEL_DECK_SCENE"*/);
    sub_1B885B0(&StringLiteral_13466/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/);
    sub_1B885B0(&StringLiteral_13458/*"TUTORIAL_LABEL_FAVORITE2"*/);
    sub_1B885B0(&StringLiteral_13459/*"TUTORIAL_LABEL_FES"*/);
    byte_4A5A1AE = 1;
  }
  TutorialFlag_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_14601/*"TutorialFlagProgress"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)TutorialFlag_TypeInfo->static_fields, StringLiteral_14601/*"TutorialFlagProgress"*/, v1, v2);
  v3 = StringLiteral_14600/*"TutorialFlagLocalId"*/;
  static_fields = TutorialFlag_TypeInfo->static_fields;
  static_fields->SAVE_KEY2 = (struct System_String_o *)StringLiteral_14600/*"TutorialFlagLocalId"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->SAVE_KEY2, v3, v5, v6);
  v7 = StringLiteral_14598/*"TutorialFlagConfigId"*/;
  v8 = TutorialFlag_TypeInfo->static_fields;
  v8->SAVE_KEY3 = (struct System_String_o *)StringLiteral_14598/*"TutorialFlagConfigId"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->SAVE_KEY3, v7, v9, v10);
  v11 = StringLiteral_14599/*"TutorialFlagGachaId"*/;
  v12 = TutorialFlag_TypeInfo->static_fields;
  v12->SAVE_KEY4 = (struct System_String_o *)StringLiteral_14599/*"TutorialFlagGachaId"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->SAVE_KEY4, v11, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo);
  System_Collections_Generic_Dictionary_object__Int32Enum____ctor(
    v15,
    (const MethodInfo_31C084C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
  if ( !v15 )
    sub_1B8880C(v16, v17);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13469/*"TUTORIAL_LABEL_STONE_GACHA"*/,
    101,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13453/*"TUTORIAL_LABEL_END"*/,
    102,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13468/*"TUTORIAL_LABEL_SHOP"*/,
    103,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13449/*"TUTORIAL_LABEL_COMBINE"*/,
    104,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13457/*"TUTORIAL_LABEL_FAVORITE1"*/,
    105,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13458/*"TUTORIAL_LABEL_FAVORITE2"*/,
    106,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13460/*"TUTORIAL_LABEL_GACHA_SCENE"*/,
    107,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13461/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/,
    108,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13451/*"TUTORIAL_LABEL_DECK_SCENE"*/,
    109,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13452/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/,
    110,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13454/*"TUTORIAL_LABEL_EVENT_GACHA"*/,
    111,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13456/*"TUTORIAL_LABEL_EVENT_REWARD"*/,
    112,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13450/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/,
    113,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13455/*"TUTORIAL_LABEL_EVENT_MISSION"*/,
    114,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13464/*"TUTORIAL_LABEL_MASHU_CHANGE"*/,
    115,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13462/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/,
    117,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13463/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/,
    118,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13465/*"TUTORIAL_LABEL_RAID2_BATTLE"*/,
    120,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13467/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/,
    121,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13466/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/,
    122,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13470/*"TUTORIAL_LABEL_SVT_LEAVE"*/,
    126,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v15,
    (Il2CppObject *)StringLiteral_13459/*"TUTORIAL_LABEL_FES"*/,
    127,
    (const MethodInfo_31C1200 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  v18 = TutorialFlag_TypeInfo->static_fields;
  v18->flagNameList = (struct System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *)v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->flagNameList, (int32_t)v15, v19, v20);
}


void __fastcall TutorialFlag___ctor(TutorialFlag_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TutorialFlag__ClearProgress(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  TutorialFlag_c *v2; // x0

  if ( (byte_4A5A1A0 & 1) == 0 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A1A0 = 1;
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
    UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->SAVE_KEY, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TutorialFlag__CompleteProgress(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4A5A1A1 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A1A1 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(4, v1);
}


void __fastcall TutorialFlag__DeleteContinueData(const MethodInfo *method)
{
  TutorialFlag_c *v1; // x0

  if ( (byte_4A5A196 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A196 = 1;
  }
  v1 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v1 = TutorialFlag_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVE_KEY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SAVE_KEY2, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SAVE_KEY3, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SAVE_KEY4, 0LL);
}


bool __fastcall TutorialFlag__Get(System_String_o *flagIdName, const MethodInfo *method)
{
  int32_t Id; // w0
  const MethodInfo *v4; // x1

  if ( (byte_4A5A199 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A199 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  return TutorialFlag__Get_37688364(Id, v4);
}


bool __fastcall TutorialFlag__GetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_4A5A1AA & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A1AA = 1;
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
  if ( (byte_4A5A1AC & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A1AC = 1;
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
  TutorialFlag_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *flagNameList; // x0

  if ( (byte_4A5A198 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A198 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v3 = TutorialFlag_TypeInfo;
  }
  flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->flagNameList;
  if ( !flagNameList )
    sub_1B8880C(0LL, method);
  return System_Collections_Generic_Dictionary_object__Int32Enum___get_Item(
           flagNameList,
           (Il2CppObject *)flagIdName,
           (const MethodInfo_31C1180 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
}


TutorialFlag_Id_array *__fastcall TutorialFlag__GetIdList(const MethodInfo *method)
{
  __int64 v1; // x1
  TutorialFlag_c *v2; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *flagNameList; // x0
  unsigned int Count; // w0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x9
  TutorialFlag_Id_array *v6; // x19
  il2cpp_array_size_t i; // w22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  char *v10; // x9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+0h] [xbp-60h] BYREF

  if ( (byte_4A5A197 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__get_Current__);
    sub_1B885B0(&TutorialFlag_Id___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__TutorialFlag_Id__get_Value__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A197 = 1;
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
                  (const MethodInfo_31C0ED0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__),
        flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B88658(
                                                                                  TutorialFlag_Id___TypeInfo,
                                                                                  Count),
        (v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)TutorialFlag_TypeInfo->static_fields->flagNameList) == 0LL) )
  {
    sub_1B8880C(flagNameList, v1);
  }
  v6 = (TutorialFlag_Id_array *)flagNameList;
  System_Collections_Generic_Dictionary_object__Int32Enum___GetEnumerator(
    &v12,
    v5,
    (const MethodInfo_31C15F0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v8 = System_Collections_Generic_Dictionary_Enumerator_object__Int32Enum___MoveNext(
           &v12,
           (const MethodInfo_32C2C20 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__);
    if ( !v8 )
      break;
    if ( !v6 )
      sub_1B8880C(v8, v9);
    if ( i >= v6->max_length )
      sub_1B88814(v8, v9);
    v10 = (char *)v6 + 4 * (int)i;
    *((_DWORD *)v10 + 8) = v12.fields._current.fields.value;
  }
  System_Collections_Generic_Dictionary_Enumerator_object__Int32Enum___Dispose(
    &v12,
    (const MethodInfo_32C2D44 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__);
  return v6;
}


int32_t __fastcall TutorialFlag__GetProgress(const MethodInfo *method)
{
  TutorialFlag_c *v1; // x0

  if ( (byte_4A5A19F & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A19F = 1;
  }
  v1 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v1 = TutorialFlag_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY, 0, 0LL);
}


bool __fastcall TutorialFlag__Get_37688364(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4A5A19A & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A19A = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_37719964(flagId, method);
}


bool __fastcall TutorialFlag__Get_37688544(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_1B8880C(userGameEntity, flagId);
  }
  return 0;
}


bool __fastcall TutorialFlag__Get_37688764(
        OtherUserGameEntity_o *otherUserGameEntity,
        int32_t flagId,
        const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !otherUserGameEntity )
    sub_1B8880C(0LL, flagId);
  return (otherUserGameEntity->fields.tutorial1 & (unsigned int)(1 << (flagId
                                                                     - 100
                                                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37)
                                                                      + (1374389535LL * flagId < 0))))) != 0;
}


bool __fastcall TutorialFlag__Get_37688956(FollowerInfo_o *followerInfo, int32_t flagId, const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !followerInfo )
    sub_1B8880C(0LL, flagId);
  return (followerInfo->fields.tutorial1 & (unsigned int)(1 << (flagId
                                                              - 100
                                                              * (((unsigned __int64)(1374389535LL * flagId) >> 37)
                                                               + (1374389535LL * flagId < 0))))) != 0;
}


bool __fastcall TutorialFlag__Get_37719964(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_4A5A19B & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A19B = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_37688544(SelfUserGame, flagId, v3);
}


bool __fastcall TutorialFlag__Get_37721400(int32_t flagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_4A5A1A7 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A1A7 = 1;
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


bool __fastcall TutorialFlag__Get_37721824(int32_t flagId, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A1A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A1A9 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
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
    sub_1B8880C(Instance, v6);
  return UserEventEntity__getTutorialFlag(entity, flagId, 0LL);
}


bool __fastcall TutorialFlag__IsProgressComplete(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  const MethodInfo *v2; // x1

  if ( (byte_4A5A1A6 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A1A6 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37688364(102, v1) )
    return 1;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone(4, v2);
}


bool __fastcall TutorialFlag__IsProgressDone(int32_t count, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4A5A1A4 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A1A4 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37688364(102, method) )
    return 1;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone_37721184(count, v3);
}


bool __fastcall TutorialFlag__IsProgressDone_37721184(int32_t count, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4A5A1A5 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A1A5 = 1;
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

  if ( (byte_4A5A19C & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A19C = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  TutorialFlag__Set_37720156(Id, v4);
}


void __fastcall TutorialFlag__SetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  TutorialFlag_c *v4; // x0
  int32_t Int; // w0

  if ( (byte_4A5A1AB & 1) == 0 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A1AB = 1;
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
    Int = UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY3, 0, 0LL);
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
  ManagerConfig_c *v3; // x0
  int v4; // w19
  TutorialFlag_c *v5; // x0
  int32_t Int; // w0

  v2 = gachaFlagId;
  if ( (byte_4A5A1AD & 1) == 0 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A1AD = 1;
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
    Int = UnityEngine_PlayerPrefs__GetInt(v5->static_fields->SAVE_KEY4, 0, 0LL);
    UnityEngine_PlayerPrefs__SetInt(TutorialFlag_TypeInfo->static_fields->SAVE_KEY4, Int | v4, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TutorialFlag__SetProgress(int32_t count, const MethodInfo *method)
{
  if ( (byte_4A5A1A2 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A1A2 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress_37720884(count, method);
}


void __fastcall TutorialFlag__SetProgress_37720884(int32_t count, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  TutorialFlag_c *v4; // x0

  if ( (byte_4A5A1A3 & 1) == 0 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A1A3 = 1;
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
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY, count, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TutorialFlag__Set_37720156(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4A5A19D & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A19D = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_37720240(flagId, method);
}


void __fastcall TutorialFlag__Set_37720240(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_4A5A19E & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A19E = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_37720344(SelfUserGame, flagId, v3);
}


void __fastcall TutorialFlag__Set_37720344(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_1B8880C(userGameEntity, flagId);
  }
  if ( !userGameEntity )
    goto LABEL_9;
  p_tutorial2 = &userGameEntity->fields.tutorial1;
LABEL_7:
  *p_tutorial2 |= (unsigned int)(1 << (flagId
                                     - 100
                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))));
}


void __fastcall TutorialFlag__Set_37721572(int32_t flagId, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  TutorialFlag_c *v4; // x0
  int v5; // w19
  int32_t Int; // w0

  if ( (byte_4A5A1A8 & 1) == 0 )
  {
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A5A1A8 = 1;
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
    Int = UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY2, 0, 0LL);
    UnityEngine_PlayerPrefs__SetInt(TutorialFlag_TypeInfo->static_fields->SAVE_KEY2, Int | v5, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}