void __fastcall ServantProfileEntity___ctor(ServantProfileEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAA24 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EAA24 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantProfileEntity__CreatePK(
        int32_t svtId,
        int32_t svtCommentId,
        int32_t svtCommentPriority,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42EAA23 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataEntityBase_CreateMultiplePK_int__int__int__int___,
      svtCommentId,
      svtCommentPriority,
      *(_QWORD *)&priority);
    byte_42EAA23 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           svtId,
           svtCommentId,
           svtCommentPriority,
           priority,
           (const MethodInfo_1AE38D8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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