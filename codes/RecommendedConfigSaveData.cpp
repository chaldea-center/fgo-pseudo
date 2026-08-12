void RecommendedConfigSaveData___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5974AD6 & 1) == 0 )
  {
    sub_2213A60(&RecommendedConfigSaveData_TypeInfo);
    sub_2213A60(&StringLiteral_11474/*"RECOMENDED_CONFIG_NORMAL"*/);
    byte_5974AD6 = 1;
  }
  v7 = StringLiteral_11474/*"RECOMENDED_CONFIG_NORMAL"*/;
  RecommendedConfigSaveData_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_11474/*"RECOMENDED_CONFIG_NORMAL"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecommendedConfigSaveData_TypeInfo->static_fields,
    v7,
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_int__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5974AD5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5974AD5 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectClassTypeList = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectRarityList = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectRarityList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendedConfigSaveData__IsAutoSetOn(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  return this->fields.isAutoSet != 0;
}


bool RecommendedConfigSaveData__IsExist(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  RecommendedConfigSaveData_c *v2; // x0

  if ( (byte_5974AD2 & 1) == 0 )
  {
    sub_2213A60(&RecommendedConfigSaveData_TypeInfo);
    byte_5974AD2 = 1;
  }
  v2 = RecommendedConfigSaveData_TypeInfo;
  if ( !*(&RecommendedConfigSaveData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo, method);
    v2 = RecommendedConfigSaveData_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__HasKey(v2->static_fields->SAVE_KEY, 0);
}


RecommendedConfigSaveData_o *RecommendedConfigSaveData__LoadConfigSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  RecommendedConfigSaveData_c *v2; // x0
  System_String_o *String_83398240; // x0

  if ( (byte_5974AD3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___);
    sub_2213A60(&RecommendedConfigSaveData_TypeInfo);
    byte_5974AD3 = 1;
  }
  v2 = RecommendedConfigSaveData_TypeInfo;
  if ( !*(&RecommendedConfigSaveData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo, v1);
    v2 = RecommendedConfigSaveData_TypeInfo;
  }
  String_83398240 = UnityEngine_PlayerPrefs__GetString_83398240(v2->static_fields->SAVE_KEY, 0);
  return (RecommendedConfigSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                          String_83398240,
                                          (const MethodInfo_38D4A70 *)Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___);
}


void RecommendedConfigSaveData__SaveConfig(
        RecommendedConfigSaveData_o *this,
        RecommendedConfigSaveData_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  __int64 v5; // x1
  RecommendedConfigSaveData_c *v6; // x8
  System_String_o *v7; // x19

  if ( (byte_5974AD4 & 1) == 0 )
  {
    sub_2213A60(&RecommendedConfigSaveData_TypeInfo);
    byte_5974AD4 = 1;
  }
  v4 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)saveData, 0);
  v6 = RecommendedConfigSaveData_TypeInfo;
  v7 = v4;
  if ( !*(&RecommendedConfigSaveData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo, v5);
    v6 = RecommendedConfigSaveData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v6->static_fields->SAVE_KEY, v7, 0);
}