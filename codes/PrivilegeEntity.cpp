void PrivilegeEntity___ctor(PrivilegeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938CA8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938CA8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t PrivilegeEntity__CreatePrimaryKey(PrivilegeEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool PrivilegeEntity__IsNoTimeLimit(PrivilegeEntity_o *this, const MethodInfo *method)
{
  return this->fields.validTime == 0;
}