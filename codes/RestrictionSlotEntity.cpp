void RestrictionSlotEntity___ctor(RestrictionSlotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938EEF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938EEF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *RestrictionSlotEntity__CreatePK(int32_t id, int32_t slotNo, int32_t idx, const MethodInfo *method)
{
  if ( (byte_5938EEE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5938EEE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           slotNo,
           idx,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *RestrictionSlotEntity__CreatePrimaryKey(RestrictionSlotEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return RestrictionSlotEntity__CreatePK(this->fields.id, this->fields.slotNo, this->fields.idx, v2);
}