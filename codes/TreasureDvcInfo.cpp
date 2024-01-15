void __fastcall TreasureDvcInfo___ctor(TreasureDvcInfo_o *this, const MethodInfo *method)
{
  System_Int32_array **v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40FB89E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FB89E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.id = 0LL;
  this->fields.maxLv = 0;
  v3 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.name, v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.explanation, v10, v11, v12, v13, v14, v15, v16);
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


System_String_o *__fastcall TreasureDvcInfo__GetName(TreasureDvcInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  __int64 v11; // x1
  WarEntity_o *v12; // x19
  System_String_o *v13; // x0
  LocalizationManager_c *v15; // x0

  if ( (byte_40FB89F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    sub_B16FFC(&StringLiteral_9353/*"NP_NAME"*/, v7);
    byte_40FB89F = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             this->fields.id,
             (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( Entity )
  {
    v12 = Entity;
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_9353/*"NP_NAME"*/, 0LL);
    return System_String__Format(v13, (Il2CppObject *)v12->fields.age, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_40F87E5 )
    {
      sub_B16FFC(&LocalizationManager_TypeInfo, v11);
      byte_40F87E5 = 1;
    }
    v15 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager_TypeInfo;
    }
    return v15->static_fields->unknownNameText;
  }
}