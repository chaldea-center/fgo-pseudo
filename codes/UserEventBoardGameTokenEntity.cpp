void UserEventBoardGameTokenEntity___ctor(UserEventBoardGameTokenEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59394B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59394B6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventBoardGameTokenEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  if ( (byte_59394B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_59394B5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           tokenId,
           (const MethodInfo_38215B8 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserEventBoardGameTokenEntity__CreatePrimaryKey(
        UserEventBoardGameTokenEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventBoardGameTokenEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.tokenId, v2);
}