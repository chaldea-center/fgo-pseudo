void TotalLoginEntity___ctor(TotalLoginEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6FBA & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB6FBA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *TotalLoginEntity__CreatePK(int32_t eventId, int32_t day, const MethodInfo *method)
{
  if ( (byte_4CB6FB9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CB6FB9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           day,
           (const MethodInfo_31394F0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *TotalLoginEntity__CreatePrimaryKey(TotalLoginEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TotalLoginEntity__CreatePK(this->fields.eventId, this->fields.day, v2);
}