void __fastcall CommandCodeSkillEntity___ctor(CommandCodeSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2DD3D & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_string___ctor__, method);
    byte_4A2DD3D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30FF5F8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandCodeSkillEntity__CreatePK(
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A2DD39 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num);
    byte_4A2DD39 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           commandCodeId,
           num,
           priority,
           (const MethodInfo_2E60ABC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  SkillEntity_o *v19; // x22
  System_String_o *EffectTitle; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *EffectExplanation; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  LocalizationManager_c *v27; // x0
  System_String_o *unknownNameText; // x1

  if ( (byte_4A2DD3B & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, title);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_1B761C0(&LocalizationManager_TypeInfo, v10);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B761C0(&StringLiteral_1/*""*/, v12);
    byte_4A2DD3B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1B7641C(Instance, v14);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_30FF780 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v19 = (SkillEntity_o *)Entity;
    EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Entity, skillLv, 0LL);
    *title = EffectTitle;
    sub_1B76164((ServantStatusBattleListViewItem_o *)title, (int32_t)EffectTitle, v21, v22);
    EffectExplanation = SkillEntity__getEffectExplanation(v19, skillLv, 0LL);
    v26 = (int)EffectExplanation;
    *explanation = EffectExplanation;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4A29821 )
    {
      sub_1B761C0(&LocalizationManager_TypeInfo, v16);
      byte_4A29821 = 1;
    }
    v27 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v27->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1B76164((ServantStatusBattleListViewItem_o *)title, (int32_t)unknownNameText, v17, v18);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v26 = (int)StringLiteral_1/*""*/;
  }
  sub_1B76164((ServantStatusBattleListViewItem_o *)explanation, v26, v24, v25);
}


System_String_o *__fastcall CommandCodeSkillEntity__getSkillName(
        CommandCodeSkillEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0
  __int64 v9; // x1
  LocalizationManager_c *v11; // x0

  if ( (byte_4A2DD3C & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_1B761C0(&LocalizationManager_TypeInfo, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A2DD3C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1B7641C(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_30FF780 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName((SkillEntity_o *)Entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A29821 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, v9);
    byte_4A29821 = 1;
  }
  v11 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5

  if ( (byte_4A2DD3A & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_CommandCodeSkillReleaseMaster___, userId);
    sub_1B761C0(&NetworkManager_TypeInfo, v6);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A2DD3A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.startedAt || Time > this->fields.endedAt )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_CommandCodeSkillReleaseMaster___)) == 0LL )
  {
    sub_1B7641C(Instance, v11);
  }
  return CommandCodeSkillReleaseMaster__isUse(
           (CommandCodeSkillReleaseMaster_o *)Instance,
           this->fields.commandCodeId,
           this->fields.num,
           this->fields.priority,
           beforeClearQuestId,
           v12);
}