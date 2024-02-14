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
  System_Collections_Generic_Dictionary_Type__ReadType__o *v65; // x19
  __int64 v66; // x0
  struct TutorialFlag_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7

  if ( (byte_42168C2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo, v9);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_13513/*"TUTORIAL_LABEL_EVENT_GACHA"*/, v11);
    sub_B0D8A4(&StringLiteral_13526/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/, v12);
    sub_B0D8A4(&StringLiteral_13508/*"TUTORIAL_LABEL_COMBINE"*/, v13);
    sub_B0D8A4(&StringLiteral_13524/*"TUTORIAL_LABEL_RAID2_BATTLE"*/, v14);
    sub_B0D8A4(&StringLiteral_13512/*"TUTORIAL_LABEL_END"*/, v15);
    sub_B0D8A4(&StringLiteral_13522/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/, v16);
    sub_B0D8A4(&StringLiteral_14623/*"TutorialFlagConfigId"*/, v17);
    sub_B0D8A4(&StringLiteral_13509/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/, v18);
    sub_B0D8A4(&StringLiteral_14626/*"TutorialFlagProgress"*/, v19);
    sub_B0D8A4(&StringLiteral_13516/*"TUTORIAL_LABEL_FAVORITE1"*/, v20);
    sub_B0D8A4(&StringLiteral_14624/*"TutorialFlagGachaId"*/, v21);
    sub_B0D8A4(&StringLiteral_13515/*"TUTORIAL_LABEL_EVENT_REWARD"*/, v22);
    sub_B0D8A4(&StringLiteral_13511/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/, v23);
    sub_B0D8A4(&StringLiteral_13521/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/, v24);
    sub_B0D8A4(&StringLiteral_13528/*"TUTORIAL_LABEL_STONE_GACHA"*/, v25);
    sub_B0D8A4(&StringLiteral_13529/*"TUTORIAL_LABEL_SVT_LEAVE"*/, v26);
    sub_B0D8A4(&StringLiteral_13527/*"TUTORIAL_LABEL_SHOP"*/, v27);
    sub_B0D8A4(&StringLiteral_13520/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/, v28);
    sub_B0D8A4(&StringLiteral_14625/*"TutorialFlagLocalId"*/, v29);
    sub_B0D8A4(&StringLiteral_13523/*"TUTORIAL_LABEL_MASHU_CHANGE"*/, v30);
    sub_B0D8A4(&StringLiteral_13514/*"TUTORIAL_LABEL_EVENT_MISSION"*/, v31);
    sub_B0D8A4(&StringLiteral_13519/*"TUTORIAL_LABEL_GACHA_SCENE"*/, v32);
    sub_B0D8A4(&StringLiteral_13510/*"TUTORIAL_LABEL_DECK_SCENE"*/, v33);
    sub_B0D8A4(&StringLiteral_13525/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/, v34);
    sub_B0D8A4(&StringLiteral_13517/*"TUTORIAL_LABEL_FAVORITE2"*/, v35);
    sub_B0D8A4(&StringLiteral_13518/*"TUTORIAL_LABEL_FES"*/, v36);
    byte_42168C2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TutorialFlag_TypeInfo->static_fields;
  v38 = (System_Int32_array **)StringLiteral_14626/*"TutorialFlagProgress"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_14626/*"TutorialFlagProgress"*/;
  sub_B0D840(static_fields, v38, v2, v3, v4, v5, v6, v7);
  v39 = TutorialFlag_TypeInfo->static_fields;
  v40 = (System_Int32_array **)StringLiteral_14625/*"TutorialFlagLocalId"*/;
  v39->SAVE_KEY2 = (struct System_String_o *)StringLiteral_14625/*"TutorialFlagLocalId"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v39->SAVE_KEY2, v40, v41, v42, v43, v44, v45, v46);
  v47 = TutorialFlag_TypeInfo->static_fields;
  v48 = (System_Int32_array **)StringLiteral_14623/*"TutorialFlagConfigId"*/;
  v47->SAVE_KEY3 = (struct System_String_o *)StringLiteral_14623/*"TutorialFlagConfigId"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v47->SAVE_KEY3, v48, v49, v50, v51, v52, v53, v54);
  v55 = TutorialFlag_TypeInfo->static_fields;
  v56 = (System_Int32_array **)StringLiteral_14624/*"TutorialFlagGachaId"*/;
  v55->SAVE_KEY4 = (struct System_String_o *)StringLiteral_14624/*"TutorialFlagGachaId"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v55->SAVE_KEY4, v56, v57, v58, v59, v60, v61, v62);
  v65 = (System_Collections_Generic_Dictionary_Type__ReadType__o *)sub_B0D974(
                                                                     System_Collections_Generic_Dictionary_string__TutorialFlag_Id__TypeInfo,
                                                                     v63,
                                                                     v64);
  System_Collections_Generic_Dictionary_Type__ReadType____ctor(
    v65,
    (const MethodInfo_2E46388 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id___ctor__);
  if ( !v65 )
    sub_B0D97C(v66);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13528/*"TUTORIAL_LABEL_STONE_GACHA"*/,
    101,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13512/*"TUTORIAL_LABEL_END"*/,
    102,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13527/*"TUTORIAL_LABEL_SHOP"*/,
    103,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13508/*"TUTORIAL_LABEL_COMBINE"*/,
    104,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13516/*"TUTORIAL_LABEL_FAVORITE1"*/,
    105,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13517/*"TUTORIAL_LABEL_FAVORITE2"*/,
    106,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13519/*"TUTORIAL_LABEL_GACHA_SCENE"*/,
    107,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13520/*"TUTORIAL_LABEL_GACHA_SVT_EQUIP"*/,
    108,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13510/*"TUTORIAL_LABEL_DECK_SCENE"*/,
    109,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13511/*"TUTORIAL_LABEL_DECK_SVT_EQUIP"*/,
    110,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13513/*"TUTORIAL_LABEL_EVENT_GACHA"*/,
    111,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13515/*"TUTORIAL_LABEL_EVENT_REWARD"*/,
    112,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13509/*"TUTORIAL_LABEL_DECK_IN_SVT_EQUIP"*/,
    113,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13514/*"TUTORIAL_LABEL_EVENT_MISSION"*/,
    114,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13523/*"TUTORIAL_LABEL_MASHU_CHANGE"*/,
    115,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13521/*"TUTORIAL_LABEL_IBARAKI_RAID_BATTLE"*/,
    117,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13522/*"TUTORIAL_LABEL_IBARAKI_RAID_EVENT_REWARD"*/,
    118,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13524/*"TUTORIAL_LABEL_RAID2_BATTLE"*/,
    120,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13526/*"TUTORIAL_LABEL_RAID2_EVENT_REWARD"*/,
    121,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13525/*"TUTORIAL_LABEL_RAID2_BATTLE_2"*/,
    122,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13529/*"TUTORIAL_LABEL_SVT_LEAVE"*/,
    126,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode___Add(
    (System_Collections_Generic_Dictionary_Type__PrimitiveTypeCode__o *)v65,
    (System_Type_o *)StringLiteral_13518/*"TUTORIAL_LABEL_FES"*/,
    127,
    (const MethodInfo_2E46F3C *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__Add__);
  v67 = TutorialFlag_TypeInfo->static_fields;
  v67->flagNameList = (struct System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *)v65;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v67->flagNameList,
    (System_Int32_array **)v65,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
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

  if ( (byte_42168B4 & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, v1);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v2);
    byte_42168B4 = 1;
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

  if ( (byte_42168B5 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, v1);
    byte_42168B5 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress(4, v1);
}


void __fastcall TutorialFlag__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  TutorialFlag_c *v2; // x0

  if ( (byte_42168AA & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, v1);
    byte_42168AA = 1;
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

  if ( (byte_42168AD & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_42168AD = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  return TutorialFlag__Get_28088484(Id, v4);
}


bool __fastcall TutorialFlag__GetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_42168BE & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_42168BE = 1;
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
  if ( (byte_42168C0 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_42168C0 = 1;
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

  if ( (byte_42168AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__, method);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v3);
    byte_42168AC = 1;
  }
  v4 = TutorialFlag_TypeInfo;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v4 = TutorialFlag_TypeInfo;
  }
  flagNameList = v4->static_fields->flagNameList;
  if ( !flagNameList )
    sub_B0D97C(0LL);
  return System_Collections_Generic_Dictionary_string__TutorialFlag_Id___get_Item(
           flagNameList,
           flagIdName,
           (const MethodInfo_2E46E78 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Item__);
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
  struct TutorialFlag_StaticFields *static_fields; // x8
  TutorialFlag_Id_array *v13; // x19
  il2cpp_array_size_t i; // w20
  char *v15; // x9
  _BOOL8 v16; // x0
  __int64 v18; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42168AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__get_Current__, v5);
    sub_B0D8A4(&TutorialFlag_Id___TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__TutorialFlag_Id__get_Value__, v7);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v8);
    byte_42168AB = 1;
  }
  memset(&v19, 0, sizeof(v19));
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
                  (const MethodInfo_2E46B38 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__get_Count__),
        flagNameList = (System_Collections_Generic_Dictionary_string__TutorialFlag_Id__o *)sub_B0D8BC(
                                                                                             TutorialFlag_Id___TypeInfo,
                                                                                             Count),
        static_fields = TutorialFlag_TypeInfo->static_fields,
        !static_fields->flagNameList) )
  {
    sub_B0D97C(flagNameList);
  }
  v13 = (TutorialFlag_Id_array *)flagNameList;
  System_Collections_Generic_Dictionary_string__TutorialFlag_Id___GetEnumerator(
    &v19,
    static_fields->flagNameList,
    (const MethodInfo_2E474D0 *)Method_System_Collections_Generic_Dictionary_string__TutorialFlag_Id__GetEnumerator__);
  for ( i = 0; ; ++i )
  {
    v16 = System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id___MoveNext(
            &v19,
            (const MethodInfo_26C86CC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__MoveNext__);
    if ( !v16 )
      break;
    if ( !v13 )
      sub_B0D97C(v16);
    if ( i >= v13->max_length )
    {
      v18 = sub_B0D9A8(v16);
      sub_B0D948(v18, 0LL);
    }
    v15 = (char *)v13 + 4 * (int)i;
    *((_DWORD *)v15 + 8) = v19.fields.current.fields.value;
  }
  System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id___Dispose(
    &v19,
    (const MethodInfo_26C8838 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__TutorialFlag_Id__Dispose__);
  return v13;
}


int32_t __fastcall TutorialFlag__GetProgress(const MethodInfo *method)
{
  __int64 v1; // x1
  TutorialFlag_c *v2; // x0

  if ( (byte_42168B3 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, v1);
    byte_42168B3 = 1;
  }
  v2 = TutorialFlag_TypeInfo;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    v2 = TutorialFlag_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY, 0, 0LL);
}


