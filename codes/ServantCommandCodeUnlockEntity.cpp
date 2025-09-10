void ServantCommandCodeUnlockEntity___ctor(ServantCommandCodeUnlockEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27B3C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27B3C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantCommandCodeUnlockEntity__CreatePK(int32_t svtId, int32_t cardIdx, const MethodInfo *method)
{
  if ( (byte_4C27B3B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C27B3B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardIdx,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantCommandCodeUnlockEntity__CreatePrimaryKey(
        ServantCommandCodeUnlockEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantCommandCodeUnlockEntity__CreatePK(this->fields.svtId, this->fields.cardIdx, v2);
}