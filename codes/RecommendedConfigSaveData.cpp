void __fastcall RecommendedConfigSaveData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4212F45 & 1) == 0 )
  {
    sub_B0D8A4(&RecommendedConfigSaveData_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11076/*"RECOMENDED_CONFIG_NORMAL"*/, v8);
    byte_4212F45 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)RecommendedConfigSaveData_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_11076/*"RECOMENDED_CONFIG_NORMAL"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11076/*"RECOMENDED_CONFIG_NORMAL"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall RecommendedConfigSaveData___ctor(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_int__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4212F44 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v4);
    byte_4212F44 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectRarityList = v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.selectRarityList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendedConfigSaveData__CanNotSelect(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8

  if ( (byte_4212F43 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, method);
    byte_4212F43 = 1;
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
  RecommendedConfigSaveData_c *v2; // x0

  if ( (byte_4212F40 & 1) == 0 )
  {
    sub_B0D8A4(&RecommendedConfigSaveData_TypeInfo, method);
    byte_4212F40 = 1;
  }
  v2 = RecommendedConfigSaveData_TypeInfo;
  if ( (BYTE3(RecommendedConfigSaveData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    v2 = RecommendedConfigSaveData_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__HasKey(v2->static_fields->SAVE_KEY, 0LL);
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
  __int64 v1; // x1
  __int64 v2; // x1
  RecommendedConfigSaveData_c *v3; // x0
  System_String_o *String_34963268; // x0

  if ( (byte_4212F41 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___, v1);
    sub_B0D8A4(&RecommendedConfigSaveData_TypeInfo, v2);
    byte_4212F41 = 1;
  }
  v3 = RecommendedConfigSaveData_TypeInfo;
  if ( (BYTE3(RecommendedConfigSaveData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    v3 = RecommendedConfigSaveData_TypeInfo;
  }
  String_34963268 = UnityEngine_PlayerPrefs__GetString_34963268(v3->static_fields->SAVE_KEY, 0LL);
  return (RecommendedConfigSaveData_o *)UnityEngine_JsonUtility__FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData_(
                                          String_34963268,
                                          (const MethodInfo_1B690F8 *)Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___);
}


void __fastcall RecommendedConfigSaveData__SaveConfig(
        RecommendedConfigSaveData_o *this,
        RecommendedConfigSaveData_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  RecommendedConfigSaveData_c *v5; // x8

  if ( (byte_4212F42 & 1) == 0 )
  {
    sub_B0D8A4(&RecommendedConfigSaveData_TypeInfo, saveData);
    byte_4212F42 = 1;
  }
  v4 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)saveData, 0LL);
  v5 = RecommendedConfigSaveData_TypeInfo;
  if ( (BYTE3(RecommendedConfigSaveData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    v5 = RecommendedConfigSaveData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v5->static_fields->SAVE_KEY, v4, 0LL);
}