void TutorialFlag___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct TutorialFlag_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct TutorialFlag_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct TutorialFlag_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct TutorialFlag_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v40; // x19
  __int64 v41; // x0
  __int64 v42; // x1
  struct TutorialFlag_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7

  if ( (byte_596F6EF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_14105/*"TUTORIAL_LABEL_EVENT_GACHA"*/);
    sub_2213A60(&StringLiteral_14118/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/);
    sub_2213A60(&StringLiteral_14100/*"TUTORIAL_LABEL_COMBINE"*/);
    sub_2213A60(&StringLiteral_14116/*"TUTORIAL_LABEL_RAID2_BATTLE"*/);
    sub_2213A60(&StringLiteral_14099/*"TUTORIAL_LABEL_CHAPTER2_LAST_WAR"*/);
    sub_2213A60(&StringLiteral_14104/*"TUTORIAL_LABEL_END"*/);
    sub_2213A60(&StringLiteral_14114/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/);
    sub_2213A60(&StringLiteral_15220/*"TutorialFlagConfigId"*/);
    sub_2213A60(&StringLiteral_14101/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/);
    sub_2213A60(&StringLiteral_15224/*"TutorialFlagProgress"*/);
    sub_2213A60(&StringLiteral_14108/*"TUTORIAL_LABEL_FAVORITE1"*/);
    sub_2213A60(&StringLiteral_15221/*"TutorialFlagGachaId"*/);
    sub_2213A60(&StringLiteral_14107/*"TUTORIAL_LABEL_EVENT_REWARD"*/);
    sub_2213A60(&StringLiteral_14103/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/);
    sub_2213A60(&StringLiteral_14113/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/);
    sub_2213A60(&StringLiteral_14120/*"TUTORIAL_LABEL_STONE_GACHA"*/);
    sub_2213A60(&StringLiteral_14121/*"TUTORIAL_LABEL_SVT_LEAVE"*/);
    sub_2213A60(&StringLiteral_14119/*"TUTORIAL_LABEL_SHOP"*/);
    sub_2213A60(&StringLiteral_14112/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/);
    sub_2213A60(&StringLiteral_15223/*"TutorialFlagLocalId"*/);
    sub_2213A60(&StringLiteral_15222/*"TutorialFlagGachaIdArray"*/);
    sub_2213A60(&StringLiteral_14115/*"TUTORIAL_LABEL_MASHU_CHANGE"*/);
    sub_2213A60(&StringLiteral_14106/*"TUTORIAL_LABEL_EVENT_MISSION"*/);
    sub_2213A60(&StringLiteral_14111/*"TUTORIAL_LABEL_GACHA_SCENE"*/);
    sub_2213A60(&StringLiteral_14102/*"TUTORIAL_LABEL_DECK_SCENE"*/);
    sub_2213A60(&StringLiteral_14117/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/);
    sub_2213A60(&StringLiteral_14109/*"TUTORIAL_LABEL_FAVORITE2"*/);
    sub_2213A60(&StringLiteral_14110/*"TUTORIAL_LABEL_FES"*/);
    byte_596F6EF = 1;
  }
  v7 = StringLiteral_15224/*"TutorialFlagProgress"*/;
  TutorialFlag_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_15224/*"TutorialFlagProgress"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)TutorialFlag_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_15223/*"TutorialFlagLocalId"*/;
  static_fields = TutorialFlag_TypeInfo->static_fields;
  static_fields->SAVE_KEY2 = (struct System_String_o *)StringLiteral_15223/*"TutorialFlagLocalId"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->SAVE_KEY2, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_15220/*"TutorialFlagConfigId"*/;
  v17 = TutorialFlag_TypeInfo->static_fields;
  v17->SAVE_KEY3 = (struct System_String_o *)StringLiteral_15220/*"TutorialFlagConfigId"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->SAVE_KEY3, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_15221/*"TutorialFlagGachaId"*/;
  v25 = TutorialFlag_TypeInfo->static_fields;
  v25->SAVE_KEY4 = (struct System_String_o *)StringLiteral_15221/*"TutorialFlagGachaId"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->SAVE_KEY4, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_15222/*"TutorialFlagGachaIdArray"*/;
  v33 = TutorialFlag_TypeInfo->static_fields;
  v33->SaveKey5 = (struct System_String_o *)StringLiteral_15222/*"TutorialFlagGachaIdArray"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->SaveKey5, v32, v34, v35, v36, v37, v38, v39);
  v40 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo);
  System_Collections_Generic_Dictionary_object__Int32Enum____ctor(
    v40,
    (const MethodInfo_3FF6B84 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
  if ( !v40 )
    sub_2213CDC(v41, v42);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14120/*"TUTORIAL_LABEL_STONE_GACHA"*/,
    101,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14104/*"TUTORIAL_LABEL_END"*/,
    102,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14119/*"TUTORIAL_LABEL_SHOP"*/,
    103,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14100/*"TUTORIAL_LABEL_COMBINE"*/,
    104,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14108/*"TUTORIAL_LABEL_FAVORITE1"*/,
    105,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14109/*"TUTORIAL_LABEL_FAVORITE2"*/,
    106,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14111/*"TUTORIAL_LABEL_GACHA_SCENE"*/,
    107,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14112/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/,
    108,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14102/*"TUTORIAL_LABEL_DECK_SCENE"*/,
    109,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14103/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/,
    110,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14105/*"TUTORIAL_LABEL_EVENT_GACHA"*/,
    111,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14107/*"TUTORIAL_LABEL_EVENT_REWARD"*/,
    112,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14101/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/,
    113,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14106/*"TUTORIAL_LABEL_EVENT_MISSION"*/,
    114,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14115/*"TUTORIAL_LABEL_MASHU_CHANGE"*/,
    115,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14113/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/,
    117,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14114/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/,
    118,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14116/*"TUTORIAL_LABEL_RAID2_BATTLE"*/,
    120,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14118/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/,
    121,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14117/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/,
    122,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14121/*"TUTORIAL_LABEL_SVT_LEAVE"*/,
    126,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14110/*"TUTORIAL_LABEL_FES"*/,
    127,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_object__Int32Enum___Add(
    v40,
    (Il2CppObject *)StringLiteral_14099/*"TUTORIAL_LABEL_CHAPTER2_LAST_WAR"*/,
    208,
    (const MethodInfo_3FF7518 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  v43 = TutorialFlag_TypeInfo->static_fields;
  v43->flagNameList = (struct System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *)v40;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v43->flagNameList, (int32_t)v40, v44, v45, v46, v47, v48, v49);
}


