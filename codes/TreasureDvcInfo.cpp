void __fastcall TreasureDvcInfo___ctor(TreasureDvcInfo_o *this, const MethodInfo *method)
{
  void *v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  void *v10; // x1
  struct System_String_o **p_explanation; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BFEA56 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BFEA56 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.id = 0LL;
  this->fields.maxLv = 0;
  v3 = StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.name, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_explanation = &this->fields.explanation;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_explanation, (int64_t)v10, v12, v13, v14, v15, v16, v17);
  p_explanation[1] = 0LL;
  p_explanation[2] = 0LL;
  *((_BYTE *)p_explanation + 24) = 0;
}


bool __fastcall TreasureDvcInfo__Equals(TreasureDvcInfo_o *this, TreasureDvcInfo_o *info, const MethodInfo *method)
{
  int32_t id; // w8

  id = this->fields.id;
  if ( info )
  {
    if ( id != info->fields.id )
      return 0;
    return this->fields.lv == info->fields.lv;
  }
  else
  {
    return id == 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TreasureDvcInfo__GetName(TreasureDvcInfo_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  TreasureDvcEntity_o *v11; // x0
  __int64 v12; // x1
  TreasureDvcEntity_o *v13; // x19
  System_String_o *v14; // x0
  LocalizationManager_c *v16; // x0

  if ( (byte_4BFEA57 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, *(_QWORD *)&svtId);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1C2E12C(&StringLiteral_1/*""*/, v7);
    sub_1C2E12C(&StringLiteral_9517/*"NP_NAME"*/, v8);
    byte_4BFEA57 = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_1C2E388(Instance, v10);
  }
  v11 = TreasureDvcMaster__GetEntityCheckServantOverwrite((TreasureDvcMaster_o *)Instance, svtId, this->fields.id, 0LL);
  v13 = v11;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v11 )
    {
LABEL_8:
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_9517/*"NP_NAME"*/, 0LL);
      return System_String__Format(v14, (Il2CppObject *)v13->fields.name, 0LL);
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v13 )
      goto LABEL_8;
  }
  if ( !byte_4BF8DA3 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, v12);
    byte_4BF8DA3 = 1;
  }
  v16 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager_TypeInfo;
  }
  return v16->static_fields->unknownNameText;
}