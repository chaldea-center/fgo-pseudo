void __fastcall TutorialFlag___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct TutorialFlag_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct TutorialFlag_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct TutorialFlag_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_Dictionary_Type__ReadType__o *v33; // x19
  __int64 v34; // x0
  __int64 v35; // x1
  struct TutorialFlag_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_438D6F7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo);
    sub_B775C4(&TutorialFlag_TypeInfo);
    sub_B775C4(&StringLiteral_13719/*"TUTORIAL_LABEL_EVENT_GACHA"*/);
    sub_B775C4(&StringLiteral_13732/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/);
    sub_B775C4(&StringLiteral_13714/*"TUTORIAL_LABEL_COMBINE"*/);
    sub_B775C4(&StringLiteral_13730/*"TUTORIAL_LABEL_RAID2_BATTLE"*/);
    sub_B775C4(&StringLiteral_13718/*"TUTORIAL_LABEL_END"*/);
    sub_B775C4(&StringLiteral_13728/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/);
    sub_B775C4(&StringLiteral_14829/*"TutorialFlagConfigId"*/);
    sub_B775C4(&StringLiteral_13715/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/);
    sub_B775C4(&StringLiteral_14832/*"TutorialFlagProgress"*/);
    sub_B775C4(&StringLiteral_13722/*"TUTORIAL_LABEL_FAVORITE1"*/);
    sub_B775C4(&StringLiteral_14830/*"TutorialFlagGachaId"*/);
    sub_B775C4(&StringLiteral_13721/*"TUTORIAL_LABEL_EVENT_REWARD"*/);
    sub_B775C4(&StringLiteral_13717/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/);
    sub_B775C4(&StringLiteral_13727/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/);
    sub_B775C4(&StringLiteral_13734/*"TUTORIAL_LABEL_STONE_GACHA"*/);
    sub_B775C4(&StringLiteral_13735/*"TUTORIAL_LABEL_SVT_LEAVE"*/);
    sub_B775C4(&StringLiteral_13733/*"TUTORIAL_LABEL_SHOP"*/);
    sub_B775C4(&StringLiteral_13726/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/);
    sub_B775C4(&StringLiteral_14831/*"TutorialFlagLocalId"*/);
    sub_B775C4(&StringLiteral_13729/*"TUTORIAL_LABEL_MASHU_CHANGE"*/);
    sub_B775C4(&StringLiteral_13720/*"TUTORIAL_LABEL_EVENT_MISSION"*/);
    sub_B775C4(&StringLiteral_13725/*"TUTORIAL_LABEL_GACHA_SCENE"*/);
    sub_B775C4(&StringLiteral_13716/*"TUTORIAL_LABEL_DECK_SCENE"*/);
    sub_B775C4(&StringLiteral_13731/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/);
    sub_B775C4(&StringLiteral_13723/*"TUTORIAL_LABEL_FAVORITE2"*/);
    sub_B775C4(&StringLiteral_13724/*"TUTORIAL_LABEL_FES"*/);
    byte_438D6F7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TutorialFlag_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_14832/*"TutorialFlagProgress"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_14832/*"TutorialFlagProgress"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = TutorialFlag_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_14831/*"TutorialFlagLocalId"*/;
  v9->SAVE_KEY2 = (struct System_String_o *)StringLiteral_14831/*"TutorialFlagLocalId"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->SAVE_KEY2, v10, v11, v12, v13, v14, v15, v16);
  v17 = TutorialFlag_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_14829/*"TutorialFlagConfigId"*/;
  v17->SAVE_KEY3 = (struct System_String_o *)StringLiteral_14829/*"TutorialFlagConfigId"*/;
  sub_B77560((BattleServantConfConponent_o *)&v17->SAVE_KEY3, v18, v19, v20, v21, v22, v23, v24);
  v25 = TutorialFlag_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_14830/*"TutorialFlagGachaId"*/;
  v25->SAVE_KEY4 = (struct System_String_o *)StringLiteral_14830/*"TutorialFlagGachaId"*/;
  sub_B77560((BattleServantConfConponent_o *)&v25->SAVE_KEY4, v26, v27, v28, v29, v30, v31, v32);
  v33 = (System_Collections_Generic_Dictionary_Type__ReadType__o *)sub_B77694(System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo);
  System_Collections_Generic_Dictionary_Type__ReadType____ctor(
    v33,
    (const MethodInfo_2FE0744 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
  if ( !v33 )
    sub_B7769C(v34, v35);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13734/*"TUTORIAL_LABEL_STONE_GACHA"*/,
    101,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13718/*"TUTORIAL_LABEL_END"*/,
    102,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13733/*"TUTORIAL_LABEL_SHOP"*/,
    103,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13714/*"TUTORIAL_LABEL_COMBINE"*/,
    104,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13722/*"TUTORIAL_LABEL_FAVORITE1"*/,
    105,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13723/*"TUTORIAL_LABEL_FAVORITE2"*/,
    106,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13725/*"TUTORIAL_LABEL_GACHA_SCENE"*/,
    107,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13726/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/,
    108,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13716/*"TUTORIAL_LABEL_DECK_SCENE"*/,
    109,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13717/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/,
    110,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13719/*"TUTORIAL_LABEL_EVENT_GACHA"*/,
    111,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13721/*"TUTORIAL_LABEL_EVENT_REWARD"*/,
    112,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13715/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/,
    113,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13720/*"TUTORIAL_LABEL_EVENT_MISSION"*/,
    114,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13729/*"TUTORIAL_LABEL_MASHU_CHANGE"*/,
    115,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13727/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/,
    117,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13728/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/,
    118,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13730/*"TUTORIAL_LABEL_RAID2_BATTLE"*/,
    120,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13732/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/,
    121,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13731/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/,
    122,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13735/*"TUTORIAL_LABEL_SVT_LEAVE"*/,
    126,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v33,
    (System_Type_o *)StringLiteral_13724/*"TUTORIAL_LABEL_FES"*/,
    127,
    (const MethodInfo_2FE12F8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  v36 = TutorialFlag_TypeInfo->static_fields;
  v36->flagNameList = (struct System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *)v33;
  sub_B77560(
    (BattleServantConfConponent_o *)&v36->flagNameList,
    (System_Int32_array **)v33,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
}


void __fastcall TutorialFlag___ctor(TutorialFlag_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TutorialFlag__ClearProgress(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  TutorialFlag_c *v2; // x0

  if ( (byte_438D6E9 & 1) == 0 )
  {
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6E9 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( !v1->static_fields->UseMock )
  {
    v2 = TutorialFlag_TypeInfo;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
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

  if ( (byte_438D6EA & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6EA = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(4, v1);
}


void __fastcall TutorialFlag__DeleteContinueData(const MethodInfo *method)
{
  TutorialFlag_c *v1; // x0

  if ( (byte_438D6DF & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6DF = 1;
  }
  v1 = TutorialFlag_TypeInfo;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
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

  if ( (byte_438D6E2 & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6E2 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  return TutorialFlag__Get_29515752(Id, v4);
}


bool __fastcall TutorialFlag__GetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_438D6F3 & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6F3 = 1;
  }
  if ( (unsigned int)configFlagId > 0x63 )
    return 0;
  v3 = TutorialFlag_TypeInfo;
  v4 = 1 << ((configFlagId + 100) % 100);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v3 = TutorialFlag_TypeInfo;
  }
  return (UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY3, 0, 0LL) & v4) != 0;
}


bool __fastcall TutorialFlag__GetGachaFlg(int32_t gachaFlagId, const MethodInfo *method)
{
  char v2; // w19
  int v3; // w19
  TutorialFlag_c *v4; // x0

  v2 = gachaFlagId;
  if ( (byte_438D6F5 & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6F5 = 1;
  }
  v3 = 1 << v2;
  v4 = TutorialFlag_TypeInfo;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v4 = TutorialFlag_TypeInfo;
  }
  return (UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY4, 0, 0LL) & v3) != 0;
}


int32_t __fastcall TutorialFlag__GetId(System_String_o *flagIdName, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *flagNameList; // x0

  if ( (byte_438D6E1 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6E1 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v3 = TutorialFlag_TypeInfo;
  }
  flagNameList = v3->static_fields->flagNameList;
  if ( !flagNameList )
    sub_B7769C(0LL, method);
  return System_Collections_Generic_Dictionary_string__TutorialFlag_Id___get_Item(
           flagNameList,
           flagIdName,
           (const MethodInfo_2FE1234 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
}


TutorialFlag_Id_array *__fastcall TutorialFlag__GetIdList(const MethodInfo *method)
{
  __int64 v1; // x1
  TutorialFlag_c *v2; // x0
  System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *flagNameList; // x0
  unsigned int Count; // w0
  struct TutorialFlag_StaticFields *static_fields; // x8
  TutorialFlag_Id_array *v6; // x19
  il2cpp_array_size_t i; // w20
  char *v8; // x9
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v12; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_438D6E0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__get_Current__);
    sub_B775C4(&TutorialFlag_Id___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__TutorialFlag_Id__get_Value__);
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6E0 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  v2 = TutorialFlag_TypeInfo;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v2 = TutorialFlag_TypeInfo;
  }
  flagNameList = v2->static_fields->flagNameList;
  if ( !flagNameList
    || (Count = System_Collections_Generic_Dictionary_string__TutorialFlag_Id___get_Count(
                  flagNameList,
                  (const MethodInfo_2FE0EF4 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__),
        flagNameList = (System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *)sub_B775DC(
                                                                                             TutorialFlag_Id___TypeInfo,
                                                                                             Count),
        static_fields = TutorialFlag_TypeInfo->static_fields,
        !static_fields->flagNameList) )
  {
    sub_B7769C(flagNameList, v1);
  }
  v6 = (TutorialFlag_Id_array *)flagNameList;
  System_Collections_Generic_Dictionary_string__TutorialFlag_Id___GetEnumerator(
    &v13,
    static_fields->flagNameList,
    (const MethodInfo_2FE188C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v9 = System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id___MoveNext(
           &v13,
           (const MethodInfo_27E2038 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__);
    if ( !v9 )
      break;
    if ( !v6 )
      sub_B7769C(v9, v10);
    if ( i >= v6->max_length )
    {
      v12 = sub_B776C8(v9);
      sub_B77668(v12, 0LL);
    }
    v8 = (char *)v6 + 4 * (int)i;
    *((_DWORD *)v8 + 8) = v13.fields.current.fields.value;
  }
  System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id___Dispose(
    &v13,
    (const MethodInfo_27E21A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__);
  return v6;
}


int32_t __fastcall TutorialFlag__GetProgress(const MethodInfo *method)
{
  TutorialFlag_c *v1; // x0

  if ( (byte_438D6E8 & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6E8 = 1;
  }
  v1 = TutorialFlag_TypeInfo;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v1 = TutorialFlag_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY, 0, 0LL);
}


bool __fastcall TutorialFlag__Get_29515752(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_438D6E3 & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6E3 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29515848(flagId, method);
}


bool __fastcall TutorialFlag__Get_29515848(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_438D6E4 & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6E4 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29515964(SelfUserGame, flagId, v3);
}


bool __fastcall TutorialFlag__Get_29515964(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    goto LABEL_10;
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
LABEL_10:
    sub_B7769C(userGameEntity, flagId);
  }
  return 0;
}


bool __fastcall TutorialFlag__Get_29516092(FollowerInfo_o *followerInfo, int32_t flagId, const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !followerInfo )
    sub_B7769C(0LL, flagId);
  return (followerInfo->fields.tutorial1 & (unsigned int)(1 << (flagId
                                                              - 100
                                                              * (((unsigned __int64)(1374389535LL * flagId) >> 37)
                                                               + (1374389535LL * flagId < 0))))) != 0;
}


bool __fastcall TutorialFlag__Get_29516188(
        OtherUserGameEntity_o *otherUserGameEntity,
        int32_t flagId,
        const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !otherUserGameEntity )
    sub_B7769C(0LL, flagId);
  return (otherUserGameEntity->fields.tutorial1 & (unsigned int)(1 << (flagId
                                                                     - 100
                                                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37)
                                                                      + (1374389535LL * flagId < 0))))) != 0;
}


bool __fastcall TutorialFlag__Get_29517676(int32_t flagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_438D6F0 & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6F0 = 1;
  }
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  v3 = TutorialFlag_TypeInfo;
  v4 = 1 << (flagId % 100);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v3 = TutorialFlag_TypeInfo;
  }
  return (UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY2, 0, 0LL) & v4) != 0;
}


bool __fastcall TutorialFlag__Get_29517860(int32_t flagId, int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438D6F2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D6F2 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !UserEventMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, (int64_t)Instance, eventId, 0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_B7769C(Instance, v6);
  return UserEventEntity__getTutorialFlag(entity, flagId, 0LL);
}


bool __fastcall TutorialFlag__IsProgressComplete(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  const MethodInfo *v2; // x1

  if ( (byte_438D6EF & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6EF = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29515752(102, v1) )
    return 1;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone(4, v2);
}


bool __fastcall TutorialFlag__IsProgressDone(int32_t count, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_438D6ED & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6ED = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29515752(102, method) )
    return 1;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone_29517428(count, v3);
}


bool __fastcall TutorialFlag__IsProgressDone_29517428(int32_t count, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_438D6EE & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6EE = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__GetProgress((const MethodInfo *)v3) >= count;
}


void __fastcall TutorialFlag__Set(System_String_o *flagIdName, const MethodInfo *method)
{
  int32_t Id; // w0
  const MethodInfo *v4; // x1

  if ( (byte_438D6E5 & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6E5 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  TutorialFlag__Set_29516384(Id, v4);
}


void __fastcall TutorialFlag__SetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  TutorialFlag_c *v4; // x0
  int32_t Int; // w0

  if ( (byte_438D6F4 & 1) == 0 )
  {
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6F4 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock && (unsigned int)configFlagId <= 0x63 )
  {
    v4 = TutorialFlag_TypeInfo;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
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
  if ( (byte_438D6F6 & 1) == 0 )
  {
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6F6 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = 1 << v2;
    v5 = TutorialFlag_TypeInfo;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
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
  if ( (byte_438D6EB & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6EB = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress_29517088(count, method);
}


void __fastcall TutorialFlag__SetProgress_29517088(int32_t count, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  TutorialFlag_c *v4; // x0

  if ( (byte_438D6EC & 1) == 0 )
  {
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6EC = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = TutorialFlag_TypeInfo;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      v4 = TutorialFlag_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY, count, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TutorialFlag__Set_29511056(int32_t flagId, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  TutorialFlag_c *v4; // x0
  int v5; // w19
  int32_t Int; // w0

  if ( (byte_438D6F1 & 1) == 0 )
  {
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6F1 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock && (unsigned int)(flagId - 100) <= 0x63 )
  {
    v4 = TutorialFlag_TypeInfo;
    v5 = 1 << (flagId % 100);
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      v4 = TutorialFlag_TypeInfo;
    }
    Int = UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY2, 0, 0LL);
    UnityEngine_PlayerPrefs__SetInt(TutorialFlag_TypeInfo->static_fields->SAVE_KEY2, Int | v5, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TutorialFlag__Set_29516384(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_438D6E6 & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6E6 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_29516480(flagId, method);
}


void __fastcall TutorialFlag__Set_29516480(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_438D6E7 & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438D6E7 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_29516596(SelfUserGame, flagId, v3);
}


void __fastcall TutorialFlag__Set_29516596(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_B7769C(userGameEntity, flagId);
  }
  if ( !userGameEntity )
    goto LABEL_9;
  p_tutorial2 = &userGameEntity->fields.tutorial1;
LABEL_7:
  *p_tutorial2 |= (unsigned int)(1 << (flagId
                                     - 100
                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))));
}