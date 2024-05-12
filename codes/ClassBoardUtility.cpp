void __fastcall ClassBoardUtility___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct ClassBoardUtility_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct ClassBoardUtility_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct ClassBoardUtility_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_438D47B & 1) == 0 )
  {
    sub_B775C4(&ClassBoardUtility_TypeInfo);
    sub_B775C4(&StringLiteral_12829/*"SavePlayedClassBoardBaseRelease"*/);
    sub_B775C4(&StringLiteral_12830/*"SavePlayedExClassRelease"*/);
    sub_B775C4(&StringLiteral_22624/*"skill_{0:D5}"*/);
    sub_B775C4(&StringLiteral_18173/*"cs_{0:D4}{1}"*/);
    byte_438D47B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ClassBoardUtility_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18173/*"cs_{0:D4}{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18173/*"cs_{0:D4}{1}"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = ClassBoardUtility_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_22624/*"skill_{0:D5}"*/;
  v9->passiveSkillIconFormat = (struct System_String_o *)StringLiteral_22624/*"skill_{0:D5}"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->passiveSkillIconFormat, v10, v11, v12, v13, v14, v15, v16);
  v17 = ClassBoardUtility_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_12829/*"SavePlayedClassBoardBaseRelease"*/;
  v17->savePlayedClassBoardBaseReleaseKey = (struct System_String_o *)StringLiteral_12829/*"SavePlayedClassBoardBaseRelease"*/;
  sub_B77560(
    (BattleServantConfConponent_o *)&v17->savePlayedClassBoardBaseReleaseKey,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = ClassBoardUtility_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_12830/*"SavePlayedExClassRelease"*/;
  v25->savePlayedExClassReleaseKey = (struct System_String_o *)StringLiteral_12830/*"SavePlayedExClassRelease"*/;
  sub_B77560((BattleServantConfConponent_o *)&v25->savePlayedExClassReleaseKey, v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall ClassBoardUtility__FirstSavePlayedExClassReleaseEffect(const MethodInfo *method)
{
  ClassBoardUtility_c *v1; // x0
  bool HasKey; // w19
  bool v3; // w0
  __int64 v4; // x0
  const MethodInfo *v5; // x1
  System_Int32_array *v6; // x19
  ClassBoardUtility_c *v7; // x0
  __int64 v8; // x0

  if ( (byte_438D47A & 1) == 0 )
  {
    sub_B775C4(&ClassBoardUtility_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D47A = 1;
  }
  v1 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v1 = ClassBoardUtility_TypeInfo;
  }
  HasKey = UnityEngine_PlayerPrefs__HasKey(v1->static_fields->savePlayedClassBoardBaseReleaseKey, 0LL);
  v3 = UnityEngine_PlayerPrefs__HasKey(ClassBoardUtility_TypeInfo->static_fields->savePlayedExClassReleaseKey, 0LL);
  if ( v3 || !HasKey )
  {
    if ( !v3 )
    {
      v7 = ClassBoardUtility_TypeInfo;
      if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
        v7 = ClassBoardUtility_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(
        v7->static_fields->savePlayedExClassReleaseKey,
        (System_String_o *)StringLiteral_1/*""*/,
        0LL);
    }
  }
  else
  {
    v4 = sub_B775DC(int___TypeInfo, 1LL);
    if ( !v4 )
      sub_B7769C(0LL, v5);
    v6 = (System_Int32_array *)v4;
    if ( !*(_DWORD *)(v4 + 24) )
    {
      v8 = sub_B776C8(v4);
      sub_B77668(v8, 0LL);
    }
    *(_DWORD *)(v4 + 32) = 10;
    if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    }
    ClassBoardUtility__SavePlayedExClassReleaseEffect(v6, v5);
  }
}


System_String_o *__fastcall ClassBoardUtility__GetClassBoardSkillIconName(
        int32_t iconId,
        int32_t skillType,
        const MethodInfo *method)
{
  ClassBoardUtility_c *v5; // x0
  System_String_o *commandSpellIconFormat; // x20
  Il2CppObject *v7; // x19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x0
  System_String_o *passiveSkillIconFormat; // x20
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF
  int32_t genderType; // [xsp+18h] [xbp-18h] BYREF
  int32_t v17; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_438D475 & 1) == 0 )
  {
    sub_B775C4(&ClassBoardUtility_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    byte_438D475 = 1;
  }
  v5 = ClassBoardUtility_TypeInfo;
  if ( skillType == 2 )
  {
    if ( (WORD1(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
      v5 = ClassBoardUtility_TypeInfo;
    }
    commandSpellIconFormat = v5->static_fields->commandSpellIconFormat;
    v17 = iconId;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, method);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_B7769C(0LL, v9);
    genderType = SelfUserGame->fields.genderType;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &genderType, v10);
    return System_String__Format_44897472(commandSpellIconFormat, v7, v11, 0LL);
  }
  else
  {
    if ( (WORD1(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
      v5 = ClassBoardUtility_TypeInfo;
    }
    passiveSkillIconFormat = v5->static_fields->passiveSkillIconFormat;
    v15 = iconId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, method);
    return System_String__Format(passiveSkillIconFormat, v14, 0LL);
  }
}


bool __fastcall ClassBoardUtility__IsPlayedExClassReleaseEffect(int32_t classId, const MethodInfo *method)
{
  ClassBoardUtility___c__DisplayClass8_0_o *v3; // x19
  System_Char_array *v4; // x0
  System_Char_array *v5; // x1
  ClassBoardUtility_c *v6; // x0
  System_String_o *String_36337972; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v10; // x21
  __int64 v11; // x0

  if ( (byte_438D478 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&ClassBoardUtility_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_string____69504136);
    sub_B775C4(&Method_System_Func_string__bool___ctor__);
    sub_B775C4(&System_Func_string__bool__TypeInfo);
    sub_B775C4(&Method_ClassBoardUtility___c__DisplayClass8_0__IsPlayedExClassReleaseEffect_b__0__);
    sub_B775C4(&ClassBoardUtility___c__DisplayClass8_0_TypeInfo);
    byte_438D478 = 1;
  }
  v3 = (ClassBoardUtility___c__DisplayClass8_0_o *)sub_B77694(ClassBoardUtility___c__DisplayClass8_0_TypeInfo);
  ClassBoardUtility___c__DisplayClass8_0___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_13;
  v3->fields.classId = classId;
  v6 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v6 = ClassBoardUtility_TypeInfo;
  }
  String_36337972 = UnityEngine_PlayerPrefs__GetString_36337972(v6->static_fields->savePlayedExClassReleaseKey, 0LL);
  if ( System_String__IsNullOrEmpty(String_36337972, 0LL) )
    return 0;
  v4 = (System_Char_array *)sub_B775DC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_13;
  v5 = v4;
  if ( !v4->max_length )
  {
    v11 = sub_B776C8(v4);
    sub_B77668(v11, 0LL);
  }
  v4->m_Items[2] = 44;
  if ( !String_36337972 )
LABEL_13:
    sub_B7769C(v4, v5);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_36337972, v4, 0LL);
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_string__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_ClassBoardUtility___c__DisplayClass8_0__IsPlayedExClassReleaseEffect_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_string__bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_string____69504136) != 0LL;
}


