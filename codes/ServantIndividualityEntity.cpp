void __fastcall ServantIndividualityEntity___ctor(ServantIndividualityEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4189FA6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4189FA6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantIndividualityEntity__CreatePK(int32_t svtId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4189FA5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4189FA5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           idx,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantIndividualityEntity__CreatePrimaryKey(
        ServantIndividualityEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantIndividualityEntity__CreatePK(this->fields.svtId, this->fields.idx, v2);
}