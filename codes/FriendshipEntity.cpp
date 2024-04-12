void __fastcall FriendshipEntity___ctor(FriendshipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2B85 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2B85 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall FriendshipEntity__CreatePK(int32_t id, int32_t rank, const MethodInfo *method)
{
  if ( (byte_42B2B84 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B2B84 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           rank,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall FriendshipEntity__CreatePrimaryKey(FriendshipEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return FriendshipEntity__CreatePK(this->fields.id, this->fields.rank, v2);
}