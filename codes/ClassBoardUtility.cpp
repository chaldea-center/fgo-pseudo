void __fastcall ClassBoardUtility___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v21; // x1
  struct ClassBoardUtility_StaticFields *v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct ClassBoardUtility_StaticFields *v30; // x0
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct ClassBoardUtility_StaticFields *v38; // x0
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_42EA8C9 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardUtility_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_12744/*"SavePlayedClassBoardBaseRelease"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12745/*"SavePlayedExClassRelease"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_22453/*"skill_{0:D5}"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_18038/*"cs_{0:D4}{1}"*/, v17, v18, v19);
    byte_42EA8C9 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ClassBoardUtility_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_18038/*"cs_{0:D4}{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18038/*"cs_{0:D4}{1}"*/;
  sub_B5D560(static_fields, v21, v2, v3, v4, v5, v6, v7);
  v22 = ClassBoardUtility_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_22453/*"skill_{0:D5}"*/;
  v22->passiveSkillIconFormat = (struct System_String_o *)StringLiteral_22453/*"skill_{0:D5}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v22->passiveSkillIconFormat, v23, v24, v25, v26, v27, v28, v29);
  v30 = ClassBoardUtility_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_12744/*"SavePlayedClassBoardBaseRelease"*/;
  v30->savePlayedClassBoardBaseReleaseKey = (struct System_String_o *)StringLiteral_12744/*"SavePlayedClassBoardBaseRelease"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v30->savePlayedClassBoardBaseReleaseKey,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = ClassBoardUtility_TypeInfo->static_fields;
  v39 = (System_Int32_array **)StringLiteral_12745/*"SavePlayedExClassRelease"*/;
  v38->savePlayedExClassReleaseKey = (struct System_String_o *)StringLiteral_12745/*"SavePlayedExClassRelease"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v38->savePlayedExClassReleaseKey, v39, v40, v41, v42, v43, v44, v45);
}


void __fastcall ClassBoardUtility__FirstSavePlayedExClassReleaseEffect(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  ClassBoardUtility_c *v10; // x0
  bool HasKey; // w19
  bool v12; // w0
  __int64 v13; // x0
  const MethodInfo *v14; // x1
  System_Int32_array *v15; // x19
  ClassBoardUtility_c *v16; // x0
  __int64 v17; // x0

  if ( (byte_42EA8C8 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardUtility_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_1/*""*/, v7, v8, v9);
    byte_42EA8C8 = 1;
  }
  v10 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v10 = ClassBoardUtility_TypeInfo;
  }
  HasKey = UnityEngine_PlayerPrefs__HasKey(v10->static_fields->savePlayedClassBoardBaseReleaseKey, 0LL);
  v12 = UnityEngine_PlayerPrefs__HasKey(ClassBoardUtility_TypeInfo->static_fields->savePlayedExClassReleaseKey, 0LL);
  if ( v12 || !HasKey )
  {
    if ( !v12 )
    {
      v16 = ClassBoardUtility_TypeInfo;
      if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
        v16 = ClassBoardUtility_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(
        v16->static_fields->savePlayedExClassReleaseKey,
        (System_String_o *)StringLiteral_1/*""*/,
        0LL);
    }
  }
  else
  {
    v13 = sub_B5D5DC(int___TypeInfo, 1LL);
    if ( !v13 )
      sub_B5D69C(0LL, v14);
    v15 = (System_Int32_array *)v13;
    if ( !*(_DWORD *)(v13 + 24) )
    {
      v17 = sub_B5D6C8(v13);
      sub_B5D668(v17, 0LL);
    }
    *(_DWORD *)(v13 + 32) = 10;
    if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    }
    ClassBoardUtility__SavePlayedExClassReleaseEffect(v15, v14);
  }
}


