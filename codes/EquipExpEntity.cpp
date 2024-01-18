void __fastcall EquipExpEntity___ctor(EquipExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418BDB8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418BDB8 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EquipExpEntity__CreatePK(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  if ( (byte_418BDB7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_418BDB7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           equipId,
           lv,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EquipExpEntity__CreatePrimaryKey(EquipExpEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EquipExpEntity__CreatePK(this->fields.equipId, this->fields.lv, v2);
}