void __fastcall RestrictionSlotEntity___ctor(RestrictionSlotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B28D0 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B28D0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall RestrictionSlotEntity__CreatePK(
        int32_t id,
        int32_t slotNo,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_42B28CF & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B28CF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           slotNo,
           idx,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall RestrictionSlotEntity__CreatePrimaryKey(
        RestrictionSlotEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return RestrictionSlotEntity__CreatePK(this->fields.id, this->fields.slotNo, this->fields.idx, v2);
}