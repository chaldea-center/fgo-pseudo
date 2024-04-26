void __fastcall CvEntity___ctor(CvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_43530D1 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_int___ctor__);
    byte_43530D1 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21C02EC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall CvEntity__CreatePrimaryKey(CvEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}