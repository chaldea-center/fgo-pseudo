void __fastcall ServantCommandCodeUnlockEntity___ctor(ServantCommandCodeUnlockEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF189 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF189 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCommandCodeUnlockEntity__CreatePK(
        int32_t svtId,
        int32_t cardIdx,
        const MethodInfo *method)
{
  if ( (byte_49FF188 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&cardIdx);
    byte_49FF188 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardIdx,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantCommandCodeUnlockEntity__CreatePrimaryKey(
        ServantCommandCodeUnlockEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantCommandCodeUnlockEntity__CreatePK(this->fields.svtId, this->fields.cardIdx, v2);
}