bool __fastcall TutorialFlag__Get_28088484(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_42168AE & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_42168AE = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28088580(flagId, method);
}


bool __fastcall TutorialFlag__Get_28088580(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_42168AF & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_42168AF = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28088696(SelfUserGame, flagId, v3);
}


bool __fastcall TutorialFlag__Get_28088696(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_B0D97C(userGameEntity);
  }
  return 0;
}


bool __fastcall TutorialFlag__Get_28088824(FollowerInfo_o *followerInfo, int32_t flagId, const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !followerInfo )
    sub_B0D97C(0LL);
  return (followerInfo->fields.tutorial1 & (unsigned int)(1 << (flagId
                                                              - 100
                                                              * (((unsigned __int64)(1374389535LL * flagId) >> 37)
                                                               + (1374389535LL * flagId < 0))))) != 0;
}


bool __fastcall TutorialFlag__Get_28088920(
        OtherUserGameEntity_o *otherUserGameEntity,
        int32_t flagId,
        const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 100) > 0x63 )
    return 0;
  if ( !otherUserGameEntity )
    sub_B0D97C(0LL);
  return (otherUserGameEntity->fields.tutorial1 & (unsigned int)(1 << (flagId
                                                                     - 100
                                                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37)
                                                                      + (1374389535LL * flagId < 0))))) != 0;
}


