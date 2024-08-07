void __fastcall ServantFlagEntity___ctor(ServantFlagEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF22B & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF22B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantFlagEntity__CreatePK(int32_t svtId, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_49FF22A & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&flagId);
    byte_49FF22A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           flagId,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantFlagEntity__CreatePrimaryKey(ServantFlagEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantFlagEntity__CreatePK(this->fields.svtId, this->fields.flagId, v2);
}