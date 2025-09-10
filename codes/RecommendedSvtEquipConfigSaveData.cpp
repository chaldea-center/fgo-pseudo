void RecommendedSvtEquipConfigSaveData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C2B1C5 & 1) == 0 )
  {
    sub_1C2D490(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    sub_1C2D490(&StringLiteral_11008/*"RECOMMENDED_SVT_EQUIP_CONFIG"*/);
    byte_4C2B1C5 = 1;
  }
  RecommendedSvtEquipConfigSaveData_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_11008/*"RECOMMENDED_SVT_EQUIP_CONFIG"*/;
  sub_1C2D434(
    (CGThumbnailListItem_o *)RecommendedSvtEquipConfigSaveData_TypeInfo->static_fields,
    StringLiteral_11008/*"RECOMMENDED_SVT_EQUIP_CONFIG"*/,
    v1,
    v2);
}


void RecommendedSvtEquipConfigSaveData___ctor(RecommendedSvtEquipConfigSaveData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_int__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_int__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C2B1C4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C2B1C4 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectTypeList = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectRarityList = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectRarityList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectCombineStatusList = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectCombineStatusList, (int32_t)v9, v10, v11);
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

  if ( (byte_4C2B1C1 & 1) == 0 )
  {
    sub_1C2D490(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    byte_4C2B1C1 = 1;
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
  System_String_o *String_71122516; // x0

  if ( (byte_4C2B1C2 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_JsonUtility_FromJson_RecommendedSvtEquipConfigSaveData___);
    sub_1C2D490(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    byte_4C2B1C2 = 1;
  }
  v1 = RecommendedSvtEquipConfigSaveData_TypeInfo;
  if ( !RecommendedSvtEquipConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedSvtEquipConfigSaveData_TypeInfo);
    v1 = RecommendedSvtEquipConfigSaveData_TypeInfo;
  }
  String_71122516 = UnityEngine_PlayerPrefs__GetString_71122516(v1->static_fields->SAVE_KEY, 0);
  return (RecommendedSvtEquipConfigSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                                  String_71122516,
                                                  (const MethodInfo_313EC68 *)Method_UnityEngine_JsonUtility_FromJson_RecommendedSvtEquipConfigSaveData___);
}


void RecommendedSvtEquipConfigSaveData__SaveConfig(
        RecommendedSvtEquipConfigSaveData_o *this,
        RecommendedSvtEquipConfigSaveData_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  RecommendedSvtEquipConfigSaveData_c *v5; // x8
  System_String_o *v6; // x19

  if ( (byte_4C2B1C3 & 1) == 0 )
  {
    sub_1C2D490(&RecommendedSvtEquipConfigSaveData_TypeInfo);
    byte_4C2B1C3 = 1;
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