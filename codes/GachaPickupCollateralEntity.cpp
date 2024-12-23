void __fastcall GachaPickupCollateralEntity___ctor(GachaPickupCollateralEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67CDC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B67CDC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaPickupCollateralEntity__CreatePK(
        int32_t gachaPickupCollateralGroupId,
        int32_t type,
        int32_t rarity,
        const MethodInfo *method)
{
  if ( (byte_4B67CDB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_4B67CDB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaPickupCollateralGroupId,
           type,
           rarity,
           (const MethodInfo_2F577C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall GachaPickupCollateralEntity__CreatePrimaryKey(
        GachaPickupCollateralEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaPickupCollateralEntity__CreatePK(
           this->fields.gachaPickupCollateralGroupId,
           this->fields.type,
           this->fields.rarity,
           v2);
}