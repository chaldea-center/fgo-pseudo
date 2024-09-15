void __fastcall PrivilegeEntity___ctor(PrivilegeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E35B & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_int___ctor__, method);
    byte_4A2E35B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30FF580 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall PrivilegeEntity__CreatePrimaryKey(PrivilegeEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}