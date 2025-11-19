void BgmReleaseEntity___ctor(BgmReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F32 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB5F32 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *BgmReleaseEntity__CreatePK(int32_t bgmId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4CB5F31 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CB5F31 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           bgmId,
           id,
           (const MethodInfo_31394F0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *BgmReleaseEntity__CreatePrimaryKey(BgmReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BgmReleaseEntity__CreatePK(this->fields.bgmId, this->fields.id, v2);
}