void ShopAddEntity___ctor(ShopAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59391EC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59391EC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ShopAddEntity__CreatePK(
        int32_t shopId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  if ( (byte_59391EB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_59391EB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           shopId,
           priority,
           overwriteType,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ShopAddEntity__CreatePrimaryKey(ShopAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ShopAddEntity__CreatePK(this->fields.shopId, this->fields.priority, this->fields.overwriteType, v2);
}