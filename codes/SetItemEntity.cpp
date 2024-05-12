void __fastcall SetItemEntity___ctor(SetItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438DA4F & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438DA4F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall SetItemEntity__CreatePK(
        int32_t id,
        int32_t purchaseType,
        int32_t targetId,
        const MethodInfo *method)
{
  if ( (byte_438DA4E & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438DA4E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           purchaseType,
           targetId,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall SetItemEntity__CreatePrimaryKey(SetItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return SetItemEntity__CreatePK(this->fields.id, this->fields.purchaseType, this->fields.targetId, v2);
}