void TutorialFlag___ctor(TutorialFlag_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TutorialFlag__CheckGachaFlagArray(int32_t gachaFlagId, const MethodInfo *method)
{
  __int64 v2; // x2
  TutorialFlag_c *v4; // x0
  System_Int32_array *GachaFlagArray; // x0
  __int64 v6; // x1
  int32_t v7; // w8
  int v8; // w8
  int max_length; // w9
  _BOOL4 v10; // w0

  if ( (byte_596F6EA & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6EA = 1;
  }
  v4 = TutorialFlag_TypeInfo;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  GachaFlagArray = TutorialFlag__LoadGachaFlagArray((const MethodInfo *)v4);
  v7 = gachaFlagId + 31;
  if ( gachaFlagId >= 0 )
    v7 = gachaFlagId;
  if ( !GachaFlagArray )
    sub_2213CDC(0, v6);
  v8 = v7 >> 5;
  max_length = GachaFlagArray->max_length;
  if ( v8 >= max_length )
  {
    LOBYTE(v10) = 0;
  }
  else
  {
    if ( v8 >= (unsigned int)max_length )
      sub_2213CE4(GachaFlagArray);
    return ((unsigned int)GachaFlagArray->m_Items[v8] >> gachaFlagId) & 1;
  }
  return v10;
}


void TutorialFlag__CompleteProgress(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2

  if ( (byte_596F6E1 & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6E1 = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v1, v2);
  TutorialFlag__SetProgress(4, v1);
}


void TutorialFlag__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TutorialFlag_c *v3; // x0

  if ( (byte_596F6D6 & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6D6 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v1, v2);
    v3 = TutorialFlag_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->SAVE_KEY, 0);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SAVE_KEY2, 0);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SAVE_KEY3, 0);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SAVE_KEY4, 0);
  UnityEngine_PlayerPrefs__DeleteKey(TutorialFlag_TypeInfo->static_fields->SaveKey5, 0);
}


