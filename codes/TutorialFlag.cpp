void TutorialFlag___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct TutorialFlag_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct TutorialFlag_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct TutorialFlag_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  struct TutorialFlag_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v39; // x19
  __int64 v40; // x0
  __int64 v41; // x1
  struct TutorialFlag_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7

  if ( (byte_4D2F920 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&StringLiteral_13646/*"TUTORIAL_LABEL_EVENT_GACHA"*/);
    sub_1C93AD4(&StringLiteral_13659/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/);
    sub_1C93AD4(&StringLiteral_13641/*"TUTORIAL_LABEL_COMBINE"*/);
    sub_1C93AD4(&StringLiteral_13657/*"TUTORIAL_LABEL_RAID2_BATTLE"*/);
    sub_1C93AD4(&StringLiteral_13640/*"TUTORIAL_LABEL_CHAPTER2_LAST_WAR"*/);
    sub_1C93AD4(&StringLiteral_13645/*"TUTORIAL_LABEL_END"*/);
    sub_1C93AD4(&StringLiteral_13655/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/);
    sub_1C93AD4(&StringLiteral_14715/*"TutorialFlagConfigId"*/);
    sub_1C93AD4(&StringLiteral_13642/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/);
    sub_1C93AD4(&StringLiteral_14719/*"TutorialFlagProgress"*/);
    sub_1C93AD4(&StringLiteral_13649/*"TUTORIAL_LABEL_FAVORITE1"*/);
    sub_1C93AD4(&StringLiteral_14716/*"TutorialFlagGachaId"*/);
    sub_1C93AD4(&StringLiteral_13648/*"TUTORIAL_LABEL_EVENT_REWARD"*/);
    sub_1C93AD4(&StringLiteral_13644/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/);
    sub_1C93AD4(&StringLiteral_13654/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/);
    sub_1C93AD4(&StringLiteral_13661/*"TUTORIAL_LABEL_STONE_GACHA"*/);
    sub_1C93AD4(&StringLiteral_13662/*"TUTORIAL_LABEL_SVT_LEAVE"*/);
    sub_1C93AD4(&StringLiteral_13660/*"TUTORIAL_LABEL_SHOP"*/);
    sub_1C93AD4(&StringLiteral_13653/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/);
    sub_1C93AD4(&StringLiteral_14718/*"TutorialFlagLocalId"*/);
    sub_1C93AD4(&StringLiteral_14717/*"TutorialFlagGachaIdArray"*/);
    sub_1C93AD4(&StringLiteral_13656/*"TUTORIAL_LABEL_MASHU_CHANGE"*/);
    sub_1C93AD4(&StringLiteral_13647/*"TUTORIAL_LABEL_EVENT_MISSION"*/);
    sub_1C93AD4(&StringLiteral_13652/*"TUTORIAL_LABEL_GACHA_SCENE"*/);
    sub_1C93AD4(&StringLiteral_13643/*"TUTORIAL_LABEL_DECK_SCENE"*/);
    sub_1C93AD4(&StringLiteral_13658/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/);
    sub_1C93AD4(&StringLiteral_13650/*"TUTORIAL_LABEL_FAVORITE2"*/);
    sub_1C93AD4(&StringLiteral_13651/*"TUTORIAL_LABEL_FES"*/);
    byte_4D2F920 = 1;
  }
  TutorialFlag_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_14719/*"TutorialFlagProgress"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)TutorialFlag_TypeInfo->static_fields,
    StringLiteral_14719/*"TutorialFlagProgress"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_14718/*"TutorialFlagLocalId"*/;
  static_fields = TutorialFlag_TypeInfo->static_fields;
  static_fields->SAVE_KEY2 = (struct System_String_o *)StringLiteral_14718/*"TutorialFlagLocalId"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->SAVE_KEY2, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_14715/*"TutorialFlagConfigId"*/;
  v16 = TutorialFlag_TypeInfo->static_fields;
  v16->SAVE_KEY3 = (struct System_String_o *)StringLiteral_14715/*"TutorialFlagConfigId"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->SAVE_KEY3, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_14716/*"TutorialFlagGachaId"*/;
  v24 = TutorialFlag_TypeInfo->static_fields;
  v24->SAVE_KEY4 = (struct System_String_o *)StringLiteral_14716/*"TutorialFlagGachaId"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v24->SAVE_KEY4, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_14717/*"TutorialFlagGachaIdArray"*/;
  v32 = TutorialFlag_TypeInfo->static_fields;
  v32->SaveKey5 = (struct System_String_o *)StringLiteral_14717/*"TutorialFlagGachaIdArray"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32->SaveKey5, v31, v33, v34, v35, v36, v37, v38);
  v39 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo);
  System_Collections_Generic_Dictionary_object__Int32Enum____ctor(
    v39,
    (const MethodInfo_352823C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
  if ( !v39 )
    sub_1C93D2C(v40, v41);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13661/*"TUTORIAL_LABEL_STONE_GACHA"*/,
    101,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13645/*"TUTORIAL_LABEL_END"*/,
    102,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13660/*"TUTORIAL_LABEL_SHOP"*/,
    103,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13641/*"TUTORIAL_LABEL_COMBINE"*/,
    104,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13649/*"TUTORIAL_LABEL_FAVORITE1"*/,
    105,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13650/*"TUTORIAL_LABEL_FAVORITE2"*/,
    106,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13652/*"TUTORIAL_LABEL_GACHA_SCENE"*/,
    107,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13653/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/,
    108,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13643/*"TUTORIAL_LABEL_DECK_SCENE"*/,
    109,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13644/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/,
    110,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13646/*"TUTORIAL_LABEL_EVENT_GACHA"*/,
    111,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13648/*"TUTORIAL_LABEL_EVENT_REWARD"*/,
    112,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13642/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/,
    113,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13647/*"TUTORIAL_LABEL_EVENT_MISSION"*/,
    114,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13656/*"TUTORIAL_LABEL_MASHU_CHANGE"*/,
    115,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13654/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/,
    117,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13655/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/,
    118,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13657/*"TUTORIAL_LABEL_RAID2_BATTLE"*/,
    120,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13659/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/,
    121,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13658/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/,
    122,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13662/*"TUTORIAL_LABEL_SVT_LEAVE"*/,
    126,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13651/*"TUTORIAL_LABEL_FES"*/,
    127,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v39,
    (Il2CppObject *)StringLiteral_13640/*"TUTORIAL_LABEL_CHAPTER2_LAST_WAR"*/,
    208,
    (const MethodInfo_3528BF0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  v42 = TutorialFlag_TypeInfo->static_fields;
  v42->flagNameList = (struct System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *)v39;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v42->flagNameList, (int32_t)v39, v43, v44, v45, v46, v47, v48);
}


