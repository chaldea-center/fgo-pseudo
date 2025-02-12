void __fastcall SelectBonusEntity___ctor(SelectBonusEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8C18 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC8C18 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SelectBonusEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4BC8C17 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4BC8C17 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_2F9D6B4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SelectBonusEntity__CreatePrimaryKey(SelectBonusEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SelectBonusEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}