System_String_o *__fastcall ClassBoardUtility__GetClassBoardSkillIconName(
        int32_t iconId,
        int32_t skillType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ClassBoardUtility_c *v9; // x0
  System_String_o *commandSpellIconFormat; // x20
  Il2CppObject *v11; // x19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  System_String_o *passiveSkillIconFormat; // x20
  Il2CppObject *v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF
  int32_t genderType; // [xsp+18h] [xbp-18h] BYREF
  int32_t v20; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42EA8C3 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardUtility_TypeInfo, skillType, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    byte_42EA8C3 = 1;
  }
  v9 = ClassBoardUtility_TypeInfo;
  if ( skillType == 2 )
  {
    if ( (WORD1(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
      v9 = ClassBoardUtility_TypeInfo;
    }
    commandSpellIconFormat = v9->static_fields->commandSpellIconFormat;
    v20 = iconId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_B5D69C(0LL, v13);
    genderType = SelfUserGame->fields.genderType;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &genderType);
    return System_String__Format_44573324(commandSpellIconFormat, v11, v14, 0LL);
  }
  else
  {
    if ( (WORD1(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
      v9 = ClassBoardUtility_TypeInfo;
    }
    passiveSkillIconFormat = v9->static_fields->passiveSkillIconFormat;
    v18 = iconId;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    return System_String__Format(passiveSkillIconFormat, v17, 0LL);
  }
}


bool __fastcall ClassBoardUtility__IsPlayedExClassReleaseEffect(int32_t classId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  ClassBoardUtility___c__DisplayClass8_0_o *v23; // x19
  System_Char_array *v24; // x0
  System_Char_array *v25; // x1
  ClassBoardUtility_c *v26; // x0
  System_String_o *String_35648228; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x21
  __int64 v31; // x0

  if ( (byte_42EA8C6 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ClassBoardUtility_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_string____68845840, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_string__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_string__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_ClassBoardUtility___c__DisplayClass8_0__IsPlayedExClassReleaseEffect_b__0__, v17, v18, v19);
    sub_B5D5C4(&ClassBoardUtility___c__DisplayClass8_0_TypeInfo, v20, v21, v22);
    byte_42EA8C6 = 1;
  }
  v23 = (ClassBoardUtility___c__DisplayClass8_0_o *)sub_B5D694(ClassBoardUtility___c__DisplayClass8_0_TypeInfo);
  ClassBoardUtility___c__DisplayClass8_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_13;
  v23->fields.classId = classId;
  v26 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v26 = ClassBoardUtility_TypeInfo;
  }
  String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228(v26->static_fields->savePlayedExClassReleaseKey, 0LL);
  if ( System_String__IsNullOrEmpty(String_35648228, 0LL) )
    return 0;
  v24 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v24 )
    goto LABEL_13;
  v25 = v24;
  if ( !v24->max_length )
  {
    v31 = sub_B5D6C8(v24);
    sub_B5D668(v31, 0LL);
  }
  v24->m_Items[2] = 44;
  if ( !String_35648228 )
LABEL_13:
    sub_B5D69C(v24, v25);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_35648228, v24, 0LL);
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_string__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v30,
    (Il2CppObject *)v23,
    Method_ClassBoardUtility___c__DisplayClass8_0__IsPlayedExClassReleaseEffect_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_string__bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
           v29,
           (System_Func_TSource__bool__o *)v30,
           (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_string____68845840) != 0LL;
}


bool __fastcall ClassBoardUtility__IsPlayedReleaseEffect(int32_t classBoardBaseId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  ClassBoardUtility___c__DisplayClass6_0_o *v23; // x19
  System_Char_array *v24; // x0
  System_Char_array *v25; // x1
  ClassBoardUtility_c *v26; // x0
  System_String_o *String_35648228; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x21
  __int64 v31; // x0

  if ( (byte_42EA8C4 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ClassBoardUtility_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_string____68845840, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_string__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_string__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_ClassBoardUtility___c__DisplayClass6_0__IsPlayedReleaseEffect_b__0__, v17, v18, v19);
    sub_B5D5C4(&ClassBoardUtility___c__DisplayClass6_0_TypeInfo, v20, v21, v22);
    byte_42EA8C4 = 1;
  }
  v23 = (ClassBoardUtility___c__DisplayClass6_0_o *)sub_B5D694(ClassBoardUtility___c__DisplayClass6_0_TypeInfo);
  ClassBoardUtility___c__DisplayClass6_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_13;
  v23->fields.classBoardBaseId = classBoardBaseId;
  v26 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v26 = ClassBoardUtility_TypeInfo;
  }
  String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228(
                      v26->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  if ( System_String__IsNullOrEmpty(String_35648228, 0LL) )
    return 0;
  v24 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v24 )
    goto LABEL_13;
  v25 = v24;
  if ( !v24->max_length )
  {
    v31 = sub_B5D6C8(v24);
    sub_B5D668(v31, 0LL);
  }
  v24->m_Items[2] = 44;
  if ( !String_35648228 )
LABEL_13:
    sub_B5D69C(v24, v25);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_35648228, v24, 0LL);
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_string__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v30,
    (Il2CppObject *)v23,
    Method_ClassBoardUtility___c__DisplayClass6_0__IsPlayedReleaseEffect_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_string__bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
           v29,
           (System_Func_TSource__bool__o *)v30,
           (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_string____68845840) != 0LL;
}


