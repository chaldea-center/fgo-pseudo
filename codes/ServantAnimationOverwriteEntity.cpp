void __fastcall ServantAnimationOverwriteEntity___ctor(
        ServantAnimationOverwriteEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDCBCB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_string___ctor__);
    byte_4BDCBCB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_325995C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantAnimationOverwriteEntity__CreatePK(
        int32_t svtId,
        int32_t svtLimitCount,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4BDCBCA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4BDCBCA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           svtLimitCount,
           idx,
           (const MethodInfo_2FAE4B8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantAnimationOverwriteEntity__CreatePrimaryKey(
        ServantAnimationOverwriteEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantAnimationOverwriteEntity__CreatePK(this->fields.svtId, this->fields.svtLimitCount, this->fields.idx, v2);
}


bool __fastcall ServantAnimationOverwriteEntity__IsApplyTargetMatch(
        ServantAnimationOverwriteEntity_o *this,
        int32_t target,
        const MethodInfo *method)
{
  return this->fields.applyTarget == target || this->fields.applyTarget == 3;
}


bool __fastcall ServantAnimationOverwriteEntity__IsLimitCountMatch(
        ServantAnimationOverwriteEntity_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  return this->fields.svtLimitCount == limit || this->fields.svtLimitCount == -1;
}