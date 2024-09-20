void __fastcall BgmReleaseEntity___ctor(BgmReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AE17 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5AE17 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BgmReleaseEntity__CreatePK(int32_t bgmId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4A5AE16 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5AE16 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           bgmId,
           id,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BgmReleaseEntity__CreatePrimaryKey(BgmReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BgmReleaseEntity__CreatePK(this->fields.bgmId, this->fields.id, v2);
}