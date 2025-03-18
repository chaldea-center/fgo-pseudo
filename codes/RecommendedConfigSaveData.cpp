void __fastcall RecommendedConfigSaveData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4C259BF & 1) == 0 )
  {
    sub_1C3B764(&RecommendedConfigSaveData_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_11217/*"SCRIPT_ACTION_SKIP_CONFIRM_EXIT"*/, v8);
    byte_4C259BF = 1;
  }
  RecommendedConfigSaveData_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_11217/*"SCRIPT_ACTION_SKIP_CONFIRM_EXIT"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)RecommendedConfigSaveData_TypeInfo->static_fields,
    StringLiteral_11217/*"SCRIPT_ACTION_SKIP_CONFIRM_EXIT"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RecommendedConfigSaveData___ctor(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_int__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C259BE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4C259BE = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectRarityList = v4;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.selectRarityList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendedConfigSaveData__CanNotSelect(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8

  if ( (byte_4C259BD & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, method);
    byte_4C259BD = 1;
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

  if ( (byte_4C259BA & 1) == 0 )
  {
    sub_1C3B764(&RecommendedConfigSaveData_TypeInfo, method);
    byte_4C259BA = 1;
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
  System_String_o *String_71081024; // x0

  if ( (byte_4C259BB & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___, v1);
    sub_1C3B764(&RecommendedConfigSaveData_TypeInfo, v2);
    byte_4C259BB = 1;
  }
  v3 = RecommendedConfigSaveData_TypeInfo;
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    v3 = RecommendedConfigSaveData_TypeInfo;
  }
  String_71081024 = UnityEngine_PlayerPrefs__GetString_71081024(v3->static_fields->SAVE_KEY, 0LL);
  return (RecommendedConfigSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                          String_71081024,
                                          (const MethodInfo_3059B94 *)Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___);
}


void __fastcall RecommendedConfigSaveData__SaveConfig(
        RecommendedConfigSaveData_o *this,
        RecommendedConfigSaveData_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  RecommendedConfigSaveData_c *v5; // x8
  System_String_o *v6; // x19

  if ( (byte_4C259BC & 1) == 0 )
  {
    sub_1C3B764(&RecommendedConfigSaveData_TypeInfo, saveData);
    byte_4C259BC = 1;
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