void __fastcall ServantCostumeReleaseEntity___ctor(ServantCostumeReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FD019 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FD019 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCostumeReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t releaseType,
        int32_t costumeId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  if ( (byte_40FD017 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int__int___, *(_QWORD *)&releaseType);
    byte_40FD017 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int__int_(
           svtId,
           releaseType,
           costumeId,
           condType,
           condTargetId,
           (const MethodInfo_18C2C80 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int__int___);
}


System_String_o *__fastcall ServantCostumeReleaseEntity__CreatePrimaryKey(
        ServantCostumeReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5

  return ServantCostumeReleaseEntity__CreatePK(
           this->fields.svtId,
           this->fields.releaseType,
           this->fields.costumeId,
           this->fields.condType,
           this->fields.condTargetId,
           v2);
}


bool __fastcall ServantCostumeReleaseEntity__IsAvailable(ServantCostumeReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t svtId; // w20
  int64_t costumeId; // x19
  int32_t v6; // w0
  int32_t v7; // w1
  int32_t condTargetId; // w21

  if ( (byte_40FD018 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    byte_40FD018 = 1;
  }
  condType = this->fields.condType;
  if ( condType == 64 )
  {
    svtId = this->fields.svtId;
    costumeId = this->fields.costumeId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v6 = 64;
    v7 = svtId;
  }
  else
  {
    condTargetId = this->fields.condTargetId;
    costumeId = this->fields.condNum;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    v6 = condType;
    v7 = condTargetId;
  }
  return CondType__IsOpen(v6, v7, costumeId, 0, 0LL);
}


bool __fastcall ServantCostumeReleaseEntity__IsCondAboutQuestClear(
        ServantCostumeReleaseEntity_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int32_t condType; // w8

  if ( !questId )
    return 0;
  condType = this->fields.condType;
  switch ( condType )
  {
    case 57:
      return this->fields.condTargetId == questId;
    case 46:
      return this->fields.condTargetId == questId && this->fields.condNum == phase;
    case 1:
      return this->fields.condTargetId == questId;
  }
  return 0;
}