void TutorialFlag___ctor(TutorialFlag_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TutorialFlag__CheckGachaFlagArray(int32_t gachaFlagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  System_Int32_array *GachaFlagArray; // x0
  __int64 v5; // x1
  int32_t v6; // w8
  int max_length; // w9
  int v8; // w8
  _BOOL4 v9; // w0

  if ( (byte_4D2F91B & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F91B = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  GachaFlagArray = TutorialFlag__LoadGachaFlagArray((const MethodInfo *)v3);
  v6 = gachaFlagId + 31;
  if ( gachaFlagId >= 0 )
    v6 = gachaFlagId;
  if ( !GachaFlagArray )
    sub_1C93D2C(0, v5);
  max_length = GachaFlagArray->max_length;
  v8 = v6 >> 5;
  if ( v8 >= max_length )
  {
    LOBYTE(v9) = 0;
  }
  else
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1C93D34(GachaFlagArray);
    return ((unsigned int)GachaFlagArray->m_Items[v8] >> gachaFlagId) & 1;
  }
  return v9;
}


void TutorialFlag__CompleteProgress(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4D2F912 & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F912 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(4, v1);
}


void TutorialFlag__DeleteContinueData(const MethodInfo *method)
{
  TutorialFlag_c *v1; // x0

  if ( (byte_4D2F909 & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F909 = 1;
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

  if ( (byte_4D2F90B & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F90B = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  return TutorialFlag__Get_41140656(Id, v4);
}


bool TutorialFlag__GetGachaFlg(int32_t gachaFlagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_4D2F919 & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F919 = 1;
  }
  if ( gachaFlagId >= 32 )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    return TutorialFlag__CheckGachaFlagArray(gachaFlagId, method);
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


int32_t TutorialFlag__GetId(System_String_o *flagIdName, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *flagNameList; // x0

  if ( (byte_4D2F90A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F90A = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v3 = TutorialFlag_TypeInfo;
  }
  flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->flagNameList;
  if ( !flagNameList )
    sub_1C93D2C(0, method);
  return System_Collections_Generic_Dictionary_object__Int32Enum___get_Item(
           flagNameList,
           (Il2CppObject *)flagIdName,
           (const MethodInfo_3528B70 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
}


int32_t TutorialFlag__GetProgress(const MethodInfo *method)
{
  TutorialFlag_c *v1; // x0

  if ( (byte_4D2F911 & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F911 = 1;
  }
  v1 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v1 = TutorialFlag_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY, 0, 0);
}


bool TutorialFlag__Get_41140656(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4D2F90C & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F90C = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_41174868(flagId, method);
}


bool TutorialFlag__Get_41140868(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_1C93D2C(userGameEntity, flagId);
  }
  return 0;
}


bool TutorialFlag__Get_41141120(OtherUserGameEntity_o *otherUserGameEntity, int32_t flagId, const MethodInfo *method)
{
  int64_t *p_tutorial1; // x8

  if ( (unsigned int)(flagId - 100) < 0x64 )
  {
    if ( otherUserGameEntity )
    {
      p_tutorial1 = &otherUserGameEntity->fields.tutorial1;
      return (*p_tutorial1
            & (unsigned int)(1 << (flagId
                                 - 100
                                 * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))))) != 0;
    }
    goto LABEL_9;
  }
  if ( (unsigned int)(flagId - 200) < 0x64 )
  {
    if ( otherUserGameEntity )
    {
      p_tutorial1 = &otherUserGameEntity->fields.tutorial2;
      return (*p_tutorial1
            & (unsigned int)(1 << (flagId
                                 - 100
                                 * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))))) != 0;
    }
LABEL_9:
    sub_1C93D2C(otherUserGameEntity, flagId);
  }
  return 0;
}


bool TutorialFlag__Get_41141372(FollowerInfo_o *followerInfo, int32_t flagId, const MethodInfo *method)
{
  int64_t *p_tutorial1; // x8

  if ( (unsigned int)(flagId - 100) < 0x64 )
  {
    if ( followerInfo )
    {
      p_tutorial1 = &followerInfo->fields.tutorial1;
      return (*p_tutorial1
            & (unsigned int)(1 << (flagId
                                 - 100
                                 * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))))) != 0;
    }
    goto LABEL_9;
  }
  if ( (unsigned int)(flagId - 200) < 0x64 )
  {
    if ( followerInfo )
    {
      p_tutorial1 = &followerInfo->fields.tutorial2;
      return (*p_tutorial1
            & (unsigned int)(1 << (flagId
                                 - 100
                                 * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))))) != 0;
    }
LABEL_9:
    sub_1C93D2C(followerInfo, flagId);
  }
  return 0;
}


