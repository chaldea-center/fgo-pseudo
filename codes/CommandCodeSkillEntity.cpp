void __fastcall CommandCodeSkillEntity___ctor(CommandCodeSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418810C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418810C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandCodeSkillEntity__CreatePK(
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4188108 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num);
    byte_4188108 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           commandCodeId,
           num,
           priority,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall CommandCodeSkillEntity__CreatePrimaryKey(
        CommandCodeSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return CommandCodeSkillEntity__CreatePK(this->fields.commandCodeId, this->fields.num, this->fields.priority, v2);
}


void __fastcall CommandCodeSkillEntity__getEffectExplanation(
        CommandCodeSkillEntity_o *this,
        System_String_o **title,
        System_String_o **explanation,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  SkillEntity_o *Entity; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  SkillEntity_o *v23; // x22
  System_String_o *EffectTitle; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_o *EffectExplanation; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  LocalizationManager_c *v38; // x0
  System_String_o *unknownNameText; // x1

  if ( (byte_418810A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, title);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_418810A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v14);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.skillId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v23 = Entity;
    EffectTitle = SkillEntity__getEffectTitle(Entity, skillLv, 0LL);
    *title = EffectTitle;
    sub_B2C2F8((BattleServantConfConponent_o *)title, (System_Int32_array **)EffectTitle, v25, v26, v27, v28, v29, v30);
    EffectExplanation = SkillEntity__getEffectExplanation(v23, skillLv, 0LL);
    *explanation = EffectExplanation;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_4185BC0 )
    {
      sub_B2C35C(&LocalizationManager_TypeInfo, v16);
      byte_4185BC0 = 1;
    }
    v38 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v38 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v38->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)title,
      (System_Int32_array **)unknownNameText,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    EffectExplanation = (System_String_o *)StringLiteral_1/*""*/;
  }
  sub_B2C2F8(
    (BattleServantConfConponent_o *)explanation,
    (System_Int32_array **)EffectExplanation,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
}


System_String_o *__fastcall CommandCodeSkillEntity__getSkillName(
        CommandCodeSkillEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  SkillEntity_o *Entity; // x0
  __int64 v9; // x1
  LocalizationManager_c *v11; // x0

  if ( (byte_418810B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418810B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.skillId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName(Entity, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4185BC0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    byte_4185BC0 = 1;
  }
  v11 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
  }
  return v11->static_fields->unknownNameText;
}


bool __fastcall CommandCodeSkillEntity__isUse(
        CommandCodeSkillEntity_o *this,
        int64_t userId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Time; // x0
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5

  if ( (byte_4188109 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeSkillReleaseMaster___, userId);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4188109 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.startedAt || Time > this->fields.endedAt )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeSkillReleaseMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v11);
  }
  return CommandCodeSkillReleaseMaster__isUse(
           (CommandCodeSkillReleaseMaster_o *)Instance,
           this->fields.commandCodeId,
           this->fields.num,
           this->fields.priority,
           beforeClearQuestId,
           v12);
}