bool __fastcall ClassBoardUtility__IsPlayedReleaseEffect(int32_t classBoardBaseId, const MethodInfo *method)
{
  ClassBoardUtility___c__DisplayClass6_0_o *v3; // x19
  System_Char_array *v4; // x0
  System_Char_array *v5; // x1
  ClassBoardUtility_c *v6; // x0
  System_String_o *String_36337972; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v10; // x21
  __int64 v11; // x0

  if ( (byte_438D476 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&ClassBoardUtility_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_string____69504136);
    sub_B775C4(&Method_System_Func_string__bool___ctor__);
    sub_B775C4(&System_Func_string__bool__TypeInfo);
    sub_B775C4(&Method_ClassBoardUtility___c__DisplayClass6_0__IsPlayedReleaseEffect_b__0__);
    sub_B775C4(&ClassBoardUtility___c__DisplayClass6_0_TypeInfo);
    byte_438D476 = 1;
  }
  v3 = (ClassBoardUtility___c__DisplayClass6_0_o *)sub_B77694(ClassBoardUtility___c__DisplayClass6_0_TypeInfo);
  ClassBoardUtility___c__DisplayClass6_0___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_13;
  v3->fields.classBoardBaseId = classBoardBaseId;
  v6 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v6 = ClassBoardUtility_TypeInfo;
  }
  String_36337972 = UnityEngine_PlayerPrefs__GetString_36337972(
                      v6->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  if ( System_String__IsNullOrEmpty(String_36337972, 0LL) )
    return 0;
  v4 = (System_Char_array *)sub_B775DC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_13;
  v5 = v4;
  if ( !v4->max_length )
  {
    v11 = sub_B776C8(v4);
    sub_B77668(v11, 0LL);
  }
  v4->m_Items[2] = 44;
  if ( !String_36337972 )
LABEL_13:
    sub_B7769C(v4, v5);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_36337972, v4, 0LL);
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_string__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_ClassBoardUtility___c__DisplayClass6_0__IsPlayedReleaseEffect_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_string__bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_string____69504136) != 0LL;
}


