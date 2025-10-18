void TreasureDvcInfo___ctor(TreasureDvcInfo_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  struct System_String_o **p_explanation; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C4440C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4440C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)&this->fields.id = 0;
  this->fields.maxLv = 0;
  v3 = StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.name, v3, v4, v5);
  v6 = StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_explanation = &this->fields.explanation;
  sub_1C36FFC((CGThumbnailListItem_o *)p_explanation, v6, v8, v9);
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
  TreasureDvcEntity_o *v6; // x0
  TreasureDvcEntity_o *v7; // x19
  System_String_o *v8; // x0
  LocalizationManager_c *v10; // x0

  if ( (byte_4C4440D & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_9362/*"NP_NAME"*/);
    byte_4C4440D = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  v6 = TreasureDvcMaster__GetEntityCheckServantOverwrite((TreasureDvcMaster_o *)Instance, svtId, this->fields.id, 0);
  v7 = v6;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v6 )
    {
LABEL_8:
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_9362/*"NP_NAME"*/, 0);
      return System_String__Format(v8, (Il2CppObject *)v7->fields.name, 0);
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v7 )
      goto LABEL_8;
  }
  if ( !byte_4C3E2C9 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    byte_4C3E2C9 = 1;
  }
  v10 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager_TypeInfo;
  }
  return v10->static_fields->unknownNameText;
}