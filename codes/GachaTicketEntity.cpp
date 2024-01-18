void __fastcall GachaTicketEntity___ctor(GachaTicketEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418B017 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418B017 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaTicketEntity__CreatePK(
        int32_t gachaId,
        int32_t ticketItemId,
        const MethodInfo *method)
{
  if ( (byte_418B016 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&ticketItemId);
    byte_418B016 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           ticketItemId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GachaTicketEntity__CreatePrimaryKey(GachaTicketEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaTicketEntity__CreatePK(this->fields.gachaId, this->fields.ticketItemId, v2);
}