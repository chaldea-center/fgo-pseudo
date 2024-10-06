void __fastcall GachaPickupCollateralGroupEntity___ctor(
        GachaPickupCollateralGroupEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A70F24 & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_string___ctor__, method);
    byte_4A70F24 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_312C420 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaPickupCollateralGroupEntity__CreatePK(
        int32_t id,
        int32_t gachaId,
        const MethodInfo *method)
{
  if ( (byte_4A70F23 & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&gachaId);
    byte_4A70F23 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           gachaId,
           (const MethodInfo_2E8C440 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GachaPickupCollateralGroupEntity__CreatePrimaryKey(
        GachaPickupCollateralGroupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaPickupCollateralGroupEntity__CreatePK(this->fields.id, this->fields.gachaId, v2);
}