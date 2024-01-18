void __fastcall ServantAppendPassiveSkillEntity___ctor(
        ServantAppendPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4187B5B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4187B5B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAppendPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4187B59 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num);
    byte_4187B59 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
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

  if ( (byte_4187B5A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, title);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_4187B5A = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v14);
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              Master_WarQuestSelectionMaster,
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