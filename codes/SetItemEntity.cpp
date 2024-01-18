void __fastcall SetItemEntity___ctor(SetItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418B946 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418B946 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SetItemEntity__CreatePK(
        int32_t id,
        int32_t purchaseType,
        int32_t targetId,
        const MethodInfo *method)
{
  if ( (byte_418B945 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&purchaseType);
    byte_418B945 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           purchaseType,
           targetId,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall SetItemEntity__CreatePrimaryKey(SetItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return SetItemEntity__CreatePK(this->fields.id, this->fields.purchaseType, this->fields.targetId, v2);
}