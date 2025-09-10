void CommandCodeSkillEntity___ctor(CommandCodeSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C270A6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C270A6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *CommandCodeSkillEntity__CreatePK(
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4C270A2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C270A2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           commandCodeId,
           num,
           priority,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *CommandCodeSkillEntity__CreatePrimaryKey(CommandCodeSkillEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return CommandCodeSkillEntity__CreatePK(this->fields.commandCodeId, this->fields.num, this->fields.priority, v2);
}


void CommandCodeSkillEntity__getEffectExplanation(
        CommandCodeSkillEntity_o *this,
        System_String_o **title,
        System_String_o **explanation,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  SkillEntity_o *v14; // x22
  System_String_o *EffectTitle; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o *EffectExplanation; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  LocalizationManager_c *v22; // x0
  System_String_o *unknownNameText; // x1

  if ( (byte_4C270A4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C270A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v10);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v14 = (SkillEntity_o *)Entity;
    EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Entity, skillLv, 0);
    *title = EffectTitle;
    sub_1C2D434((CGThumbnailListItem_o *)title, (int32_t)EffectTitle, v16, v17);
    EffectExplanation = SkillEntity__getEffectExplanation(v14, skillLv, 0);
    v21 = (int)EffectExplanation;
    *explanation = EffectExplanation;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C2267D )
    {
      sub_1C2D490(&LocalizationManager_TypeInfo);
      byte_4C2267D = 1;
    }
    v22 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v22->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1C2D434((CGThumbnailListItem_o *)title, (int32_t)unknownNameText, v12, v13);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v21 = StringLiteral_1/*""*/;
  }
  sub_1C2D434((CGThumbnailListItem_o *)explanation, v21, v19, v20);
}


System_String_o *CommandCodeSkillEntity__getSkillName(CommandCodeSkillEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  LocalizationManager_c *v7; // x0

  if ( (byte_4C270A5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C270A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName((SkillEntity_o *)Entity, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C2267D )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C2267D = 1;
  }
  v7 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager_TypeInfo;
  }
  return v7->static_fields->unknownNameText;
}


bool CommandCodeSkillEntity__isUse(
        CommandCodeSkillEntity_o *this,
        int64_t userId,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  int64_t Time; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5

  if ( (byte_4C270A3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeSkillReleaseMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C270A3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( Time < this->fields.startedAt || Time > this->fields.endedAt )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeSkillReleaseMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v9);
  }
  return CommandCodeSkillReleaseMaster__isUse(
           (CommandCodeSkillReleaseMaster_o *)Instance,
           this->fields.commandCodeId,
           this->fields.num,
           this->fields.priority,
           beforeClearQuestId,
           v10);
}