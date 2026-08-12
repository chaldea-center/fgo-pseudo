void UserShopDailyEntity___ctor(UserShopDailyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597195E & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_597195E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserShopDailyEntity__CreatePK(int64_t userId, int32_t shopId, const MethodInfo *method)
{
  if ( (byte_597195D & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_597195D = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           shopId,
           (const MethodInfo_3854538 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserShopDailyEntity__CreatePrimaryKey(UserShopDailyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserShopDailyEntity__CreatePK(this->fields.userId, this->fields.shopId, v2);
}