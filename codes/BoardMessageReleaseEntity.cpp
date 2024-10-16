void __fastcall BoardMessageReleaseEntity___ctor(BoardMessageReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5A40 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB5A40 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoardMessageReleaseEntity__CreatePK(
        int32_t messageId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  if ( (byte_4AB5A3F & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&condType);
    byte_4AB5A3F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           messageId,
           condType,
           condTargetId,
           (const MethodInfo_2EC2A28 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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