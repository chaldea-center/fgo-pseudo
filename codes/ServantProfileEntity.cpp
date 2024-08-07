void __fastcall ServantProfileEntity___ctor(ServantProfileEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF2DD & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF2DD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantProfileEntity__CreatePK(
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_49FF2DC & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&svtCommentId);
    byte_49FF2DC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           svtCommentId,
           svtCommentPriority,
           priority,
           (const MethodInfo_2E3A854 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall ServantProfileEntity__CreatePrimaryKey(
        ServantProfileEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return ServantProfileEntity__CreatePK(
           this->fields.svtId,
           this->fields.svtCommentId,
           this->fields.svtCommentPriority,
           this->fields.priority,
           v2);
}