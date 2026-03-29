void RecommendedConfigSaveData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D34A63 & 1) == 0 )
  {
    sub_1C93AD4(&RecommendedConfigSaveData_TypeInfo);
    sub_1C93AD4(&StringLiteral_11076/*"RECOMENDED_CONFIG_NORMAL"*/);
    byte_4D34A63 = 1;
  }
  RecommendedConfigSaveData_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_11076/*"RECOMENDED_CONFIG_NORMAL"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)RecommendedConfigSaveData_TypeInfo->static_fields,
    StringLiteral_11076/*"RECOMENDED_CONFIG_NORMAL"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void RecommendedConfigSaveData___ctor(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_int__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D34A62 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D34A62 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectClassTypeList = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectRarityList = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.selectRarityList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendedConfigSaveData__IsAutoSetOn(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  return this->fields.isAutoSet != 0;
}


bool RecommendedConfigSaveData__IsExist(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  RecommendedConfigSaveData_c *v2; // x0

  if ( (byte_4D34A5F & 1) == 0 )
  {
    sub_1C93AD4(&RecommendedConfigSaveData_TypeInfo);
    byte_4D34A5F = 1;
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
  System_String_o *String_72078212; // x0

  if ( (byte_4D34A60 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___);
    sub_1C93AD4(&RecommendedConfigSaveData_TypeInfo);
    byte_4D34A60 = 1;
  }
  v1 = RecommendedConfigSaveData_TypeInfo;
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    v1 = RecommendedConfigSaveData_TypeInfo;
  }
  String_72078212 = UnityEngine_PlayerPrefs__GetString_72078212(v1->static_fields->SAVE_KEY, 0);
  return (RecommendedConfigSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                          String_72078212,
                                          (const MethodInfo_3214E1C *)Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___);
}


void RecommendedConfigSaveData__SaveConfig(
        RecommendedConfigSaveData_o *this,
        RecommendedConfigSaveData_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  RecommendedConfigSaveData_c *v5; // x8
  System_String_o *v6; // x19

  if ( (byte_4D34A61 & 1) == 0 )
  {
    sub_1C93AD4(&RecommendedConfigSaveData_TypeInfo);
    byte_4D34A61 = 1;
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