void __fastcall RestrictionMessageEntity___ctor(RestrictionMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4218702 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_4218702 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall RestrictionMessageEntity__CreatePrimaryKey(
        RestrictionMessageEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}