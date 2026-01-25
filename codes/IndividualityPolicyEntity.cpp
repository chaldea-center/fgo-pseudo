void IndividualityPolicyEntity___ctor(IndividualityPolicyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF8F6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEF8F6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
}


int32_t IndividualityPolicyEntity__CreatePrimaryKey(IndividualityPolicyEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}