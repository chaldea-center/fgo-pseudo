void ImagePartsGroupEntity___ctor(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CCC7 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2CCC7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ImagePartsGroupEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4D2CCC6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2CCC6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ImagePartsGroupEntity__CreatePrimaryKey(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ImagePartsGroupEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}


bool ImagePartsGroupEntity__ExistsSkill(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4D2CCC3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&StringLiteral_5263/*"DialogSkillId"*/);
    byte_4D2CCC3 = 1;
  }
  script = this->fields.script;
  if ( !script )
    sub_1C942F0(0, method);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_5263/*"DialogSkillId"*/,
           (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


System_String_o *ImagePartsGroupEntity__GetSkillDetail(
        ImagePartsGroupEntity_o *this,
        bool isShort,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  const MethodInfo *v6; // x1
  int32_t SkillId; // w22
  const MethodInfo *v8; // x1
  SkillLvEntity_o *SkillLv; // x0
  __int64 v10; // x1
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2CCC0 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&string_TypeInfo);
    byte_4D2CCC0 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  SkillId = ImagePartsGroupEntity__GetSkillId(this, v6);
  SkillLv = (SkillLvEntity_o *)ImagePartsGroupEntity__GetSkillLv(this, v8);
  if ( !Master_object )
    goto LABEL_10;
  if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)Master_object, &entity, SkillId, (int32_t)SkillLv, 0) )
  {
    SkillLv = entity;
    if ( entity )
      return SkillLvEntity__getDetail(entity, isShort, 0, 0);
LABEL_10:
    sub_1C942F0(SkillLv, v10);
  }
  return string_TypeInfo->static_fields->Empty;
}


int32_t ImagePartsGroupEntity__GetSkillId(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CCC1 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_5263/*"DialogSkillId"*/);
    byte_4D2CCC1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_5263/*"DialogSkillId"*/, 0, 0);
}


int32_t ImagePartsGroupEntity__GetSkillLv(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CCC2 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_5264/*"DialogSkillLv"*/);
    byte_4D2CCC2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_5264/*"DialogSkillLv"*/, 0, 0);
}


System_String_o *ImagePartsGroupEntity__GetSkillName(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *SkillId; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2CCBF & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C94098(&string_TypeInfo);
    byte_4D2CCBF = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_SkillMaster___);
  SkillId = (Il2CppObject *)ImagePartsGroupEntity__GetSkillId(this, v4);
  if ( !Master_object )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         (int32_t)SkillId,
         (const MethodInfo_345B50C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    SkillId = entity;
    if ( entity )
      return SkillEntity__getName((SkillEntity_o *)entity, 0);
LABEL_11:
    sub_1C942F0(SkillId, v6);
  }
  return string_TypeInfo->static_fields->Empty;
}


bool ImagePartsGroupEntity__IsOpen(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  int32_t id; // w20
  int64_t idx; // x19

  if ( (byte_4D2CCBE & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    byte_4D2CCBE = 1;
  }
  id = this->fields.id;
  idx = this->fields.idx;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(241, id, idx, 0, 0, 0);
}


bool ImagePartsGroupEntity__IsOpen_43120064(ImagePartsGroupEntity_o *this, bool isCollection, const MethodInfo *method)
{
  int32_t condId; // w21
  int32_t condType; // w22
  int64_t condNum; // x20

  if ( (byte_4D2CCC5 & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    byte_4D2CCC5 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, isCollection, 0, 0);
}


bool ImagePartsGroupEntity__IsUseEquipImage(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CCC4 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9593/*"NotEquipImage"*/);
    byte_4D2CCC4 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_9593/*"NotEquipImage"*/, 0, 0) == 0;
}