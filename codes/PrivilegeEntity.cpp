void __fastcall PrivilegeEntity___ctor(PrivilegeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C223BF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_int___ctor__, method);
    byte_4C223BF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3298964 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall PrivilegeEntity__CreatePrimaryKey(PrivilegeEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall PrivilegeEntity__IsNoTimeLimit(PrivilegeEntity_o *this, const MethodInfo *method)
{
  return this->fields.validTime == 0;
}