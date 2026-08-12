void ServantCostumeReleaseEntity___ctor(ServantCostumeReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971178 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971178 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantCostumeReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t releaseType,
        int32_t costumeId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  if ( (byte_5971175 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int__int___);
    byte_5971175 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int__int_(
           svtId,
           releaseType,
           costumeId,
           condType,
           condTargetId,
           (const MethodInfo_38552E0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int__int___);
}


System_String_o *ServantCostumeReleaseEntity__CreatePrimaryKey(
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


bool ServantCostumeReleaseEntity__IsAvailable(ServantCostumeReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int v4; // w8
  int32_t svtId; // w20
  int64_t costumeId; // x19
  int32_t v7; // w0
  int32_t v8; // w1
  int32_t condTargetId; // w21

  if ( (byte_5971176 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    byte_5971176 = 1;
  }
  condType = this->fields.condType;
  v4 = *(&CondType_TypeInfo->_2.cctor_finished + 1);
  if ( condType == 64 )
  {
    svtId = this->fields.svtId;
    costumeId = this->fields.costumeId;
    if ( !v4 )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
    v7 = 64;
    v8 = svtId;
  }
  else
  {
    condTargetId = this->fields.condTargetId;
    costumeId = this->fields.condNum;
    if ( !v4 )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
    v7 = condType;
    v8 = condTargetId;
  }
  return CondType__IsOpen(v7, v8, costumeId, 0, 0, 0);
}


bool ServantCostumeReleaseEntity__TryGetBaseSvtId(
        ServantCostumeReleaseEntity_o *this,
        int32_t *baseSvtId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_5971177 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17771/*"baseSvtId"*/);
    byte_5971177 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17771/*"baseSvtId"*/, 0, 0);
  *baseSvtId = IntValue;
  return IntValue != 0;
}