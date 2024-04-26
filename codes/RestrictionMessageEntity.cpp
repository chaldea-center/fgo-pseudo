void __fastcall RestrictionMessageEntity___ctor(RestrictionMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4354324 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_int___ctor__);
    byte_4354324 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21C02EC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall RestrictionMessageEntity__CreatePrimaryKey(
        RestrictionMessageEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}