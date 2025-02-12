void __fastcall GachaBaseCollateralEntity___ctor(GachaBaseCollateralEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5804 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB5804 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaBaseCollateralEntity__CreatePK(
        int32_t gachaId,
        int32_t type,
        int32_t giftId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4BB5803 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&type);
    byte_4BB5803 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           gachaId,
           type,
           giftId,
           idx,
           (const MethodInfo_2F8DFE0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall GachaBaseCollateralEntity__CreatePrimaryKey(
        GachaBaseCollateralEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return GachaBaseCollateralEntity__CreatePK(
           this->fields.gachaId,
           this->fields.type,
           this->fields.giftId,
           this->fields.idx,
           v2);
}