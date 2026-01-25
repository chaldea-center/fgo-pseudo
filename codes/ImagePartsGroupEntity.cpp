void ImagePartsGroupEntity___ctor(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEADD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEEADD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ImagePartsGroupEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4CEEADC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEEADC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ImagePartsGroupEntity__CreatePrimaryKey(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ImagePartsGroupEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}


bool ImagePartsGroupEntity__ExistsSkill(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4CEEAD9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C7BAE8(&StringLiteral_5265/*"DialogSkillId"*/);
    byte_4CEEAD9 = 1;
  }
  script = this->fields.script;
  if ( !script )
    sub_1C7BD40(0, method);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_5265/*"DialogSkillId"*/,
           (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_4CEEAD6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    byte_4CEEAD6 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
    sub_1C7BD40(SkillLv, v10);
  }
  return string_TypeInfo->static_fields->Empty;
}


int32_t ImagePartsGroupEntity__GetSkillId(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEAD7 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_5265/*"DialogSkillId"*/);
    byte_4CEEAD7 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_5265/*"DialogSkillId"*/, 0, 0);
}


int32_t ImagePartsGroupEntity__GetSkillLv(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEAD8 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_5266/*"DialogSkillLv"*/);
    byte_4CEEAD8 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_5266/*"DialogSkillLv"*/, 0, 0);
}


System_String_o *ImagePartsGroupEntity__GetSkillName(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *SkillId; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEEAD5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C7BAE8(&string_TypeInfo);
    byte_4CEEAD5 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SkillMaster___);
  SkillId = (Il2CppObject *)ImagePartsGroupEntity__GetSkillId(this, v4);
  if ( !Master_object )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         (int32_t)SkillId,
         (const MethodInfo_342E348 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    SkillId = entity;
    if ( entity )
      return SkillEntity__getName((SkillEntity_o *)entity, 0);
LABEL_11:
    sub_1C7BD40(SkillId, v6);
  }
  return string_TypeInfo->static_fields->Empty;
}


bool ImagePartsGroupEntity__IsOpen(ImagePartsGroupEntity_o *this, bool isCollection, const MethodInfo *method)
{
  int32_t condId; // w21
  int32_t condType; // w22
  int64_t condNum; // x20

  if ( (byte_4CEEADB & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    byte_4CEEADB = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, isCollection, 0, 0);
}


bool ImagePartsGroupEntity__IsRelease(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  int32_t id; // w20
  int64_t idx; // x19

  if ( (byte_4CEEAD4 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    byte_4CEEAD4 = 1;
  }
  id = this->fields.id;
  idx = this->fields.idx;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(241, id, idx, 0, 0, 0);
}


bool ImagePartsGroupEntity__IsUseEquipImage(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEADA & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_9597/*"NotEquipImage"*/);
    byte_4CEEADA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_9597/*"NotEquipImage"*/, 0, 0) == 0;
}