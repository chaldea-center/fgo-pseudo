void __fastcall UserEventBoardGameTokenEntity___ctor(UserEventBoardGameTokenEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B150C & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B150C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventBoardGameTokenEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  if ( (byte_42B150B & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_42B150B = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           tokenId,
           (const MethodInfo_1A4E618 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventBoardGameTokenEntity__CreatePrimaryKey(
        UserEventBoardGameTokenEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventBoardGameTokenEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.tokenId, v2);
}