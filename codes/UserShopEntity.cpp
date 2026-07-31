void UserShopEntity___ctor(UserShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59397A3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59397A3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


void UserShopEntity___ctor_50204528(UserShopEntity_o *this, int64_t userId, int32_t shopId, const MethodInfo *method)
{
  if ( (byte_59397A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59397A4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_59397A2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_59397A2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           shopId,
           (const MethodInfo_3821070 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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