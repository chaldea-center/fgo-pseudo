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

  if ( (byte_40FBA2B & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardUtility_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_12540, v8);
    sub_B16FFC(&StringLiteral_22059, v9);
    sub_B16FFC(&StringLiteral_17751, v10);
    byte_40FBA2B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ClassBoardUtility_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_17751;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17751;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = ClassBoardUtility_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_22059;
  v13->passiveSkillIconFormat = (struct System_String_o *)StringLiteral_22059;
  sub_B16F98((BattleServantConfConponent_o *)&v13->passiveSkillIconFormat, v14, v15, v16, v17, v18, v19, v20);
  v21 = ClassBoardUtility_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_12540;
  v21->savePlayedClassBoardBaseReleaseKey = (struct System_String_o *)StringLiteral_12540;
  sub_B16F98(
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

  if ( (byte_40FBA28 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardUtility_TypeInfo, *(_QWORD *)&skillType);
    sub_B16FFC(&int_TypeInfo, v5);
    byte_40FBA28 = 1;
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
      sub_B170D4();
    genderType = SelfUserGame->fields.genderType;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &genderType);
    return System_String__Format_43739268(commandSpellIconFormat, v8, v10, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ClassBoardUtility___c__DisplayClass5_0_o *v12; // x19
  ClassBoardUtility_c *v13; // x0
  System_String_o *String_34837456; // x20
  __int64 v15; // x2
  System_Char_array *v17; // x0
  __int64 v18; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x21

  if ( (byte_40FBA29 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&ClassBoardUtility_TypeInfo, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_string____66839400, v7);
    sub_B16FFC(&Method_System_Func_string__bool___ctor__, v8);
    sub_B16FFC(&System_Func_string__bool__TypeInfo, v9);
    sub_B16FFC(&Method_ClassBoardUtility___c__DisplayClass5_0__IsPlayedReleaseEffect_b__0__, v10);
    sub_B16FFC(&ClassBoardUtility___c__DisplayClass5_0_TypeInfo, v11);
    byte_40FBA29 = 1;
  }
  v12 = (ClassBoardUtility___c__DisplayClass5_0_o *)sub_B170CC(
                                                      ClassBoardUtility___c__DisplayClass5_0_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  ClassBoardUtility___c__DisplayClass5_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  v12->fields.classBoardBaseId = classBoardBaseId;
  v13 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v13 = ClassBoardUtility_TypeInfo;
  }
  String_34837456 = UnityEngine_PlayerPrefs__GetString_34837456(
                      v13->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  if ( System_String__IsNullOrEmpty(String_34837456, 0LL) )
    return 0;
  v17 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v15);
  if ( !v17 )
    goto LABEL_13;
  if ( !v17->max_length )
  {
    sub_B17100(v17, v17, v18);
    sub_B170A0();
  }
  v17->m_Items[2] = 44;
  if ( !String_34837456 )
LABEL_13:
    sub_B170D4();
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_34837456, v17, 0LL);
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_string__bool__TypeInfo,
                                                                             v20,
                                                                             v21,
                                                                             v22,
                                                                             v23);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v12,
    Method_ClassBoardUtility___c__DisplayClass5_0__IsPlayedReleaseEffect_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_string__bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
           v19,
           (System_Func_TSource__bool__o *)v24,
           (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_string____66839400) != 0LL;
}


