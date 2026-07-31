void ImagePartsGroupEntity___ctor(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938B26 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938B26 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ImagePartsGroupEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_5938B25 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938B25 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ImagePartsGroupEntity__CreatePrimaryKey(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ImagePartsGroupEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}


bool ImagePartsGroupEntity__ExistsSkill(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_5938B22 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&StringLiteral_5440/*"DialogSkillId"*/);
    byte_5938B22 = 1;
  }
  script = this->fields.script;
  if ( !script )
    sub_21FFECC(0, method);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_5440/*"DialogSkillId"*/,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ImagePartsGroupEntity__GetSkillDetail(
        ImagePartsGroupEntity_o *this,
        bool isShort,
        const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Master_object; // x21
  const MethodInfo *v7; // x1
  int32_t SkillId; // w22
  const MethodInfo *v9; // x1
  SkillLvEntity_o *SkillLv; // x0
  __int64 v11; // x1
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938B1F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938B1F = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isShort);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillLvMaster___);
  SkillId = ImagePartsGroupEntity__GetSkillId(this, v7);
  SkillLv = (SkillLvEntity_o *)ImagePartsGroupEntity__GetSkillLv(this, v9);
  if ( !Master_object )
    goto LABEL_10;
  if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)Master_object, &entity, SkillId, (int32_t)SkillLv, 0) )
  {
    SkillLv = entity;
    if ( entity )
      return SkillLvEntity__getDetail(entity, isShort, 0, 0);
LABEL_10:
    sub_21FFECC(SkillLv, v11);
  }
  return **(System_String_o ***)(qword_594C0B8 + 184);
}


int32_t ImagePartsGroupEntity__GetSkillId(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938B20 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5440/*"DialogSkillId"*/);
    byte_5938B20 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_5440/*"DialogSkillId"*/, 0, 0);
}


int32_t ImagePartsGroupEntity__GetSkillLv(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938B21 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5441/*"DialogSkillLv"*/);
    byte_5938B21 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_5441/*"DialogSkillLv"*/, 0, 0);
}


System_String_o *ImagePartsGroupEntity__GetSkillName(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x20
  const MethodInfo *v5; // x1
  Il2CppObject *SkillId; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938B1E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_5938B1E = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
  SkillId = (Il2CppObject *)ImagePartsGroupEntity__GetSkillId(this, v5);
  if ( !Master_object )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         (int32_t)SkillId,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    SkillId = entity;
    if ( entity )
      return SkillEntity__getName((SkillEntity_o *)entity, 0);
LABEL_11:
    sub_21FFECC(SkillId, v7);
  }
  return **(System_String_o ***)(qword_594C0B8 + 184);
}


// local variable allocation has failed, the output may be wrong!
bool ImagePartsGroupEntity__IsOpen(ImagePartsGroupEntity_o *this, bool isCollection, const MethodInfo *method)
{
  int32_t condType; // w21
  int32_t condId; // w22
  int64_t condNum; // x20

  if ( (byte_5938B24 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_5938B24 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, isCollection);
  return CondType__IsOpen(condType, condId, condNum, isCollection, 0, 0);
}


bool ImagePartsGroupEntity__IsRelease(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  int32_t id; // w20
  int64_t idx; // x19

  if ( (byte_5938B1D & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_5938B1D = 1;
  }
  id = this->fields.id;
  idx = this->fields.idx;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(241, id, idx, 0, 0, 0);
}


bool ImagePartsGroupEntity__IsUseEquipImage(ImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938B23 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9953/*"NotEquipImage"*/);
    byte_5938B23 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_9953/*"NotEquipImage"*/, 0, 0) == 0;
}