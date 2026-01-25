void GachaTicketEntity___ctor(GachaTicketEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEA6C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEEA6C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaTicketEntity__CreatePK(int32_t gachaId, int32_t ticketItemId, const MethodInfo *method)
{
  if ( (byte_4CEEA6B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEEA6B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           ticketItemId,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *GachaTicketEntity__CreatePrimaryKey(GachaTicketEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaTicketEntity__CreatePK(this->fields.gachaId, this->fields.ticketItemId, v2);
}