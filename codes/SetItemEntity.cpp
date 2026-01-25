void SetItemEntity___ctor(SetItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF15E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF15E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *SetItemEntity__CreatePK(int32_t id, int32_t purchaseType, int32_t targetId, const MethodInfo *method)
{
  if ( (byte_4CEF15D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEF15D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           purchaseType,
           targetId,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *SetItemEntity__CreatePrimaryKey(SetItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return SetItemEntity__CreatePK(this->fields.id, this->fields.purchaseType, this->fields.targetId, v2);
}