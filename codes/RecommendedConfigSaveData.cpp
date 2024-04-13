void __fastcall RecommendedConfigSaveData___cctor(const MethodInfo *method)
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
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EC4E4 & 1) == 0 )
  {
    sub_B5D5C4(&RecommendedConfigSaveData_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_11182/*"RECOMENDED_CONFIG_NORMAL"*/, v8, v9, v10);
    byte_42EC4E4 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)RecommendedConfigSaveData_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_11182/*"RECOMENDED_CONFIG_NORMAL"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11182/*"RECOMENDED_CONFIG_NORMAL"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall RecommendedConfigSaveData___ctor(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_int__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EC4E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v5, v6, v7);
    byte_42EC4E3 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.selectRarityList = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectRarityList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendedConfigSaveData__CanNotSelect(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8

  if ( (byte_42EC4E2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, (_DWORD)method, v2, v3);
    byte_42EC4E2 = 1;
  }
  return this->fields.selectClass == -1
      || (selectRarityList = this->fields.selectRarityList) == 0LL
      || selectRarityList->fields._size == 0;
}


bool __fastcall RecommendedConfigSaveData__IsAll(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  return this->fields.selectClass == 1;
}


bool __fastcall RecommendedConfigSaveData__IsExist(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  RecommendedConfigSaveData_c *v4; // x0

  if ( (byte_42EC4DF & 1) == 0 )
  {
    sub_B5D5C4(&RecommendedConfigSaveData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC4DF = 1;
  }
  v4 = RecommendedConfigSaveData_TypeInfo;
  if ( (BYTE3(RecommendedConfigSaveData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    v4 = RecommendedConfigSaveData_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__HasKey(v4->static_fields->SAVE_KEY, 0LL);
}


bool __fastcall RecommendedConfigSaveData__IsMix(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  return this->fields.selectClass == 0;
}


bool __fastcall RecommendedConfigSaveData__IsTargetOnly(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  return this->fields.selectClass == 2;
}


RecommendedConfigSaveData_o *__fastcall RecommendedConfigSaveData__LoadConfigSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  RecommendedConfigSaveData_c *v7; // x0
  System_String_o *String_35648228; // x0

  if ( (byte_42EC4E0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___, v1, v2, v3);
    sub_B5D5C4(&RecommendedConfigSaveData_TypeInfo, v4, v5, v6);
    byte_42EC4E0 = 1;
  }
  v7 = RecommendedConfigSaveData_TypeInfo;
  if ( (BYTE3(RecommendedConfigSaveData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    v7 = RecommendedConfigSaveData_TypeInfo;
  }
  String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228(v7->static_fields->SAVE_KEY, 0LL);
  return (RecommendedConfigSaveData_o *)UnityEngine_JsonUtility__FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData_(
                                          String_35648228,
                                          (const MethodInfo_1E5F018 *)Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___);
}


void __fastcall RecommendedConfigSaveData__SaveConfig(
        RecommendedConfigSaveData_o *this,
        RecommendedConfigSaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x19
  RecommendedConfigSaveData_c *v6; // x8

  if ( (byte_42EC4E1 & 1) == 0 )
  {
    sub_B5D5C4(&RecommendedConfigSaveData_TypeInfo, (_DWORD)saveData, (_DWORD)method, v3);
    byte_42EC4E1 = 1;
  }
  v5 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)saveData, 0LL);
  v6 = RecommendedConfigSaveData_TypeInfo;
  if ( (BYTE3(RecommendedConfigSaveData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    v6 = RecommendedConfigSaveData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v6->static_fields->SAVE_KEY, v5, 0LL);
}