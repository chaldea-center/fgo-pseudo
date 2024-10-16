void __fastcall UserExchangeSvtEntity___ctor(UserExchangeSvtEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6A3C & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_int___ctor__, method);
    byte_4AB6A3C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3163B90 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall UserExchangeSvtEntity__CreatePrimaryKey(UserExchangeSvtEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}