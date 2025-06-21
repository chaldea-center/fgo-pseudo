void __fastcall UserSvtFirstGetTimeEntity___ctor(UserSvtFirstGetTimeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D572 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_int___ctor__, method);
    byte_4B1D572 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32C591C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall UserSvtFirstGetTimeEntity__CreatePrimaryKey(
        UserSvtFirstGetTimeEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.svtId;
}