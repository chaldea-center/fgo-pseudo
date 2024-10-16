void __fastcall CombineMaterialEntity___ctor(CombineMaterialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5B20 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB5B20 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CombineMaterialEntity__CreatePK(int32_t id, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4AB5B1F & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_4AB5B1F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           lv,
           (const MethodInfo_2EC2598 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineMaterialEntity__CreatePrimaryKey(
        CombineMaterialEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineMaterialEntity__CreatePK(this->fields.id, this->fields.lv, v2);
}