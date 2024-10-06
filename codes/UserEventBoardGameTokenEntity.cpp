void __fastcall UserEventBoardGameTokenEntity___ctor(UserEventBoardGameTokenEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A70A88 & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_string___ctor__, method);
    byte_4A70A88 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_312C420 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventBoardGameTokenEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  if ( (byte_4A70A87 & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&eventId);
    byte_4A70A87 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           tokenId,
           (const MethodInfo_2E8CA8C *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventBoardGameTokenEntity__CreatePrimaryKey(
        UserEventBoardGameTokenEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventBoardGameTokenEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.tokenId, v2);
}