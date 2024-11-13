void __fastcall UserAccountLinkageEntity___ctor(UserAccountLinkageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16DBF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_long___ctor__, method, v2);
    byte_4B16DBF = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_31B2C88 *)Method_DataEntityBase_long___ctor__);
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