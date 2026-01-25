void ServantAppendPassiveSkillEntity___ctor(ServantAppendPassiveSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEEB1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEEEB1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantAppendPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4CEEEAF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEEEAF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantAppendPassiveSkillEntity__CreatePrimaryKey(
        ServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantAppendPassiveSkillEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


void ServantAppendPassiveSkillEntity__GetEffectExplanation(
        ServantAppendPassiveSkillEntity_o *this,
        System_String_o **title,
        System_String_o **explanation,
        int32_t skillLv,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  SkillEntity_o *v18; // x22
  System_String_o *EffectTitle; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_String_o *EffectExplanation; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  LocalizationManager_c *v34; // x0
  System_String_o *unknownNameText; // x1

  if ( (byte_4CEEEB0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEEEB0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    sub_1C7BD40(0, v10);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.skillId,
             (const MethodInfo_342E2FC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v18 = (SkillEntity_o *)Entity;
    EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Entity, skillLv, 0);
    *title = EffectTitle;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)title, (int32_t)EffectTitle, v20, v21, v22, v23, v24, v25);
    EffectExplanation = SkillEntity__getEffectExplanation(v18, skillLv, 0);
    v33 = (int)EffectExplanation;
    *explanation = EffectExplanation;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4CE9782 )
    {
      sub_1C7BAE8(&LocalizationManager_TypeInfo);
      byte_4CE9782 = 1;
    }
    v34 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v34 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v34->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)title, (int32_t)unknownNameText, v12, v13, v14, v15, v16, v17);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v33 = StringLiteral_1/*""*/;
  }
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)explanation, v33, v27, v28, v29, v30, v31, v32);
}