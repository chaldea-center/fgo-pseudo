void __fastcall EquipExpEntity___ctor(EquipExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438FABD & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438FABD = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EquipExpEntity__CreatePK(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_438FABC & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438FABC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           equipId,
           lv,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EquipExpEntity__CreatePrimaryKey(EquipExpEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EquipExpEntity__CreatePK(this->fields.equipId, this->fields.lv, v2);
}