void __fastcall RecommendedConfigSaveData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B05D72 & 1) == 0 )
  {
    sub_1BC3008(&RecommendedConfigSaveData_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_10904/*"RECOMENDED_CONFIG_NORMAL"*/, v4);
    byte_4B05D72 = 1;
  }
  RecommendedConfigSaveData_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_10904/*"RECOMENDED_CONFIG_NORMAL"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)RecommendedConfigSaveData_TypeInfo->static_fields, StringLiteral_10904/*"RECOMENDED_CONFIG_NORMAL"*/, v2, v3);
}


void __fastcall RecommendedConfigSaveData___ctor(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_int__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B05D71 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4B05D71 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectRarityList = v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.selectRarityList, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendedConfigSaveData__CanNotSelect(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8

  if ( (byte_4B05D70 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, method);
    byte_4B05D70 = 1;
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

  if ( (byte_4B05D6D & 1) == 0 )
  {
    sub_1BC3008(&RecommendedConfigSaveData_TypeInfo, method);
    byte_4B05D6D = 1;
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
  System_String_o *String_69993112; // x0

  if ( (byte_4B05D6E & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___, v1);
    sub_1BC3008(&RecommendedConfigSaveData_TypeInfo, v2);
    byte_4B05D6E = 1;
  }
  v3 = RecommendedConfigSaveData_TypeInfo;
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    v3 = RecommendedConfigSaveData_TypeInfo;
  }
  String_69993112 = UnityEngine_PlayerPrefs__GetString_69993112(v3->static_fields->SAVE_KEY, 0LL);
  return (RecommendedConfigSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                          String_69993112,
                                          (const MethodInfo_306E7C8 *)Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___);
}


void __fastcall RecommendedConfigSaveData__SaveConfig(
        RecommendedConfigSaveData_o *this,
        RecommendedConfigSaveData_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  RecommendedConfigSaveData_c *v5; // x8
  System_String_o *v6; // x19

  if ( (byte_4B05D6F & 1) == 0 )
  {
    sub_1BC3008(&RecommendedConfigSaveData_TypeInfo, saveData);
    byte_4B05D6F = 1;
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