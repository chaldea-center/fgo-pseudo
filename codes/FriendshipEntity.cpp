void FriendshipEntity___ctor(FriendshipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938A07 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938A07 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *FriendshipEntity__CreatePK(int32_t id, int32_t rank, const MethodInfo *method)
{
  if ( (byte_5938A06 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938A06 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           rank,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *FriendshipEntity__CreatePrimaryKey(FriendshipEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return FriendshipEntity__CreatePK(this->fields.id, this->fields.rank, v2);
}