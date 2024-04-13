void __fastcall UserEventBoardGameTokenEntity___ctor(UserEventBoardGameTokenEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA1E7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA1E7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserEventBoardGameTokenEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  if ( (byte_42EA1E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, eventId, tokenId, method);
    byte_42EA1E6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           tokenId,
           (const MethodInfo_1AE36E0 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventBoardGameTokenEntity__CreatePrimaryKey(
        UserEventBoardGameTokenEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventBoardGameTokenEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.tokenId, v2);
}