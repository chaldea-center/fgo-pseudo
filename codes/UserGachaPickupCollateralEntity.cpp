void __fastcall UserGachaPickupCollateralEntity___ctor(
        UserGachaPickupCollateralEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16F31 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16F31 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserGachaPickupCollateralEntity__CreatePK(
        int64_t userId,
        int32_t gachaPickupCollateralGroupId,
        int32_t type,
        int32_t rarity,
        const MethodInfo *method)
{
  if ( (byte_4B16F30 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataEntityBase_CreateMultiplePK_long__int__int__int___,
      *(_QWORD *)&gachaPickupCollateralGroupId,
      *(_QWORD *)&type);
    byte_4B16F30 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int__int_(
           userId,
           gachaPickupCollateralGroupId,
           type,
           rarity,
           (const MethodInfo_2F1193C *)Method_DataEntityBase_CreateMultiplePK_long__int__int__int___);
}


System_String_o *__fastcall UserGachaPickupCollateralEntity__CreatePrimaryKey(
        UserGachaPickupCollateralEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return UserGachaPickupCollateralEntity__CreatePK(
           this->fields.userId,
           this->fields.gachaPickupCollateralGroupId,
           this->fields.type,
           this->fields.rarity,
           v2);
}