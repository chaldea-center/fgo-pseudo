void __fastcall BgmReleaseEntity___ctor(BgmReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41875CB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41875CB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BgmReleaseEntity__CreatePK(int32_t bgmId, int32_t id, const MethodInfo *method)
{
  if ( (byte_41875CA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_41875CA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           bgmId,
           id,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BgmReleaseEntity__CreatePrimaryKey(BgmReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BgmReleaseEntity__CreatePK(this->fields.bgmId, this->fields.id, v2);
}