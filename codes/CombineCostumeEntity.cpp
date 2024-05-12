void __fastcall CombineCostumeEntity___ctor(CombineCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438B1C9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438B1C9 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CombineCostumeEntity__CreatePK(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  if ( (byte_438B1C8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438B1C8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           costumeId,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineCostumeEntity__CreatePrimaryKey(
        CombineCostumeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineCostumeEntity__CreatePK(this->fields.svtId, this->fields.costumeId, v2);
}