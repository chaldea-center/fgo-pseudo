void FriendshipServantEntity___ctor(FriendshipServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC86B5 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC86B5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *FriendshipServantEntity__CreatePK(int32_t svtId, int32_t rank, const MethodInfo *method)
{
  if ( (byte_4CC86B4 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CC86B4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           rank,
           (const MethodInfo_3149294 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *FriendshipServantEntity__CreatePrimaryKey(FriendshipServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return FriendshipServantEntity__CreatePK(this->fields.svtId, this->fields.rank, v2);
}