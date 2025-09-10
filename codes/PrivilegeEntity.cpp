void PrivilegeEntity___ctor(PrivilegeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27881 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C27881 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t PrivilegeEntity__CreatePrimaryKey(PrivilegeEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool PrivilegeEntity__IsNoTimeLimit(PrivilegeEntity_o *this, const MethodInfo *method)
{
  return this->fields.validTime == 0;
}