void __fastcall TreasureDvcInfo___ctor(TreasureDvcInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  void *v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  void *v11; // x1
  struct System_String_o **p_explanation; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B17459 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17459 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.id = 0LL;
  this->fields.maxLv = 0;
  v4 = StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.name, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_explanation = &this->fields.explanation;
  sub_1BCA784((PartyOrganizationUtility_o *)p_explanation, (int64_t)v11, v13, v14, v15, v16, v17, v18);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  TreasureDvcEntity_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  TreasureDvcEntity_o *v18; // x19
  System_String_o *v19; // x0
  LocalizationManager_c *v21; // x0

  if ( (byte_4B1745A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_9461/*"NP_NAME"*/, v11, v12);
    byte_4B1745A = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v14);
  }
  v15 = TreasureDvcMaster__GetEntityCheckServantOverwrite((TreasureDvcMaster_o *)Instance, svtId, this->fields.id, 0LL);
  v18 = v15;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v15 )
    {
LABEL_8:
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9461/*"NP_NAME"*/, 0LL);
      return System_String__Format(v19, (Il2CppObject *)v18->fields.name, 0LL);
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    if ( v18 )
      goto LABEL_8;
  }
  if ( !byte_4B1194D )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    byte_4B1194D = 1;
  }
  v21 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v21 = LocalizationManager_TypeInfo;
  }
  return v21->static_fields->unknownNameText;
}