void __fastcall BoardMessageReleaseEntity___ctor(BoardMessageReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AFEA9 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AFEA9 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BoardMessageReleaseEntity__CreatePK(
        int32_t messageId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  if ( (byte_42AFEA8 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42AFEA8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           messageId,
           condType,
           condTargetId,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall BoardMessageReleaseEntity__CreatePrimaryKey(
        BoardMessageReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BoardMessageReleaseEntity__CreatePK(
           this->fields.messageId,
           this->fields.condType,
           this->fields.condTargetId,
           v2);
}