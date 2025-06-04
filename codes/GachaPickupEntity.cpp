void __fastcall GachaPickupEntity___ctor(GachaPickupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B0325A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B0325A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaPickupEntity__CreatePK(
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  if ( (byte_4B03259 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_4B03259 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           giftId,
           (const MethodInfo_300047C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall GachaPickupEntity__CreatePrimaryKey(GachaPickupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaPickupEntity__CreatePK(this->fields.id, this->fields.type, this->fields.giftId, v2);
}