bool __fastcall ClassBoardUtility__IsTargetQuestClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int64_t UserId; // x20

  if ( (byte_40FBA27 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v1);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v2);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FBA27 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_12:
    sub_B170D4();
  return UserQuestMaster__getClearCountsFromId(
           MasterData_WarQuestSelectionMaster,
           UserId,
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
  System_String_o *String_34837456; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_int__o *v22; // x20
  System_Collections_Generic_List_TSource__o *v23; // x0
  System_Collections_Generic_List_TSource__o *v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  ClassBoardUtility___c_c *v31; // x8
  struct ClassBoardUtility___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x21
  Il2CppObject *v34; // x22
  struct ClassBoardUtility___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  __int64 v43; // x8
  unsigned __int64 v44; // x22
  int32_t v45; // w21
  ClassBoardUtility_c *v46; // x0
  System_String_o *savePlayedClassBoardBaseReleaseKey; // x19
  System_String_o *v48; // x1

  if ( (byte_40FBA2A & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&ClassBoardUtility_TypeInfo, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_string__int___, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_int___, v5);
    sub_B16FFC(&Method_System_Func_string__int___ctor__, v6);
    sub_B16FFC(&System_Func_string__int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B16FFC(&Method_System_String_Join_int___, v12);
    sub_B16FFC(&Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__6_0__, v13);
    sub_B16FFC(&ClassBoardUtility___c_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_698, v15);
    byte_40FBA2A = 1;
  }
  v16 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v16 = ClassBoardUtility_TypeInfo;
  }
  String_34837456 = UnityEngine_PlayerPrefs__GetString_34837456(
                      v16->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  if ( System_String__IsNullOrEmpty(String_34837456, 0LL) )
  {
    v22 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v18,
                                                      v19,
                                                      v20,
                                                      v21);
    System_Collections_Generic_List_int____ctor(
      v22,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !classBaseIds )
      goto LABEL_33;
  }
  else
  {
    v23 = (System_Collections_Generic_List_TSource__o *)sub_B17014(char___TypeInfo, 1LL, v19);
    if ( !v23 )
      goto LABEL_33;
    v24 = v23;
    if ( !v23->fields._size )
    {
LABEL_32:
      sub_B17100(v23, v24, v25);
      sub_B170A0();
    }
    LOWORD(v23->fields._syncRoot) = 44;
    if ( !String_34837456 )
      goto LABEL_33;
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                 String_34837456,
                                                                 (System_Char_array *)v23,
                                                                 0LL);
    v31 = ClassBoardUtility___c_TypeInfo;
    if ( (BYTE3(ClassBoardUtility___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v31 = ClassBoardUtility___c_TypeInfo;
    }
    static_fields = v31->static_fields;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                  System_Func_string__int__TypeInfo,
                                                                                  v26,
                                                                                  v27,
                                                                                  v28,
                                                                                  v29);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_0,
        v34,
        Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__6_0__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_string__int___ctor__);
      v35 = ClassBoardUtility___c_TypeInfo->static_fields;
      v35->__9__6_0 = (struct System_Func_string__int__o *)_9__6_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v35->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v30,
                                                                 (System_Func_TSource__TResult__o *)_9__6_0,
                                                                 (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_string__int___);
    v23 = System_Linq_Enumerable__ToList_int_(
            v42,
            (const MethodInfo_19C78D8 *)Method_System_Linq_Enumerable_ToList_int___);
    v22 = (System_Collections_Generic_List_int__o *)v23;
    if ( !classBaseIds )
LABEL_33:
      sub_B170D4();
  }
  v43 = *(_QWORD *)&classBaseIds->max_length;
  if ( (int)v43 >= 1 )
  {
    v44 = 0LL;
    while ( v44 < (unsigned int)v43 )
    {
      if ( !v22 )
        goto LABEL_33;
      v45 = classBaseIds->m_Items[v44 + 1];
      v23 = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                            v22,
                                                            v45,
                                                            (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)v23 & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v22,
          v45,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v43) = classBaseIds->max_length;
      if ( (__int64)++v44 >= (int)v43 )
        goto LABEL_28;
    }
    goto LABEL_32;
  }
LABEL_28:
  v46 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v46 = ClassBoardUtility_TypeInfo;
  }
  savePlayedClassBoardBaseReleaseKey = v46->static_fields->savePlayedClassBoardBaseReleaseKey;
  v48 = System_String__Join_int_(
          (System_String_o *)StringLiteral_698,
          (System_Collections_Generic_IEnumerable_T__o *)v22,
          (const MethodInfo_224FA24 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedClassBoardBaseReleaseKey, v48, 0LL);
}


void __fastcall ClassBoardUtility___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F70F7 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardUtility___c_TypeInfo, v1);
    byte_40F70F7 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ClassBoardUtility___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ClassBoardUtility___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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