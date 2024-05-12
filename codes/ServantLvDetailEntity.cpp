void __fastcall ServantLvDetailEntity___ctor(ServantLvDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438F22E & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438F22E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantLvDetailEntity__CreatePK(int32_t rarity, int32_t lv, const MethodInfo *method)
{
  if ( (byte_438F22D & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438F22D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           lv,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantLvDetailEntity__CreatePrimaryKey(
        ServantLvDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantLvDetailEntity__CreatePK(this->fields.rarity, this->fields.lv, v2);
}