void __fastcall EventBoardGameTokenEntity___ctor(EventBoardGameTokenEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A204 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418A204 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBoardGameTokenEntity__CreatePK(
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  if ( (byte_418A203 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&tokenId);
    byte_418A203 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           tokenId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventBoardGameTokenEntity__CreatePrimaryKey(
        EventBoardGameTokenEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventBoardGameTokenEntity__CreatePK(this->fields.eventId, this->fields.tokenId, v2);
}