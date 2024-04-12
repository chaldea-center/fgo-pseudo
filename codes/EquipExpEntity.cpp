void __fastcall EquipExpEntity___ctor(EquipExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B4697 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B4697 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EquipExpEntity__CreatePK(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_42B4696 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B4696 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           equipId,
           lv,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EquipExpEntity__CreatePrimaryKey(EquipExpEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EquipExpEntity__CreatePK(this->fields.equipId, this->fields.lv, v2);
}