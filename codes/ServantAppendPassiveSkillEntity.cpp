void ServantAppendPassiveSkillEntity___ctor(ServantAppendPassiveSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C437E9 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C437E9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantAppendPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4C437E7 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C437E7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_30E6270 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  Il2CppObject *Entity; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  SkillEntity_o *v13; // x22
  System_String_o *EffectTitle; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *EffectExplanation; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  LocalizationManager_c *v21; // x0
  System_String_o *unknownNameText; // x1

  if ( (byte_4C437E8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C437E8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.skillId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v13 = (SkillEntity_o *)Entity;
    EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Entity, skillLv, 0);
    *title = EffectTitle;
    sub_1C36FFC((CGThumbnailListItem_o *)title, (int32_t)EffectTitle, v15, v16);
    EffectExplanation = SkillEntity__getEffectExplanation(v13, skillLv, 0);
    v20 = (int)EffectExplanation;
    *explanation = EffectExplanation;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C3E2C9 )
    {
      sub_1C37058(&LocalizationManager_TypeInfo);
      byte_4C3E2C9 = 1;
    }
    v21 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v21->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1C36FFC((CGThumbnailListItem_o *)title, (int32_t)unknownNameText, v11, v12);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v20 = StringLiteral_1/*""*/;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)explanation, v20, v18, v19);
}