void __fastcall BoardMessageReleaseEntity___ctor(BoardMessageReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4187D94 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4187D94 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoardMessageReleaseEntity__CreatePK(
        int32_t messageId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  if ( (byte_4187D93 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&condType);
    byte_4187D93 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           messageId,
           condType,
           condTargetId,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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