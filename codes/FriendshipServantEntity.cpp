void FriendshipServantEntity___ctor(FriendshipServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF8E1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF8E1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *FriendshipServantEntity__CreatePK(int32_t svtId, int32_t rank, const MethodInfo *method)
{
  if ( (byte_4CEF8E0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEF8E0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           rank,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *FriendshipServantEntity__CreatePrimaryKey(FriendshipServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return FriendshipServantEntity__CreatePK(this->fields.svtId, this->fields.rank, v2);
}