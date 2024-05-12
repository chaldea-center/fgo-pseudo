void __fastcall UserAccountLinkageEntity___ctor(UserAccountLinkageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438CAA4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_long___ctor__);
    byte_438CAA4 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_21FB798 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserAccountLinkageEntity__CreatePrimaryKey(
        UserAccountLinkageEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.userId;
}


int32_t __fastcall UserAccountLinkageEntity__getLinkageType(UserAccountLinkageEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


int64_t __fastcall UserAccountLinkageEntity__getLinkedAt(UserAccountLinkageEntity_o *this, const MethodInfo *method)
{
  return this->fields.linkedAt;
}


int64_t __fastcall UserAccountLinkageEntity__getUserId(UserAccountLinkageEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}