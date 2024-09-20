void __fastcall ServantAppendPassiveSkillEntity___ctor(
        ServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B79D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B79D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantAppendPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A5B79B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5B79B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  SkillEntity_o *v14; // x22
  System_String_o *EffectTitle; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *EffectExplanation; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  LocalizationManager_c *v22; // x0
  System_String_o *unknownNameText; // x1

  if ( (byte_4A5B79C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B79C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v10);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields.skillId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v14 = (SkillEntity_o *)Entity;
    EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Entity, skillLv, 0LL);
    *title = EffectTitle;
    sub_1B88554((ServantStatusBattleListViewItem_o *)title, (int32_t)EffectTitle, v16, v17);
    EffectExplanation = SkillEntity__getEffectExplanation(v14, skillLv, 0LL);
    v21 = (int)EffectExplanation;
    *explanation = EffectExplanation;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4A56A2D )
    {
      sub_1B885B0(&LocalizationManager_TypeInfo);
      byte_4A56A2D = 1;
    }
    v22 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v22->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1B88554((ServantStatusBattleListViewItem_o *)title, (int32_t)unknownNameText, v12, v13);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v21 = (int)StringLiteral_1/*""*/;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)explanation, v21, v19, v20);
}