void __fastcall IndividualityPolicyEntity___ctor(IndividualityPolicyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE8CD & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_int___ctor__, method);
    byte_4BFE8CD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3278C9C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall IndividualityPolicyEntity__CreatePrimaryKey(
        IndividualityPolicyEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}