void BoardMessageReleaseEntity___ctor(BoardMessageReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C50E & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2C50E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *BoardMessageReleaseEntity__CreatePK(
        int32_t messageId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  if ( (byte_4D2C50D & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D2C50D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           messageId,
           condType,
           condTargetId,
           (const MethodInfo_319A74C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *BoardMessageReleaseEntity__CreatePrimaryKey(
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