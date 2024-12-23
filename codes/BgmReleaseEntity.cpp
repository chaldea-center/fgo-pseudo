void __fastcall BgmReleaseEntity___ctor(BgmReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66862 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B66862 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BgmReleaseEntity__CreatePK(int32_t bgmId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4B66861 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_4B66861 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           bgmId,
           id,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall BgmReleaseEntity__CreatePrimaryKey(BgmReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BgmReleaseEntity__CreatePK(this->fields.bgmId, this->fields.id, v2);
}