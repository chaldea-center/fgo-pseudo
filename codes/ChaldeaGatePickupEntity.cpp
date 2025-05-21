void __fastcall ChaldeaGatePickupEntity___ctor(ChaldeaGatePickupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B447CF & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_int___ctor__, method);
    byte_4B447CF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32DF958 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ChaldeaGatePickupEntity__CreatePrimaryKey(ChaldeaGatePickupEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}