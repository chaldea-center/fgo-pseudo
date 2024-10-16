void __fastcall CombineQpEntity___ctor(CombineQpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5B25 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB5B25 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CombineQpEntity__CreatePK(int32_t rarity, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4AB5B24 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_4AB5B24 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           lv,
           (const MethodInfo_2EC2598 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineQpEntity__CreatePrimaryKey(CombineQpEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineQpEntity__CreatePK(this->fields.rarity, this->fields.lv, v2);
}