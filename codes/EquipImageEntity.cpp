void __fastcall EquipImageEntity___ctor(EquipImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FD06 & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_int___ctor__, method);
    byte_4A6FD06 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_312C3A8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EquipImageEntity__CreatePrimaryKey(EquipImageEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}