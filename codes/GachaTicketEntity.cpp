void __fastcall GachaTicketEntity___ctor(GachaTicketEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B41A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B41A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall GachaTicketEntity__CreatePK(
        int32_t gachaId,
        int32_t ticketItemId,
        const MethodInfo *method)
{
  if ( (byte_4A5B419 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B419 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           ticketItemId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GachaTicketEntity__CreatePrimaryKey(GachaTicketEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaTicketEntity__CreatePK(this->fields.gachaId, this->fields.ticketItemId, v2);
}