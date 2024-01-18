void __fastcall ServantLvDetailEntity___ctor(ServantLvDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418B24A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418B24A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLvDetailEntity__CreatePK(int32_t rarity, int32_t lv, const MethodInfo *method)
{
  if ( (byte_418B249 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_418B249 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           lv,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantLvDetailEntity__CreatePrimaryKey(
        ServantLvDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantLvDetailEntity__CreatePK(this->fields.rarity, this->fields.lv, v2);
}