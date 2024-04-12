void __fastcall ShopGroupEntity___ctor(ShopGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1A49 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B1A49 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ShopGroupEntity__CreatePK(int32_t shopId, int32_t groupId, const MethodInfo *method)
{
  if ( (byte_42B1A48 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B1A48 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           shopId,
           groupId,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ShopGroupEntity__CreatePrimaryKey(ShopGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ShopGroupEntity__CreatePK(this->fields.shopId, this->fields.groupId, v2);
}