bool __fastcall ClassBoardUtility__IsTargetQuestClear(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int64_t v4; // x20

  if ( (byte_438D474 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D474 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v4 = (int64_t)Instance;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_12:
    sub_B7769C(Instance, v2);
  return UserQuestMaster__getClearCountsFromId(
           MasterData_WarQuestSelectionMaster,
           v4,
           BalanceConfig_TypeInfo->static_fields->ClassBoardReleaseQuestId,
           0LL) > 0;
}


void __fastcall ClassBoardUtility__SavePlayedClassBaseReleaseEffect(
        System_Int32_array *classBaseIds,
        const MethodInfo *method)
{
  ClassBoardUtility_c *v3; // x0
  System_String_o *String_36337972; // x20
  System_Collections_Generic_List_int__o *v5; // x20
  System_Collections_Generic_List_TSource__o *v6; // x0
  System_Collections_Generic_List_TSource__o *v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  ClassBoardUtility___c_c *v9; // x8
  struct ClassBoardUtility___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__7_0; // x21
  Il2CppObject *v12; // x22
  struct ClassBoardUtility___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  __int64 v21; // x8
  unsigned __int64 v22; // x22
  int32_t v23; // w21
  ClassBoardUtility_c *v24; // x0
  System_String_o *savePlayedClassBoardBaseReleaseKey; // x19
  System_String_o *v26; // x1
  __int64 v27; // x0

  if ( (byte_438D477 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&ClassBoardUtility_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B775C4(&Method_System_Func_string__int___ctor__);
    sub_B775C4(&System_Func_string__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&Method_System_String_Join_int___);
    sub_B775C4(&Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__7_0__);
    sub_B775C4(&ClassBoardUtility___c_TypeInfo);
    sub_B775C4(&StringLiteral_714/*","*/);
    byte_438D477 = 1;
  }
  v3 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v3 = ClassBoardUtility_TypeInfo;
  }
  String_36337972 = UnityEngine_PlayerPrefs__GetString_36337972(
                      v3->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  if ( System_String__IsNullOrEmpty(String_36337972, 0LL) )
  {
    v5 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v5,
      (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
    if ( !classBaseIds )
      goto LABEL_33;
  }
  else
  {
    v6 = (System_Collections_Generic_List_TSource__o *)sub_B775DC(char___TypeInfo, 1LL);
    if ( !v6 )
      goto LABEL_33;
    v7 = v6;
    if ( !v6->fields._size )
    {
LABEL_32:
      v27 = sub_B776C8(v6);
      sub_B77668(v27, 0LL);
    }
    LOWORD(v6->fields._syncRoot) = 44;
    if ( !String_36337972 )
      goto LABEL_33;
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                String_36337972,
                                                                (System_Char_array *)v6,
                                                                0LL);
    v9 = ClassBoardUtility___c_TypeInfo;
    if ( (BYTE3(ClassBoardUtility___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v9 = ClassBoardUtility___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_string__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__7_0,
        v12,
        Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__7_0__,
        (const MethodInfo_29E9E70 *)Method_System_Func_string__int___ctor__);
      v13 = ClassBoardUtility___c_TypeInfo->static_fields;
      v13->__9__7_0 = (struct System_Func_string__int__o *)_9__7_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v13->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v8,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_string__int___);
    v6 = System_Linq_Enumerable__ToList_int_(
           v20,
           (const MethodInfo_1D402F0 *)Method_System_Linq_Enumerable_ToList_int___);
    v5 = (System_Collections_Generic_List_int__o *)v6;
    if ( !classBaseIds )
LABEL_33:
      sub_B7769C(v6, v7);
  }
  v21 = *(_QWORD *)&classBaseIds->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    while ( v22 < (unsigned int)v21 )
    {
      if ( !v5 )
        goto LABEL_33;
      v23 = classBaseIds->m_Items[v22 + 1];
      v6 = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                           v5,
                                                           v23,
                                                           (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)v6 & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v5,
          v23,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v21) = classBaseIds->max_length;
      if ( (__int64)++v22 >= (int)v21 )
        goto LABEL_28;
    }
    goto LABEL_32;
  }
LABEL_28:
  v24 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v24 = ClassBoardUtility_TypeInfo;
  }
  savePlayedClassBoardBaseReleaseKey = v24->static_fields->savePlayedClassBoardBaseReleaseKey;
  v26 = System_String__Join_int_(
          (System_String_o *)StringLiteral_714/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v5,
          (const MethodInfo_1E0036C *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedClassBoardBaseReleaseKey, v26, 0LL);
}


void __fastcall ClassBoardUtility__SavePlayedExClassReleaseEffect(
        System_Int32_array *classId,
        const MethodInfo *method)
{
  ClassBoardUtility_c *v3; // x0
  System_String_o *String_36337972; // x20
  System_Collections_Generic_List_int__o *v5; // x20
  System_Collections_Generic_List_TSource__o *v6; // x0
  System_Collections_Generic_List_TSource__o *v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  ClassBoardUtility___c_c *v9; // x8
  struct ClassBoardUtility___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__9_0; // x21
  Il2CppObject *v12; // x22
  struct ClassBoardUtility___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  __int64 v21; // x8
  unsigned __int64 v22; // x22
  int32_t v23; // w21
  ClassBoardUtility_c *v24; // x0
  System_String_o *savePlayedExClassReleaseKey; // x19
  System_String_o *v26; // x1
  __int64 v27; // x0

  if ( (byte_438D479 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&ClassBoardUtility_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B775C4(&Method_System_Func_string__int___ctor__);
    sub_B775C4(&System_Func_string__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&Method_System_String_Join_int___);
    sub_B775C4(&Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__9_0__);
    sub_B775C4(&ClassBoardUtility___c_TypeInfo);
    sub_B775C4(&StringLiteral_714/*","*/);
    byte_438D479 = 1;
  }
  v3 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v3 = ClassBoardUtility_TypeInfo;
  }
  String_36337972 = UnityEngine_PlayerPrefs__GetString_36337972(v3->static_fields->savePlayedExClassReleaseKey, 0LL);
  if ( System_String__IsNullOrEmpty(String_36337972, 0LL) )
  {
    v5 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v5,
      (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
    if ( !classId )
      goto LABEL_33;
  }
  else
  {
    v6 = (System_Collections_Generic_List_TSource__o *)sub_B775DC(char___TypeInfo, 1LL);
    if ( !v6 )
      goto LABEL_33;
    v7 = v6;
    if ( !v6->fields._size )
    {
LABEL_32:
      v27 = sub_B776C8(v6);
      sub_B77668(v27, 0LL);
    }
    LOWORD(v6->fields._syncRoot) = 44;
    if ( !String_36337972 )
      goto LABEL_33;
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                String_36337972,
                                                                (System_Char_array *)v6,
                                                                0LL);
    v9 = ClassBoardUtility___c_TypeInfo;
    if ( (BYTE3(ClassBoardUtility___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v9 = ClassBoardUtility___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__9_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__9_0;
    if ( !_9__9_0 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__9_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_string__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__9_0,
        v12,
        Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__9_0__,
        (const MethodInfo_29E9E70 *)Method_System_Func_string__int___ctor__);
      v13 = ClassBoardUtility___c_TypeInfo->static_fields;
      v13->__9__9_0 = (struct System_Func_string__int__o *)_9__9_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v13->__9__9_0,
        (System_Int32_array **)_9__9_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v8,
                                                                 (System_Func_TSource__TResult__o *)_9__9_0,
                                                                 (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_string__int___);
    v6 = System_Linq_Enumerable__ToList_int_(
           v20,
           (const MethodInfo_1D402F0 *)Method_System_Linq_Enumerable_ToList_int___);
    v5 = (System_Collections_Generic_List_int__o *)v6;
    if ( !classId )
LABEL_33:
      sub_B7769C(v6, v7);
  }
  v21 = *(_QWORD *)&classId->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    while ( v22 < (unsigned int)v21 )
    {
      if ( !v5 )
        goto LABEL_33;
      v23 = classId->m_Items[v22 + 1];
      v6 = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                           v5,
                                                           v23,
                                                           (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)v6 & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v5,
          v23,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v21) = classId->max_length;
      if ( (__int64)++v22 >= (int)v21 )
        goto LABEL_28;
    }
    goto LABEL_32;
  }
LABEL_28:
  v24 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v24 = ClassBoardUtility_TypeInfo;
  }
  savePlayedExClassReleaseKey = v24->static_fields->savePlayedExClassReleaseKey;
  v26 = System_String__Join_int_(
          (System_String_o *)StringLiteral_714/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v5,
          (const MethodInfo_1E0036C *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedExClassReleaseKey, v26, 0LL);
}


void __fastcall ClassBoardUtility___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0

  if ( (byte_438859F & 1) == 0 )
  {
    sub_B775C4(&ClassBoardUtility___c_TypeInfo);
    byte_438859F = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ClassBoardUtility___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardUtility___c_o *)v1;
  sub_B77560(static_fields);
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