void __fastcall EventEquipSkillPartsEntity___ctor(EventEquipSkillPartsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C491 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_int___ctor__, method);
    byte_4B1C491 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32C591C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventEquipSkillPartsEntity__CreatePrimaryKey(
        EventEquipSkillPartsEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall EventEquipSkillPartsEntity__GetReleaseConditionMessage(
        EventEquipSkillPartsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1C48F & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_11188/*"ReleaseConditionMessage"*/, method);
    byte_4B1C48F = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_11188/*"ReleaseConditionMessage"*/, 0LL, 0LL);
}


System_String_o *__fastcall EventEquipSkillPartsEntity__GetRenoDetailDialogText(
        EventEquipSkillPartsEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o **v4; // x9

  if ( (byte_4B1C48E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_11228/*"RenoDetailDialogText"*/, method);
    sub_1BCAFF8(&StringLiteral_15028/*"UnreleasedRenoDetailDialogText"*/, v3);
    byte_4B1C48E = 1;
  }
  if ( EventEquipSkillPartsEntity__IsOpen(this, method) )
    v4 = (System_String_o **)&StringLiteral_11228/*"RenoDetailDialogText"*/;
  else
    v4 = (System_String_o **)&StringLiteral_15028/*"UnreleasedRenoDetailDialogText"*/;
  return EntityScriptUtil__GetStringValue(this->fields.script, *v4, 0LL, 0LL);
}


System_String_o *__fastcall EventEquipSkillPartsEntity__GetRenoPartsName(
        EventEquipSkillPartsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1C48D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_11230/*"RenoPartsName"*/, method);
    byte_4B1C48D = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_11230/*"RenoPartsName"*/, 0LL, 0LL);
}


int32_t __fastcall EventEquipSkillPartsEntity__GetSkillChargeTurn(
        EventEquipSkillPartsEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1C490 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillLvMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    byte_4B1C490 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                    (SkillLvMaster_o *)Master_object,
                                    &entity,
                                    this->fields.skillId,
                                    this->fields.skillLv,
                                    0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.chargeTurn;
LABEL_11:
    sub_1BCB254(Master_object, v5);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventEquipSkillPartsEntity__GetSkillDetail(
        EventEquipSkillPartsEntity_o *this,
        bool isShort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  SkillLvMaster_o *Master_object; // x0
  __int64 v8; // x1
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1C48C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillLvMaster___, isShort);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&string_TypeInfo, v6);
    byte_4B1C48C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (SkillLvMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_10;
  if ( SkillLvMaster__TryGetEntity(Master_object, &entity, this->fields.skillId, this->fields.skillLv, 0LL) )
  {
    Master_object = (SkillLvMaster_o *)entity;
    if ( entity )
      return SkillLvEntity__getDetail(entity, isShort, 0LL);
LABEL_10:
    sub_1BCB254(Master_object, v8);
  }
  return string_TypeInfo->static_fields->Empty;
}


System_String_o *__fastcall EventEquipSkillPartsEntity__GetSkillName(
        EventEquipSkillPartsEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1C48B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4);
    sub_1BCAFF8(&string_TypeInfo, v5);
    byte_4B1C48B = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         this->fields.skillId,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Master_object = entity;
    if ( entity )
      return SkillEntity__getName((SkillEntity_o *)entity, 0LL);
LABEL_11:
    sub_1BCB254(Master_object, v7);
  }
  return string_TypeInfo->static_fields->Empty;
}


bool __fastcall EventEquipSkillPartsEntity__IsOpen(EventEquipSkillPartsEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4B1C48A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommonReleaseMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    byte_4B1C48A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_object )
    sub_1BCB254(0LL, v5);
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, this->fields.commonReleaseId, 0LL, 0, 0LL);
}