bool TutorialFlag__Get(System_String_o *flagIdName, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t Id; // w0
  const MethodInfo *v5; // x1

  if ( (byte_596F6DA & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6DA = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  Id = TutorialFlag__GetId(flagIdName, method);
  return TutorialFlag__Get_47388504(Id, v5);
}


bool TutorialFlag__GetGachaFlg(int32_t gachaFlagId, const MethodInfo *method)
{
  __int64 v2; // x2
  TutorialFlag_c *v4; // x0
  int v5; // w19

  if ( (byte_596F6E8 & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6E8 = 1;
  }
  if ( gachaFlagId >= 32 )
  {
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
    return TutorialFlag__CheckGachaFlagArray(gachaFlagId, method);
  }
  else
  {
    v4 = TutorialFlag_TypeInfo;
    v5 = 1 << gachaFlagId;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
      v4 = TutorialFlag_TypeInfo;
    }
    return (UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY4, 0, 0) & v5) != 0;
  }
}


int32_t TutorialFlag__GetId(System_String_o *flagIdName, const MethodInfo *method)
{
  __int64 v2; // x2
  TutorialFlag_c *v4; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *flagNameList; // x0

  if ( (byte_596F6D9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6D9 = 1;
  }
  v4 = TutorialFlag_TypeInfo;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
    v4 = TutorialFlag_TypeInfo;
  }
  flagNameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v4->static_fields->flagNameList;
  if ( !flagNameList )
    sub_2213CDC(0, method);
  return System_Collections_Generic_Dictionary_object__Int32Enum___get_Item(
           flagNameList,
           (Il2CppObject *)flagIdName,
           (const MethodInfo_3FF7498 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
}


int32_t TutorialFlag__GetProgress(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TutorialFlag_c *v3; // x0

  if ( (byte_596F6E0 & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6E0 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v1, v2);
    v3 = TutorialFlag_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY, 0, 0);
}


System_Collections_Generic_Dictionary_string__object__o *TutorialFlag__GetTutorialFlagSaveData(
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v1; // x19
  __int64 v2; // x1
  __int64 v3; // x2
  TutorialFlag_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  TutorialFlag_c *v7; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *String_83398240; // x0
  __int64 v10; // x1
  TutorialFlag_c *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  TutorialFlag_c *v14; // x0
  System_String_o *SAVE_KEY4; // x20
  TutorialFlag_c *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  TutorialFlag_c *v19; // x0
  System_String_o *SaveKey5; // x20
  int32_t v22; // [xsp+8h] [xbp-28h] BYREF
  int32_t Int_83396820; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596F6D7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object___ctor___91604336);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6D7 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_67097240(
    v1,
    3,
    (const MethodInfo_3FFD298 *)Method_System_Collections_Generic_Dictionary_string__object___ctor___91604336);
  v4 = TutorialFlag_TypeInfo;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v2, v3);
    v4 = TutorialFlag_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v4->static_fields->SAVE_KEY, 0) )
  {
    v7 = TutorialFlag_TypeInfo;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v5, v6);
      v7 = TutorialFlag_TypeInfo;
    }
    SAVE_KEY = v7->static_fields->SAVE_KEY;
    Int_83396820 = UnityEngine_PlayerPrefs__GetInt_83396820(SAVE_KEY, 0);
    String_83398240 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &Int_83396820);
    if ( !v1 )
      goto LABEL_25;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v1,
      (Il2CppObject *)SAVE_KEY,
      String_83398240,
      (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  }
  v11 = TutorialFlag_TypeInfo;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v5, v6);
    v11 = TutorialFlag_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v11->static_fields->SAVE_KEY4, 0) )
  {
    v14 = TutorialFlag_TypeInfo;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v12, v13);
      v14 = TutorialFlag_TypeInfo;
    }
    SAVE_KEY4 = v14->static_fields->SAVE_KEY4;
    v22 = UnityEngine_PlayerPrefs__GetInt_83396820(SAVE_KEY4, 0);
    String_83398240 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v22);
    if ( !v1 )
      goto LABEL_25;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v1,
      (Il2CppObject *)SAVE_KEY4,
      String_83398240,
      (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  }
  v16 = TutorialFlag_TypeInfo;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v12, v13);
    v16 = TutorialFlag_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__HasKey(v16->static_fields->SaveKey5, 0) )
  {
    v19 = TutorialFlag_TypeInfo;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v17, v18);
      v19 = TutorialFlag_TypeInfo;
    }
    SaveKey5 = v19->static_fields->SaveKey5;
    String_83398240 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_83398240(SaveKey5, 0);
    if ( v1 )
    {
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v1,
        (Il2CppObject *)SaveKey5,
        String_83398240,
        (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
      return (System_Collections_Generic_Dictionary_string__object__o *)v1;
    }
LABEL_25:
    sub_2213CDC(String_83398240, v10);
  }
  return (System_Collections_Generic_Dictionary_string__object__o *)v1;
}


