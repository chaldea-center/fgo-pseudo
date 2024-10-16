void __fastcall RestrictionMessageEntity___ctor(RestrictionMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6E3B & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_int___ctor__, method);
    byte_4AB6E3B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3163B90 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall RestrictionMessageEntity__CreatePrimaryKey(
        RestrictionMessageEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}