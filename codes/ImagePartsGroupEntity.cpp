void __fastcall ImagePartsGroupEntity___ctor(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB49ED & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB49ED = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ImagePartsGroupEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4BB49EC & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4BB49EC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_2F8D690 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ImagePartsGroupEntity__CreatePrimaryKey(
        ImagePartsGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ImagePartsGroupEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}


bool __fastcall ImagePartsGroupEntity__ExistsSkill(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4BB49E9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1C13D24(&StringLiteral_5395/*"Detected multiple FirebaseApp proxies for {0}"*/, v3);
    byte_4BB49E9 = 1;
  }
  script = this->fields.script;
  if ( !script )
    sub_1C13F80(0LL, method);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_5395/*"Detected multiple FirebaseApp proxies for {0}"*/,
           (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ImagePartsGroupEntity__GetSkillDetail(
        ImagePartsGroupEntity_o *this,
        bool isShort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x21
  const MethodInfo *v8; // x1
  int32_t SkillId; // w22
  const MethodInfo *v10; // x1
  SkillLvEntity_o *SkillLv; // x0
  __int64 v12; // x1
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB49E6 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_SkillLvMaster___, isShort);
    sub_1C13D24(&DataManager_TypeInfo, v5);
    sub_1C13D24(&string_TypeInfo, v6);
    byte_4BB49E6 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_SkillLvMaster___);
  SkillId = ImagePartsGroupEntity__GetSkillId(this, v8);
  SkillLv = (SkillLvEntity_o *)ImagePartsGroupEntity__GetSkillLv(this, v10);
  if ( !Master_object )
    goto LABEL_10;
  if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)Master_object, &entity, SkillId, (int32_t)SkillLv, 0LL) )
  {
    SkillLv = entity;
    if ( entity )
      return SkillLvEntity__getDetail(entity, isShort, 0LL);
LABEL_10:
    sub_1C13F80(SkillLv, v12);
  }
  return string_TypeInfo->static_fields->Empty;
}


int32_t __fastcall ImagePartsGroupEntity__GetSkillId(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB49E7 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_5395/*"Detected multiple FirebaseApp proxies for {0}"*/, method);
    byte_4BB49E7 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_5395/*"Detected multiple FirebaseApp proxies for {0}"*/, 0, 0LL);
}


int32_t __fastcall ImagePartsGroupEntity__GetSkillLv(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB49E8 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_5396/*"Detected multiple return types for PropertyBag=["*/, method);
    byte_4BB49E8 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_5396/*"Detected multiple return types for PropertyBag=["*/, 0, 0LL);
}


System_String_o *__fastcall ImagePartsGroupEntity__GetSkillName(
        ImagePartsGroupEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x20
  const MethodInfo *v7; // x1
  Il2CppObject *SkillId; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB49E5 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4);
    sub_1C13D24(&string_TypeInfo, v5);
    byte_4BB49E5 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_SkillMaster___);
  SkillId = (Il2CppObject *)ImagePartsGroupEntity__GetSkillId(this, v7);
  if ( !Master_object )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         (int32_t)SkillId,
         (const MethodInfo_3238670 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    SkillId = entity;
    if ( entity )
      return SkillEntity__getName((SkillEntity_o *)entity, 0LL);
LABEL_11:
    sub_1C13F80(SkillId, v9);
  }
  return string_TypeInfo->static_fields->Empty;
}


bool __fastcall ImagePartsGroupEntity__IsOpen(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  int32_t id; // w20
  int64_t idx; // x19

  if ( (byte_4BB49E4 & 1) == 0 )
  {
    sub_1C13D24(&CondType_TypeInfo, method);
    byte_4BB49E4 = 1;
  }
  id = this->fields.id;
  idx = this->fields.idx;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(241, id, idx, 0, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ImagePartsGroupEntity__IsOpen_40534372(
        ImagePartsGroupEntity_o *this,
        bool isCollection,
        const MethodInfo *method)
{
  int32_t condId; // w21
  int32_t condType; // w22
  int64_t condNum; // x20

  if ( (byte_4BB49EB & 1) == 0 )
  {
    sub_1C13D24(&CondType_TypeInfo, isCollection);
    byte_4BB49EB = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, isCollection, 0LL, 0LL);
}


bool __fastcall ImagePartsGroupEntity__IsUseEquipImage(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB49EA & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_9740/*"Not listening. You must call the Start() method before calling this method."*/, method);
    byte_4BB49EA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_9740/*"Not listening. You must call the Start() method before calling this method."*/, 0, 0LL) == 0;
}