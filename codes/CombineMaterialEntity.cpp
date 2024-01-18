void __fastcall CombineMaterialEntity___ctor(CombineMaterialEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418620F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418620F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CombineMaterialEntity__CreatePK(int32_t id, int32_t lv, const MethodInfo *method)
{
  if ( (byte_418620E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_418620E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           lv,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineMaterialEntity__CreatePrimaryKey(
        CombineMaterialEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineMaterialEntity__CreatePK(this->fields.id, this->fields.lv, v2);
}