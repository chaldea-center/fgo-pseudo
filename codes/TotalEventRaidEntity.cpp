void __fastcall TotalEventRaidEntity___ctor(TotalEventRaidEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D5ED & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438D5ED = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall TotalEventRaidEntity__CreatePK(int32_t eventId, int32_t day, const MethodInfo *method)
{
  if ( (byte_438D5EC & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438D5EC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           day,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall TotalEventRaidEntity__CreatePrimaryKey(
        TotalEventRaidEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return TotalEventRaidEntity__CreatePK(this->fields.eventId, this->fields.day, v2);
}