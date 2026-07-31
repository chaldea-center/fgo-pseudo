void EventEquipSkillPartsEntity___ctor(EventEquipSkillPartsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938601 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938601 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventEquipSkillPartsEntity__CreatePrimaryKey(EventEquipSkillPartsEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *EventEquipSkillPartsEntity__GetReleaseConditionMessage(
        EventEquipSkillPartsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_59385FF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11764/*"ReleaseConditionMessage"*/);
    byte_59385FF = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_11764/*"ReleaseConditionMessage"*/, 0, 0);
}


System_String_o *EventEquipSkillPartsEntity__GetRenoDetailDialogText(
        EventEquipSkillPartsEntity_o *this,
        const MethodInfo *method)
{
  System_String_o **v3; // x9

  if ( (byte_59385FE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11805/*"RenoDetailDialogText"*/);
    sub_21FFC50(&StringLiteral_15721/*"UnreleasedRenoDetailDialogText"*/);
    byte_59385FE = 1;
  }
  if ( EventEquipSkillPartsEntity__IsOpen(this, method) )
    v3 = (System_String_o **)&StringLiteral_11805/*"RenoDetailDialogText"*/;
  else
    v3 = (System_String_o **)&StringLiteral_15721/*"UnreleasedRenoDetailDialogText"*/;
  return EntityScriptUtil__GetStringValue(this->fields.script, *v3, 0, 0);
}


System_String_o *EventEquipSkillPartsEntity__GetRenoPartsName(
        EventEquipSkillPartsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_59385FD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11807/*"RenoPartsName"*/);
    byte_59385FD = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_11807/*"RenoPartsName"*/, 0, 0);
}


int32_t EventEquipSkillPartsEntity__GetSkillChargeTurn(EventEquipSkillPartsEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938600 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938600 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                    (SkillLvMaster_o *)Master_object,
                                    &entity,
                                    this->fields.skillId,
                                    this->fields.skillLv,
                                    0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.chargeTurn;
LABEL_11:
    sub_21FFECC(Master_object, v5);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *EventEquipSkillPartsEntity__GetSkillDetail(
        EventEquipSkillPartsEntity_o *this,
        bool isShort,
        const MethodInfo *method)
{
  int v5; // w8
  SkillLvMaster_o *Master_object; // x0
  __int64 v7; // x1
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59385FC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_59385FC = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isShort);
  Master_object = (SkillLvMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_10;
  if ( SkillLvMaster__TryGetEntity(Master_object, &entity, this->fields.skillId, this->fields.skillLv, 0) )
  {
    Master_object = (SkillLvMaster_o *)entity;
    if ( entity )
      return SkillLvEntity__getDetail(entity, isShort, 0, 0);
LABEL_10:
    sub_21FFECC(Master_object, v7);
  }
  return **(System_String_o ***)(qword_594C0B8 + 184);
}


System_String_o *EventEquipSkillPartsEntity__GetSkillName(EventEquipSkillPartsEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59385FB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_59385FB = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         this->fields.skillId,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Master_object = entity;
    if ( entity )
      return SkillEntity__getName((SkillEntity_o *)entity, 0);
LABEL_11:
    sub_21FFECC(Master_object, v5);
  }
  return **(System_String_o ***)(qword_594C0B8 + 184);
}


bool EventEquipSkillPartsEntity__IsOpen(EventEquipSkillPartsEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_59385FA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_59385FA = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, this->fields.commonReleaseId, 0, 0, v5);
}