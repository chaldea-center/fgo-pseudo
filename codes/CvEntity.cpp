void CvEntity___ctor(CvEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59384C0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_59384C0 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t CvEntity__CreatePrimaryKey(CvEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}