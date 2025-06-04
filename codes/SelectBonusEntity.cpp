void __fastcall SelectBonusEntity___ctor(SelectBonusEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B03290 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B03290 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SelectBonusEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4B0328F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4B0328F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_2FFFFEC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SelectBonusEntity__CreatePrimaryKey(SelectBonusEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SelectBonusEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}