void __fastcall ClassBoardUtility___cctor(const MethodInfo *method)
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
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct ClassBoardUtility_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct ClassBoardUtility_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42146DB & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardUtility_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_12634/*"SavePlayedClassBoardBaseRelease"*/, v8);
    sub_B0D8A4(&StringLiteral_22226/*"skill_{0:D5}"*/, v9);
    sub_B0D8A4(&StringLiteral_17875/*"cs_{0:D4}{1}"*/, v10);
    byte_42146DB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ClassBoardUtility_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_17875/*"cs_{0:D4}{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17875/*"cs_{0:D4}{1}"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = ClassBoardUtility_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_22226/*"skill_{0:D5}"*/;
  v13->passiveSkillIconFormat = (struct System_String_o *)StringLiteral_22226/*"skill_{0:D5}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v13->passiveSkillIconFormat, v14, v15, v16, v17, v18, v19, v20);
  v21 = ClassBoardUtility_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_12634/*"SavePlayedClassBoardBaseRelease"*/;
  v21->savePlayedClassBoardBaseReleaseKey = (struct System_String_o *)StringLiteral_12634/*"SavePlayedClassBoardBaseRelease"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v21->savePlayedClassBoardBaseReleaseKey,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassBoardUtility__GetClassBoardSkillIconName(
        int32_t iconId,
        int32_t skillType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ClassBoardUtility_c *v6; // x0
  System_String_o *commandSpellIconFormat; // x20
  Il2CppObject *v8; // x19
  UserGameEntity_o *SelfUserGame; // x0
  Il2CppObject *v10; // x0
  System_String_o *passiveSkillIconFormat; // x20
  Il2CppObject *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF
  int32_t genderType; // [xsp+18h] [xbp-18h] BYREF
  int32_t v16; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42146D8 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardUtility_TypeInfo, *(_QWORD *)&skillType);
    sub_B0D8A4(&int_TypeInfo, v5);
    byte_42146D8 = 1;
  }
  v6 = ClassBoardUtility_TypeInfo;
  if ( skillType == 2 )
  {
    if ( (WORD1(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
      v6 = ClassBoardUtility_TypeInfo;
    }
    commandSpellIconFormat = v6->static_fields->commandSpellIconFormat;
    v16 = iconId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_B0D97C(0LL);
    genderType = SelfUserGame->fields.genderType;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &genderType);
    return System_String__Format_43845440(commandSpellIconFormat, v8, v10, 0LL);
  }
  else
  {
    if ( (WORD1(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
      v6 = ClassBoardUtility_TypeInfo;
    }
    passiveSkillIconFormat = v6->static_fields->passiveSkillIconFormat;
    v14 = iconId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
    return System_String__Format(passiveSkillIconFormat, v13, 0LL);
  }
}


bool __fastcall ClassBoardUtility__IsPlayedReleaseEffect(int32_t classBoardBaseId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ClassBoardUtility___c__DisplayClass5_0_o *v10; // x19
  System_Char_array *v11; // x0
  ClassBoardUtility_c *v12; // x0
  System_String_o *String_34963268; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x21
  __int64 v19; // x0

  if ( (byte_42146D9 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&ClassBoardUtility_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_string____67989080, v5);
    sub_B0D8A4(&Method_System_Func_string__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_string__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_ClassBoardUtility___c__DisplayClass5_0__IsPlayedReleaseEffect_b__0__, v8);
    sub_B0D8A4(&ClassBoardUtility___c__DisplayClass5_0_TypeInfo, v9);
    byte_42146D9 = 1;
  }
  v10 = (ClassBoardUtility___c__DisplayClass5_0_o *)sub_B0D974(
                                                      ClassBoardUtility___c__DisplayClass5_0_TypeInfo,
                                                      method,
                                                      v2);
  ClassBoardUtility___c__DisplayClass5_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_13;
  v10->fields.classBoardBaseId = classBoardBaseId;
  v12 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v12 = ClassBoardUtility_TypeInfo;
  }
  String_34963268 = UnityEngine_PlayerPrefs__GetString_34963268(
                      v12->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  if ( System_String__IsNullOrEmpty(String_34963268, 0LL) )
    return 0;
  v11 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v11 )
    goto LABEL_13;
  if ( !v11->max_length )
  {
    v19 = sub_B0D9A8(v11);
    sub_B0D948(v19, 0LL);
  }
  v11->m_Items[2] = 44;
  if ( !String_34963268 )
LABEL_13:
    sub_B0D97C(v11);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_34963268, v11, 0LL);
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_string__bool__TypeInfo,
                                                                             v16,
                                                                             v17);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v10,
    Method_ClassBoardUtility___c__DisplayClass5_0__IsPlayedReleaseEffect_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_string__bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
           v15,
           (System_Func_TSource__bool__o *)v18,
           (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_string____67989080) != 0LL;
}


bool __fastcall ClassBoardUtility__IsTargetQuestClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int64_t v7; // x20

  if ( (byte_42146D7 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v1);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v2);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_42146D7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v7 = (int64_t)Instance;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_12:
    sub_B0D97C(Instance);
  return UserQuestMaster__getClearCountsFromId(
           MasterData_WarQuestSelectionMaster,
           v7,
           BalanceConfig_TypeInfo->static_fields->ClassBoardReleaseQuestId,
           0LL) > 0;
}


void __fastcall ClassBoardUtility__SavePlayedClassBaseReleaseEffect(
        System_Int32_array *classBaseIds,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  ClassBoardUtility_c *v16; // x0
  System_String_o *String_34963268; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_int__o *v20; // x20
  System_Collections_Generic_List_TSource__o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  ClassBoardUtility___c_c *v25; // x8
  struct ClassBoardUtility___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x21
  Il2CppObject *v28; // x22
  struct ClassBoardUtility___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  __int64 v37; // x8
  unsigned __int64 v38; // x22
  int32_t v39; // w21
  ClassBoardUtility_c *v40; // x0
  System_String_o *savePlayedClassBoardBaseReleaseKey; // x19
  System_String_o *v42; // x1
  __int64 v43; // x0

  if ( (byte_42146DA & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&ClassBoardUtility_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_string__int___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_int___, v5);
    sub_B0D8A4(&Method_System_Func_string__int___ctor__, v6);
    sub_B0D8A4(&System_Func_string__int__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B0D8A4(&Method_System_String_Join_int___, v12);
    sub_B0D8A4(&Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__6_0__, v13);
    sub_B0D8A4(&ClassBoardUtility___c_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_705/*","*/, v15);
    byte_42146DA = 1;
  }
  v16 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v16 = ClassBoardUtility_TypeInfo;
  }
  String_34963268 = UnityEngine_PlayerPrefs__GetString_34963268(
                      v16->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  if ( System_String__IsNullOrEmpty(String_34963268, 0LL) )
  {
    v20 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v18, v19);
    System_Collections_Generic_List_int____ctor(
      v20,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !classBaseIds )
      goto LABEL_33;
  }
  else
  {
    v21 = (System_Collections_Generic_List_TSource__o *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v21 )
      goto LABEL_33;
    if ( !v21->fields._size )
    {
LABEL_32:
      v43 = sub_B0D9A8(v21);
      sub_B0D948(v43, 0LL);
    }
    LOWORD(v21->fields._syncRoot) = 44;
    if ( !String_34963268 )
      goto LABEL_33;
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                 String_34963268,
                                                                 (System_Char_array *)v21,
                                                                 0LL);
    v25 = ClassBoardUtility___c_TypeInfo;
    if ( (BYTE3(ClassBoardUtility___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v25 = ClassBoardUtility___c_TypeInfo;
    }
    static_fields = v25->static_fields;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                  System_Func_string__int__TypeInfo,
                                                                                  v22,
                                                                                  v23);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_0,
        v28,
        Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__6_0__,
        (const MethodInfo_2619564 *)Method_System_Func_string__int___ctor__);
      v29 = ClassBoardUtility___c_TypeInfo->static_fields;
      v29->__9__6_0 = (struct System_Func_string__int__o *)_9__6_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v29->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v24,
                                                                 (System_Func_TSource__TResult__o *)_9__6_0,
                                                                 (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_string__int___);
    v21 = System_Linq_Enumerable__ToList_int_(
            v36,
            (const MethodInfo_1B58FA0 *)Method_System_Linq_Enumerable_ToList_int___);
    v20 = (System_Collections_Generic_List_int__o *)v21;
    if ( !classBaseIds )
