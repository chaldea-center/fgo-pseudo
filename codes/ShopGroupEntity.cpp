void __fastcall ShopGroupEntity___ctor(ShopGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418915C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418915C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ShopGroupEntity__CreatePK(int32_t shopId, int32_t groupId, const MethodInfo *method)
{
  if ( (byte_418915B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&groupId);
    byte_418915B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           shopId,
           groupId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ShopGroupEntity__CreatePrimaryKey(ShopGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ShopGroupEntity__CreatePK(this->fields.shopId, this->fields.groupId, v2);
}