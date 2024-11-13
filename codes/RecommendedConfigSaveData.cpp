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
  __int64 v9; // x2

  if ( (byte_4B19A9B & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendedConfigSaveData_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11125/*"RECOMENDED_CONFIG_NORMAL"*/, v8, v9);
    byte_4B19A9B = 1;
  }
  RecommendedConfigSaveData_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_11125/*"RECOMENDED_CONFIG_NORMAL"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecommendedConfigSaveData_TypeInfo->static_fields,
    StringLiteral_11125/*"RECOMENDED_CONFIG_NORMAL"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RecommendedConfigSaveData___ctor(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_int__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B19A9A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v5, v6);
    byte_4B19A9A = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.selectRarityList = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectRarityList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendedConfigSaveData__CanNotSelect(RecommendedConfigSaveData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8

  if ( (byte_4B19A99 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, method, v2);
    byte_4B19A99 = 1;
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
  __int64 v2; // x2
  RecommendedConfigSaveData_c *v3; // x0

  if ( (byte_4B19A96 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendedConfigSaveData_TypeInfo, method, v2);
    byte_4B19A96 = 1;
  }
  v3 = RecommendedConfigSaveData_TypeInfo;
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo, method);
    v3 = RecommendedConfigSaveData_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__HasKey(v3->static_fields->SAVE_KEY, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  RecommendedConfigSaveData_c *v5; // x0
  System_String_o *String_70112520; // x0

  if ( (byte_4B19A97 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___, v1, v2);
    sub_1BCA7E0(&RecommendedConfigSaveData_TypeInfo, v3, v4);
    byte_4B19A97 = 1;
  }
  v5 = RecommendedConfigSaveData_TypeInfo;
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo, v1);
    v5 = RecommendedConfigSaveData_TypeInfo;
  }
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520(v5->static_fields->SAVE_KEY, 0LL);
  return (RecommendedConfigSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                          String_70112520,
                                          (const MethodInfo_2F7A630 *)Method_UnityEngine_JsonUtility_FromJson_RecommendedConfigSaveData___);
}


void __fastcall RecommendedConfigSaveData__SaveConfig(
        RecommendedConfigSaveData_o *this,
        RecommendedConfigSaveData_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  __int64 v5; // x1
  RecommendedConfigSaveData_c *v6; // x8
  System_String_o *v7; // x19

  if ( (byte_4B19A98 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendedConfigSaveData_TypeInfo, saveData, method);
    byte_4B19A98 = 1;
  }
  v4 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)saveData, 0LL);
  v6 = RecommendedConfigSaveData_TypeInfo;
  v7 = v4;
  if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo, v5);
    v6 = RecommendedConfigSaveData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v6->static_fields->SAVE_KEY, v7, 0LL);
}