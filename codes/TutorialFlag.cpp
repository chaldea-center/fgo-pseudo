void __fastcall TutorialFlag___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v38; // x1
  struct TutorialFlag_StaticFields *v39; // x0
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct TutorialFlag_StaticFields *v47; // x0
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct TutorialFlag_StaticFields *v55; // x0
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  System_Collections_Generic_Dictionary_Type__ReadType__o *v67; // x19
  struct TutorialFlag_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7

  if ( (byte_40FB91D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo, v9);
    sub_B16FFC(&TutorialFlag_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_13413/*"TUTORIAL_LABEL_EVENT_GACHA"*/, v11);
    sub_B16FFC(&StringLiteral_13426/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/, v12);
    sub_B16FFC(&StringLiteral_13408/*"TUTORIAL_LABEL_COMBINE"*/, v13);
    sub_B16FFC(&StringLiteral_13424/*"TUTORIAL_LABEL_RAID2_BATTLE"*/, v14);
    sub_B16FFC(&StringLiteral_13412/*"TUTORIAL_LABEL_END"*/, v15);
    sub_B16FFC(&StringLiteral_13422/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/, v16);
    sub_B16FFC(&StringLiteral_14518/*"TutorialFlagConfigId"*/, v17);
    sub_B16FFC(&StringLiteral_13409/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/, v18);
    sub_B16FFC(&StringLiteral_14521/*"TutorialFlagProgress"*/, v19);
    sub_B16FFC(&StringLiteral_13416/*"TUTORIAL_LABEL_FAVORITE1"*/, v20);
    sub_B16FFC(&StringLiteral_14519/*"TutorialFlagGachaId"*/, v21);
    sub_B16FFC(&StringLiteral_13415/*"TUTORIAL_LABEL_EVENT_REWARD"*/, v22);
    sub_B16FFC(&StringLiteral_13411/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/, v23);
    sub_B16FFC(&StringLiteral_13421/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/, v24);
    sub_B16FFC(&StringLiteral_13428/*"TUTORIAL_LABEL_STONE_GACHA"*/, v25);
    sub_B16FFC(&StringLiteral_13429/*"TUTORIAL_LABEL_SVT_LEAVE"*/, v26);
    sub_B16FFC(&StringLiteral_13427/*"TUTORIAL_LABEL_SHOP"*/, v27);
    sub_B16FFC(&StringLiteral_13420/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/, v28);
    sub_B16FFC(&StringLiteral_14520/*"TutorialFlagLocalId"*/, v29);
    sub_B16FFC(&StringLiteral_13423/*"TUTORIAL_LABEL_MASHU_CHANGE"*/, v30);
    sub_B16FFC(&StringLiteral_13414/*"TUTORIAL_LABEL_EVENT_MISSION"*/, v31);
    sub_B16FFC(&StringLiteral_13419/*"TUTORIAL_LABEL_GACHA_SCENE"*/, v32);
    sub_B16FFC(&StringLiteral_13410/*"TUTORIAL_LABEL_DECK_SCENE"*/, v33);
    sub_B16FFC(&StringLiteral_13425/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/, v34);
    sub_B16FFC(&StringLiteral_13417/*"TUTORIAL_LABEL_FAVORITE2"*/, v35);
    sub_B16FFC(&StringLiteral_13418/*"TUTORIAL_LABEL_FES"*/, v36);
    byte_40FB91D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TutorialFlag_TypeInfo->static_fields;
  v38 = (System_Int32_array **)StringLiteral_14521/*"TutorialFlagProgress"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_14521/*"TutorialFlagProgress"*/;
  sub_B16F98(static_fields, v38, v2, v3, v4, v5, v6, v7);
  v39 = TutorialFlag_TypeInfo->static_fields;
  v40 = (System_Int32_array **)StringLiteral_14520/*"TutorialFlagLocalId"*/;
  v39->SAVE_KEY2 = (struct System_String_o *)StringLiteral_14520/*"TutorialFlagLocalId"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v39->SAVE_KEY2, v40, v41, v42, v43, v44, v45, v46);
  v47 = TutorialFlag_TypeInfo->static_fields;
  v48 = (System_Int32_array **)StringLiteral_14518/*"TutorialFlagConfigId"*/;
  v47->SAVE_KEY3 = (struct System_String_o *)StringLiteral_14518/*"TutorialFlagConfigId"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v47->SAVE_KEY3, v48, v49, v50, v51, v52, v53, v54);
  v55 = TutorialFlag_TypeInfo->static_fields;
  v56 = (System_Int32_array **)StringLiteral_14519/*"TutorialFlagGachaId"*/;
  v55->SAVE_KEY4 = (struct System_String_o *)StringLiteral_14519/*"TutorialFlagGachaId"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v55->SAVE_KEY4, v56, v57, v58, v59, v60, v61, v62);
  v67 = (System_Collections_Generic_Dictionary_Type__ReadType__o *)sub_B170CC(
                                                                     System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo,
                                                                     v63,
                                                                     v64,
                                                                     v65,
                                                                     v66);
  System_Collections_Generic_Dictionary_Type__ReadType____ctor(
    v67,
    (const MethodInfo_2D9F338 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
  if ( !v67 )
    sub_B170D4();
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13428/*"TUTORIAL_LABEL_STONE_GACHA"*/,
    101,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13412/*"TUTORIAL_LABEL_END"*/,
    102,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13427/*"TUTORIAL_LABEL_SHOP"*/,
    103,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13408/*"TUTORIAL_LABEL_COMBINE"*/,
    104,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13416/*"TUTORIAL_LABEL_FAVORITE1"*/,
    105,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13417/*"TUTORIAL_LABEL_FAVORITE2"*/,
    106,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13419/*"TUTORIAL_LABEL_GACHA_SCENE"*/,
    107,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13420/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/,
    108,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13410/*"TUTORIAL_LABEL_DECK_SCENE"*/,
    109,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13411/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/,
    110,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13413/*"TUTORIAL_LABEL_EVENT_GACHA"*/,
    111,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13415/*"TUTORIAL_LABEL_EVENT_REWARD"*/,
    112,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13409/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/,
    113,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13414/*"TUTORIAL_LABEL_EVENT_MISSION"*/,
    114,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13423/*"TUTORIAL_LABEL_MASHU_CHANGE"*/,
    115,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13421/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/,
    117,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13422/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/,
    118,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13424/*"TUTORIAL_LABEL_RAID2_BATTLE"*/,
    120,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13426/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/,
    121,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13425/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/,
    122,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13429/*"TUTORIAL_LABEL_SVT_LEAVE"*/,
    126,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v67,
    (System_Type_o *)StringLiteral_13418/*"TUTORIAL_LABEL_FES"*/,
    127,
    (const MethodInfo_2D9FEEC *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  v68 = TutorialFlag_TypeInfo->static_fields;
  v68->flagNameList = (struct System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *)v67;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v68->flagNameList,
    (System_Int32_array **)v67,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
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

  if ( (byte_40FB90F & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, v1);
    sub_B16FFC(&TutorialFlag_TypeInfo, v2);
    byte_40FB90F = 1;
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
    UnityEngine_PlayerPrefs__DeleteKey(v4->static_fields->SAVE_KEY, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TutorialFlag__CompleteProgress(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_40FB910 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, v1);
    byte_40FB910 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(4, v1);
}


void __fastcall TutorialFlag__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  TutorialFlag_c *v2; // x0

  if ( (byte_40FB905 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, v1);
    byte_40FB905 = 1;
  }
  v2 = TutorialFlag_TypeInfo;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
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

  if ( (byte_40FB908 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FB908 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  return TutorialFlag__Get_28023340(Id, v4);
}


bool __fastcall TutorialFlag__GetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_40FB919 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FB919 = 1;
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
  if ( (byte_40FB91B & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FB91B = 1;
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
  __int64 v3; // x1
  TutorialFlag_c *v4; // x0
  System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *flagNameList; // x0

  if ( (byte_40FB907 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__, method);
    sub_B16FFC(&TutorialFlag_TypeInfo, v3);
    byte_40FB907 = 1;
  }
  v4 = TutorialFlag_TypeInfo;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v4 = TutorialFlag_TypeInfo;
  }
  flagNameList = v4->static_fields->flagNameList;
  if ( !flagNameList )
    sub_B170D4();
  return System_Collections_Generic_Dictionary_string__TutorialFlag_Id___get_Item(
           flagNameList,
           flagIdName,
           (const MethodInfo_2D9FE28 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
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
  System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *flagNameList; // x0
  unsigned int Count; // w0
  __int64 v12; // x2
  __int64 v13; // x0
  struct TutorialFlag_StaticFields *static_fields; // x8
  TutorialFlag_Id_array *v15; // x19
  il2cpp_array_size_t i; // w20
  char *v17; // x9
  _BOOL8 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FB906 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__, v2);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__get_Current__, v5);
    sub_B16FFC(&TutorialFlag_Id___TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__TutorialFlag_Id__get_Value__, v7);
    sub_B16FFC(&TutorialFlag_TypeInfo, v8);
    byte_40FB906 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v9 = TutorialFlag_TypeInfo;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v9 = TutorialFlag_TypeInfo;
  }
  flagNameList = v9->static_fields->flagNameList;
  if ( !flagNameList
    || (Count = System_Collections_Generic_Dictionary_string__TutorialFlag_Id___get_Count(
                  flagNameList,
                  (const MethodInfo_2D9FAE8 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__),
        v13 = sub_B17014(TutorialFlag_Id___TypeInfo, Count, v12),
        static_fields = TutorialFlag_TypeInfo->static_fields,
        !static_fields->flagNameList) )
  {
    sub_B170D4();
  }
  v15 = (TutorialFlag_Id_array *)v13;
  System_Collections_Generic_Dictionary_string__TutorialFlag_Id___GetEnumerator(
    &v22,
    static_fields->flagNameList,
    (const MethodInfo_2DA0480 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v18 = System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id___MoveNext(
            &v22,
            (const MethodInfo_26BC39C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__);
    if ( !v18 )
      break;
    if ( !v15 )
      sub_B170D4();
    if ( i >= v15->max_length )
    {
      sub_B17100(v18, v19, v20);
      sub_B170A0();
    }
    v17 = (char *)v15 + 4 * (int)i;
    *((_DWORD *)v17 + 8) = v22.fields.current.fields.value;
  }
  System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id___Dispose(
    &v22,
    (const MethodInfo_26BC508 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__);
  return v15;
}


int32_t __fastcall TutorialFlag__GetProgress(const MethodInfo *method)
{
  __int64 v1; // x1
  TutorialFlag_c *v2; // x0

  if ( (byte_40FB90E & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, v1);
    byte_40FB90E = 1;
  }
  v2 = TutorialFlag_TypeInfo;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v2 = TutorialFlag_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY, 0, 0LL);
}


bool __fastcall TutorialFlag__Get_28023340(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_40FB909 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FB909 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28023436(flagId, method);
}


bool __fastcall TutorialFlag__Get_28023436(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_40FB90A & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FB90A = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28023552(SelfUserGame, flagId, v3);
}


bool __fastcall TutorialFlag__Get_28023552(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_B170D4();
  }
  return 0;
}


bool __fastcall TutorialFlag__Get_28023680(FollowerInfo_o *followerInfo, int32_t flagId, const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !followerInfo )
    sub_B170D4();
  return (followerInfo->fields.tutorial1 & (unsigned int)(1 << (flagId
                                                              - 100
                                                              * (((unsigned __int64)(1374389535LL * flagId) >> 37)
                                                               + (1374389535LL * flagId < 0))))) != 0;
}


bool __fastcall TutorialFlag__Get_28023776(
        OtherUserGameEntity_o *otherUserGameEntity,
        int32_t flagId,
        const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !otherUserGameEntity )
    sub_B170D4();
  return (otherUserGameEntity->fields.tutorial1 & (unsigned int)(1 << (flagId
                                                                     - 100
                                                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37)
                                                                      + (1374389535LL * flagId < 0))))) != 0;
}


bool __fastcall TutorialFlag__Get_28025264(int32_t flagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_40FB916 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FB916 = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall TutorialFlag__Get_28025448(int32_t flagId, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserEventEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB918 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FB918 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !UserEventMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, eventId, 0LL) )
    return 0;
  if ( !entity )
LABEL_13:
    sub_B170D4();
  return UserEventEntity__getTutorialFlag(entity, flagId, 0LL);
}