bool __fastcall ClassBoardUtility__IsTargetQuestClear(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int64_t v16; // x20

  if ( (byte_42EA8C2 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v4, v5, v6);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42EA8C2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v16 = (int64_t)Instance;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_12:
    sub_B5D69C(Instance, v14);
  return UserQuestMaster__getClearCountsFromId(
           MasterData_WarQuestSelectionMaster,
           v16,
           BalanceConfig_TypeInfo->static_fields->ClassBoardReleaseQuestId,
           0LL) > 0;
}


void __fastcall ClassBoardUtility__SavePlayedClassBaseReleaseEffect(
        System_Int32_array *classBaseIds,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  ClassBoardUtility_c *v44; // x0
  System_String_o *String_35648228; // x20
  System_Collections_Generic_List_int__o *v46; // x20
  System_Collections_Generic_List_TSource__o *v47; // x0
  System_Collections_Generic_List_TSource__o *v48; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x20
  ClassBoardUtility___c_c *v50; // x8
  struct ClassBoardUtility___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x21
  Il2CppObject *v53; // x22
  struct ClassBoardUtility___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  __int64 v62; // x8
  unsigned __int64 v63; // x22
  int32_t v64; // w21
  ClassBoardUtility_c *v65; // x0
  System_String_o *savePlayedClassBoardBaseReleaseKey; // x19
  System_String_o *v67; // x1
  __int64 v68; // x0

  if ( (byte_42EA8C5 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ClassBoardUtility_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_string__int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_string__int___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_string__int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_System_String_Join_int___, v32, v33, v34);
    sub_B5D5C4(&Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__7_0__, v35, v36, v37);
    sub_B5D5C4(&ClassBoardUtility___c_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_707/*","*/, v41, v42, v43);
    byte_42EA8C5 = 1;
  }
  v44 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v44 = ClassBoardUtility_TypeInfo;
  }
  String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228(
                      v44->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  if ( System_String__IsNullOrEmpty(String_35648228, 0LL) )
  {
    v46 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v46,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    if ( !classBaseIds )
      goto LABEL_33;
  }
  else
  {
    v47 = (System_Collections_Generic_List_TSource__o *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v47 )
      goto LABEL_33;
    v48 = v47;
    if ( !v47->fields._size )
    {
LABEL_32:
      v68 = sub_B5D6C8(v47);
      sub_B5D668(v68, 0LL);
    }
    LOWORD(v47->fields._syncRoot) = 44;
    if ( !String_35648228 )
      goto LABEL_33;
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                 String_35648228,
                                                                 (System_Char_array *)v47,
                                                                 0LL);
    v50 = ClassBoardUtility___c_TypeInfo;
    if ( (BYTE3(ClassBoardUtility___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v50 = ClassBoardUtility___c_TypeInfo;
    }
    static_fields = v50->static_fields;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v50);
        static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      }
      v53 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_string__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__7_0,
        v53,
        Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__7_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_string__int___ctor__);
      v54 = ClassBoardUtility___c_TypeInfo->static_fields;
      v54->__9__7_0 = (struct System_Func_string__int__o *)_9__7_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v54->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
    }
    v61 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v49,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_string__int___);
    v47 = System_Linq_Enumerable__ToList_int_(
            v61,
            (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
    v46 = (System_Collections_Generic_List_int__o *)v47;
    if ( !classBaseIds )
LABEL_33:
      sub_B5D69C(v47, v48);
  }
  v62 = *(_QWORD *)&classBaseIds->max_length;
  if ( (int)v62 >= 1 )
  {
    v63 = 0LL;
    while ( v63 < (unsigned int)v62 )
    {
      if ( !v46 )
        goto LABEL_33;
      v64 = classBaseIds->m_Items[v63 + 1];
      v47 = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                            v46,
                                                            v64,
                                                            (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)v47 & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v46,
          v64,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v62) = classBaseIds->max_length;
      if ( (__int64)++v63 >= (int)v62 )
        goto LABEL_28;
    }
    goto LABEL_32;
  }
LABEL_28:
  v65 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v65 = ClassBoardUtility_TypeInfo;
  }
  savePlayedClassBoardBaseReleaseKey = v65->static_fields->savePlayedClassBoardBaseReleaseKey;
  v67 = System_String__Join_int_(
          (System_String_o *)StringLiteral_707/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v46,
          (const MethodInfo_1E6CD44 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedClassBoardBaseReleaseKey, v67, 0LL);
}


