void UserAccountLinkageEntity___ctor(UserAccountLinkageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27FFD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_long___ctor__);
    byte_4C27FFD = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_33858FC *)Method_DataEntityBase_long___ctor__);
}


int64_t UserAccountLinkageEntity__CreatePrimaryKey(UserAccountLinkageEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


int32_t UserAccountLinkageEntity__getLinkageType(UserAccountLinkageEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


int64_t UserAccountLinkageEntity__getLinkedAt(UserAccountLinkageEntity_o *this, const MethodInfo *method)
{
  return this->fields.linkedAt;
}


int64_t UserAccountLinkageEntity__getUserId(UserAccountLinkageEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}