bool __fastcall TutorialFlag__IsProgressComplete(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  const MethodInfo *v2; // x1

  if ( (byte_40FB915 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, v1);
    byte_40FB915 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28023340(102, v1) )
    return 1;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone(4, v2);
}


bool __fastcall TutorialFlag__IsProgressDone(int32_t count, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40FB913 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FB913 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28023340(102, method) )
    return 1;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone_28025016(count, v3);
}


bool __fastcall TutorialFlag__IsProgressDone_28025016(int32_t count, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_40FB914 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FB914 = 1;
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

  if ( (byte_40FB90B & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FB90B = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  TutorialFlag__Set_28023972(Id, v4);
}


void __fastcall TutorialFlag__SetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  __int64 v3; // x1
  ManagerConfig_c *v4; // x0
  TutorialFlag_c *v5; // x0
  int32_t Int; // w0

  if ( (byte_40FB91A & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    sub_B16FFC(&TutorialFlag_TypeInfo, v3);
    byte_40FB91A = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock && (unsigned int)configFlagId <= 0x63 )
  {
    v5 = TutorialFlag_TypeInfo;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
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
  if ( (byte_40FB91C & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    sub_B16FFC(&TutorialFlag_TypeInfo, v3);
    byte_40FB91C = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    v5 = 1 << v2;
    v6 = TutorialFlag_TypeInfo;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
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
  if ( (byte_40FB911 & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FB911 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress_28024676(count, method);
}


void __fastcall TutorialFlag__SetProgress_28024676(int32_t count, const MethodInfo *method)
{
  __int64 v3; // x1
  ManagerConfig_c *v4; // x0
  TutorialFlag_c *v5; // x0

  if ( (byte_40FB912 & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    sub_B16FFC(&TutorialFlag_TypeInfo, v3);
    byte_40FB912 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    v5 = TutorialFlag_TypeInfo;
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      v5 = TutorialFlag_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v5->static_fields->SAVE_KEY, count, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TutorialFlag__Set_28018644(int32_t flagId, const MethodInfo *method)
{
  __int64 v3; // x1
  ManagerConfig_c *v4; // x0
  TutorialFlag_c *v5; // x0
  int v6; // w19
  int32_t Int; // w0

  if ( (byte_40FB917 & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    sub_B16FFC(&TutorialFlag_TypeInfo, v3);
    byte_40FB917 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock && (unsigned int)(flagId - 100) <= 0x63 )
  {
    v5 = TutorialFlag_TypeInfo;
    v6 = 1 << (flagId % 100);
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      v5 = TutorialFlag_TypeInfo;
    }
    Int = UnityEngine_PlayerPrefs__GetInt(v5->static_fields->SAVE_KEY2, 0, 0LL);
    UnityEngine_PlayerPrefs__SetInt(TutorialFlag_TypeInfo->static_fields->SAVE_KEY2, Int | v6, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TutorialFlag__Set_28023972(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_40FB90C & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FB90C = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_28024068(flagId, method);
}


void __fastcall TutorialFlag__Set_28024068(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_40FB90D & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_TypeInfo, method);
    byte_40FB90D = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_28024184(SelfUserGame, flagId, v3);
}


void __fastcall TutorialFlag__Set_28024184(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_B170D4();
  }
  if ( !userGameEntity )
    goto LABEL_9;
  p_tutorial2 = &userGameEntity->fields.tutorial1;
LABEL_7:
  *p_tutorial2 |= (unsigned int)(1 << (flagId
                                     - 100
                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))));
}