bool TutorialFlag__Get_41174868(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_4D2F90D & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F90D = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_41140868(SelfUserGame, flagId, v3);
}


bool TutorialFlag__Get_41176140(int32_t flagId, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2F918 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2F918 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
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
    sub_1C93D2C(Instance, v6);
  return UserEventEntity__getTutorialFlag(entity, flagId, 0);
}


void TutorialFlag__InitSaveGachaFlag(const MethodInfo *method)
{
  TutorialFlag_c *v1; // x0
  bool HasKey; // w19
  TutorialFlag_c *v3; // x0
  TutorialFlag_c *v4; // x0
  TutorialFlag_c *v5; // x0

  if ( (byte_4D2F91F & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&StringLiteral_1116/*"0"*/);
    byte_4D2F91F = 1;
  }
  v1 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v1 = TutorialFlag_TypeInfo;
  }
  HasKey = UnityEngine_PlayerPrefs__HasKey(v1->static_fields->SaveKey5, 0);
  if ( !HasKey )
  {
    v3 = TutorialFlag_TypeInfo;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      v3 = TutorialFlag_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v3->static_fields->SaveKey5, (System_String_o *)StringLiteral_1116/*"0"*/, 0);
  }
  v4 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v4 = TutorialFlag_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__HasKey(v4->static_fields->SAVE_KEY4, 0) )
  {
    v5 = TutorialFlag_TypeInfo;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      v5 = TutorialFlag_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v5->static_fields->SAVE_KEY4, 0, 0);
    goto LABEL_17;
  }
  if ( !HasKey )
LABEL_17:
    UnityEngine_PlayerPrefs__Save(0);
}