bool __fastcall TutorialFlag__Get_28090408(int32_t flagId, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0
  int v4; // w19

  if ( (byte_42168BB & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_42168BB = 1;
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
bool __fastcall TutorialFlag__Get_28090592(int32_t flagId, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42168BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_42168BD = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMaster___);
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
    sub_B0D97C(Instance);
  return UserEventEntity__getTutorialFlag(entity, flagId, 0LL);
}


bool __fastcall TutorialFlag__IsProgressComplete(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  const MethodInfo *v2; // x1

  if ( (byte_42168BA & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, v1);
    byte_42168BA = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28088484(102, v1) )
    return 1;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone(4, v2);
}


bool __fastcall TutorialFlag__IsProgressDone(int32_t count, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_42168B8 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_42168B8 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28088484(102, method) )
    return 1;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__IsProgressDone_28090160(count, v3);
}


bool __fastcall TutorialFlag__IsProgressDone_28090160(int32_t count, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_42168B9 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_42168B9 = 1;
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

  if ( (byte_42168B0 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_42168B0 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  Id = TutorialFlag__GetId(flagIdName, method);
  TutorialFlag__Set_28089116(Id, v4);
}


void __fastcall TutorialFlag__SetConfigFlg(int32_t configFlagId, const MethodInfo *method)
{
  __int64 v3; // x1
  ManagerConfig_c *v4; // x0
  TutorialFlag_c *v5; // x0
  int32_t Int; // w0

  if ( (byte_42168BF & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, method);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v3);
    byte_42168BF = 1;
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
  if ( (byte_42168C1 & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, method);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v3);
    byte_42168C1 = 1;
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
  if ( (byte_42168B6 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_42168B6 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__SetProgress_28089820(count, method);
}


void __fastcall TutorialFlag__SetProgress_28089820(int32_t count, const MethodInfo *method)
{
  __int64 v3; // x1
  ManagerConfig_c *v4; // x0
  TutorialFlag_c *v5; // x0

  if ( (byte_42168B7 & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, method);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v3);
    byte_42168B7 = 1;
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


void __fastcall TutorialFlag__Set_28083788(int32_t flagId, const MethodInfo *method)
{
  __int64 v3; // x1
  ManagerConfig_c *v4; // x0
  TutorialFlag_c *v5; // x0
  int v6; // w19
  int32_t Int; // w0

  if ( (byte_42168BC & 1) == 0 )
  {
    sub_B0D8A4(&ManagerConfig_TypeInfo, method);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v3);
    byte_42168BC = 1;
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


void __fastcall TutorialFlag__Set_28089116(int32_t flagId, const MethodInfo *method)
{
  if ( (byte_42168B1 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_42168B1 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_28089212(flagId, method);
}


void __fastcall TutorialFlag__Set_28089212(int32_t flagId, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UserGameEntity_o *SelfUserGame; // x20

  if ( (byte_42168B2 & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, method);
    byte_42168B2 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_28089328(SelfUserGame, flagId, v3);
}


void __fastcall TutorialFlag__Set_28089328(UserGameEntity_o *userGameEntity, int32_t flagId, const MethodInfo *method)
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
    sub_B0D97C(userGameEntity);
  }
  if ( !userGameEntity )
    goto LABEL_9;
  p_tutorial2 = &userGameEntity->fields.tutorial1;
LABEL_7:
  *p_tutorial2 |= (unsigned int)(1 << (flagId
                                     - 100
                                     * (((unsigned __int64)(1374389535LL * flagId) >> 37) + (1374389535LL * flagId < 0))));
}