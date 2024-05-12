void __fastcall BoardMessageReleaseEntity___ctor(BoardMessageReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438ADEE & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438ADEE = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BoardMessageReleaseEntity__CreatePK(
        int32_t messageId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  if ( (byte_438ADED & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438ADED = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           messageId,
           condType,
           condTargetId,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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