void __fastcall EventBoardGameTokenEntity___ctor(EventBoardGameTokenEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE3BE & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FE3BE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBoardGameTokenEntity__CreatePK(
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  if ( (byte_49FE3BD & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&tokenId);
    byte_49FE3BD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           tokenId,
           (const MethodInfo_2E398EC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventBoardGameTokenEntity__CreatePrimaryKey(
        EventBoardGameTokenEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventBoardGameTokenEntity__CreatePK(this->fields.eventId, this->fields.tokenId, v2);
}