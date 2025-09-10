void EventEquipSkillPartsEntity___ctor(EventEquipSkillPartsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2723E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C2723E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventEquipSkillPartsEntity__CreatePrimaryKey(EventEquipSkillPartsEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *EventEquipSkillPartsEntity__GetReleaseConditionMessage(
        EventEquipSkillPartsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2723C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_11285/*"ReleaseConditionMessage"*/);
    byte_4C2723C = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_11285/*"ReleaseConditionMessage"*/, 0, 0);
}


System_String_o *EventEquipSkillPartsEntity__GetRenoDetailDialogText(
        EventEquipSkillPartsEntity_o *this,
        const MethodInfo *method)
{
  System_String_o **v3; // x9

  if ( (byte_4C2723B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_11325/*"RenoDetailDialogText"*/);
    sub_1C2D490(&StringLiteral_15146/*"UnreleasedRenoDetailDialogText"*/);
    byte_4C2723B = 1;
  }
  if ( EventEquipSkillPartsEntity__IsOpen(this, method) )
    v3 = (System_String_o **)&StringLiteral_11325/*"RenoDetailDialogText"*/;
  else
    v3 = (System_String_o **)&StringLiteral_15146/*"UnreleasedRenoDetailDialogText"*/;
  return EntityScriptUtil__GetStringValue(this->fields.script, *v3, 0, 0);
}


System_String_o *EventEquipSkillPartsEntity__GetRenoPartsName(
        EventEquipSkillPartsEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2723A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_11327/*"RenoPartsName"*/);
    byte_4C2723A = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_11327/*"RenoPartsName"*/, 0, 0);
}


int32_t EventEquipSkillPartsEntity__GetSkillChargeTurn(EventEquipSkillPartsEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2723D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C2723D = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillLvMaster___);
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
    sub_1C2D6EC(Master_object, v4);
  }
  return 0;
}


System_String_o *EventEquipSkillPartsEntity__GetSkillDetail(
        EventEquipSkillPartsEntity_o *this,
        bool isShort,
        const MethodInfo *method)
{
  SkillLvMaster_o *Master_object; // x0
  __int64 v6; // x1
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27239 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    byte_4C27239 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (SkillLvMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !Master_object )
    goto LABEL_10;
  if ( SkillLvMaster__TryGetEntity(Master_object, &entity, this->fields.skillId, this->fields.skillLv, 0) )
  {
    Master_object = (SkillLvMaster_o *)entity;
    if ( entity )
      return SkillLvEntity__getDetail(entity, isShort, 0, 0);
LABEL_10:
    sub_1C2D6EC(Master_object, v6);
  }
  return string_TypeInfo->static_fields->Empty;
}


System_String_o *EventEquipSkillPartsEntity__GetSkillName(EventEquipSkillPartsEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27238 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C2D490(&string_TypeInfo);
    byte_4C27238 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         this->fields.skillId,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Master_object = entity;
    if ( entity )
      return SkillEntity__getName((SkillEntity_o *)entity, 0);
LABEL_11:
    sub_1C2D6EC(Master_object, v4);
  }
  return string_TypeInfo->static_fields->Empty;
}


bool EventEquipSkillPartsEntity__IsOpen(EventEquipSkillPartsEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( (byte_4C27237 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C27237 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v4);
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, this->fields.commonReleaseId, 0, 0, 0);
}