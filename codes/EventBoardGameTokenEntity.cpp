void __fastcall EventBoardGameTokenEntity___ctor(EventBoardGameTokenEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2672 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2672 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventBoardGameTokenEntity__CreatePK(
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  if ( (byte_42B2671 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B2671 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           tokenId,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventBoardGameTokenEntity__CreatePrimaryKey(
        EventBoardGameTokenEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventBoardGameTokenEntity__CreatePK(this->fields.eventId, this->fields.tokenId, v2);
}