bool TutorialFlag__Get_47388504(int32_t flagId, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F6DB & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6DB = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  return TutorialFlag__Get_47424072(flagId, method);
}


// local variable allocation has failed, the output may be wrong!
bool TutorialFlag__Get_47388716(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_2213CDC(userGameEntity, *(_QWORD *)&flagId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool TutorialFlag__Get_47388964(OtherUserGameEntity_o *otherUserGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_2213CDC(otherUserGameEntity, *(_QWORD *)&flagId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool TutorialFlag__Get_47389212(FollowerInfo_o *followerInfo, int32_t flagId, const MethodInfo *method)
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
    sub_2213CDC(followerInfo, *(_QWORD *)&flagId);
  }
  return 0;
}


bool TutorialFlag__Get_47424072(int32_t flagId, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_596F6DC & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6DC = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v3, v4);
  return TutorialFlag__Get_47388716(SelfUserGame, flagId, v4);
}


bool TutorialFlag__Get_47425340(int32_t flagId, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596F6E7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F6E7 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
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
    sub_2213CDC(Instance, v6);
  return UserEventEntity__getTutorialFlag(entity, flagId, 0);
}


void TutorialFlag__InitSaveGachaFlag(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TutorialFlag_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  bool HasKey; // w19
  TutorialFlag_c *v7; // x0
  TutorialFlag_c *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  TutorialFlag_c *v11; // x0

  if ( (byte_596F6EE & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596F6EE = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v1, v2);
    v3 = TutorialFlag_TypeInfo;
  }
  HasKey = UnityEngine_PlayerPrefs__HasKey(v3->static_fields->SaveKey5, 0);
  if ( !HasKey )
  {
    v7 = TutorialFlag_TypeInfo;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v4, v5);
      v7 = TutorialFlag_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v7->static_fields->SaveKey5, (System_String_o *)StringLiteral_1198/*"0"*/, 0);
  }
  v8 = TutorialFlag_TypeInfo;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v4, v5);
    v8 = TutorialFlag_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__HasKey(v8->static_fields->SAVE_KEY4, 0) )
  {
    v11 = TutorialFlag_TypeInfo;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v9, v10);
      v11 = TutorialFlag_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v11->static_fields->SAVE_KEY4, 0, 0);
    goto LABEL_17;
  }
  if ( !HasKey )
