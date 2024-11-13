void __fastcall ServantCostumeReleaseEntity___ctor(ServantCostumeReleaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B168D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B168D9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_4B168D7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataEntityBase_CreateMultiplePK_int__int__int__int__int___,
      *(_QWORD *)&releaseType,
      *(_QWORD *)&costumeId);
    byte_4B168D7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int__int_(
           svtId,
           releaseType,
           costumeId,
           condType,
           condTargetId,
           (const MethodInfo_2F11CAC *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int__int___);
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
  __int64 v2; // x2
  int32_t condType; // w20
  int32_t svtId; // w20
  int64_t costumeId; // x19
  int32_t v7; // w0
  int32_t v8; // w1
  int32_t condTargetId; // w21

  if ( (byte_4B168D8 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B168D8 = 1;
  }
  condType = this->fields.condType;
  if ( condType == 64 )
  {
    svtId = this->fields.svtId;
    costumeId = this->fields.costumeId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
    v7 = 64;
    v8 = svtId;
  }
  else
  {
    condTargetId = this->fields.condTargetId;
    costumeId = this->fields.condNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
    v7 = condType;
    v8 = condTargetId;
  }
  return CondType__IsOpen(v7, v8, costumeId, 0, 0LL, 0LL);
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