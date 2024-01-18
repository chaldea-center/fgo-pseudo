void __fastcall RestrictionSlotEntity___ctor(RestrictionSlotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418BB74 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418BB74 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall RestrictionSlotEntity__CreatePK(
        int32_t id,
        int32_t slotNo,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_418BB73 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&slotNo);
    byte_418BB73 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           slotNo,
           idx,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall RestrictionSlotEntity__CreatePrimaryKey(
        RestrictionSlotEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return RestrictionSlotEntity__CreatePK(this->fields.id, this->fields.slotNo, this->fields.idx, v2);
}