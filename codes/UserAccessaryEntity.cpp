void UserAccessaryEntity___ctor(UserAccessaryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C57AAD & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_string___ctor__);
    byte_4C57AAD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33B0AEC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserAccessaryEntity__CreatePK(int64_t userId, int32_t accessaryId, const MethodInfo *method)
{
  if ( (byte_4C57AAC & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4C57AAC = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           accessaryId,
           (const MethodInfo_30F7D00 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserAccessaryEntity__CreatePrimaryKey(UserAccessaryEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserAccessaryEntity__CreatePK(this->fields.userId, this->fields.accessaryId, v2);
}