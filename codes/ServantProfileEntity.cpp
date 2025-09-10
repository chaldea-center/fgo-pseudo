void ServantProfileEntity___ctor(ServantProfileEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27CC0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27CC0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantProfileEntity__CreatePK(
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4C27CBF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4C27CBF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           svtCommentId,
           svtCommentPriority,
           priority,
           (const MethodInfo_30CD428 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *ServantProfileEntity__CreatePrimaryKey(ServantProfileEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return ServantProfileEntity__CreatePK(
           this->fields.svtId,
           this->fields.svtCommentId,
           this->fields.svtCommentPriority,
           this->fields.priority,
           v2);
}