void __fastcall ClassBoardUtility__SavePlayedExClassReleaseEffect(
        System_Int32_array *classId,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  ClassBoardUtility_c *v44; // x0
  System_String_o *String_35648228; // x20
  System_Collections_Generic_List_int__o *v46; // x20
  System_Collections_Generic_List_TSource__o *v47; // x0
  System_Collections_Generic_List_TSource__o *v48; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x20
  ClassBoardUtility___c_c *v50; // x8
  struct ClassBoardUtility___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__9_0; // x21
  Il2CppObject *v53; // x22
  struct ClassBoardUtility___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  __int64 v62; // x8
  unsigned __int64 v63; // x22
  int32_t v64; // w21
  ClassBoardUtility_c *v65; // x0
  System_String_o *savePlayedExClassReleaseKey; // x19
  System_String_o *v67; // x1
  __int64 v68; // x0

  if ( (byte_42EA8C7 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ClassBoardUtility_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_string__int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_string__int___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_string__int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_System_String_Join_int___, v32, v33, v34);
    sub_B5D5C4(&Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__9_0__, v35, v36, v37);
    sub_B5D5C4(&ClassBoardUtility___c_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_707/*","*/, v41, v42, v43);
    byte_42EA8C7 = 1;
  }
  v44 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v44 = ClassBoardUtility_TypeInfo;
  }
  String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228(v44->static_fields->savePlayedExClassReleaseKey, 0LL);
  if ( System_String__IsNullOrEmpty(String_35648228, 0LL) )
  {
    v46 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v46,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    if ( !classId )
      goto LABEL_33;
  }
  else
  {
    v47 = (System_Collections_Generic_List_TSource__o *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v47 )
      goto LABEL_33;
    v48 = v47;
    if ( !v47->fields._size )
    {
LABEL_32:
      v68 = sub_B5D6C8(v47);
      sub_B5D668(v68, 0LL);
    }
    LOWORD(v47->fields._syncRoot) = 44;
    if ( !String_35648228 )
      goto LABEL_33;
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                 String_35648228,
                                                                 (System_Char_array *)v47,
                                                                 0LL);
    v50 = ClassBoardUtility___c_TypeInfo;
    if ( (BYTE3(ClassBoardUtility___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v50 = ClassBoardUtility___c_TypeInfo;
    }
    static_fields = v50->static_fields;
    _9__9_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__9_0;
    if ( !_9__9_0 )
    {
      if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v50);
        static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      }
      v53 = (Il2CppObject *)static_fields->__9;
      _9__9_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_string__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__9_0,
        v53,
        Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__9_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_string__int___ctor__);
      v54 = ClassBoardUtility___c_TypeInfo->static_fields;
      v54->__9__9_0 = (struct System_Func_string__int__o *)_9__9_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v54->__9__9_0,
        (System_Int32_array **)_9__9_0,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
    }
    v61 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v49,
                                                                 (System_Func_TSource__TResult__o *)_9__9_0,
                                                                 (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_string__int___);
    v47 = System_Linq_Enumerable__ToList_int_(
            v61,
            (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
    v46 = (System_Collections_Generic_List_int__o *)v47;
    if ( !classId )
LABEL_33:
      sub_B5D69C(v47, v48);
  }
  v62 = *(_QWORD *)&classId->max_length;
  if ( (int)v62 >= 1 )
  {
    v63 = 0LL;
    while ( v63 < (unsigned int)v62 )
    {
      if ( !v46 )
        goto LABEL_33;
      v64 = classId->m_Items[v63 + 1];
      v47 = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                            v46,
                                                            v64,
                                                            (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)v47 & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v46,
          v64,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v62) = classId->max_length;
      if ( (__int64)++v63 >= (int)v62 )
        goto LABEL_28;
    }
    goto LABEL_32;
  }
LABEL_28:
  v65 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v65 = ClassBoardUtility_TypeInfo;
  }
  savePlayedExClassReleaseKey = v65->static_fields->savePlayedExClassReleaseKey;
  v67 = System_String__Join_int_(
          (System_String_o *)StringLiteral_707/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v46,
          (const MethodInfo_1E6CD44 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedExClassReleaseKey, v67, 0LL);
}


void __fastcall ClassBoardUtility___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E95 & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardUtility___c_TypeInfo, v1, v2, v3);
    byte_42E5E95 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ClassBoardUtility___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardUtility___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall ClassBoardUtility___c___ctor(ClassBoardUtility___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ClassBoardUtility___c___SavePlayedClassBaseReleaseEffect_b__7_0(
        ClassBoardUtility___c_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_Int32__Parse(id, 0LL);
}


int32_t __fastcall ClassBoardUtility___c___SavePlayedExClassReleaseEffect_b__9_0(
        ClassBoardUtility___c_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_Int32__Parse(id, 0LL);
}


void __fastcall ClassBoardUtility___c__DisplayClass6_0___ctor(
        ClassBoardUtility___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardUtility___c__DisplayClass6_0___IsPlayedReleaseEffect_b__0(
        ClassBoardUtility___c__DisplayClass6_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  int32_t classBoardBaseId; // w19

  classBoardBaseId = this->fields.classBoardBaseId;
  return classBoardBaseId == System_Int32__Parse(id, 0LL);
}


void __fastcall ClassBoardUtility___c__DisplayClass8_0___ctor(
        ClassBoardUtility___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardUtility___c__DisplayClass8_0___IsPlayedExClassReleaseEffect_b__0(
        ClassBoardUtility___c__DisplayClass8_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  int32_t classId; // w19

  classId = this->fields.classId;
  return classId == System_Int32__Parse(id, 0LL);
}