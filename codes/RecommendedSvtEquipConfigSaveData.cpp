void RecommendedSvtEquipConfigSaveData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4CCB419 & 1) == 0 )
  {
    sub_1C713B0(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_1C713B0(&StringLiteral_11019/*"RECOMMENDED_SVT_EQUIP_CONFIG"*/);
    byte_4CCB419 = 1;
  }
  RecommendedSvtEquipConfigSaveData_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_11019/*"RECOMMENDED_SVT_EQUIP_CONFIG"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)RecommendedSvtEquipConfigSaveData_TypeInfo->static_fields,
    StringLiteral_11019/*"RECOMMENDED_SVT_EQUIP_CONFIG"*/,
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
  System_Collections_Generic_List_int__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CCB418 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CCB418 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectTypeList = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectRarityList = v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.selectRarityList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectCombineStatusList = v17;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.selectCombineStatusList,
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

  if ( (byte_4CCB415 & 1) == 0 )
  {
    sub_1C713B0(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    byte_4CCB415 = 1;
  }
  v2 = RecommendedSvtEquipConfigSaveData_TypeInfo;
  if ( !RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo);
    v2 = RecommendedSvtEquipConfigSaveData_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__HasKey(v2->static_fields->SAVE_KEY, 0);
}


RecommendedSvtEquipConfigSaveData_o *RecommendedSvtEquipConfigSaveData__LoadConfigSaveData(const MethodInfo *method)
{
  RecommendedSvtEquipConfigSaveData_c *v1; // x0
  System_String_o *String_71682912; // x0

  if ( (byte_4CCB416 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_JsonUtility_FromJson_RecommendedSvtEquipConfigSaveData___);
    sub_1C713B0(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    byte_4CCB416 = 1;
  }
  v1 = RecommendedSvtEquipConfigSaveData_TypeInfo;
  if ( !RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo);
    v1 = RecommendedSvtEquipConfigSaveData_TypeInfo;
  }
  String_71682912 = UnityEngine_PlayerPrefs__GetString_71682912(v1->static_fields->SAVE_KEY, 0);
  return (RecommendedSvtEquipConfigSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                                  String_71682912,
                                                  (const MethodInfo_31BBC68 *)Method_UnityEngine_JsonUtility_FromJson_RecommendedSvtEquipConfigSaveData___);
}


void RecommendedSvtEquipConfigSaveData__SaveConfig(
        RecommendedSvtEquipConfigSaveData_o *this,
        RecommendedSvtEquipConfigSaveData_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  RecommendedSvtEquipConfigSaveData_c *v5; // x8
  System_String_o *v6; // x19

  if ( (byte_4CCB417 & 1) == 0 )
  {
    sub_1C713B0(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    byte_4CCB417 = 1;
  }
  v4 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)saveData, 0);
  v5 = RecommendedSvtEquipConfigSaveData_TypeInfo;
  v6 = v4;
  if ( !RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo);
    v5 = RecommendedSvtEquipConfigSaveData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v5->static_fields->SAVE_KEY, v6, 0);
}