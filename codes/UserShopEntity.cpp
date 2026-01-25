void UserShopEntity___ctor(UserShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF6ED & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF6ED = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


void UserShopEntity___ctor_43787684(UserShopEntity_o *this, int64_t userId, int32_t shopId, const MethodInfo *method)
{
  if ( (byte_4CEF6EE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF6EE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.shopId = shopId;
  this->fields.updatedAt = 0;
  *(int64_t *)((char *)&this->fields.flag + 4) = 0;
  *(_QWORD *)&this->fields.num = 0;
}


bool UserShopEntity__CheckFlag(UserShopEntity_o *this, int32_t userShopFlag, const MethodInfo *method)
{
  return (this->fields.flag & userShopFlag) != 0;
}


bool UserShopEntity__CheckFlagKind(UserShopEntity_o *this, int32_t flagKind, const MethodInfo *method)
{
  return (this->fields.flag & (1 << flagKind)) != 0;
}


System_String_o *UserShopEntity__CreatePK(int64_t userId, int32_t shopId, const MethodInfo *method)
{
  if ( (byte_4CEF6EC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4CEF6EC = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           shopId,
           (const MethodInfo_316E684 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserShopEntity__CreatePrimaryKey(UserShopEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserShopEntity__CreatePK(this->fields.userId, this->fields.shopId, v2);
}


bool UserShopEntity__get_IsReceivedShopItem(UserShopEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool UserShopEntity__get_IsReturnRarePriShop(UserShopEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 4) & 1;
}