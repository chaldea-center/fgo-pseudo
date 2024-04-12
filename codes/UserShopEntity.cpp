void __fastcall UserShopEntity___ctor(UserShopEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B5E49 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B5E49 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserShopEntity___ctor_35330856(
        UserShopEntity_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  if ( (byte_42B5E4A & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B5E4A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.shopId = shopId;
  *(int64_t *)((char *)&this->fields.flag + 4) = 0LL;
  *(_QWORD *)&this->fields.num = 0LL;
  HIDWORD(this->fields.updatedAt) = 0;
}


bool __fastcall UserShopEntity__CheckFlag(UserShopEntity_o *this, int32_t userShopFlag, const MethodInfo *method)
{
  return (this->fields.flag & userShopFlag) != 0;
}


bool __fastcall UserShopEntity__CheckFlagKind(UserShopEntity_o *this, int32_t flagKind, const MethodInfo *method)
{
  return (this->fields.flag & (1 << flagKind)) != 0;
}


System_String_o *__fastcall UserShopEntity__CreatePK(int64_t userId, int32_t shopId, const MethodInfo *method)
{
  if ( (byte_42B5E48 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_42B5E48 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           shopId,
           (const MethodInfo_1A4E080 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserShopEntity__CreatePrimaryKey(UserShopEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserShopEntity__CreatePK(this->fields.userId, this->fields.shopId, v2);
}


bool __fastcall UserShopEntity__get_IsReceivedShopItem(UserShopEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool __fastcall UserShopEntity__get_IsReturnRarePriShop(UserShopEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 4) & 1;
}