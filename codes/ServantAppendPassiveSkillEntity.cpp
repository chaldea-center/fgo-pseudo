void ServantAppendPassiveSkillEntity___ctor(ServantAppendPassiveSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938F28 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938F28 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantAppendPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_5938F26 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5938F26 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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

  if ( (byte_5938F27 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938F27 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, title);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v10);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
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