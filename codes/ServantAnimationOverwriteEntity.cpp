void ServantAnimationOverwriteEntity___ctor(ServantAnimationOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938F1F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938F1F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantAnimationOverwriteEntity__CreatePK(
        int32_t svtId,
        int32_t svtLimitCount,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_5938F1E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5938F1E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           svtLimitCount,
           idx,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantAnimationOverwriteEntity__CreatePrimaryKey(
        ServantAnimationOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantAnimationOverwriteEntity__CreatePK(this->fields.svtId, this->fields.svtLimitCount, this->fields.idx, v2);
}


bool ServantAnimationOverwriteEntity__IsApplyTargetMatch(
        ServantAnimationOverwriteEntity_o *this,
        int32_t target,
        const MethodInfo *method)
{
  int32_t applyTarget; // w8

  applyTarget = this->fields.applyTarget;
  return applyTarget == target || applyTarget == 3;
}


bool ServantAnimationOverwriteEntity__IsLimitCountMatch(
        ServantAnimationOverwriteEntity_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  int32_t svtLimitCount; // w8

  svtLimitCount = this->fields.svtLimitCount;
  return svtLimitCount == limit || svtLimitCount == -1;
}