LABEL_17:
    UnityEngine_PlayerPrefs__Save(0);
}


bool TutorialFlag__IsProgressComplete(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2
  const MethodInfo *v3; // x1
  __int64 v4; // x2

  if ( (byte_596F6E6 & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6E6 = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v1, v2);
  if ( TutorialFlag__Get_47388504(102, v1) )
    return 1;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v3, v4);
  return TutorialFlag__IsProgressDone(4, v3);
}


bool TutorialFlag__IsProgressDone(int32_t count, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  __int64 v5; // x2

  if ( (byte_596F6E4 & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6E4 = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  if ( TutorialFlag__Get_47388504(102, method) )
    return 1;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v4, v5);
  return TutorialFlag__IsProgressDone_47425124(count, v4);
}


bool TutorialFlag__IsProgressDone_47425124(int32_t count, const MethodInfo *method)
{
  __int64 v2; // x2
  TutorialFlag_c *v4; // x0

  if ( (byte_596F6E5 & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6E5 = 1;
  }
  v4 = TutorialFlag_TypeInfo;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  return TutorialFlag__GetProgress((const MethodInfo *)v4) >= count;
}


System_Int32_array *TutorialFlag__LoadGachaFlagArray(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TutorialFlag_c *v3; // x0
  int v4; // w8
  System_String_o *String; // x0
  __int64 v6; // x1
  System_String_array *v7; // x20
  System_Collections_Generic_List_int__o *v8; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596F6EC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596F6EC = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  v4 = *(&TutorialFlag_TypeInfo->_2.cctor_finished + 1);
  result = 0;
  if ( !v4 )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v1, v2);
    v3 = TutorialFlag_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v3->static_fields->SaveKey5, (System_String_o *)StringLiteral_1198/*"0"*/, 0);
  if ( !String )
    goto LABEL_19;
  v7 = System_String__Split(String, 0x2Cu, 0, 0);
  v8 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v7 )
    goto LABEL_19;
  max_length = v7->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= (unsigned int)max_length )
        sub_2213CE4(String);
      String = (System_String_o *)System_Int32__TryParse(v7->m_Items[v10], &result, 0);
      if ( ((unsigned __int8)String & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_19;
        items = v8->fields._items;
        v6 = (unsigned int)result;
        v12 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            v6,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = size + 1;
          items->m_Items[size] = v6;
        }
      }
      LODWORD(max_length) = v7->max_length;
    }
    while ( (__int64)++v10 < (int)max_length );
  }
  if ( !v8 )
