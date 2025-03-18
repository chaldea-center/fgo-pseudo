void __fastcall ServantAppendPassiveSkillEntity___ctor(
        ServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22612 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C22612 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAppendPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4C22610 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num);
    byte_4C22610 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_2FEE81C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  SkillEntity_o *v23; // x22
  System_String_o *EffectTitle; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_String_o *EffectExplanation; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  LocalizationManager_c *v38; // x0
  System_String_o *unknownNameText; // x1

  if ( (byte_4C22611 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_SkillMaster___, title);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_1C3B764(&LocalizationManager_TypeInfo, v11);
    sub_1C3B764(&StringLiteral_1/*""*/, v12);
    byte_4C22611 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    sub_1C3B9C0(0LL, v14);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.skillId,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v23 = (SkillEntity_o *)Entity;
    EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Entity, skillLv, 0LL);
    *title = EffectTitle;
    sub_1C3B708((PartyOrganizationUtility_o *)title, (int64_t)EffectTitle, v25, v26, v27, v28, v29, v30);
    EffectExplanation = SkillEntity__getEffectExplanation(v23, skillLv, 0LL);
    *explanation = EffectExplanation;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C1D52E )
    {
      sub_1C3B764(&LocalizationManager_TypeInfo, v16);
      byte_4C1D52E = 1;
    }
    v38 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v38 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v38->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1C3B708((PartyOrganizationUtility_o *)title, (int64_t)unknownNameText, v17, v18, v19, v20, v21, v22);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    EffectExplanation = (System_String_o *)StringLiteral_1/*""*/;
  }
  sub_1C3B708((PartyOrganizationUtility_o *)explanation, (int64_t)EffectExplanation, v32, v33, v34, v35, v36, v37);
}