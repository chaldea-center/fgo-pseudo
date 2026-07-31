void CommandCodeSkillEntity___ctor(CommandCodeSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938453 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938453 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *CommandCodeSkillEntity__CreatePK(
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_5938450 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5938450 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           commandCodeId,
           num,
           priority,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  SkillEntity_o *v19; // x22
  System_String_o *EffectTitle; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *EffectExplanation; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  LocalizationManager_c *v34; // x0
  System_String_o *unknownNameText; // x1

  if ( (byte_5938452 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938452 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v10);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v19 = (SkillEntity_o *)Entity;
    EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Entity, skillLv, 0);
    *title = EffectTitle;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)title, (int32_t)EffectTitle, v21, v22, v23, v24, v25, v26);
    EffectExplanation = SkillEntity__getEffectExplanation(v19, skillLv, 0);
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    if ( !byte_593385D )
    {
      sub_21FFC50(&LocalizationManager_TypeInfo);
      byte_593385D = 1;
    }
    v34 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
      v34 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v34->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)title, (int32_t)unknownNameText, v13, v14, v15, v16, v17, v18);
    EffectExplanation = (System_String_o *)StringLiteral_1/*""*/;
  }
  *explanation = EffectExplanation;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)explanation, (int32_t)EffectExplanation, v28, v29, v30, v31, v32, v33);
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

  if ( (byte_5938451 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeSkillReleaseMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938451 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, userId);
  Time = NetworkManager__getTime(0);
  if ( Time < this->fields.startedAt || Time > this->fields.endedAt )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeSkillReleaseMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v9);
  }
  return CommandCodeSkillReleaseMaster__isUse(
           (CommandCodeSkillReleaseMaster_o *)Instance,
           this->fields.commandCodeId,
           this->fields.num,
           this->fields.priority,
           beforeClearQuestId,
           0);
}