LABEL_19:
    sub_2213CDC(String, v6);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void TutorialFlag__SaveTutorialFlagSaveData(
        System_Collections_Generic_Dictionary_string__object__o *data,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TutorialFlag_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  TutorialFlag_c *v8; // x0
  Il2CppObject *v9; // x8
  __int64 v10; // x1
  System_String_o *SAVE_KEY; // x20
  int32_t *v12; // x0
  TutorialFlag_c *v13; // x0
  System_String_o *SAVE_KEY4; // x20
  int32_t *v15; // x0
  TutorialFlag_c *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  TutorialFlag_c *v20; // x0
  System_String_o *v21; // x1
  System_String_o *SaveKey5; // x0
  __int64 v23; // x8
  System_String_o *v24; // x0
  const MethodInfo *v25; // x1
  System_String_o *v26; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *v27; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596F6D8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6D8 = 1;
  }
  value = 0;
  v26 = 0;
  v27 = 0;
  if ( data )
  {
    v4 = TutorialFlag_TypeInfo;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
      v4 = TutorialFlag_TypeInfo;
    }
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)data,
           (Il2CppObject *)v4->static_fields->SAVE_KEY,
           &value,
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v8 = TutorialFlag_TypeInfo;
      if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v5, v6);
        v8 = TutorialFlag_TypeInfo;
      }
      v9 = value;
      if ( !value )
        goto LABEL_30;
      v10 = qword_5984348;
      if ( value->klass->_1.element_class != *(Il2CppClass **)(qword_5984348 + 64) )
        goto LABEL_31;
      SAVE_KEY = v8->static_fields->SAVE_KEY;
      v12 = (int32_t *)j_il2cpp_object_unbox_0(value, qword_5984348, v6, v7);
      UnityEngine_PlayerPrefs__SetInt(SAVE_KEY, *v12, 0);
    }
    v13 = TutorialFlag_TypeInfo;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v5, v6);
      v13 = TutorialFlag_TypeInfo;
    }
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)data,
            (Il2CppObject *)v13->static_fields->SAVE_KEY4,
            &v27,
            (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      goto LABEL_20;
    v8 = TutorialFlag_TypeInfo;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v5, v6);
      v8 = TutorialFlag_TypeInfo;
    }
    v9 = v27;
    if ( v27 )
    {
      v10 = qword_5984348;
      if ( v27->klass->_1.element_class == *(Il2CppClass **)(qword_5984348 + 64) )
      {
        SAVE_KEY4 = v8->static_fields->SAVE_KEY4;
        v15 = (int32_t *)j_il2cpp_object_unbox_0(v27, qword_5984348, v6, v7);
        UnityEngine_PlayerPrefs__SetInt(SAVE_KEY4, *v15, 0);
LABEL_20:
        v16 = TutorialFlag_TypeInfo;
        if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v5, v6);
          v16 = TutorialFlag_TypeInfo;
        }
        if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
                (System_Collections_Generic_Dictionary_object__object__o *)data,
                (Il2CppObject *)v16->static_fields->SaveKey5,
                (Il2CppObject **)&v26,
                (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
          goto LABEL_28;
        v20 = TutorialFlag_TypeInfo;
        if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v17, v18);
          v20 = TutorialFlag_TypeInfo;
        }
        v21 = v26;
        SaveKey5 = v20->static_fields->SaveKey5;
        if ( !v26 || (v23 = qword_5984390, v26->klass == (System_String_c *)qword_5984390) )
        {
          UnityEngine_PlayerPrefs__SetString(SaveKey5, v26, 0);
LABEL_28:
          UnityEngine_PlayerPrefs__Save(0);
          return;
        }
LABEL_32:
        sub_221405C(v21, v23, v18, v19);
        TutorialFlag__GetId(v24, v25);
        return;
      }
LABEL_31:
      sub_221405C(v9, v10, v6, v7);
      goto LABEL_32;
    }
LABEL_30:
    sub_2213CDC(v8, v5);
  }
}


void TutorialFlag__Set(System_String_o *flagIdName, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t Id; // w0
  const MethodInfo *v5; // x1

  if ( (byte_596F6DD & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6DD = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  Id = TutorialFlag__GetId(flagIdName, method);
  TutorialFlag__Set_47424264(Id, v5);
}


void TutorialFlag__SetGachaFlagArray(System_Int32_array *flags, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  TutorialFlag_c *v6; // x8
  System_String_o *v7; // x19

  if ( (byte_596F6ED & 1) == 0 )
  {
    sub_2213A60(&Method_System_String_Join_int___);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_869/*","*/);
    byte_596F6ED = 1;
  }
  v3 = System_String__Join_int_(
         (System_String_o *)StringLiteral_869/*","*/,
         (System_Collections_Generic_IEnumerable_T__o *)flags,
         (const MethodInfo_398AAF8 *)Method_System_String_Join_int___);
  v6 = TutorialFlag_TypeInfo;
  v7 = v3;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v4, v5);
    v6 = TutorialFlag_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v6->static_fields->SaveKey5, v7, 0);
}


