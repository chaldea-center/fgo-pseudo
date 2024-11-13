void __fastcall ServantProfileEntity___ctor(ServantProfileEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16AC0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16AC0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantProfileEntity__CreatePK(
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B16ABF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataEntityBase_CreateMultiplePK_int__int__int__int___,
      *(_QWORD *)&svtCommentId,
      *(_QWORD *)&svtCommentPriority);
    byte_4B16ABF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           svtCommentId,
           svtCommentPriority,
           priority,
           (const MethodInfo_2F11804 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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