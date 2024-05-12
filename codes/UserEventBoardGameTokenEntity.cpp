void __fastcall UserEventBoardGameTokenEntity___ctor(UserEventBoardGameTokenEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438CB39 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438CB39 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventBoardGameTokenEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  if ( (byte_438CB38 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_438CB38 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           tokenId,
           (const MethodInfo_1D17884 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventBoardGameTokenEntity__CreatePrimaryKey(
        UserEventBoardGameTokenEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventBoardGameTokenEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.tokenId, v2);
}