void TutorialFlag__SetGachaFlg(int32_t gachaFlagId, const MethodInfo *method)
{
  __int64 v2; // x2
  ManagerConfig_c *v4; // x0
  int v5; // w19
  TutorialFlag_c *v6; // x0
  int32_t v7; // w1

  if ( (byte_596F6E9 & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6E9 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    if ( gachaFlagId >= 32 )
    {
      if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
      TutorialFlag__SetGachaFlgArray(gachaFlagId, method);
    }
    else
    {
      v5 = 1 << gachaFlagId;
      v6 = TutorialFlag_TypeInfo;
      if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
        v6 = TutorialFlag_TypeInfo;
      }
      v7 = UnityEngine_PlayerPrefs__GetInt(v6->static_fields->SAVE_KEY4, 0, 0) | v5;
      UnityEngine_PlayerPrefs__SetInt(TutorialFlag_TypeInfo->static_fields->SAVE_KEY4, v7, 0);
    }
  }
}


void TutorialFlag__SetGachaFlgArray(int32_t gachaFlagId, const MethodInfo *method)
{
  __int64 v2; // x2
  TutorialFlag_c *v4; // x0
  System_Int32_array *GachaFlagArray; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  int32_t v8; // w8
  int v9; // w22
  System_Int32_array *v10; // x20
  TutorialFlag_c *v11; // x0
  System_Int32_array *array; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F6EB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Resize_int___);
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6EB = 1;
  }
  v4 = TutorialFlag_TypeInfo;
  array = 0;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  GachaFlagArray = TutorialFlag__LoadGachaFlagArray((const MethodInfo *)v4);
  v8 = gachaFlagId + 31;
  array = GachaFlagArray;
  if ( gachaFlagId >= 0 )
    v8 = gachaFlagId;
  if ( !GachaFlagArray
    || (v9 = v8 >> 5, v10 = GachaFlagArray, v8 >> 5 >= SLODWORD(GachaFlagArray->max_length))
    && (System_Array__Resize_int_(&array, v9 + 1, (const MethodInfo_37A74B8 *)Method_System_Array_Resize_int___),
        (v10 = array) == 0) )
  {
    sub_2213CDC(GachaFlagArray, v6);
  }
  if ( (unsigned int)v9 >= LODWORD(v10->max_length) )
    sub_2213CE4(GachaFlagArray);
  v11 = TutorialFlag_TypeInfo;
  v10->m_Items[v9] |= 1 << gachaFlagId;
  if ( !*(&v11->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v11, v6, v7);
  TutorialFlag__SetGachaFlagArray(v10, v6);
}


void TutorialFlag__SetProgress(int32_t count, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F6E2 & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6E2 = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  TutorialFlag__SetProgress_47424824(count, method);
}


void TutorialFlag__SetProgress_47424824(int32_t count, const MethodInfo *method)
{
  __int64 v2; // x2
  ManagerConfig_c *v4; // x0
  TutorialFlag_c *v5; // x0

  if ( (byte_596F6E3 & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6E3 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    v5 = TutorialFlag_TypeInfo;
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
      v5 = TutorialFlag_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v5->static_fields->SAVE_KEY, count, 0);
    UnityEngine_PlayerPrefs__Save(0);
  }
}


void TutorialFlag__Set_47424264(int32_t flagId, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F6DE & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6DE = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  TutorialFlag__Set_47424348(flagId, method);
}


void TutorialFlag__Set_47424348(int32_t flagId, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_596F6DF & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    byte_596F6DF = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v3, v4);
  TutorialFlag__Set_47424452(SelfUserGame, flagId, v4);
}


// local variable allocation has failed, the output may be wrong!
void TutorialFlag__Set_47424452(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_2213CDC(userGameEntity, *(_QWORD *)&flagId);
  }
  if ( !userGameEntity )
    goto LABEL_9;
  p_tutorial2 = &userGameEntity->fields.tutorial1;
LABEL_7:
  *p_tutorial2 |= (unsigned int)(1 << (flagId
                                     - 100
                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))));
}