LABEL_33:
      sub_B0D97C(v21);
  }
  v37 = *(_QWORD *)&classBaseIds->max_length;
  if ( (int)v37 >= 1 )
  {
    v38 = 0LL;
    while ( v38 < (unsigned int)v37 )
    {
      if ( !v20 )
        goto LABEL_33;
      v39 = classBaseIds->m_Items[v38 + 1];
      v21 = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                            v20,
                                                            v39,
                                                            (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)v21 & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v20,
          v39,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v37) = classBaseIds->max_length;
      if ( (__int64)++v38 >= (int)v37 )
        goto LABEL_28;
    }
    goto LABEL_32;
  }
LABEL_28:
  v40 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v40 = ClassBoardUtility_TypeInfo;
  }
  savePlayedClassBoardBaseReleaseKey = v40->static_fields->savePlayedClassBoardBaseReleaseKey;
  v42 = System_String__Join_int_(
          (System_String_o *)StringLiteral_705/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v20,
          (const MethodInfo_20513F0 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedClassBoardBaseReleaseKey, v42, 0LL);
}


void __fastcall ClassBoardUtility___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0

  if ( (byte_4211E3C & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardUtility___c_TypeInfo, v1);
    byte_4211E3C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ClassBoardUtility___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardUtility___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall ClassBoardUtility___c___ctor(ClassBoardUtility___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ClassBoardUtility___c___SavePlayedClassBaseReleaseEffect_b__6_0(
        ClassBoardUtility___c_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_Int32__Parse(id, 0LL);
}


void __fastcall ClassBoardUtility___c__DisplayClass5_0___ctor(
        ClassBoardUtility___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardUtility___c__DisplayClass5_0___IsPlayedReleaseEffect_b__0(
        ClassBoardUtility___c__DisplayClass5_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  int32_t classBoardBaseId; // w19

  classBoardBaseId = this->fields.classBoardBaseId;
  return classBoardBaseId == System_Int32__Parse(id, 0LL);
}