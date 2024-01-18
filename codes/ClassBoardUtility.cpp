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

  if ( (byte_41895B1 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardUtility_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_12596/*"SavePlayedClassBoardBaseRelease"*/, v8);
    sub_B2C35C(&StringLiteral_22151/*"skill_{0:D5}"*/, v9);
    sub_B2C35C(&StringLiteral_17819/*"cs_{0:D4}{1}"*/, v10);
    byte_41895B1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ClassBoardUtility_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_17819/*"cs_{0:D4}{1}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17819/*"cs_{0:D4}{1}"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = ClassBoardUtility_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_22151/*"skill_{0:D5}"*/;
  v13->passiveSkillIconFormat = (struct System_String_o *)StringLiteral_22151/*"skill_{0:D5}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->passiveSkillIconFormat, v14, v15, v16, v17, v18, v19, v20);
  v21 = ClassBoardUtility_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_12596/*"SavePlayedClassBoardBaseRelease"*/;
  v21->savePlayedClassBoardBaseReleaseKey = (struct System_String_o *)StringLiteral_12596/*"SavePlayedClassBoardBaseRelease"*/;
  sub_B2C2F8(
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
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  System_String_o *passiveSkillIconFormat; // x20
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF
  int32_t genderType; // [xsp+18h] [xbp-18h] BYREF
  int32_t v17; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_41895AE & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardUtility_TypeInfo, *(_QWORD *)&skillType);
    sub_B2C35C(&int_TypeInfo, v5);
    byte_41895AE = 1;
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
    v17 = iconId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_B2C434(0LL, v10);
    genderType = SelfUserGame->fields.genderType;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &genderType);
    return System_String__Format_44301068(commandSpellIconFormat, v8, v11, 0LL);
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
    v15 = iconId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    return System_String__Format(passiveSkillIconFormat, v14, 0LL);
  }
}


bool __fastcall ClassBoardUtility__IsPlayedReleaseEffect(int32_t classBoardBaseId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ClassBoardUtility___c__DisplayClass5_0_o *v9; // x19
  System_Char_array *v10; // x0
  System_Char_array *v11; // x1
  ClassBoardUtility_c *v12; // x0
  System_String_o *String_35342888; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x21
  __int64 v17; // x0

  if ( (byte_41895AF & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&ClassBoardUtility_TypeInfo, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_string____67414584, v4);
    sub_B2C35C(&Method_System_Func_string__bool___ctor__, v5);
    sub_B2C35C(&System_Func_string__bool__TypeInfo, v6);
    sub_B2C35C(&Method_ClassBoardUtility___c__DisplayClass5_0__IsPlayedReleaseEffect_b__0__, v7);
    sub_B2C35C(&ClassBoardUtility___c__DisplayClass5_0_TypeInfo, v8);
    byte_41895AF = 1;
  }
  v9 = (ClassBoardUtility___c__DisplayClass5_0_o *)sub_B2C42C(ClassBoardUtility___c__DisplayClass5_0_TypeInfo);
  ClassBoardUtility___c__DisplayClass5_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  v9->fields.classBoardBaseId = classBoardBaseId;
  v12 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v12 = ClassBoardUtility_TypeInfo;
  }
  String_35342888 = UnityEngine_PlayerPrefs__GetString_35342888(
                      v12->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  if ( System_String__IsNullOrEmpty(String_35342888, 0LL) )
    return 0;
  v10 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v10 )
    goto LABEL_13;
  v11 = v10;
  if ( !v10->max_length )
  {
    v17 = sub_B2C460(v10);
    sub_B2C400(v17, 0LL);
  }
  v10->m_Items[2] = 44;
  if ( !String_35342888 )
LABEL_13:
    sub_B2C434(v10, v11);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_35342888, v10, 0LL);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_string__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_ClassBoardUtility___c__DisplayClass5_0__IsPlayedReleaseEffect_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_string__bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
           v15,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_string____67414584) != 0LL;
}


