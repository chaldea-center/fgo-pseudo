void ChaldeaGatePickupEntity___ctor(ChaldeaGatePickupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E0477C & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_int___ctor__);
    byte_4E0477C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_34E6B24 *)Method_DataEntityBase_int___ctor__);
}


int32_t ChaldeaGatePickupEntity__CreatePrimaryKey(ChaldeaGatePickupEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}