bool TutorialFlag__IsProgressComplete(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  const MethodInfo *v2; // x1

  if ( (byte_4D2F917 & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F917 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_41140656(102, v1) )
    return 1;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone(4, v2);
}


bool TutorialFlag__IsProgressDone(int32_t count, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4D2F915 & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F915 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_41140656(102, method) )
    return 1;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone_41175924(count, v3);
}


bool TutorialFlag__IsProgressDone_41175924(int32_t count, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4D2F916 & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F916 = 1;
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

  if ( (byte_4D2F91D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&StringLiteral_1116/*"0"*/);
    byte_4D2F91D = 1;
  }
  v1 = TutorialFlag_TypeInfo;
  result = 0;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v1 = TutorialFlag_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v1->static_fields->SaveKey5, (System_String_o *)StringLiteral_1116/*"0"*/, 0);
  if ( !String )
    goto LABEL_19;
  v4 = System_String__Split(String, 0x2Cu, 0, 0);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v4 )
    goto LABEL_19;
  max_length = v4->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C93D34(String);
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
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
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
    sub_1C93D2C(String, v3);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void TutorialFlag__Set(System_String_o *flagIdName, const MethodInfo *method)
{
  int32_t Id; // w0
  const MethodInfo *v4; // x1

  if ( (byte_4D2F90E & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F90E = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  TutorialFlag__Set_41175060(Id, v4);
}


void TutorialFlag__SetGachaFlagArray(System_Int32_array *flags, const MethodInfo *method)
{
  System_String_o *v3; // x0
  TutorialFlag_c *v4; // x8
  System_String_o *v5; // x19

  if ( (byte_4D2F91E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_String_Join_int___);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&StringLiteral_809/*","*/);
    byte_4D2F91E = 1;
  }
  v3 = System_String__Join_int_(
         (System_String_o *)StringLiteral_809/*","*/,
         (System_Collections_Generic_IEnumerable_T__o *)flags,
         (const MethodInfo_324FFE8 *)Method_System_String_Join_int___);
  v4 = TutorialFlag_TypeInfo;
  v5 = v3;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v4 = TutorialFlag_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v4->static_fields->SaveKey5, v5, 0);
}


void TutorialFlag__SetGachaFlg(int32_t gachaFlagId, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  int v4; // w19
  TutorialFlag_c *v5; // x0
  int32_t v6; // w1

  if ( (byte_4D2F91A & 1) == 0 )
  {
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F91A = 1;
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
      v6 = UnityEngine_PlayerPrefs__GetInt(v5->static_fields->SAVE_KEY4, 0, 0) | v4;
      UnityEngine_PlayerPrefs__SetInt(TutorialFlag_TypeInfo->static_fields->SAVE_KEY4, v6, 0);
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

  if ( (byte_4D2F91C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Resize_int___);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F91C = 1;
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
    && (System_Array__Resize_int_(&array, v7 + 1, (const MethodInfo_3162200 *)Method_System_Array_Resize_int___),
        (v8 = array) == 0) )
  {
    sub_1C93D2C(GachaFlagArray, v5);
  }
  if ( (unsigned int)v7 >= LODWORD(v8->max_length) )
    sub_1C93D34(GachaFlagArray);
  v8->m_Items[v7] |= 1 << gachaFlagId;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetGachaFlagArray(v8, v5);
}


void TutorialFlag__SetProgress(int32_t count, const MethodInfo *method)
{
  if ( (byte_4D2F913 & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F913 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress_41175624(count, method);
}


void TutorialFlag__SetProgress_41175624(int32_t count, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  TutorialFlag_c *v4; // x0

  if ( (byte_4D2F914 & 1) == 0 )
  {
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F914 = 1;
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


void TutorialFlag__Set_41175060(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_4D2F90F & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F90F = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_41175144(flagId, method);
}


void TutorialFlag__Set_41175144(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_4D2F910 & 1) == 0 )
  {
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2F910 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_41175248(SelfUserGame, flagId, v3);
}


void TutorialFlag__Set_41175248(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_1C93D2C(userGameEntity, flagId);
  }
  if ( !userGameEntity )
    goto LABEL_9;
  p_tutorial2 = &userGameEntity->fields.tutorial1;
LABEL_7:
  *p_tutorial2 |= (unsigned int)(1 << (flagId
                                     - 100
                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))));
}