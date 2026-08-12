void TreasureDvcInfo___ctor(TreasureDvcInfo_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  int32_t v10; // w1
  struct System_String_o **p_explanation; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5971DEA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971DEA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (struct System_String_o *)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields.id = 0;
  this->fields.maxLv = 0;
  this->fields.name = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.name, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_explanation = &this->fields.explanation;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_explanation, v10, v12, v13, v14, v15, v16, v17);
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
  __int64 v7; // x1
  TreasureDvcEntity_o *v8; // x19
  int v9; // w8
  System_String_o *v10; // x0
  LocalizationManager_c *v12; // x0

  if ( (byte_5971DEB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_9748/*"NP_NAME"*/);
    byte_5971DEB = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  v8 = TreasureDvcMaster__GetEntityCheckServantOverwrite((TreasureDvcMaster_o *)Instance, svtId, this->fields.id, 0);
  v9 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( v8 )
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_9748/*"NP_NAME"*/, 0);
    return System_String__Format(v10, (Il2CppObject *)v8->fields.name, 0);
  }
  else
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
    if ( !byte_596B976 )
    {
      sub_2213A60(&LocalizationManager_TypeInfo);
      byte_596B976 = 1;
    }
    v12 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
      v12 = LocalizationManager_TypeInfo;
    }
    return v12->static_fields->unknownNameText;
  }
}