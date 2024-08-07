void __fastcall EventTradeStoreEntity___ctor(EventTradeStoreEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FECDB & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FECDB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventTradeStoreEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_49FECDA & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_49FECDA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventTradeStoreEntity__CreatePrimaryKey(
        EventTradeStoreEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventTradeStoreEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}