void GachaAdjustAddEntity___ctor(GachaAdjustAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939A86 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939A86 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaAdjustAddEntity__CreatePK(int32_t id, int32_t type, int32_t giftId, const MethodInfo *method)
{
  if ( (byte_5939A85 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5939A85 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           giftId,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *GachaAdjustAddEntity__CreatePrimaryKey(GachaAdjustAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaAdjustAddEntity__CreatePK(this->fields.id, this->fields.type, this->fields.giftId, v2);
}