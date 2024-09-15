void __fastcall TreasureDvcInfo___ctor(TreasureDvcInfo_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  int32_t v5; // w3
  int32_t v6; // w1
  struct System_String_o **p_explanation; // x19
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A2F15D & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_1/*""*/, method);
    byte_4A2F15D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.id = 0LL;
  this->fields.maxLv = 0;
  v3 = (int)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.name, v3, v4, v5);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_explanation = &this->fields.explanation;
  sub_1B76164((ServantStatusBattleListViewItem_o *)p_explanation, v6, v8, v9);
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

  if ( (byte_4A2F15E & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, *(_QWORD *)&svtId);
    sub_1B761C0(&LocalizationManager_TypeInfo, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B761C0(&StringLiteral_1/*""*/, v7);
    sub_1B761C0(&StringLiteral_9326/*"NP_NAME"*/, v8);
    byte_4A2F15E = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_1B7641C(Instance, v10);
  }
  v11 = TreasureDvcMaster__GetEntityCheckServantOverwrite((TreasureDvcMaster_o *)Instance, svtId, this->fields.id, 0LL);
  v13 = v11;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v11 )
    {
LABEL_8:
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_9326/*"NP_NAME"*/, 0LL);
      return System_String__Format(v14, (Il2CppObject *)v13->fields.name, 0LL);
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v13 )
      goto LABEL_8;
  }
  if ( !byte_4A29821 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, v12);
    byte_4A29821 = 1;
  }
  v16 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager_TypeInfo;
  }
  return v16->static_fields->unknownNameText;
}