void __fastcall RecommendedConfigSaveData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A02284 & 1) == 0 )
  {
    sub_1B64A00(&RecommendedConfigSaveData_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_10939/*"RECOMENDED_CONFIG_NORMAL"*/, v4);
    byte_4A02284 = 1;
  }
  RecommendedConfigSaveData_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_10939/*"RECOMENDED_CONFIG_NORMAL"*/;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)RecommendedConfigSaveData_TypeInfo->static_fields,
    StringLiteral_10939/*"RECOMENDED_CONFIG_NORMAL"*/,
    v2,
    v3);
}


void __fastcall RecommendedConfigSaveData___ctor(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_int__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A02283 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4A02283 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectRarityList = v4;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.selectRarityList, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendedConfigSaveData__CanNotSelect(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8

  if ( (byte_4A02282 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_int__get_Count__, method);
    byte_4A02282 = 1;
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

  if ( (byte_4A0227F & 1) == 0 )
  {
    sub_1B64A00(&RecommendedConfigSaveData_TypeInfo, method);
    byte_4A0227F = 1;
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
  __int64 v1; // x1
  __int64 v2; // x1
  RecommendedConfigSaveData_c *v3; // x0
  System_String_o *String_69095752; // x0

  if ( (byte_4A02280 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___, v1);
    sub_1B64A00(&RecommendedConfigSaveData_TypeInfo, v2);
    byte_4A02280 = 1;
  }
  v3 = RecommendedConfigSaveData_TypeInfo;
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    v3 = RecommendedConfigSaveData_TypeInfo;
  }
  String_69095752 = UnityEngine_PlayerPrefs__GetString_69095752(v3->static_fields->SAVE_KEY, 0LL);
  return (RecommendedConfigSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                          String_69095752,
                                          (const MethodInfo_2EA2660 *)Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___);
}


void __fastcall RecommendedConfigSaveData__SaveConfig(
        RecommendedConfigSaveData_o *this,
        RecommendedConfigSaveData_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  RecommendedConfigSaveData_c *v5; // x8
  System_String_o *v6; // x19

  if ( (byte_4A02281 & 1) == 0 )
  {
    sub_1B64A00(&RecommendedConfigSaveData_TypeInfo, saveData);
    byte_4A02281 = 1;
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