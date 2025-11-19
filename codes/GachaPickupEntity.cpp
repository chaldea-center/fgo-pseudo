void GachaPickupEntity___ctor(GachaPickupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB759B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB759B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaPickupEntity__CreatePK(int32_t id, int32_t type, int32_t giftId, const MethodInfo *method)
{
  if ( (byte_4CB759A & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CB759A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           giftId,
           (const MethodInfo_3139980 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *GachaPickupEntity__CreatePrimaryKey(GachaPickupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaPickupEntity__CreatePK(this->fields.id, this->fields.type, this->fields.giftId, v2);
}