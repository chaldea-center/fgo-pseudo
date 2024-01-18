void __fastcall CombineTdEntity___ctor(CombineTdEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188069 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188069 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CombineTdEntity__CreatePK(int32_t id, int32_t treasureDeviceLv, const MethodInfo *method)
{
  if ( (byte_4188068 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&treasureDeviceLv);
    byte_4188068 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           treasureDeviceLv,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineTdEntity__CreatePrimaryKey(CombineTdEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineTdEntity__CreatePK(this->fields.id, this->fields.treasureDeviceLv, v2);
}