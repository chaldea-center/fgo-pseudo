void ShopGroupEntity___ctor(ShopGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939242 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939242 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ShopGroupEntity__CreatePK(int32_t shopId, int32_t groupId, const MethodInfo *method)
{
  if ( (byte_5939241 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939241 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           shopId,
           groupId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ShopGroupEntity__CreatePrimaryKey(ShopGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ShopGroupEntity__CreatePK(this->fields.shopId, this->fields.groupId, v2);
}