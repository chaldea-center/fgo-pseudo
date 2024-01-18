void __fastcall ServantFlagReleaseEntity___ctor(ServantFlagReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189F77 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4189F77 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantFlagReleaseEntity__CreatePK(
        int32_t svtId,
        int32_t flagId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4189F76 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&flagId);
    byte_4189F76 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           flagId,
           idx,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantFlagReleaseEntity__CreatePrimaryKey(
        ServantFlagReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantFlagReleaseEntity__CreatePK(this->fields.svtId, this->fields.flagId, this->fields.idx, v2);
}