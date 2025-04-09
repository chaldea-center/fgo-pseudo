void __fastcall PrivilegeEntity___ctor(PrivilegeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB2E9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BB2E9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall PrivilegeEntity__CreatePrimaryKey(PrivilegeEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall PrivilegeEntity__IsNoTimeLimit(PrivilegeEntity_o *this, const MethodInfo *method)
{
  return this->fields.validTime == 0;
}