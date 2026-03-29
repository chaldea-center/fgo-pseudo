void TreasureDvcInfo___ctor(TreasureDvcInfo_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w1
  struct System_String_o **p_explanation; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D31EF0 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31EF0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)&this->fields.id = 0;
  this->fields.maxLv = 0;
  v3 = StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.name, v3, v4, v5, v6, v7, v8, v9);
  v10 = StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_explanation = &this->fields.explanation;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_explanation, v10, v12, v13, v14, v15, v16, v17);
  p_explanation[1] = 0;
  p_explanation[2] = 0;
  *((_BYTE *)p_explanation + 24) = 0;
}


bool TreasureDvcInfo__Equals(TreasureDvcInfo_o *this, TreasureDvcInfo_o *info, const MethodInfo *method)
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


System_String_o *TreasureDvcInfo__GetName(TreasureDvcInfo_o *this, int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  TreasureDvcEntity_o *v7; // x0
  TreasureDvcEntity_o *v8; // x19
  System_String_o *v9; // x0
  LocalizationManager_c *v11; // x0

  if ( (byte_4D31EF1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_9416/*"NP_NAME"*/);
    byte_4D31EF1 = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v6);
  }
  v7 = TreasureDvcMaster__GetEntityCheckServantOverwrite((TreasureDvcMaster_o *)Instance, svtId, this->fields.id, 0);
  v8 = v7;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v7 )
    {
LABEL_8:
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9416/*"NP_NAME"*/, 0);
      return System_String__Format(v9, (Il2CppObject *)v8->fields.name, 0);
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v8 )
      goto LABEL_8;
  }
  if ( !byte_4D2BD02 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2BD02 = 1;
  }
  v11 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
  }
  return v11->static_fields->unknownNameText;
}