bool __fastcall ClassBoardUtility__IsTargetQuestClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int64_t v8; // x20

  if ( (byte_41895AD & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, v1);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v2);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_41895AD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v8 = (int64_t)Instance;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_12:
    sub_B2C434(Instance, v6);
  return UserQuestMaster__getClearCountsFromId(
           MasterData_WarQuestSelectionMaster,
           v8,
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
  System_String_o *String_35342888; // x20
  System_Collections_Generic_List_int__o *v18; // x20
  System_Collections_Generic_List_TSource__o *v19; // x0
  System_Collections_Generic_List_TSource__o *v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  ClassBoardUtility___c_c *v22; // x8
  struct ClassBoardUtility___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x21
  Il2CppObject *v25; // x22
  struct ClassBoardUtility___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  __int64 v34; // x8
  unsigned __int64 v35; // x22
  int32_t v36; // w21
  ClassBoardUtility_c *v37; // x0
  System_String_o *savePlayedClassBoardBaseReleaseKey; // x19
  System_String_o *v39; // x1
  __int64 v40; // x0

  if ( (byte_41895B0 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&ClassBoardUtility_TypeInfo, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_string__int___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_int___, v5);
    sub_B2C35C(&Method_System_Func_string__int___ctor__, v6);
    sub_B2C35C(&System_Func_string__int__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B2C35C(&Method_System_String_Join_int___, v12);
    sub_B2C35C(&Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__6_0__, v13);
    sub_B2C35C(&ClassBoardUtility___c_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_699/*","*/, v15);
    byte_41895B0 = 1;
  }
  v16 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v16 = ClassBoardUtility_TypeInfo;
  }
  String_35342888 = UnityEngine_PlayerPrefs__GetString_35342888(
                      v16->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  if ( System_String__IsNullOrEmpty(String_35342888, 0LL) )
  {
    v18 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !classBaseIds )
      goto LABEL_33;
  }
  else
  {
    v19 = (System_Collections_Generic_List_TSource__o *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v19 )
      goto LABEL_33;
    v20 = v19;
    if ( !v19->fields._size )
    {
LABEL_32:
      v40 = sub_B2C460(v19);
      sub_B2C400(v40, 0LL);
    }
    LOWORD(v19->fields._syncRoot) = 44;
    if ( !String_35342888 )
      goto LABEL_33;
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                 String_35342888,
                                                                 (System_Char_array *)v19,
                                                                 0LL);
    v22 = ClassBoardUtility___c_TypeInfo;
    if ( (BYTE3(ClassBoardUtility___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v22 = ClassBoardUtility___c_TypeInfo;
    }
    static_fields = v22->static_fields;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_string__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_0,
        v25,
        Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__6_0__,
        (const MethodInfo_27127B0 *)Method_System_Func_string__int___ctor__);
      v26 = ClassBoardUtility___c_TypeInfo->static_fields;
      v26->__9__6_0 = (struct System_Func_string__int__o *)_9__6_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v26->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                 v21,
                                                                 (System_Func_TSource__TResult__o *)_9__6_0,
                                                                 (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_string__int___);
    v19 = System_Linq_Enumerable__ToList_int_(
            v33,
            (const MethodInfo_1A9DCD4 *)Method_System_Linq_Enumerable_ToList_int___);
    v18 = (System_Collections_Generic_List_int__o *)v19;
    if ( !classBaseIds )
LABEL_33:
      sub_B2C434(v19, v20);
  }
  v34 = *(_QWORD *)&classBaseIds->max_length;
  if ( (int)v34 >= 1 )
  {
    v35 = 0LL;
    while ( v35 < (unsigned int)v34 )
    {
      if ( !v18 )
        goto LABEL_33;
      v36 = classBaseIds->m_Items[v35 + 1];
      v19 = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                            v18,
                                                            v36,
                                                            (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)v19 & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v18,
          v36,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v34) = classBaseIds->max_length;
      if ( (__int64)++v35 >= (int)v34 )
        goto LABEL_28;
    }
    goto LABEL_32;
  }
LABEL_28:
  v37 = ClassBoardUtility_TypeInfo;
  if ( (BYTE3(ClassBoardUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v37 = ClassBoardUtility_TypeInfo;
  }
  savePlayedClassBoardBaseReleaseKey = v37->static_fields->savePlayedClassBoardBaseReleaseKey;
  v39 = System_String__Join_int_(
          (System_String_o *)StringLiteral_699/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v18,
          (const MethodInfo_209C7C0 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedClassBoardBaseReleaseKey, v39, 0LL);
}


void __fastcall ClassBoardUtility___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0

  if ( (byte_4184EFF & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardUtility___c_TypeInfo, v1);
    byte_4184EFF = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ClassBoardUtility___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardUtility___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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