void RecommendedConfigSaveData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C3B8DF & 1) == 0 )
  {
    sub_1C32C20(&RecommendedConfigSaveData_TypeInfo);
    sub_1C32C20(&StringLiteral_10996/*"RECOMENDED_CONFIG_NORMAL"*/);
    byte_4C3B8DF = 1;
  }
  RecommendedConfigSaveData_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_10996/*"RECOMENDED_CONFIG_NORMAL"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)RecommendedConfigSaveData_TypeInfo->static_fields, StringLiteral_10996/*"RECOMENDED_CONFIG_NORMAL"*/, v1, v2);
}


void RecommendedConfigSaveData___ctor(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_int__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3B8DE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3B8DE = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectClassTypeList = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectRarityList = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selectRarityList, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendedConfigSaveData__IsAutoSetOn(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  return this->fields.isAutoSet != 0;
}


bool RecommendedConfigSaveData__IsExist(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  RecommendedConfigSaveData_c *v2; // x0

  if ( (byte_4C3B8DB & 1) == 0 )
  {
    sub_1C32C20(&RecommendedConfigSaveData_TypeInfo);
    byte_4C3B8DB = 1;
  }
  v2 = RecommendedConfigSaveData_TypeInfo;
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    v2 = RecommendedConfigSaveData_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__HasKey(v2->static_fields->SAVE_KEY, 0);
}


RecommendedConfigSaveData_o *RecommendedConfigSaveData__LoadConfigSaveData(const MethodInfo *method)
{
  RecommendedConfigSaveData_c *v1; // x0
  System_String_o *String_71182452; // x0

  if ( (byte_4C3B8DC & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___);
    sub_1C32C20(&RecommendedConfigSaveData_TypeInfo);
    byte_4C3B8DC = 1;
  }
  v1 = RecommendedConfigSaveData_TypeInfo;
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    v1 = RecommendedConfigSaveData_TypeInfo;
  }
  String_71182452 = UnityEngine_PlayerPrefs__GetString_71182452(v1->static_fields->SAVE_KEY, 0);
  return (RecommendedConfigSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                          String_71182452,
                                          (const MethodInfo_314D708 *)Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___);
}


void RecommendedConfigSaveData__SaveConfig(
        RecommendedConfigSaveData_o *this,
        RecommendedConfigSaveData_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  RecommendedConfigSaveData_c *v5; // x8
  System_String_o *v6; // x19

  if ( (byte_4C3B8DD & 1) == 0 )
  {
    sub_1C32C20(&RecommendedConfigSaveData_TypeInfo);
    byte_4C3B8DD = 1;
  }
  v4 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)saveData, 0);
  v5 = RecommendedConfigSaveData_TypeInfo;
  v6 = v4;
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    v5 = RecommendedConfigSaveData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v5->static_fields->SAVE_KEY, v6, 0);
}