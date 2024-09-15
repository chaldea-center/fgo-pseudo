void __fastcall ServantAppendPassiveSkillEntity___ctor(
        ServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A2E56F & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_string___ctor__, method);
    byte_4A2E56F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30FF5F8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAppendPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A2E56D & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num);
    byte_4A2E56D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_2E60ABC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantAppendPassiveSkillEntity__CreatePrimaryKey(
        ServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantAppendPassiveSkillEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


void __fastcall ServantAppendPassiveSkillEntity__GetEffectExplanation(
        ServantAppendPassiveSkillEntity_o *this,
        System_String_o **title,
        System_String_o **explanation,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x0
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

  if ( (byte_4A2E56E & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_SkillMaster___, title);
    sub_1B761C0(&DataManager_TypeInfo, v9);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_1B761C0(&LocalizationManager_TypeInfo, v11);
    sub_1B761C0(&StringLiteral_1/*""*/, v12);
    byte_4A2E56E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    sub_1B7641C(0LL, v14);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
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