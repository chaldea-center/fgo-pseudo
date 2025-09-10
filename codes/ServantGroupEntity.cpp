void ServantGroupEntity___ctor(ServantGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27BFB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27BFB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantGroupEntity__CreatePK(int32_t id, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4C27BFA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C27BFA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           svtId,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantGroupEntity__CreatePrimaryKey(ServantGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantGroupEntity__CreatePK(this->fields.id, this->fields.svtId, v2);
}


int32_t ServantGroupEntity__getServantGroupId(ServantGroupEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t ServantGroupEntity__getServantId(ServantGroupEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}