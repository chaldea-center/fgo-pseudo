void __fastcall RecommendedConfigSaveData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5E94A & 1) == 0 )
  {
    sub_1B885B0(&RecommendedConfigSaveData_TypeInfo);
    sub_1B885B0(&StringLiteral_10989/*"RECOMENDED_CONFIG_NORMAL"*/);
    byte_4A5E94A = 1;
  }
  RecommendedConfigSaveData_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_10989/*"RECOMENDED_CONFIG_NORMAL"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RecommendedConfigSaveData_TypeInfo->static_fields,
    StringLiteral_10989/*"RECOMENDED_CONFIG_NORMAL"*/,
    v1,
    v2);
}


void __fastcall RecommendedConfigSaveData___ctor(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E949 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5E949 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectRarityList = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectRarityList, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendedConfigSaveData__CanNotSelect(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8

  if ( (byte_4A5E948 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4A5E948 = 1;
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

  if ( (byte_4A5E945 & 1) == 0 )
  {
    sub_1B885B0(&RecommendedConfigSaveData_TypeInfo);
    byte_4A5E945 = 1;
  }
  v2 = RecommendedConfigSaveData_TypeInfo;
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
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
  System_String_o *String_69417656; // x0

  if ( (byte_4A5E946 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___);
    sub_1B885B0(&RecommendedConfigSaveData_TypeInfo);
    byte_4A5E946 = 1;
  }
  v1 = RecommendedConfigSaveData_TypeInfo;
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    v1 = RecommendedConfigSaveData_TypeInfo;
  }
  String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656(v1->static_fields->SAVE_KEY, 0LL);
  return (RecommendedConfigSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                          String_69417656,
                                          (const MethodInfo_2EE6DEC *)Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___);
}


void __fastcall RecommendedConfigSaveData__SaveConfig(
        RecommendedConfigSaveData_o *this,
        RecommendedConfigSaveData_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  RecommendedConfigSaveData_c *v5; // x8
  System_String_o *v6; // x19

  if ( (byte_4A5E947 & 1) == 0 )
  {
    sub_1B885B0(&RecommendedConfigSaveData_TypeInfo);
    byte_4A5E947 = 1;
  }
  v4 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)saveData, 0LL);
  v5 = RecommendedConfigSaveData_TypeInfo;
  v6 = v4;
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    v5 = RecommendedConfigSaveData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v5->static_fields->SAVE_KEY, v6, 0LL);
}