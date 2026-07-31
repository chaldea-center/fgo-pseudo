void RecommendedSvtEquipConfigSaveData___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_593C8A3 & 1) == 0 )
  {
    sub_21FFC50(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_21FFC50(&StringLiteral_11472/*"RECOMMENDED_SVT_EQUIP_CONFIG"*/);
    byte_593C8A3 = 1;
  }
  v7 = StringLiteral_11472/*"RECOMMENDED_SVT_EQUIP_CONFIG"*/;
  RecommendedSvtEquipConfigSaveData_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_11472/*"RECOMMENDED_SVT_EQUIP_CONFIG"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)RecommendedSvtEquipConfigSaveData_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void RecommendedSvtEquipConfigSaveData___ctor(RecommendedSvtEquipConfigSaveData_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_int__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_593C8A2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_593C8A2 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectTypeList = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectRarityList = v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectRarityList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectCombineStatusList = v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectCombineStatusList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendedSvtEquipConfigSaveData__IsAutoSetOn(
        RecommendedSvtEquipConfigSaveData_o *this,
        const MethodInfo *method)
{
  return this->fields.isAutoSet != 0;
}


bool RecommendedSvtEquipConfigSaveData__IsExist(RecommendedSvtEquipConfigSaveData_o *this, const MethodInfo *method)
{
  RecommendedSvtEquipConfigSaveData_c *v2; // x0

  if ( (byte_593C89F & 1) == 0 )
  {
    sub_21FFC50(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    byte_593C89F = 1;
  }
  v2 = RecommendedSvtEquipConfigSaveData_TypeInfo;
  if ( !*(&RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo, method);
    v2 = RecommendedSvtEquipConfigSaveData_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__HasKey(v2->static_fields->SAVE_KEY, 0);
}


RecommendedSvtEquipConfigSaveData_o *RecommendedSvtEquipConfigSaveData__LoadConfigSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  RecommendedSvtEquipConfigSaveData_c *v2; // x0
  System_String_o *String_83184936; // x0

  if ( (byte_593C8A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_JsonUtility_FromJson_RecommendedSvtEquipConfigSaveData___);
    sub_21FFC50(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    byte_593C8A0 = 1;
  }
  v2 = RecommendedSvtEquipConfigSaveData_TypeInfo;
  if ( !*(&RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo, v1);
    v2 = RecommendedSvtEquipConfigSaveData_TypeInfo;
  }
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936(v2->static_fields->SAVE_KEY, 0);
  return (RecommendedSvtEquipConfigSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                                  String_83184936,
                                                  (const MethodInfo_38A15A8 *)Method_UnityEngine_JsonUtility_FromJson_RecommendedSvtEquipConfigSaveData___);
}


void RecommendedSvtEquipConfigSaveData__SaveConfig(
        RecommendedSvtEquipConfigSaveData_o *this,
        RecommendedSvtEquipConfigSaveData_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  __int64 v5; // x1
  RecommendedSvtEquipConfigSaveData_c *v6; // x8
  System_String_o *v7; // x19

  if ( (byte_593C8A1 & 1) == 0 )
  {
    sub_21FFC50(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    byte_593C8A1 = 1;
  }
  v4 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)saveData, 0);
  v6 = RecommendedSvtEquipConfigSaveData_TypeInfo;
  v7 = v4;
  if ( !*(&RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo, v5);
    v6 = RecommendedSvtEquipConfigSaveData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v6->static_fields->SAVE_KEY, v7, 0);
}