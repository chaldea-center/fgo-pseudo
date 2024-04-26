void __fastcall RecommendedConfigSaveData___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_4355869 & 1) == 0 )
  {
    sub_B70694(&RecommendedConfigSaveData_TypeInfo);
    sub_B70694(&StringLiteral_11203/*"RECOMENDED_CONFIG_NORMAL"*/);
    byte_4355869 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)RecommendedConfigSaveData_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_11203/*"RECOMENDED_CONFIG_NORMAL"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11203/*"RECOMENDED_CONFIG_NORMAL"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall RecommendedConfigSaveData___ctor(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4355868 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_4355868 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectRarityList = v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.selectRarityList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendedConfigSaveData__CanNotSelect(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8

  if ( (byte_4355867 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4355867 = 1;
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

  if ( (byte_4355864 & 1) == 0 )
  {
    sub_B70694(&RecommendedConfigSaveData_TypeInfo);
    byte_4355864 = 1;
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
  RecommendedConfigSaveData_c *v1; // x0
  System_String_o *String_36095200; // x0

  if ( (byte_4355865 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___);
    sub_B70694(&RecommendedConfigSaveData_TypeInfo);
    byte_4355865 = 1;
  }
  v1 = RecommendedConfigSaveData_TypeInfo;
  if ( (BYTE3(RecommendedConfigSaveData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    v1 = RecommendedConfigSaveData_TypeInfo;
  }
  String_36095200 = UnityEngine_PlayerPrefs__GetString_36095200(v1->static_fields->SAVE_KEY, 0LL);
  return (RecommendedConfigSaveData_o *)UnityEngine_JsonUtility__FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData_(
                                          String_36095200,
                                          (const MethodInfo_1D51378 *)Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___);
}


void __fastcall RecommendedConfigSaveData__SaveConfig(
        RecommendedConfigSaveData_o *this,
        RecommendedConfigSaveData_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  RecommendedConfigSaveData_c *v5; // x8

  if ( (byte_4355866 & 1) == 0 )
  {
    sub_B70694(&RecommendedConfigSaveData_TypeInfo);
    byte_4355866 = 1;
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