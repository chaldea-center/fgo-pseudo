void __fastcall SetItemEntity___ctor(SetItemEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBA53 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EBA53 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall SetItemEntity__CreatePK(
        int32_t id,
        int32_t purchaseType,
        int32_t targetId,
        const MethodInfo *method)
{
  if ( (byte_42EBA52 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, purchaseType, targetId, method);
    byte_42EBA52 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           purchaseType,
           targetId,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall SetItemEntity__CreatePrimaryKey(SetItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return SetItemEntity__CreatePK(this->fields.id, this->fields.purchaseType, this->fields.targetId, v2);
}