void __fastcall TreasureDvcInfo___ctor(TreasureDvcInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array **v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42EACD5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EACD5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.id = 0LL;
  this->fields.maxLv = 0;
  v5 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.name, v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.explanation, v12, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)&this->fields.guageCount = 0LL;
  *(_QWORD *)&this->fields.strengthStatus = 0LL;
  this->fields.isUse = 0;
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


System_String_o *__fastcall TreasureDvcInfo__GetName(TreasureDvcInfo_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  TreasureDvcEntity_o *v21; // x0
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  TreasureDvcEntity_o *v25; // x19
  System_String_o *v26; // x0
  LocalizationManager_c *v28; // x0

  if ( (byte_42EACD6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_9479/*"NP_NAME"*/, v15, v16, v17);
    byte_42EACD6 = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v19);
  }
  v21 = TreasureDvcMaster__GetEntityCheckServantOverwrite((TreasureDvcMaster_o *)Instance, svtId, this->fields.id, v20);
  if ( v21 )
  {
    v25 = v21;
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_9479/*"NP_NAME"*/, 0LL);
    return System_String__Format(v26, (Il2CppObject *)v25->fields.name, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_42E6772 )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v23, v24);
      byte_42E6772 = 1;
    }
    v28 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v28 = LocalizationManager_TypeInfo;
    }
    return v28->static_fields->unknownNameText;
  }
}