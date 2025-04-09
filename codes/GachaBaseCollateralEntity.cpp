void __fastcall GachaBaseCollateralEntity___ctor(GachaBaseCollateralEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BC015 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BC015 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaBaseCollateralEntity__CreatePK(
        int32_t gachaId,
        int32_t type,
        int32_t giftId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_49BC014 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&type);
    byte_49BC014 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           gachaId,
           type,
           giftId,
           idx,
           (const MethodInfo_2F005FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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